#include QMK_KEYBOARD_H

enum layers {
    _BASE,    // default layer
    _SYMB,    // symbols (1)
    _MOVE,    // movement layer (2)
    _MDIA,    // Misc (3)
};

#define LT2_BSPC LT(2, KC_BSPC)
#define LT1_SPC  LT(1,KC_SPC)
#define LSFT_EQL LSFT_T(KC_EQL)
#define CTL_ESC  CTL_T(KC_ESC)
#define CTLLEFT  LCTL(KC_LEFT)
#define CTLRGHT  LCTL(KC_RGHT)
#define CTLDOWN  LCTL(KC_DOWN)
#define CTLUP    LCTL(KC_UP)

enum combo_events {
  JK_ESC,
};

const uint16_t PROGMEM jk_combo[] = {KC_J, KC_K, COMBO_END};

combo_t key_combos[] = {
  [JK_ESC] = COMBO(jk_combo, KC_ESC),
};

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_BASE] = LAYOUT_split_3x6_3(
    KC_TAB,     KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,          KC_Y,    KC_U,    KC_I,    KC_O,    KC_P, KC_MINS,
    CTL_ESC,    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,          KC_H,    KC_J,    KC_K,    KC_L, KC_SCLN, KC_QUOT,
    LSFT_EQL,   KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,          KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH, SC_SENT,
                               KC_LGUI,LT2_BSPC,  KC_SPC,        KC_ENT, LT1_SPC, KC_RALT
  ),
  [_SYMB] = LAYOUT_split_3x6_3(
     KC_GRV,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,          KC_6,    KC_7,    KC_8,    KC_9,    KC_0, KC_MINS,
    _______, KC_EXLM,   KC_AT, KC_HASH,  KC_DLR, KC_PERC,       KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_UNDS,
    _______, XXXXXXX, XXXXXXX, KC_BSLS, KC_LCBR, KC_LBRC,       KC_RBRC, KC_RCBR, KC_PIPE, XXXXXXX, XXXXXXX, KC_TILD,
                               _______, _______, _______,       _______,MO(_MDIA), _______
  ),
  [_MOVE] = LAYOUT_split_3x6_3(
    _______, XXXXXXX, KC_BTN1, KC_MS_U, KC_BTN2, XXXXXXX,       KC_HOME, KC_PGDN, KC_PGUP,  KC_END, KC_RPRN, KC_MINS,
    _______, KC_VOLU, KC_MS_L, KC_MS_D, KC_MS_R, KC_BTN3,       KC_LEFT, KC_DOWN,   KC_UP, KC_RGHT, CW_TOGG,  KC_GRV,
    _______, KC_VOLD, KC_MUTE, KC_MSTP, KC_MPLY, KC_MNXT,       CTLLEFT, CTLDOWN,   CTLUP, CTLRGHT, XXXXXXX, _______,
                              _______,MO(_MDIA),_______,        _______, XXXXXXX, _______
  ),
  [_MDIA] = LAYOUT_split_3x6_3(
    QK_BOOT, XXXXXXX, XXXXXXX, XXXXXXX, RGB_MOD, RGB_TOG,       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_SLEP,
    _______, XXXXXXX, XXXXXXX, RGB_VAI, XXXXXXX, KC_BRIU,       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_WAKE,
    _______, XXXXXXX, XXXXXXX, RGB_VAD, XXXXXXX, KC_BRID,       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                               _______, XXXXXXX, _______,       _______, XXXXXXX, _______
  ),
};
