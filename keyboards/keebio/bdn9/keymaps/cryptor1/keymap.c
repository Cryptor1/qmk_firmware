// Cryptor1 Keeb.io BDN9 Macropad

#include QMK_KEYBOARD_H
#include "Cryptor1.h"
#include "dual_encoder_bdn9.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        _______,  _______, _______,
        _______,  _______, KC_H,
        KC_E,     KC_R,    KC_ENTER
    ),
};