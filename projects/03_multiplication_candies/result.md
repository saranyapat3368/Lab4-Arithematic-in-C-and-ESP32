```
### 📝 แบบฝึกหัดที่ 1: เปลี่ยนจำนวนถุงลูกอม
// หาบรรทัดนี้ในโค้ด:
int candy_bags = 5;         // จำนวนถุง
int candies_per_bag = 6;    // ลูกอมต่อถุง

// ลองเปลี่ยนเป็น:
int candy_bags = 7;         // เพิ่มเป็น 7 ถุง
int candies_per_bag = 8;    // ลูกอมถุงละ 8 เม็ด
```


```
I (17807) CANDIES_MATH: 🧮 ขั้นตอนการคิด:
I (17807) CANDIES_MATH:    จำนวนถุง × ลูกอมต่อถุง
I (17807) CANDIES_MATH:    = 7 × 8
I (17807) CANDIES_MATH:    = 56 เม็ด
I (17807) CANDIES_MATH:
I (17807) CANDIES_MATH: ✅ คำตอบ:
I (17807) CANDIES_MATH:    มีลูกอมทั้งหมด 56 เม็ด
I (17807) CANDIES_MATH: 
I (17807) CANDIES_MATH: 🎨 ภาพประกอบ:
I (17807) CANDIES_MATH:    ถุงที่ 1: 🍬🍬🍬🍬🍬🍬 (8 เม็ด)
I (17807) CANDIES_MATH:    ถุงที่ 2: 🍬🍬🍬🍬🍬🍬 (8 เม็ด)
I (17807) CANDIES_MATH:    ถุงที่ 3: 🍬🍬🍬🍬🍬🍬 (8 เม็ด)
I (17807) CANDIES_MATH:    ถุงที่ 4: 🍬🍬🍬🍬🍬🍬 (8 เม็ด)
I (17807) CANDIES_MATH:    ถุงที่ 5: 🍬🍬🍬🍬🍬🍬 (8 เม็ด)
I (17807) CANDIES_MATH:    รวม:     56 เม็ด
I (17807) CANDIES_MATH: 
I (17807) CANDIES_MATH: 🔄 เปรียบเทียบกับการบวกซ้ำๆ:
I (17807) CANDIES_MATH:    การคูณ: 7 × 8 = 56
I (17807) CANDIES_MATH:    การบวกซ้ำๆ:
I (17807) CANDIES_MATH:                   8
I (17807) CANDIES_MATH:                 + 8
I (17807) CANDIES_MATH:                 + 8
I (17807) CANDIES_MATH:                 + 8
I (17807) CANDIES_MATH:                 + 8
I (17807) CANDIES_MATH:                 + 8
I (17807) CANDIES_MATH:                 + 8 = 56
I (17807) CANDIES_MATH:    ผลลัพธ์เหมือนกัน! การคูณคือการบวกซ้ำๆ
I (17807) CANDIES_MATH: 
I (17807) CANDIES_MATH: 📊 ตารางสูตรคูณ 8:
I (17817) CANDIES_MATH:    1 × 8 = 8
I (18117) CANDIES_MATH:    2 × 8 = 16
I (18417) CANDIES_MATH:    3 × 8 = 24
I (18717) CANDIES_MATH:    4 × 8 = 32
I (19017) CANDIES_MATH:    5 × 8 = 40
I (19317) CANDIES_MATH:    6 × 8 = 48
I (19617) CANDIES_MATH:    7 × 8 = 56
I (19917) CANDIES_MATH:    8 × 8 = 64
I (20217) CANDIES_MATH:    9 × 8 = 72
I (20517) CANDIES_MATH:    10 × 8 = 80
I (20817) CANDIES_MATH: 
I (20817) CANDIES_MATH: 💡 ตัวอย่างเพิ่มเติม:
I (20817) CANDIES_MATH:    ถ้ามีถุงลูกอม 3 ถุง ถุงละ 8 เม็ด
I (20817) CANDIES_MATH:    จะได้ลูกอม 3 × 8 = 24 เม็ด
I (20817) CANDIES_MATH: 
I (20817) CANDIES_MATH:    ถ้ามีถุงลูกอม 7 ถุง ถุงละ 4 เม็ด
I (20817) CANDIES_MATH:    จะได้ลูกอม 7 × 4 = 28 เม็ด
I (20817) CANDIES_MATH: 
I (20817) CANDIES_MATH: 🔄 เปรียบเทียบการดำเนินการ:
I (20817) CANDIES_MATH:    การบวก (+): เพิ่มจำนวน (เช่น ไข่ 4 + 2 = 6)
I (20817) CANDIES_MATH:    การลบ (-): ลดจำนวน (เช่น ของเล่น 8 - 3 = 5)
I (20817) CANDIES_MATH:    การคูณ (×): บวกซ้ำๆ (เช่น ลูกอม 5 × 6 = 30)
I (20817) CANDIES_MATH:
I (20817) CANDIES_MATH: 🎓 แนวคิดขั้นสูง:
I (20817) CANDIES_MATH:    1. การคูณมีคุณสมบัติการสับเปลี่ยน:
I (20817) CANDIES_MATH:       7 × 8 = 8 × 7 = 56
I (20817) CANDIES_MATH:    2. การคูณด้วย 0 จะได้ 0 เสมอ:
I (20817) CANDIES_MATH:       7 × 0 = 0 (ไม่มีถุงลูกอม)
I (20817) CANDIES_MATH:    3. การคูณด้วย 1 จะได้ตัวเลขเดิม:
I (20827) CANDIES_MATH:       8 × 1 = 8 (มีถุงเดียว)
I (20827) CANDIES_MATH: 
I (20827) CANDIES_MATH: 📚 สิ่งที่เรียนรู้:
I (20827) CANDIES_MATH:    1. การคูณเลข (Multiplication): a × b = c
I (20827) CANDIES_MATH:    2. การใช้ for loop สำหรับการทำซ้ำ
I (20827) CANDIES_MATH:    3. ความสัมพันธ์ระหว่างการคูณและการบวกซ้ำๆ
I (20827) CANDIES_MATH:    4. คุณสมบัติพิเศษของการคูณ
I (20827) CANDIES_MATH:    5. การแสดงผลแบบตาราง
I (20827) CANDIES_MATH:
I (20827) CANDIES_MATH: 🎉 จบโปรแกรมนับลูกอมในถุง!
I (20827) CANDIES_MATH: 📖 อ่านต่อในโปรเจคถัดไป: 04_division_cookies
I (22827) main_task: Returned from app_main()
```


