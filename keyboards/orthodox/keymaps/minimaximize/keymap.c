/*
This is the keymap for the keyboard

Copyright 2012 Jun Wako <wakojun@gmail.com>
Copyright 2015 Jack Humbert
Copyright 2017 Art Ortenburger

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include QMK_KEYBOARD_H

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
#define _QWERTY 0
#define _RAISE 1
#define _MOUSE 2
#define _CODE 3
#define _ADJUST 16

// Fillers to make layering more clear
#define _______ KC_TRNS
#define XXXXXXX KC_NO

#define CODE  TT(_CODE)
#define MOUSE TT(_MOUSE)
#define RAISE MO(_RAISE)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_QWERTY] = LAYOUT( \
    KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                                                                   KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC, \
    CODE,    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,             KC_ESC,  KC_LGUI,          KC_PGUP, KC_PGDN,          KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, \
    KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_LCTL, KC_ENT,  KC_LALT,          KC_RALT, KC_SPC,  RAISE,   KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_BSLS  \
  ),

  [_RAISE] =  LAYOUT( \
    KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                                                                   KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    _______, \
    _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5            _______, _______,          _______, _______,           KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  _______, \
    _______, KC_F11,  KC_F12, _______, _______, _______, _______, _______, _______,          _______, _______, _______, _______, _______, _______, _______, _______,  _______  \
  ),

  [_MOUSE] =  LAYOUT( \
    _______, _______, _______, _______, _______, _______,                                                                _______, _______, _______, _______, _______, _______, \
    _______, _______, _______, _______, _______, _______,          _______, _______,          KC_BTN1, KC_MS_U,          _______, _______, _______, _______, _______, _______, \
    _______, _______, _______, _______, _______, _______, _______, _______, _______,          KC_MS_L, KC_MS_D, KC_MS_R, _______, _______, _______, _______, _______, _______  \
  )
  
  [_CODE] =  LAYOUT( \
    KC_ESC,  KC_HOME, KC_UP,   KC_END,  KC_PGUP, KC_VOLU,                                                                KC_MINS, KC_EQL,  KC_PLUS, KC_LPRN, KC_RPRN, _______, \
    _______, KC_LEFT, KC_DOWN, KC_RGHT, KC_PGDN, KC_VOLD,          MOUSE,   _______,          _______, _______,          KC_UNDS, KC_LBRC, KC_RBRC, KC_LCBR, KC_RCBR, _______, \
    _______, KC_PSCR, KC_SLCK, KC_PAUS, KC_INS,  KC_MUTE, _______, _______, _______,          _______, _______, _______, KC_GRV,  KC_TILD, KC_LT,   KC_GT,   _______, KC_DEL   \
  ),

  [_ADJUST] =  LAYOUT( \
    _______, _______, _______, _______, _______, _______,                                                                _______, _______, _______, _______, _______, _______, \
    _______, _______, _______, _______, _______, _______,          _______, _______,          _______, _______,          _______, _______, _______, _______, _______, _______, \
    _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______, _______, _______, _______, _______, _______, _______, _______, _______  \
  )
};
