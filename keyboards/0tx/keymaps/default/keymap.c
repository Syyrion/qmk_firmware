// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

#define XXX KC_NO

#define LAYOUT2(\
    a00,      a02, a03, a04, a05, a06, a07, a08, a09, a10, a11, a12, a13, a14, a15, a16, a17,\
    b00, b01, b02, b03, b04, b05, b06, b07, b08, b09, b10, b11, b12, b13, b14, b15, b16, b17,\
    c00, c01, c02, c03, c04, c05, c06, c07, c08, c09, c10, c11, c12, c13, c14, c15, c16, c17,\
    d00, d01, d02, d03, d04, d05, d06, d07, d08, d09, d10, d11,      d13, d14, d15, d16,\
    e00, e01, e02, e03, e04, e05, e06, e07, e08, e09, e10,      e12, e13, e14, e15, e16, e17,\
    f00, f01, f02,           f05,                f09, f10,      f12, f13, f14, f15, f16\
)\
{\
    {a00, XXX, a02, a03, a04, a05, a06, a07, a08, a09, a10, a11, a12, a13, a14, a15, a16, a17},\
    {b00, b01, b02, b03, b04, b05, b06, b07, b08, b09, b10, b11, b12, b13, b14, b15, b16, b17},\
    {c00, c01, c02, c03, c04, c05, c06, c07, c08, c09, c10, c11, c12, c13, c14, c15, c16, c17},\
    {d00, d01, d02, d03, d04, d05, d06, d07, d08, d09, d10, d11, XXX, d13, d14, d15, d16, XXX},\
    {e00, e01, e02, e03, e04, e05, e06, e07, e08, e09, e10, XXX, e12, e13, e14, e15, e16, e17},\
    {f00, f01, f02, XXX, XXX, f05, XXX, XXX, XXX, f09, f10, XXX, f12, f13, f14, f15, f16, XXX},\
}

enum layers{
    DEFAULT,
    FN,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [DEFAULT] = LAYOUT2(
        KC_ESC, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_DEL, KC_INS, KC_PGUP, KC_PGDN,
        KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_BSPC, KC_NUM, KC_PSLS, KC_PAST, KC_PMNS,
        KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_BSLS, KC_P7, KC_P8, KC_P9, KC_PPLS,
        KC_CAPS, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_ENT, KC_P4, KC_P5, KC_P6,
        KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, KC_UP, KC_P1, KC_P2, KC_P3, KC_PENT,
        KC_LCTL, KC_LGUI, KC_LALT, KC_SPC, LT(FN, KC_RALT), KC_RCTL, KC_LEFT, KC_DOWN, KC_RGHT, KC_P0, KC_PDOT
    ),
    [FN] = LAYOUT2(
        QK_RBT, XXX, XXX, XXX, XXX, KC_MPLY, KC_MSTP, KC_MPRV, KC_MNXT, KC_MUTE, KC_VOLD, KC_VOLU, QK_BOOT, KC_PAUS, KC_SCRL, KC_HOME, KC_END,
        XXX, KC_F13, KC_F14, KC_F15, KC_F16, KC_F17, KC_F18, KC_F19, KC_F20, KC_F21, KC_F22, KC_F23, KC_F24, XXX, XXX, XXX, XXX, XXX,
        XXX, XXX, XXX, XXX, XXX, XXX, XXX, XXX, XXX, XXX, KC_PSCR, XXX, XXX, XXX, XXX, RM_SPDU, KC_BRIU, XXX,
        XXX, XXX, XXX, XXX, XXX, XXX, XXX, XXX, XXX, XXX, XXX, XXX, XXX, RM_HUED, RM_TOGG, RM_HUEU,
        XXX, XXX, XXX, XXX, XXX, XXX, XXX, XXX, XXX, XXX, XXX, XXX, RM_VALU, XXX, RM_SPDD, KC_BRID, XXX,
        XXX, KC_SLEP, XXX, XXX, KC_TRNS, KC_APP, RM_PREV, RM_VALD, RM_NEXT, XXX, XXX
    )
};
