/* Good on you for modifying your layout! if you don't have
 * time to read the QMK docs, a list of keycodes can be found at
 *
 * https://github.com/qmk/qmk_firmware/blob/master/docs/keycodes.md
 *
 * There's also a template for adding new layers at the bottom of this file!
 */

#include QMK_KEYBOARD_H
#include "g/keymap_combo.h"

// Blank template at the bottom
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/* Keymap 0: Basic layer
 *
 * /-----------------------------\      /-----------------------------\
 * |  Q  |  W  |  F  |  P  |  V  |      |  J  |  L  |  U  |  Y  |     |
 * |-----+-----+-----+-----+-----|      |-----+-----+-----+-----+-----|
 * |  A  |  R  |  S  |  T  |  G  |      |  M  |  N  |  E  |  I  |  O  | 
 * |-----+-----+-----+-----+-----|      |-----+-----+-----+-----+-----|
 * |  Z  |  X  |  C  |  D  |  B  |      |  K  |  H  |  ,  |  .  |  /  |
 * \-----------------------------/      \-----------------------------/
 *       /-----------------\                  /-----------------\
 *       | GUI | L1  | SPC |                  | CTL | SHF | ALT |
 *       \-----------------/                  \-----------------/ 
 */
[0] = LAYOUT_gergoplex(
    KC_Q, KC_W, KC_F, KC_P, KC_V,   KC_J, KC_L, KC_U,    KC_Y,   KC_NO, 
    KC_A, KC_R, KC_S, KC_T, KC_G,   KC_M, KC_N, KC_E,    KC_I,   KC_O,
    KC_Z, KC_X, KC_C, KC_D, KC_B,   KC_K, KC_H, KC_COMM, KC_DOT, KC_SLSH,

    KC_LGUI,
    MO(1),
    KC_SPC,

    KC_LCTL,
    KC_LSFT,
    KC_LALT
),

/* Keymap 1: Numbers and Symbols layer
 * /-----------------------------\      /-----------------------------\
 * |     | 2 @ | 3 # | 4 $ | 5 % |      | 6 ^ | 7 & | 8 * | 9 ( |     |
 * |-----+-----+-----+-----+-----|      |-----+-----+-----+-----+-----|
 * | 1 ! | Esc | Tab | Ent | Bsp |      | Lft | Dwn | Up  | Rgt | 0 ) |
 * |-----+-----+-----+-----+-----|      |-----+-----+-----+-----+-----|
 * | ` ~ | ; : | ' " | _ - |     |      |     | = + | [ { | ] } | \ | |
 * \-----------------------------/      \-----------------------------/
 */
[1] = LAYOUT_gergoplex(
    KC_NO,   KC_2,    KC_3,    KC_4,    KC_5,      KC_6,    KC_7,    KC_8,    KC_9,    KC_NO,
    KC_1,    KC_ESC,  KC_TAB,  KC_ENT,  KC_BSPC,   KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_0,
    KC_GRV,  KC_SCLN, KC_QUOT, KC_MINS, KC_NO,     KC_NO,   KC_EQL,  KC_LBRC, KC_RBRC, KC_BSLS,
                      KC_TRNS, KC_TRNS, KC_TRNS,   KC_TRNS, KC_TRNS, KC_TRNS
)

};
