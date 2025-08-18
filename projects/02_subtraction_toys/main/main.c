#include <stdio.h>
#include "esp_log.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"

static const char *TAG = "TOYS_MATH";

void app_main(void)
{
    ESP_LOGI(TAG, "🧸 เริ่มต้นโปรแกรมนับของเล่นของน้อง 🧸");
    ESP_LOGI(TAG, "=========================================");
    
    // ตัวแปรหลัก
    int toys_have = 8;
    int toys_give_away = 3;
    int toys_remaining;

    // โจทย์หลัก
    ESP_LOGI(TAG, "📖 โจทย์:");
    ESP_LOGI(TAG, "   น้องมีของเล่น: %d ชิ้น", toys_have);
    ESP_LOGI(TAG, "   เอาไปแจกให้เพื่อน: %d ชิ้น", toys_give_away);
    ESP_LOGI(TAG, "   ❓ น้องเหลือของเล่นกี่ชิ้น?");
    ESP_LOGI(TAG, "");
    
    vTaskDelay(3000 / portTICK_PERIOD_MS);

    // ตรวจสอบก่อนลบ
    if (toys_give_away > toys_have) {
        ESP_LOGW(TAG, "⚠️  ของเล่นที่จะแจก (%d) มากกว่าที่มีอยู่ (%d)!", toys_give_away, toys_have);
        toys_give_away = toys_have;
    }

    // คำนวณ
    toys_remaining = toys_have - toys_give_away;

    ESP_LOGI(TAG, "🧮 ขั้นตอนการคิด:");
    ESP_LOGI(TAG, "   %d - %d = %d ชิ้น", toys_have, toys_give_away, toys_remaining);
    ESP_LOGI(TAG, "");

    // คำตอบหลัก
    ESP_LOGI(TAG, "✅ คำตอบ:");
    ESP_LOGI(TAG, "   น้องเหลือของเล่น %d ชิ้น", toys_remaining);
    ESP_LOGI(TAG, "");

    // ภาพประกอบ
    ESP_LOGI(TAG, "🎨 ภาพประกอบ:");
    ESP_LOGI(TAG, "   ของเล่นเดิม: 🧸🚗🎲🧩🎮🧸🚁🎯 (%d ชิ้น)", toys_have);
    ESP_LOGI(TAG, "   แจกให้เพื่อน: 🧸🚗🎲 (%d ชิ้น)", toys_give_away);
    ESP_LOGI(TAG, "   เหลืออยู่:   🧩🎮🧸🚁🎯 (%d ชิ้น)", toys_remaining);
    ESP_LOGI(TAG, "");

    // ตัวอย่างเพิ่มเติม
    ESP_LOGI(TAG, "💡 ตัวอย่างเพิ่มเติม:");
    int ex1_have = 15, ex1_give = 7;
    ESP_LOGI(TAG, "   1. มี %d ชิ้น แจก %d ชิ้น → เหลือ %d ชิ้น", ex1_have, ex1_give, ex1_have - ex1_give);

    int ex2_have = 5, ex2_give = 5;
    ESP_LOGI(TAG, "   2. มี %d ชิ้น แจก %d ชิ้น → เหลือ %d ชิ้น", ex2_have, ex2_give, ex2_have - ex2_give);
    ESP_LOGI(TAG, "");

    // เปรียบเทียบกับการบวก
    ESP_LOGI(TAG, "🔄 เปรียบเทียบ:");
    ESP_LOGI(TAG, "   บวก: เพิ่มจำนวน (4 + 2 = 6)");
    ESP_LOGI(TAG, "   ลบ: ลดจำนวน (8 - 3 = 5)");
    ESP_LOGI(TAG, "");

    // 🧠 แบบฝึกหัดที่ 4
    ESP_LOGI(TAG, "📝 แบบฝึกหัดที่ 4:");
    int num_friends = 10;
    int toys_per_friend = 2;
    int total_needed = num_friends * toys_per_friend;

    ESP_LOGI(TAG, "   ถ้าอยากแจกของเล่นให้เพื่อน %d คน คนละ %d ชิ้น", num_friends, toys_per_friend);
    ESP_LOGI(TAG, "   รวมต้องมีของเล่น = %d × %d = %d ชิ้น", num_friends, toys_per_friend, total_needed);

    if (toys_have >= total_needed) {
        ESP_LOGI(TAG, "   ✅ น้องมีของเล่นเพียงพอ: %d ชิ้น", toys_have);
    } else {
        int missing = total_needed - toys_have;
        ESP_LOGI(TAG, "   ❌ น้องมีแค่ %d ชิ้น ขาดอีก %d ชิ้น", toys_have, missing);
    }

    ESP_LOGI(TAG, "");

    // สรุปการเรียนรู้
    ESP_LOGI(TAG, "📚 สิ่งที่เรียนรู้:");
    ESP_LOGI(TAG, "   1. การลบเลข (Subtraction)");
    ESP_LOGI(TAG, "   2. การตรวจสอบเงื่อนไข");
    ESP_LOGI(TAG, "   3. การคูณเพื่อหาจำนวนรวม");
    ESP_LOGI(TAG, "   4. ความสัมพันธ์ระหว่างการลบและบวก");
    ESP_LOGI(TAG, "");

    ESP_LOGI(TAG, "🎉 จบโปรแกรมนับของเล่นของน้อง!");
    ESP_LOGI(TAG, "📖 อ่านต่อในโปรเจคถัดไป: 03_multiplication_candies");

    vTaskDelay(2000 / portTICK_PERIOD_MS);
}