```
### 📝 แบบฝึกหัดที่ 2: เพิ่มลูกอมหลายรส
เพิ่มลูกอมหลายรส:
int strawberry_bags = 3;    // ถุงรสสตรอเบอร์รี่
int orange_bags = 2;        // ถุงรสส้ม
int grape_bags = 4;         // ถุงรสองุ่น

int total_bags = strawberry_bags + orange_bags + grape_bags;
int total_candies = total_bags * candies_per_bag;

ESP_LOGI(TAG, "🍓 สตรอเบอร์รี่: %d ถุง = %d เม็ด", 
         strawberry_bags, strawberry_bags * candies_per_bag);
ESP_LOGI(TAG, "🍊 รสส้ม: %d ถุง = %d เม็ด", 
         orange_bags, orange_bags * candies_per_bag);
ESP_LOGI(TAG, "🍇 รสองุ่น: %d ถุง = %d เม็ด", 
         grape_bags, grape_bags * candies_per_bag);
```


```
I (19610) CANDIES_MATH: 🧮 ขั้นตอนการคิด:
I (19610) CANDIES_MATH:    จำนวนถุง × ลูกอมต่อถุง
I (19610) CANDIES_MATH:    = 9 × 8
I (19610) CANDIES_MATH:    = 72 เม็ด
I (19610) CANDIES_MATH:
I (19610) CANDIES_MATH: ✅ คำตอบ:
I (19610) CANDIES_MATH:    มีลูกอมทั้งหมด 72 เม็ด
I (19610) CANDIES_MATH: 
I (19610) CANDIES_MATH: 🎨 ภาพประกอบ:
I (19610) CANDIES_MATH:    ถุงที่ 1: 🍬🍬🍬🍬🍬🍬🍬🍬 (8 เม็ด)
I (19610) CANDIES_MATH:    ถุงที่ 2: 🍬🍬🍬🍬🍬🍬🍬🍬 (8 เม็ด)
I (19610) CANDIES_MATH:    ถุงที่ 3: 🍬🍬🍬🍬🍬🍬🍬🍬 (8 เม็ด)
I (19610) CANDIES_MATH:    ถุงที่ 4: 🍬🍬🍬🍬🍬🍬🍬🍬 (8 เม็ด)
I (19610) CANDIES_MATH:    ถุงที่ 5: 🍬🍬🍬🍬🍬🍬🍬🍬 (8 เม็ด)
I (19610) CANDIES_MATH:    ถุงที่ 6: 🍬🍬🍬🍬🍬🍬🍬🍬 (8 เม็ด)
I (19610) CANDIES_MATH:    ถุงที่ 7: 🍬🍬🍬🍬🍬🍬🍬🍬 (8 เม็ด)
I (19610) CANDIES_MATH:    ถุงที่ 8: 🍬🍬🍬🍬🍬🍬🍬🍬 (8 เม็ด)
I (19610) CANDIES_MATH:    ถุงที่ 9: 🍬🍬🍬🍬🍬🍬🍬🍬 (8 เม็ด)
I (19610) CANDIES_MATH:    รวมทั้งหมด: 72 เม็ด
I (19610) CANDIES_MATH: 
I (19610) CANDIES_MATH: 🔄 เปรียบเทียบกับการบวกซ้ำๆ:
I (19610) CANDIES_MATH:    การคูณ: 9 × 8 = 72
I (19610) CANDIES_MATH:    การบวกซ้ำๆ:
I (19610) CANDIES_MATH:                   8
I (19610) CANDIES_MATH:                 + 8
I (19610) CANDIES_MATH:                 + 8
I (19620) CANDIES_MATH:                 + 8
I (19620) CANDIES_MATH:                 + 8
I (19620) CANDIES_MATH:                 + 8
I (19620) CANDIES_MATH:                 + 8
I (19620) CANDIES_MATH:                 + 8
I (19620) CANDIES_MATH:                 + 8 = 72
I (19620) CANDIES_MATH:    ✅ ผลลัพธ์เหมือนกัน! การคูณคือการบวกซ้ำๆ
I (19620) CANDIES_MATH: 
I (19620) CANDIES_MATH: 📊 ตารางสูตรคูณ 8:
I (19620) CANDIES_MATH:    1 × 8 = 8
I (19920) CANDIES_MATH:    2 × 8 = 16
I (20220) CANDIES_MATH:    3 × 8 = 24
I (20520) CANDIES_MATH:    4 × 8 = 32
I (20820) CANDIES_MATH:    5 × 8 = 40
I (21120) CANDIES_MATH:    6 × 8 = 48
I (21420) CANDIES_MATH:    7 × 8 = 56
I (21720) CANDIES_MATH:    8 × 8 = 64
I (22020) CANDIES_MATH:    9 × 8 = 72
I (22320) CANDIES_MATH:    10 × 8 = 80
I (22620) CANDIES_MATH: 
I (22620) CANDIES_MATH: 💡 ตัวอย่างเพิ่มเติม:
I (22620) CANDIES_MATH:    ถ้ามีถุงลูกอม 3 ถุง ถุงละ 8 เม็ด
I (22620) CANDIES_MATH:    จะได้ลูกอม 3 × 8 = 24 เม็ด
I (22620) CANDIES_MATH: 
I (22620) CANDIES_MATH:    ถ้ามีถุงลูกอม 7 ถุง ถุงละ 4 เม็ด
I (22620) CANDIES_MATH:    จะได้ลูกอม 7 × 4 = 28 เม็ด
I (22620) CANDIES_MATH:
I (22620) CANDIES_MATH: 🔄 เปรียบเทียบการดำเนินการ:
I (22620) CANDIES_MATH:    การบวก (+): เพิ่มจำนวน (เช่น 4 + 2 = 6)
I (22620) CANDIES_MATH:    การลบ (-): ลดจำนวน (เช่น 8 - 3 = 5)
I (22620) CANDIES_MATH:    การคูณ (×): บวกซ้ำๆ (เช่น 5 × 6 = 30)
I (22620) CANDIES_MATH: 
I (22620) CANDIES_MATH: 🎓 แนวคิดขั้นสูง:
I (22620) CANDIES_MATH:    1. การคูณมีคุณสมบัติสลับที่ได้:
I (22620) CANDIES_MATH:       9 × 8 = 8 × 9 = 72
I (22620) CANDIES_MATH:    2. การคูณด้วย 0 จะได้ 0 เสมอ:
I (22620) CANDIES_MATH:       9 × 0 = 0
I (22630) CANDIES_MATH:    3. การคูณด้วย 1 จะได้ตัวเลขเดิม:
I (22630) CANDIES_MATH:       8 × 1 = 8
I (22630) CANDIES_MATH:
I (22630) CANDIES_MATH: 📚 สิ่งที่เรียนรู้:
I (22630) CANDIES_MATH:    1. การคูณเลข (Multiplication): a × b = c
I (22630) CANDIES_MATH:    2. การใช้ for-loop ในการทำซ้ำ
I (22630) CANDIES_MATH:    3. ความสัมพันธ์ระหว่างการคูณและการบวกซ้ำๆ
I (22630) CANDIES_MATH:    4. คุณสมบัติของการคูณ
I (22630) CANDIES_MATH:    5. การแสดงข้อมูลแบบตาราง
I (22630) CANDIES_MATH:
I (22630) CANDIES_MATH: 🎉 จบโปรแกรมนับลูกอมในถุง!
I (22630) CANDIES_MATH: 📖 อ่านต่อในโปรเจคถัดไป: 04_division_cookies
I (24630) main_task: Returned from app_main()
```


