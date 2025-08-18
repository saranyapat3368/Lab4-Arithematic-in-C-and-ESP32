#include <stdio.h>
#include "esp_log.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"

// กำหนดชื่อสำหรับแสดงใน log
static const char *TAG = "EGGS_MATH";

void app_main(void)
{
    ESP_LOGI(TAG, "🥚 เริ่มต้นโปรแกรมนับไข่ 🦆");
    ESP_LOGI(TAG, "============================");

    // ไข่ไก่
    int eggs_already_have = 4;    // ไข่ไก่ที่แม่มีอยู่แล้ว
    int eggs_new_today = 2;       // ไข่ไก่ที่ไก่ออกวันนี้
    int total_eggs = eggs_already_have + eggs_new_today;

    // ไข่เป็ด
    int duck_eggs_today = 3;      // ไข่เป็ดที่ได้มาในวันนี้

    // รวมไข่ทั้งหมด
    int total_eggs_all = total_eggs + duck_eggs_today;

    // แสดงโจทย์
    ESP_LOGI(TAG, "📖 โจทย์:");
    ESP_LOGI(TAG, "   แม่มีไข่ไก่แล้ว: %d ฟอง", eggs_already_have);
    ESP_LOGI(TAG, "   ไก่ออกไข่วันนี้: %d ฟอง", eggs_new_today);
    ESP_LOGI(TAG, "   เก็บไข่เป็ดได้อีก: %d ฟอง", duck_eggs_today);
    ESP_LOGI(TAG, "   ❓ ไข่ทั้งหมดวันนี้มีเท่าไร?");
    ESP_LOGI(TAG, "");

    vTaskDelay(2000 / portTICK_PERIOD_MS);

    // ขั้นตอนการคิด
    ESP_LOGI(TAG, "🧮 ขั้นตอนการคิด:");
    ESP_LOGI(TAG, "   ไข่ไก่ทั้งหมด = %d + %d = %d ฟอง", eggs_already_have, eggs_new_today, total_eggs);
    ESP_LOGI(TAG, "   ไข่ทั้งหมดรวม = ไข่ไก่ (%d) + ไข่เป็ด (%d) = %d ฟอง", total_eggs, duck_eggs_today, total_eggs_all);
    ESP_LOGI(TAG, "");

    // แสดงคำตอบ
    ESP_LOGI(TAG, "✅ คำตอบ:");
    ESP_LOGI(TAG, "   วันนี้มีไข่ไก่ %d ฟอง และไข่เป็ด %d ฟอง", total_eggs, duck_eggs_today);
    ESP_LOGI(TAG, "   รวมทั้งหมด: %d ฟอง", total_eggs_all);
    ESP_LOGI(TAG, "");

    // แสดงภาพประกอบ
    ESP_LOGI(TAG, "🎨 ภาพประกอบ:");
    ESP_LOGI(TAG, "   ไข่ไก่เดิม:    🥚🥚🥚🥚 (%d)", eggs_already_have);
    ESP_LOGI(TAG, "   ไข่ไก่ใหม่:    🥚🥚 (%d)", eggs_new_today);
    ESP_LOGI(TAG, "   ไข่เป็ดใหม่:   🦆🦆🦆 (%d)", duck_eggs_today);
    ESP_LOGI(TAG, "   รวมทั้งหมด:   🥚🥚🥚🥚🥚🥚 + 🦆🦆🦆 = %d ฟอง", total_eggs_all);
    ESP_LOGI(TAG, "");

    // สรุป
    ESP_LOGI(TAG, "📚 สิ่งที่เรียนรู้:");
    ESP_LOGI(TAG, "   1. การบวกเลขหลายชุด");
    ESP_LOGI(TAG, "   2. การใช้ตัวแปรเพิ่มรายการ (เช่น ไข่เป็ด)");
    ESP_LOGI(TAG, "   3. การแสดงผลแบบภาพ (emoji)");
    ESP_LOGI(TAG, "   4. การรวมหลายค่าเพื่อหาผลรวมทั้งหมด");
    ESP_LOGI(TAG, "");

    ESP_LOGI(TAG, "🎉 จบโปรแกรมนับไข่รวม!");
    ESP_LOGI(TAG, "📖 อ่านต่อในโปรเจคถัดไป: 02_subtraction_toys");

    vTaskDelay(2000 / portTICK_PERIOD_MS);
}
