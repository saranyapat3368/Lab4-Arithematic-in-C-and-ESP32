```
## 🎓 ท้าทาย
ลองเพิ่ม:
1. ตรวจสอบ email format
2. ตรวจสอบเบอร์โทรศัพท์
3. ตรวจสอบรหัสประจำตัวประชาชน
4. สร้างระบบ retry mechanism

## ✅ ผลลัพธ์ที่คาดหวัง
❌ ข้อผิดพลาด: ไม่สามารถหารด้วยศูนย์ได้
💡 แนะนำ: ตรวจสอบจำนวนลูกค้าก่อนแบ่งพิซซ่า

✅ ข้อมูลถูกต้อง: คำนวณสำเร็จ
📊 ผลลัพธ์: 12 ÷ 4 = 3 ชิ้นต่อคน
```


```
I (15708) ERROR_HANDLING: 
👤 === ตรวจสอบข้อมูลผู้ใช้ ===
I (15708) ERROR_HANDLING: 
📧 ตรวจสอบ Email: example@domain.com
I (15708) ERROR_HANDLING: ✅ Email ถูกต้อง: example@domain.com
I (17208) ERROR_HANDLING: 
📧 ตรวจสอบ Email: wrong-email
E (17208) ERROR_HANDLING: ❌ ข้อผิดพลาด: Email 'wrong-email' ไม่ถูกต้อง!
I (17208) ERROR_HANDLING: 💡 แนะนำ: ใช้รูปแบบ name@example.com
I (18708) ERROR_HANDLING: 
📱 ตรวจสอบเบอร์โทร: 0812345678
I (18708) ERROR_HANDLING: ✅ เบอร์โทรถูกต้อง: 0812345678
I (20208) ERROR_HANDLING: 
📱 ตรวจสอบเบอร์โทร: abc12345
E (20208) ERROR_HANDLING: ❌ ข้อผิดพลาด: เบอร์โทร 'abc12345' ไม่ถูกต้อง!
I (20208) ERROR_HANDLING: 💡 แนะนำ: ใช้ตัวเลข 10 หลัก เช่น 0812345678
I (21708) ERROR_HANDLING: 
🆔 ตรวจสอบบัตรประชาชน: 1101700203451
E (21708) ERROR_HANDLING: ❌ ข้อผิดพลาด: เลขบัตร '1101700203451' ไม่ผ่าน checksum!
I (23208) ERROR_HANDLING: 
🆔 ตรวจสอบบัตรประชาชน: 1234567890123
E (23208) ERROR_HANDLING: ❌ ข้อผิดพลาด: เลขบัตร '1234567890123' ไม่ผ่าน checksum!
I (26208) ERROR_HANDLING: 
🔄 === ทดสอบ Retry Mechanism ===
I (26208) ERROR_HANDLING: 
🔄 เริ่ม Retry mechanism (max 3 ครั้ง)
I (26208) ERROR_HANDLING: ✅ สำเร็จในการลองครั้งที่ 1
I (26208) ERROR_HANDLING: 📊 ผลลัพธ์สุดท้าย: ทำงานสำเร็จ! 🎉
I (29208) ERROR_HANDLING: 🎓 จบการทดสอบทั้งหมดแล้ว!
I (29208) main_task: Returned from app_main()
```
