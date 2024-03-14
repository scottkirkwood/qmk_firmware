#include QMK_KEYBOARD_H
#include "version.h"
#include "transactions.h"
#include <stdio.h>

enum layers {
    _BASE,    // default layer
    _SYMB,    // symbols
    _MDIA,    // Misc
};

#define LT_MDIA_O LT(_MDIA, KC_O)
#define OSL_NAVWIN OSL(_NAVWIN)
#define MO_FUN MO(_FUN)
#define MO_NUM MO(_NUM)
#define MO_SYMB MO(_SYMB)

enum combos { NEI_CTRL, COMMADOT_SEMICOLON, HCOMMA_HYPHEN, ZD_TAB, XD_CTRL, DH_CTRL, PREV_NEXT_SELECT_ALL, COMBO_LENGTH };
uint16_t COMBO_LEN = COMBO_LENGTH;

const uint16_t PROGMEM nei_ctrl[]              = {KC_N, KC_E, KC_I, COMBO_END};
const uint16_t PROGMEM commadot_semicolon[]    = {KC_COMM, KC_DOT, COMBO_END};
const uint16_t PROGMEM hcomma_hyphen[]         = {KC_H, KC_COMM, COMBO_END};
const uint16_t PROGMEM xd_ctrl[]               = {KC_X, KC_D, COMBO_END};
const uint16_t PROGMEM dh_ctrl[]               = {KC_D, KC_H, COMBO_END};
const uint16_t PROGMEM zd_tab[]                = {KC_Z, KC_D, COMBO_END};
const uint16_t PROGMEM prev_next_select_all[]  = {PRV_TAB, NXT_TAB, COMBO_END};

// clang-format off
combo_t key_combos[] = {
    [NEI_CTRL]          = COMBO(nei_ctrl, OS_CTRL),
    [COMMADOT_SEMICOLON]= COMBO(commadot_semicolon, KC_SCLN),
    [HCOMMA_HYPHEN]     = COMBO(hcomma_hyphen, KC_MINS),
    [XD_CTRL]           = COMBO(xd_ctrl, OS_CTRL),
    [DH_CTRL]           = COMBO(dh_ctrl, OS_CTRL),
    [ZD_TAB]            = COMBO(zd_tab, KC_TAB),
    [PREV_NEXT_SELECT_ALL] = COMBO(prev_next_select_all, MW_SELECT_ALL),
};
// clang-format on

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_BASE] = LAYOUT_split_3x6_3(
    KC_TAB,  KC_Q,   KC_W,    KC_E,        KC_R,    KC_T,          KC_Y,     KC_U,     KC_I,    KC_O,    KC_P, KC_BSPC,
    KC_LCTL, KC_A,   KC_S,    KC_D,        KC_F,    KC_G,          KC_H,     KC_J,     KC_K,    KC_L, KC_SCLN, KC_QUOT,
    KC_LSFT, KC_Z,   KC_X,    KC_C,        KC_V,    KC_B,          KC_N,     KC_M,  KC_COMM,  KC_DOT, KC_SLSH, KC_ESC,
                              KC_LGUI,MO(_SYMB),  KC_SPC,        KC_ENT,MO(_MDIA),  KC_RALT
  ),

  [_SYMB] = LAYOUT_split_3x6_3(
    _______, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,          KC_6,    KC_7,     KC_8,        KC_9,    KC_0,  _______,
    _______, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC,       KC_CIRC, KC_AMPR,  KC_ASTR,  KC_LPRN, KC_RPRN, _______,
    _______, _______, _______, _______, _______, _______,       _______, _______,  _______,  _______, _______, _______,
                               _______, _______, _______,       _______, _______,  _______
  ),
  [_MDIA] = LAYOUT_split_3x6_3(
    QK_BOOT, _______, _______, _______, _______, _______,       RGB_VAI, RGB_HUI, RGB_SAI, RGB_MOD,  RGB_TOG, _______,
    EE_CLR,  _______, _______, _______, _______, _______,       RGB_VAD, RGB_HUD, RGB_SAD, RGB_RMOD, CK_TOGG, _______,
    _______, _______, _______, _______, _______, _______,       _______, _______, _______, _______,  _______, _______,
                               _______, _______, _______,       _______, _______, _______
  ),
};
