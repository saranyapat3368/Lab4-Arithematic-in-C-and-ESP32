```
### 📝 แบบฝึกหัดที่ 1: เปลี่ยนจำนวนคุกกี้
// หาบรรทัดนี้ในโค้ด:
int total_cookies = 20;    // คุกกี้ทั้งหมด
int friends = 4;           // จำนวนเพื่อน

// ลองเปลี่ยนเป็น:
int total_cookies = 24;    // เพิ่มเป็น 24 ชิ้น
int friends = 6;           // เพิ่มเป็น 6 คน
```

```
I (17752) COOKIES_MATH: 🧮 ขั้นตอนการคิด:
I (17752) COOKIES_MATH:    24 ÷ 6 = 4 ชิ้นต่อคน
I (17752) COOKIES_MATH: ✅ คำตอบ:
I (17752) COOKIES_MATH:    แต่ละคนได้ 4 ชิ้น
I (17752) COOKIES_MATH:    แบ่งได้พอดี ไม่มีเหลือ
I (17752) COOKIES_MATH: 
I (17752) COOKIES_MATH: 🎨 คุกกี้ทั้งหมด:
🍪🍪🍪🍪🍪🍪🍪🍪🍪🍪🍪🍪🍪🍪🍪🍪🍪🍪🍪🍪🍪🍪🍪🍪 (24 ชิ้น)

   เพื่อนคนที่ 1: 🍪🍪🍪🍪 (4 ชิ้น)
   เพื่อนคนที่ 2: 🍪🍪🍪🍪 (4 ชิ้น)
   เพื่อนคนที่ 3: 🍪🍪🍪🍪 (4 ชิ้น)
   เพื่อนคนที่ 4: 🍪🍪🍪🍪 (4 ชิ้น)
   เพื่อนคนที่ 5: 🍪🍪🍪🍪 (4 ชิ้น)
   เพื่อนคนที่ 6: 🍪🍪🍪🍪 (4 ชิ้น)
I (17762) COOKIES_MATH: 
I (17762) COOKIES_MATH: 🔁 ตรวจสอบด้วยการคูณ:
I (17762) COOKIES_MATH:    4 × 6 + 0 = 24
I (17762) COOKIES_MATH: 
I (17762) COOKIES_MATH: 📚 สรุปสิ่งที่เรียนรู้:
I (17762) COOKIES_MATH:    ➗ การหาร: แบ่งให้เท่ากัน
I (17762) COOKIES_MATH:    %  โมดูลัส: ใช้หาเศษจากการหาร
I (17762) COOKIES_MATH:    ✖️  ความสัมพันธ์กับการคูณ
I (17762) COOKIES_MATH:    ❗ การตรวจสอบหารด้วยศูนย์
I (17762) COOKIES_MATH:
I (17762) COOKIES_MATH: 📝 แบบฝึกหัดที่ 1:
I (17762) COOKIES_MATH:    ลองเปลี่ยนค่า total_cookies และ number_of_friends
I (17762) COOKIES_MATH:    แล้วสังเกตว่าคำตอบเปลี่ยนแปลงอย่างไร
I (17772) COOKIES_MATH:
I (17772) COOKIES_MATH: 🎉 จบโปรแกรมแบ่งคุกกี้!
I (17772) main_task: Returned from app_main()
```


```
### 📝 แบบฝึกหัดที่ 2: เพิ่มการตรวจสอบหารลงตัว
เพิ่มการตรวจสอบว่าหารลงตัวไหม:

int cookies_per_person = total_cookies / friends;
int remaining_cookies = total_cookies % friends;

if (remaining_cookies == 0) {
    ESP_LOGI(TAG, "✅ หารลงตัว! ทุกคนได้เท่ากัน");
} else {
    ESP_LOGI(TAG, "⚠️ หารไม่ลงตัว! เหลือ %d ชิ้น", remaining_cookies);
}
```