```
### 📝 แบบฝึกหัดที่ 3: สร้างตารางสูตรคูณ
เพิ่มการแสดงตารางสูตรคูณ:
ESP_LOGI(TAG, "📊 ตารางสูตรคูณของ %d:", candies_per_bag);
for (int i = 1; i <= 10; i++) {
    ESP_LOGI(TAG, "   %d x %d = %d", i, candies_per_bag, i * candies_per_bag);
}
```


```
I (19704) CANDIES_MATH: 🧮 ขั้นตอนการคิด:
I (19704) CANDIES_MATH:    จำนวนถุง × ลูกอมต่อถุง
I (19704) CANDIES_MATH:    = 9 × 8
I (19704) CANDIES_MATH:    = 72 เม็ด
I (19704) CANDIES_MATH: 
I (19704) CANDIES_MATH: ✅ คำตอบ:
I (19704) CANDIES_MATH:    มีลูกอมทั้งหมด 72 เม็ด
I (19704) CANDIES_MATH: 
I (19704) CANDIES_MATH: 🎨 ภาพประกอบ:
I (19704) CANDIES_MATH:    ถุงที่ 1: 🍬🍬🍬🍬🍬🍬🍬🍬 (8 เม็ด)
I (19704) CANDIES_MATH:    ถุงที่ 2: 🍬🍬🍬🍬🍬🍬🍬🍬 (8 เม็ด)
I (19704) CANDIES_MATH:    ถุงที่ 3: 🍬🍬🍬🍬🍬🍬🍬🍬 (8 เม็ด)
I (19704) CANDIES_MATH:    ถุงที่ 4: 🍬🍬🍬🍬🍬🍬🍬🍬 (8 เม็ด)
I (19704) CANDIES_MATH:    ถุงที่ 5: 🍬🍬🍬🍬🍬🍬🍬🍬 (8 เม็ด)
I (19704) CANDIES_MATH:    ถุงที่ 6: 🍬🍬🍬🍬🍬🍬🍬🍬 (8 เม็ด)
I (19704) CANDIES_MATH:    ถุงที่ 7: 🍬🍬🍬🍬🍬🍬🍬🍬 (8 เม็ด)
I (19704) CANDIES_MATH:    ถุงที่ 8: 🍬🍬🍬🍬🍬🍬🍬🍬 (8 เม็ด)
I (19704) CANDIES_MATH:    ถุงที่ 9: 🍬🍬🍬🍬🍬🍬🍬🍬 (8 เม็ด)
I (19704) CANDIES_MATH:    รวมทั้งหมด: 72 เม็ด
I (19704) CANDIES_MATH:
I (19704) CANDIES_MATH: 🔄 เปรียบเทียบกับการบวกซ้ำๆ:
I (19704) CANDIES_MATH:    การคูณ: 9 × 8 = 72
I (19704) CANDIES_MATH:    การบวกซ้ำๆ:
I (19704) CANDIES_MATH:                   8
I (19714) CANDIES_MATH:                 + 8
I (19714) CANDIES_MATH:                 + 8
I (19714) CANDIES_MATH:                 + 8
I (19714) CANDIES_MATH:                 + 8
I (19714) CANDIES_MATH:                 + 8
I (19714) CANDIES_MATH:                 + 8
I (19714) CANDIES_MATH:                 + 8
I (19714) CANDIES_MATH:                 + 8 = 72
I (19714) CANDIES_MATH:    ✅ ผลลัพธ์เหมือนกัน! การคูณคือการบวกซ้ำๆ
I (19714) CANDIES_MATH: 
I (19714) CANDIES_MATH: 📊 ตารางสูตรคูณ 8:
I (19714) CANDIES_MATH:    1 × 8 = 8
I (20014) CANDIES_MATH:    2 × 8 = 16
I (20314) CANDIES_MATH:    3 × 8 = 24
I (20614) CANDIES_MATH:    4 × 8 = 32
I (20914) CANDIES_MATH:    5 × 8 = 40
I (21214) CANDIES_MATH:    6 × 8 = 48
I (21514) CANDIES_MATH:    7 × 8 = 56
I (21814) CANDIES_MATH:    8 × 8 = 64
I (22114) CANDIES_MATH:    9 × 8 = 72
I (22414) CANDIES_MATH:    10 × 8 = 80
I (22714) CANDIES_MATH: 
I (22714) CANDIES_MATH: 💡 ตัวอย่างเพิ่มเติม:
I (22714) CANDIES_MATH:    ถ้ามีถุงลูกอม 3 ถุง ถุงละ 8 เม็ด
I (22714) CANDIES_MATH:    จะได้ลูกอม 3 × 8 = 24 เม็ด
I (22714) CANDIES_MATH: 
I (22714) CANDIES_MATH:    ถ้ามีถุงลูกอม 7 ถุง ถุงละ 4 เม็ด
I (22714) CANDIES_MATH:    จะได้ลูกอม 7 × 4 = 28 เม็ด
I (22714) CANDIES_MATH:
I (22714) CANDIES_MATH: 🔄 เปรียบเทียบการดำเนินการ:
I (22714) CANDIES_MATH:    การบวก (+): เพิ่มจำนวน (เช่น 4 + 2 = 6)
I (22714) CANDIES_MATH:    การลบ (-): ลดจำนวน (เช่น 8 - 3 = 5)
I (22714) CANDIES_MATH:    การคูณ (×): บวกซ้ำๆ (เช่น 5 × 6 = 30)
I (22714) CANDIES_MATH: 
I (22714) CANDIES_MATH: 🎓 แนวคิดขั้นสูง:
I (22714) CANDIES_MATH:    1. การคูณมีคุณสมบัติสลับที่ได้:
I (22724) CANDIES_MATH:       9 × 8 = 8 × 9 = 72
I (22724) CANDIES_MATH:    2. การคูณด้วย 0 จะได้ 0 เสมอ:
I (22724) CANDIES_MATH:       9 × 0 = 0
I (22724) CANDIES_MATH:    3. การคูณด้วย 1 จะได้ตัวเลขเดิม:
I (22724) CANDIES_MATH:       8 × 1 = 8
I (22724) CANDIES_MATH: 
I (22724) CANDIES_MATH: 📚 สิ่งที่เรียนรู้:
I (22724) CANDIES_MATH:    1. การคูณเลข (Multiplication): a × b = c
I (22724) CANDIES_MATH:    2. การใช้ for-loop ในการทำซ้ำ
I (22724) CANDIES_MATH:    3. ความสัมพันธ์ระหว่างการคูณและการบวกซ้ำๆ
I (22724) CANDIES_MATH:    4. คุณสมบัติของการคูณ
I (22734) CANDIES_MATH:    5. การแสดงข้อมูลแบบตาราง
I (22734) CANDIES_MATH:
I (22734) CANDIES_MATH: 🎉 จบโปรแกรมนับลูกอมในถุง!
I (22734) CANDIES_MATH: 📖 อ่านต่อในโปรเจคถัดไป: 04_division_cookies
I (24734) main_task: Returned from app_main()
```


