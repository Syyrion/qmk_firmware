// Copyright 2021 QMK / NachoxMacho
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = {
        { KC_VOLU , KC_MUTE , XXXXXXX , KC_PSCR , KC_BRIU },
        { KC_VOLD , XXXXXXX , KC_3    , XXXXXXX , KC_BRID },
        { XXXXXXX , KC_2    , XXXXXXX , KC_6    , XXXXXXX },
        { KC_1    , XXXXXXX , KC_5    , XXXXXXX , KC_CLR  },
        { XXXXXXX , KC_4    , XXXXXXX , KC_7    , XXXXXXX },
        { KC_MPRV , XXXXXXX , KC_MPLY , XXXXXXX , KC_MNXT }
    }
};