```
I (20016) COOKIES_MATH: ✅ หารลงตัว! ทุกคนได้เท่ากัน
I (20016) COOKIES_MATH: 🧮 คำนวณ:
I (20016) COOKIES_MATH:    12 ÷ 4 = 3 ชิ้นต่อคน
I (20016) COOKIES_MATH:    เศษที่เหลือ = 0 ชิ้น
I (20016) COOKIES_MATH: 🎨 การแบ่งคุกกี้:
I (20016) COOKIES_MATH:    เพื่อนคนที่ 1: 
🍪🍪🍪 (3 ชิ้น)
I (20016) COOKIES_MATH:    เพื่อนคนที่ 2: 
🍪🍪🍪 (3 ชิ้น)
I (20016) COOKIES_MATH:    เพื่อนคนที่ 3: 
🍪🍪🍪 (3 ชิ้น)
I (20016) COOKIES_MATH:    เพื่อนคนที่ 4: 
🍪🍪🍪 (3 ชิ้น)
I (20026) COOKIES_MATH: 🔄 ความสัมพันธ์:
I (20026) COOKIES_MATH:    3 × 4 = 12
I (20026) COOKIES_MATH: 📚 จบการคำนวณคุกกี้!
I (20026) main_task: Returned from app_main()
```


```
### 📝 แบบฝึกหัดที่ 3: หาจำนวนเพื่อนที่เหมาะสม
ลองหาว่าคุกกี้ 30 ชิ้น จะแจกให้กี่คนได้หารลงตัว:
int cookies = 30;
ESP_LOGI(TAG, "🔍 คุกกี้ %d ชิ้น หารลงตัวกับ:", cookies);

for (int people = 1; people <= 10; people++) {
    if (cookies % people == 0) {
        ESP_LOGI(TAG, "   ✅ %d คน → คนละ %d ชิ้น", 
                 people, cookies / people);
    }
}
```

```
I (16875) COOKIES_MATH: ✅ หารลงตัว! ทุกคนได้เท่ากัน
I (16875) COOKIES_MATH: 🧮 ผลลัพธ์:
I (16875) COOKIES_MATH:    12 ÷ 4 = 3 ชิ้นต่อคน
I (16875) COOKIES_MATH:    เศษที่เหลือ = 0 ชิ้น
I (16875) COOKIES_MATH: 🎨 การแบ่งคุกกี้:
I (16875) COOKIES_MATH:    เพื่อนคนที่ 1:
🍪🍪🍪 (3 ชิ้น)
I (16875) COOKIES_MATH:    เพื่อนคนที่ 2:
🍪🍪🍪 (3 ชิ้น)
I (16875) COOKIES_MATH:    เพื่อนคนที่ 3:
🍪🍪🍪 (3 ชิ้น)
I (16875) COOKIES_MATH:    เพื่อนคนที่ 4:
🍪🍪🍪 (3 ชิ้น)
I (16875) COOKIES_MATH: 🔄 ความสัมพันธ์กับการคูณ:
I (16875) COOKIES_MATH:    3 × 4 = 12
I (16875) COOKIES_MATH: 
I (16875) COOKIES_MATH: 🧪 แบบฝึกหัดที่ 3: คุกกี้ 30 ชิ้น หารลงตัวกับ:
I (16875) COOKIES_MATH:    ✅ 1 คน → คนละ 30 ชิ้น
I (16875) COOKIES_MATH:    ✅ 2 คน → คนละ 15 ชิ้น
I (16875) COOKIES_MATH:    ✅ 3 คน → คนละ 10 ชิ้น
I (16875) COOKIES_MATH:    ✅ 5 คน → คนละ 6 ชิ้น
I (16875) COOKIES_MATH:    ✅ 6 คน → คนละ 5 ชิ้น
I (16875) COOKIES_MATH:    ✅ 10 คน → คนละ 3 ชิ้น
I (16875) COOKIES_MATH: 📚 จบการคำนวณคุกกี้!
I (16885) main_task: Returned from app_main()
```