```
### 📝 แบบฝึกหัดที่ 4: แจกลูกอมให้เพื่อน
คำนวณการแจกลูกอม:
int friends = 12;           // จำนวนเพื่อน
int candies_per_friend = total_candies / friends;  // ลูกอมต่อคน
int remaining_candies = total_candies % friends;   // ลูกอมที่เหลือ

ESP_LOGI(TAG, "👥 แจกให้เพื่อน %d คน:", friends);
ESP_LOGI(TAG, "   คนละ %d เม็ด", candies_per_friend);
ESP_LOGI(TAG, "   เหลือ %d เม็ด", remaining_candies);
```


```
I (18336) CANDIES_MATH: 
I (18336) CANDIES_MATH: 🧮 ขั้นตอนการคิด:
I (18336) CANDIES_MATH:    จำนวนถุง × ลูกอมต่อถุง
I (18336) CANDIES_MATH:    = 5 × 6
I (18336) CANDIES_MATH:    = 30 เม็ด
I (18336) CANDIES_MATH: 
I (18336) CANDIES_MATH: ✅ คำตอบ:
I (18336) CANDIES_MATH:    มีลูกอมทั้งหมด 30 เม็ด
I (18336) CANDIES_MATH: 
I (18336) CANDIES_MATH: 🎨 ภาพประกอบ:
I (18336) CANDIES_MATH:    ถุงที่ 1: 🍬🍬🍬🍬🍬🍬 (6 เม็ด)
I (18336) CANDIES_MATH:    ถุงที่ 2: 🍬🍬🍬🍬🍬🍬 (6 เม็ด)
I (18336) CANDIES_MATH:    ถุงที่ 3: 🍬🍬🍬🍬🍬🍬 (6 เม็ด)
I (18336) CANDIES_MATH:    ถุงที่ 4: 🍬🍬🍬🍬🍬🍬 (6 เม็ด)
I (18336) CANDIES_MATH:    ถุงที่ 5: 🍬🍬🍬🍬🍬🍬 (6 เม็ด)
I (18336) CANDIES_MATH:    รวม:     30 เม็ด
I (18336) CANDIES_MATH:
I (18336) CANDIES_MATH: 🔄 เปรียบเทียบกับการบวกซ้ำๆ:
I (18336) CANDIES_MATH:    การคูณ: 5 × 6 = 30
I (18336) CANDIES_MATH:                   6
I (18336) CANDIES_MATH:                 + 6
I (18336) CANDIES_MATH:                 + 6
I (18336) CANDIES_MATH:                 + 6
I (18336) CANDIES_MATH:                 + 6 = 30
I (18346) CANDIES_MATH:    ✅ ผลลัพธ์เหมือนกัน! การคูณคือการบวกซ้ำๆ
I (18346) CANDIES_MATH: 
I (18346) CANDIES_MATH: 📊 ตารางสูตรคูณ 6:
I (18346) CANDIES_MATH:    1 × 6 = 6
I (18646) CANDIES_MATH:    2 × 6 = 12
I (18946) CANDIES_MATH:    3 × 6 = 18
I (19246) CANDIES_MATH:    4 × 6 = 24
I (19546) CANDIES_MATH:    5 × 6 = 30
I (19846) CANDIES_MATH:    6 × 6 = 36
I (20146) CANDIES_MATH:    7 × 6 = 42
I (20446) CANDIES_MATH:    8 × 6 = 48
I (20746) CANDIES_MATH:    9 × 6 = 54
I (21046) CANDIES_MATH:    10 × 6 = 60
I (21346) CANDIES_MATH: 
I (21346) CANDIES_MATH: 💡 ตัวอย่างเพิ่มเติม:
I (21346) CANDIES_MATH:    ถ้ามี 3 ถุง ถุงละ 8 เม็ด → 24 เม็ด
I (21346) CANDIES_MATH:    ถ้ามี 7 ถุง ถุงละ 4 เม็ด → 28 เม็ด
I (21346) CANDIES_MATH: 
I (21346) CANDIES_MATH: 🔄 เปรียบเทียบการดำเนินการ:
I (21346) CANDIES_MATH:    ➕ บวก: เพิ่มจำนวน (4 + 2 = 6)
I (21346) CANDIES_MATH:    ➖ ลบ: ลดจำนวน (8 - 3 = 5)
I (21346) CANDIES_MATH:    ✖️ คูณ: บวกซ้ำๆ (5 × 6 = 30)
I (21346) CANDIES_MATH: 
I (21346) CANDIES_MATH: 🎓 แนวคิดขั้นสูง:
I (21346) CANDIES_MATH:    1. การคูณสลับตำแหน่งได้: 5 × 6 = 6 × 5 = 30
I (21346) CANDIES_MATH:    2. คูณด้วย 0 ได้ 0: 5 × 0 = 0
I (21346) CANDIES_MATH:    3. คูณด้วย 1 ได้ตัวเอง: 6 × 1 = 6
I (21346) CANDIES_MATH:
I (21346) CANDIES_MATH: 📝 แบบฝึกหัดที่ 4: แจกลูกอมให้เพื่อน
I (21346) CANDIES_MATH:    มีเพื่อนทั้งหมด 12 คน
I (21356) CANDIES_MATH:    ลูกอมทั้งหมด: 30 เม็ด
I (21356) CANDIES_MATH:    แจกคนละ: 2 เม็ด
I (21356) CANDIES_MATH:    เหลือ: 6 เม็ด
I (21356) CANDIES_MATH:
I (21356) CANDIES_MATH: 📚 สิ่งที่เรียนรู้:
I (21356) CANDIES_MATH:    1. การคูณ (×) และการหาร (/)
I (21356) CANDIES_MATH:    2. ความสัมพันธ์กับการบวกซ้ำ
I (21356) CANDIES_MATH:    3. การใช้ loop และ สำหรับเศษเหลือ
I (21356) CANDIES_MATH:    4. การแจกของอย่างเท่าเทียมและเศษ
I (21356) CANDIES_MATH:
I (21356) CANDIES_MATH: 🎉 จบโปรแกรมนับลูกอมในถุง!
I (21356) CANDIES_MATH: 📖 อ่านต่อในโปรเจคถัดไป: 04_division_cookies
I (23356) main_task: Returned from app_main()

```


