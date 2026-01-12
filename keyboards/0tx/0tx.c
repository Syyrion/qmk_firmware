#include "quantum.h"

led_config_t g_led_config =
{
    {
        {20, NO_LED, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4},
        {21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38},
        {56, 55, 54, 53, 52, 51, 50, 49, 48, 47, 46, 45, 44, 43, 42, 41, 40, 39},
        {57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, NO_LED, 69, 70, 71, 72, NO_LED},
        {89, 88, 87, 86, 85, 84, 83, 82, 81, 80, 79, NO_LED, 78, 77, 76, 75, 74, 73},
        {90, 91, 92, NO_LED, NO_LED, 93, NO_LED, NO_LED, NO_LED, 94, 95, NO_LED, 96, 97, 98, 99, 100, NO_LED},
    },
    // LED Index to Physical Position
    {
        {0, 0},
        {0, 0},
        {0, 0},
        {0, 0},

        {224, 0},
        {212, 0},
        {200, 0},
        {188, 0},
        {170, 0},
        {158, 0},
        {146, 0},
        {134, 0},
        {116, 0},
        {103, 0},
        {91, 0},
        {79, 0},
        {61, 0},
        {49, 0},
        {36, 0},
        {24, 0},
        {0, 0},

        {0, 16},
        {12, 16},
        {24, 16},
        {36, 16},
        {49, 16},
        {61, 16},
        {73, 16},
        {85, 16},
        {97, 16},
        {109, 16},
        {122, 16},
        {134, 16},
        {146, 16},
        {164, 16},
        {188, 16},
        {200, 16},
        {212, 16},
        {224, 16},

        {224, 33},
        {212, 27},
        {200, 27},
        {188, 27},
        {167, 27},
        {152, 27},
        {140, 27},
        {128, 27},
        {116, 27},
        {103, 27},
        {91, 27},
        {79, 27},
        {67, 27},
        {55, 27},
        {43, 27},
        {30, 27},
        {18, 27},
        {3, 27},

        {5, 39},
        {21, 39},
        {33, 39},
        {46, 39},
        {58, 39},
        {70, 39},
        {82, 39},
        {94, 39},
        {106, 39},
        {119, 39},
        {131, 39},
        {143, 39},
        {163, 39},
        {188, 39},
        {200, 39},
        {212, 39},

        {224, 56},
        {212, 50},
        {200, 50},
        {188, 50},
        {173, 53},
        {154, 50},
        {137, 50},
        {125, 50},
        {113, 50},
        {100, 50},
        {88, 50},
        {76, 50},
        {64, 50},
        {52, 50},
        {40, 50},
        {27, 50},
        {8, 50},

        {2, 61},
        {17, 61},
        {32, 61},
        {78, 61},
        {123, 61},
        {138, 61},
        {161, 64},
        {173, 64},
        {185, 64},
        {200, 61},
        {212, 61},
    },
    // LED Index to Flag
    {
        0, 0, 0, 0,
        4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
        4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
        4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
        4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
        4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
        4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
        4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
        4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
        4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
        4, 4, 4, 4, 4, 4, 4
    }
};


#define INDICATOR_A_ON() do { RGB_MATRIX_INDICATOR_SET_COLOR(1, 0, 100, 100) } while (0) 
#define INDICATOR_A_OFF() do { RGB_MATRIX_INDICATOR_SET_COLOR(1, 0, 0, 0) } while (0) 

#define INDICATOR_I_ON() do { RGB_MATRIX_INDICATOR_SET_COLOR(2, 0, 100, 100) } while (0) 
#define INDICATOR_I_OFF() do { RGB_MATRIX_INDICATOR_SET_COLOR(2, 0, 0, 0) } while (0) 

#define INDICATOR_S_ON() do { RGB_MATRIX_INDICATOR_SET_COLOR(0, 0, 140, 170) } while (0) 
#define INDICATOR_S_OFF() do { RGB_MATRIX_INDICATOR_SET_COLOR(0, 0, 0, 0) } while (0) 

#define INDICATOR_W_ON() do { RGB_MATRIX_INDICATOR_SET_COLOR(3, 0, 100, 100) } while (0) 
#define INDICATOR_W_OFF() do { RGB_MATRIX_INDICATOR_SET_COLOR(3, 0, 0, 0) } while (0) 


bool rgb_matrix_indicators_advanced_user(uint8_t led_min, uint8_t led_max) {
    led_t led_state = host_keyboard_led_state();

    if (led_state.caps_lock)
        INDICATOR_A_ON();
    else
        INDICATOR_A_OFF();

    if (led_state.num_lock)
        INDICATOR_I_ON();
    else
        INDICATOR_I_OFF();

    if (led_state.scroll_lock)
        INDICATOR_S_ON();
    else
        INDICATOR_S_OFF();

    return false;
}