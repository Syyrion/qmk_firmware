// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

enum layers{
    QWERTY,
    COLEMAK_DH,
    CMD,
    FN,
};

#define XXX KC_NO

#define LAYOUT(\
    a0 , a1 , a2 , a3 , a4 , a5 , a6 , a7 , a8 , a9 , a10 , a11 , a12 , a13 , a14 , a15 ,\
    b0 , b1 , b2 , b3 , b4 , b5 , b6 , b7 , b8 , b9 , b10 , b11 , b12 , b13 ,       b15 ,\
    c0 , c1 , c2 , c3 , c4 , c5 , c6 , c7 , c8 , c9 , c10 , c11 , c12 , c13 ,       c15 ,\
         d1 , d2 , d3 , d4 , d5 , d6 , d7 , d8 , d9 , d10 , d11 , d12 ,       d14 , d15 ,\
    e0 , e1 , e2 , e3 , e4 , e5 , e6 , e7 , e8 , e9 , e10 , e11 , e12 , e13 , e14 , e15 ,\
    f0 , f1 , f2 ,      f4 ,      f6 ,      f8 , f9 , f10 , f11 , f12 , f13 , f14 , f15 \
)\
{\
    { a0  , a1  , a2  , a3  , a4  , a5  , a6  , a7  , a8  , a9  , a10 , a11 , a12 , a13 , a14 , a15 },\
    { b0  , b1  , b2  , b3  , b4  , b5  , b6  , b7  , b8  , b9  , b10 , b11 , b12 , b13 , XXX , b15 },\
    { c0  , c1  , c2  , c3  , c4  , c5  , c6  , c7  , c8  , c9  , c10 , c11 , c12 , c13 , XXX , c15 },\
    { XXX , d1  , d2  , d3  , d4  , d5  , d6  , d7  , d8  , d9  , d10 , d11 , d12 , XXX , d14 , d15 },\
    { e0  , e1  , e2  , e3  , e4  , e5  , e6  , e7  , e8  , e9  , e10 , e11 , e12 , e13 , e14 , e15 },\
    { f0  , f1  , f2  , XXX , f4  , XXX , f6  , XXX , f8  , f9  , f10 , f11 , f12 , f13 , f14 , f15 },\
}

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [QWERTY] = LAYOUT(
        KC_ESC  , KC_F1   , KC_F2   , KC_F3   , KC_F4   , KC_F5   , KC_F6   , KC_F7   , KC_F8   , KC_F9   , KC_F10  , KC_F11  , KC_F12  , KC_DEL  , KC_PSCR , KC_APP  ,
        KC_GRV  , KC_1    , KC_2    , KC_3    , KC_4    , KC_5    , KC_6    , KC_7    , KC_8    , KC_9    , KC_0    , KC_MINS , KC_EQL  , KC_BSPC ,           MO(CMD) ,
        KC_TAB  , KC_Q    , KC_W    , KC_E    , KC_R    , KC_T    , KC_Y    , KC_U    , KC_I    , KC_O    , KC_P    , KC_LBRC , KC_RBRC , KC_BSLS ,           KC_CAPS ,
                  KC_A    , KC_S    , KC_D    , KC_F    , KC_G    , KC_H    , KC_J    , KC_K    , KC_L    , KC_SCLN , KC_QUOT , KC_ENT  ,           KC_PGUP , KC_VOLU ,
        KC_LSFT , KC_Z    , KC_X    , KC_C    , KC_V    , KC_B    , KC_N    , KC_M    , KC_COMM , KC_DOT  , KC_SLSH , KC_RSFT , KC_UP   , KC_HOME , KC_END  , KC_VOLD ,
        KC_LCTL , KC_LGUI , KC_LALT ,           KC_SPC  ,           KC_BSPC ,           MO(FN)  , KC_RALT , KC_RCTL , KC_LEFT , KC_DOWN , KC_RGHT , KC_PGDN , KC_MPLY
    ),
    [COLEMAK_DH] = LAYOUT(
        KC_ESC  , KC_F1   , KC_F2   , KC_F3   , KC_F4   , KC_F5   , KC_F6   , KC_F7   , KC_F8   , KC_F9   , KC_F10  , KC_F11  , KC_F12  , KC_DEL  , KC_PSCR , KC_APP  ,
        KC_GRV  , KC_1    , KC_2    , KC_3    , KC_4    , KC_5    , KC_6    , KC_7    , KC_8    , KC_9    , KC_0    , KC_MINS , KC_EQL  , KC_BSPC ,           MO(CMD) ,
        KC_TAB  , KC_Q    , KC_W    , KC_F    , KC_P    , KC_B    , KC_J    , KC_L    , KC_U    , KC_Y    , KC_SCLN , KC_LBRC , KC_RBRC , KC_BSLS ,           KC_CAPS ,
                  KC_A    , KC_R    , KC_S    , KC_T    , KC_G    , KC_M    , KC_N    , KC_E    , KC_I    , KC_O    , KC_QUOT , KC_ENT  ,           KC_PGUP , KC_VOLU ,
        KC_LSFT , KC_Z    , KC_X    , KC_C    , KC_D    , KC_V    , KC_K    , KC_H    , KC_COMM , KC_DOT  , KC_SLSH , KC_RSFT , KC_UP   , KC_HOME , KC_END  , KC_VOLD ,
        KC_LCTL , KC_LGUI , KC_LALT ,           KC_SPC  ,           KC_BSPC ,           MO(FN)  , KC_RALT , KC_RCTL , KC_LEFT , KC_DOWN , KC_RGHT , KC_PGDN , KC_MPLY
    ),
    [CMD] = LAYOUT(
        XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX ,
        XXXXXXX , DF(QWERTY) , DF(COLEMAK_DH) , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX ,
        XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX ,           XXXXXXX ,
                  XXXXXXX , KC_SLEP , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX ,           XXXXXXX , XXXXXXX ,
        XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , KC_BRIU , XXXXXXX , XXXXXXX , XXXXXXX ,
        XXXXXXX , XXXXXXX , XXXXXXX ,           XXXXXXX ,           XXXXXXX ,           XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , KC_BRID , XXXXXXX , XXXXXXX , XXXXXXX
    ),
    [FN] = LAYOUT(
        _______ , KC_F13  , KC_F14  , KC_F15  , KC_F16  , KC_F17  , KC_F18  , KC_F19  , KC_F20  , KC_F21  , KC_F22  , KC_F23  , KC_F24  , _______ , _______ , _______ ,
        _______ , _______ , _______ , _______ , _______ , _______ , _______ , _______ , _______ , _______ , _______ , _______ , _______ , _______ ,           _______ ,
        _______ , _______ , _______ , _______ , _______ , _______ , _______ , _______ , _______ , _______ , _______ , _______ , _______ , _______ ,           _______ ,
                  _______ , _______ , _______ , _______ , _______ , _______ , _______ , _______ , _______ , _______ , _______ , _______ ,           _______ , _______ ,
        _______ , _______ , _______ , _______ , _______ , _______ , _______ , _______ , _______ , _______ , _______ , _______ , _______ , _______ , _______ , _______ ,
        _______ , _______ , _______ ,           _______ ,           _______ ,           _______ , _______ , _______ , _______ , _______ , _______ , _______ , _______
    ),
};
