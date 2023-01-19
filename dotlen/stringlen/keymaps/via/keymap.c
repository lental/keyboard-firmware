/* Copyright 2018 Jack Humbert
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include QMK_KEYBOARD_H

#define _BL 0
#define _FL 1
#define _AL 2
#define _LL 3

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  /* Keymap _BL: Base Layer (Default Layer)
   */
[_BL] = LAYOUT(
  KC_7  , KC_8, KC_9  , KC_GRAVE, KC_TAB , KC_Q   , KC_W   , KC_E, KC_R   , KC_T  , KC_Y, KC_U   , KC_I   , KC_O   , KC_P   , KC_LEFT_BRACKET, KC_RIGHT_BRACKET , KC_BSPC , KC_PGUP,
  KC_4  , KC_5, KC_6  , KC_MINUS, KC_ESC , KC_A   , KC_S   , KC_D, KC_F   , KC_G  , KC_H, KC_J   , KC_K   , KC_L   , KC_SCLN, KC_QUOT,          KC_ENT  , KC_PGDN,
  KC_1  , KC_2, KC_3  , KC_EQUAL, KC_LSFT,          KC_Z   , KC_X, KC_C   , KC_V  , KC_B, KC_N   , KC_M   , KC_COMM, KC_DOT, KC_SLASH, KC_RSFT , KC_UP, KC_DEL,
  KC_0  , KC_0, KC_PDOT, KC_BACKSLASH, KC_LCTL, KC_LGUI, KC_LALT,            KC_SPC,MO(_FL), KC_SPC           , KC_RALT, KC_RGUI, KC_RCTRL , KC_LEFT, KC_DOWN, KC_RGHT),

[_FL] = LAYOUT(
  KC_1  , KC_TRNS, KC_TRNS  , KC_TRNS, KC_TRNS , KC_EXLM, KC_AT  , KC_HASH, KC_DLR, KC_PERC   , KC_CIRC  , KC_AMPR, KC_ASTR   , KC_LPRN   , KC_RPRN   , KC_UNDS   , KC_PLUS , KC_TRNS , KC_TRNS,
  KC_TRNS  , KC_TRNS, KC_TRNS  , KC_TRNS, KC_TRNS , KC_1   , KC_2   , KC_3   , KC_4   , KC_5  , KC_6, KC_7   , KC_8   , KC_9   , KC_0, KC_MINUS,          KC_EQUAL  , KC_TRNS,
  KC_TRNS  , KC_TRNS, KC_TRNS  , KC_TRNS, MO(_AL),          KC_TRNS   , KC_TRNS, KC_TRNS   , KC_TRNS  , KC_TRNS, KC_TRNS   , KC_TRNS   , KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS , KC_TRNS, KC_TRNS,
  KC_TRNS  , KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,            KC_TRNS,KC_TRNS, KC_TRNS           , KC_TRNS, KC_TRNS, KC_TRNS , KC_TRNS, KC_TRNS, KC_TRNS),

[_AL] = LAYOUT(
  KC_0  , KC_TRNS, KC_TRNS  , KC_GRAVE, KC_TAB , KC_F1, KC_F2  , KC_F3, KC_F4, KC_F5   , KC_F6  , KC_F7, KC_F8   , KC_F9   , KC_F10   , KC_F11   , KC_F12 , KC_BSPC , KC_PGUP,
  KC_TRNS  , KC_TRNS, KC_TRNS  , KC_TRNS, KC_TRNS , KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS  , KC_TRNS, KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS, KC_TRNS,KC_TRNS  , KC_TRNS,
  KC_TRNS  , KC_TRNS, KC_TRNS  , KC_TRNS, KC_TRNS,          KC_TRNS   , KC_TRNS, KC_TRNS   , KC_TRNS  , KC_TRNS, KC_TRNS   , KC_TRNS   , KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS , KC_TRNS, KC_TRNS,
  KC_TRNS  , KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,            KC_TRNS,KC_TRNS, KC_TRNS           , KC_TRNS, KC_TRNS, KC_TRNS , KC_TRNS, KC_TRNS, KC_TRNS),


[_LL] = LAYOUT(
  KC_7  , KC_TRNS, KC_TRNS  ,  KC_TRNS, KC_TRNS , KC_TRNS  ,  KC_TRNS, KC_TRNS , KC_TRNS  ,  KC_TRNS, KC_TRNS , KC_TRNS  ,  KC_TRNS, KC_TRNS , KC_TRNS     , KC_TRNS, KC_TRNS , KC_TRNS   , KC_TRNS,
  KC_TRNS  , KC_TRNS, KC_TRNS  , KC_TRNS, KC_TRNS , KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS  , KC_TRNS, KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS, KC_TRNS,KC_TRNS  , KC_TRNS,
  KC_TRNS  , KC_TRNS, KC_TRNS  , KC_TRNS, KC_TRNS,          KC_TRNS   , KC_TRNS, KC_TRNS   , KC_TRNS  , KC_TRNS, KC_TRNS   , KC_TRNS   , KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS , KC_TRNS, KC_TRNS,
  KC_TRNS  , KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,            KC_TRNS,KC_TRNS, KC_TRNS           , KC_TRNS, KC_TRNS, KC_TRNS , KC_TRNS, KC_TRNS, KC_TRNS),

};