/* SPDX-License-Identifier: GPL-2.0-or-later */
 
#include QMK_KEYBOARD_H

#define _BL 0
#define _FL 1
#define _AL 2
#define _LL 3

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  /* Keymap _BL: Base Layer (Default Layer)
   */
[_BL] = LAYOUT(
  KC_GRAVE, KC_1   , KC_2   , KC_3, KC_4, KC_5   , KC_6  , KC_7   , KC_8   , KC_9 , KC_0, KC_MINUS,KC_EQUAL, KC_BSPC, KC_BSPC,                   MO(_FL), KC_PSLS, KC_PAST, KC_PMNS,   
  KC_TAB , KC_Q   , KC_W   , KC_E, KC_R   , KC_T  , KC_Y, KC_U   , KC_I   , KC_O   , KC_P   , KC_LEFT_BRACKET, KC_RIGHT_BRACKET, KC_BACKSLASH , KC_P7  , KC_P8, KC_P9  , KC_PPLS,
  KC_CAPS , KC_A   , KC_S   , KC_D, KC_F   , KC_G  , KC_H, KC_J   , KC_K   , KC_L   , KC_SCLN, KC_QUOT,          KC_ENT  ,                 KC_P4  , KC_P5, KC_P6  , KC_PPLS, 
  KC_LSFT,          KC_Z   , KC_X, KC_C   , KC_V  , KC_B, KC_N   , KC_M   , KC_COMM, KC_DOT, KC_SLASH, KC_RSFT , KC_UP,                   KC_P1  , KC_P2, KC_P3  , KC_PENT, 
  KC_LCTL, KC_LGUI, KC_LALT,            KC_SPC,KC_SPC, KC_SPC           , KC_RALT, KC_RGUI, KC_RCTL , KC_LEFT, KC_DOWN, KC_RGHT,         KC_P0, KC_PDOT, KC_PENT),

[_FL] = LAYOUT(
  KC_TRNS, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11,KC_F12,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS, KC_TRNS, 
  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS,                 KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
  KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
  KC_TRNS, KC_TRNS, KC_TRNS,            KC_TRNS,KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,         KC_TRNS, KC_TRNS, KC_TRNS),

};

#ifdef ENCODER_MAP_ENABLE
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [_BL] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU)},
    [_FL] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU)}
};
#endif