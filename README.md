# 🚨 SEGCOS – سیستم هوشمند قطع‌کن گاز با تشخیص لرزش و کنترل بلوتوثی 🔥

## 📢 معرفی پروژه

سیستم **SEGCOS** برای حفاظت از خونه و محل کار شما در برابر نشت گاز هنگام زلزله ساخته شده!
با استفاده از سنسور شتاب‌سنج MPU-6050، هر لرزش شدید رو می‌فهمه و سریع جریان گاز رو قطع می‌کنه.
همچنین، می‌تونید با گوشی و بلوتوث، خودتون دستی رله رو کنترل کنید! 📱⚡

---

## 🧰 سخت‌افزار مورد نیاز

* 🛠 برد Arduino (مثلا Arduino Uno)
* 🎛️ سنسور MPU-6050 (شتاب‌سنج و ژیروسکوپ)
* 🔌 ماژول رله (Relay Module)
* 📶 ماژول بلوتوث HC-05 یا HC-06
* 🔗 سیم‌ها و منبع تغذیه مناسب

---

## 🔌 اتصالات سخت‌افزاری

| قطعه         | پین اتصال Arduino  |
| ------------ | ------------------ |
| MPU-6050     | SDA → A4, SCL → A5 |
| ماژول رله    | پین دیجیتال 7      |
| ماژول بلوتوث | RX → 10, TX → 11   |

---

## ✨ ویژگی‌ها

* ⚡ تشخیص لرزش شدید با MPU-6050
* 🚫 قطع خودکار جریان گاز توسط رله
* 📲 کنترل دستی رله از طریق بلوتوث
* 💬 پیام هشدار در سریال مانیتور هنگام فعال شدن رله

---

## ⚙️ نصب و راه‌اندازی

1. سخت‌افزار رو طبق جدول وصل کن.
2. کد رو با Arduino IDE باز کن و آپلود کن.
3. کتابخونه‌های `MPU6050`، `Wire` و `SoftwareSerial` نصب باشه.
4. ماژول بلوتوث رو با گوشی جفت کن (پین معمول 1234 یا 0000).
5. با اپلیکیشن بلوتوث یا اپ اختصاصی، پیام‌های زیر رو بفرست:

   * `1` → رله روشن (قطع گاز)
   * `0` → رله خاموش (وصل گاز)

---

## 📱 اپلیکیشن اندروید

اپلیکیشن کنترل بلوتوث این پروژه با [**MIT AppInventor**](https://appinventor.mit.edu/) ساخته شده تا کار کردن با دستگاه خیلی راحت باشه! 👌

---

## 🛠️ نحوه کار برنامه

* سنسور MPU-6050 به طور مداوم لرزش‌ها رو بررسی می‌کنه.
* اگه لرزش شدید بود، رله فعال می‌شه و جریان گاز قطع می‌شه.
* پیام «Vibration detected! Relay ON» توی سریال مانیتور نشون داده می‌شه.
* کاربر می‌تونه از طریق بلوتوث یا سریال با ارسال `0` و `1` رله رو کنترل کنه.

---

## ⚠️ نکات مهم

* مقادیر حساسیت لرزش (threshold) قابل تنظیمه، بسته به محیط خودت.
* حتما ایمنی نصب رله و سیستم گاز رو رعایت کن.
* قبل از استفاده واقعی، سیستم رو تست کامل کن.

---

## 🚀 برنامه‌های آینده

* ساخت اپ موبایل با امکانات بیشتر
* ذخیره گزارش‌ها و ارسال هشدار به کاربر
* اتصال به سیستم‌های هوشمند خانه و هشدار زلزله

---
