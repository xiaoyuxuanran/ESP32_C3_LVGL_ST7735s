#include <stdio.h>

#include "freertos/FreeRTOS.h"
#include "freertos/task.h"

#include "st7789.h"
#include "led_brightness.h"

#include "lv_demos.h"

void app_main(void)
{
    st7789_init();
    lv_demo_benchmark();
    display_brightness_init();
    display_brightness_set(100);
    while (1)
    {
        vTaskDelay(10000 / portTICK_PERIOD_MS);
    }
    
}
