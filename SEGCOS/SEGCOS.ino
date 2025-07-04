#include <MPU6050.h>
#include <Wire.h>
#include <SoftwareSerial.h>

MPU6050 mpu;
const int relayPin = 7; // پین متصل به رله
char command;
SoftwareSerial bluetooth(10, 11); // RX, TX pins

void setup() {
    Serial.begin(9600);  // ارتباط سریال برای بلوتوث
    Wire.begin();
    mpu.initialize();
    pinMode(relayPin, OUTPUT);
    digitalWrite(relayPin, HIGH); // در ابتدا رله خاموش باشد

    bluetooth.begin(9600); // Set the baud rate for Bluetooth communication

}

void loop() {
    int16_t ax, ay, az, gx, gy, gz;
    mpu.getMotion6(&ax, &ay, &az, &gx, &gy, &gz);

    // بررسی لرزش بر اساس شتاب ناگهانی
    if (abs(ax) > 15000 || abs(ay) > 15000 || abs(az) > 20000) {
        delay(2000);
        digitalWrite(relayPin, LOW); // روشن کردن رله در صورت تشخیص لرزش
        Serial.println("Vibration detected! Relay ON");
    }

    
    if (bluetooth.available()) {
       String message = bluetooth.readString(); // Read the message from Bluetooth

       if (message == "0") {
          digitalWrite(relayPin, HIGH);
          Serial.println("Relay OFF");
    }
    
       if (message == "1") {
          digitalWrite(relayPin, LOW);
          Serial.println("Relay ON");
    }

     if (Serial.available()) {
        command = Serial.read();
       if (command == '0') {  // اگر کاربر '0' بفرستد، رله خاموش شود
          digitalWrite(relayPin, HIGH);
          Serial.println("Relay OFF");
    }

       if (command == '1') {  // اگر کاربر '0' بفرستد، رله خاموش شود
          digitalWrite(relayPin, LOW);
          Serial.println("Relay ON");
    }

    delay(100);
 
 }
 }
}
