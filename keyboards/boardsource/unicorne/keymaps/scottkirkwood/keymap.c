#include QMK_KEYBOARD_H
#include "version.h"
#include "transactions.h"
#include <stdio.h>

enum layers {
    _BASE,    // default layer
    _SYMB,    // symbols
};

#define LT_MDIA_O LT(_MDIA, KC_O)
#define OSL_NAVWIN OSL(_NAVWIN)
#define MO_FUN MO(_FUN)
#define MO_NUM MO(_NUM)
#define MO_SYMB MO(_SYMB)
// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_BASE] = LAYOUT_split_3x6_3(
    KC_TAB,  KC_Q,   KC_W,    KC_E,        KC_R,    KC_T,          KC_Y,     KC_U,     KC_I,    KC_O,    KC_P, KC_BSPC,
    KC_LCTL, KC_A,   KC_S,    KC_D,        KC_F,    KC_G,          KC_H,     KC_J,     KC_K,    KC_L, KC_SCLN, KC_QUOT,
    KC_LSFT, KC_Z,   KC_X,    KC_C,        KC_V,    KC_B,          KC_N,     KC_M,  KC_COMM,  KC_DOT, KC_SLSH, KC_ESC,
                              KC_LGUI,MO(_SYMB),  KC_SPC,        KC_ENT,MO(_SYMB),  KC_RALT
  ),

  [_SYMB] = LAYOUT_split_3x6_3(
    _______, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,          KC_6,    KC_7,     KC_8,        KC_9,    KC_0,  _______,
    _______, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC,       KC_CIRC, KC_AMPR,  KC_ASTR,  KC_LPRN, KC_RPRN, _______,
    _______, _______, _______, _______, _______, _______,       _______, _______,  _______,  _______, _______, _______,
                               _______, _______, _______,       _______, _______,  _______
  ),
};
