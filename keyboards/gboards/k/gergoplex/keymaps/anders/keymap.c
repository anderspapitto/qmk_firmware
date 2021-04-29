/* Good on you for modifying your layout! if you don't have
 * time to read the QMK docs, a list of keycodes can be found at
 *
 * https://github.com/qmk/qmk_firmware/blob/master/docs/keycodes.md
 *
 * There's also a template for adding new layers at the bottom of this file!
 */

#include QMK_KEYBOARD_H
#include "g/keymap_combo.h"

#define BASE 0 // default layer
#define SYMB 1 // symbols
#define NUMB 2 // numbers/motion

// Blank template at the bottom
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/* Keymap 0: Basic layer
 *
 * /-----------------------------\      /-----------------------------\
 * |  Q  |  W  |  F  |  P  |  V  |      |  J  |  L  |  U  |  Y  |     |
 * |-----+-----+-----+-----+-----|      |-----+-----+-----+-----+-----|
 * |  A  |  R  |  S  |  T  |  G  |      |  M  |  N  |  E  |  I  |  O  | 
 * |-----+-----+-----+-----+-----|      |-----+-----+-----+-----+-----|
 * |  Z  |  X  |  C  |  D  |  B  |      |  K  |  H  |  <  |  >  |  /  |
 * \-----------------------------/      \-----------------------------/
 *       /-----------------\                  /-----------------\
 *       | BSP | SPC | TAB |                  | ENT |     | ESC |
 *       | GUI | SYM | NUM |                  | CTL | SHF | ALT |
 *       \-----------------/                  \-----------------/ 
 */
[BASE] = LAYOUT_gergoplex(
    KC_Q, KC_W, KC_F, KC_P, KC_V,   KC_J, KC_L, KC_U,    KC_Y,   KC_NO, 
    KC_A, KC_R, KC_S, KC_T, KC_G,   KC_M, KC_N, KC_E,    KC_I,   KC_O,
    KC_Z, KC_X, KC_C, KC_D, KC_B,   KC_K, KC_H, KC_COMM, KC_DOT, KC_SLSH,

   MT(MOD_LGUI, KC_BSPC),
   LT(SYMB, KC_SPC),
   LT(NUMB, KC_TAB),

   MT(MOD_LCTL, KC_ENT),
   KC_LSFT,
   MT(MOD_LALT, KC_ESC)
),

/* Keymap 1: Symbols layer
 * /-----------------------------\      /-----------------------------\
 * |     |  @  |  #  |  $  |  %  |      |  ^  |  &  |  (  |  )  |     |
 * |-----+-----+-----+-----+-----|      |-----+-----+-----+-----+-----|
 * |  ~  |  '  |  "  |  _  |  :  |      |  ;  |  -  |  [  |  ]  |  |  | 
 * |-----+-----+-----+-----+-----|      |-----+-----+-----+-----+-----|
 * |  `  |  !  |  =  |  *  |     |      |     |  +  |  {  |  }  |  \  |
 * \-----------------------------/      \-----------------------------/
 */
[SYMB] = LAYOUT_gergoplex(
    KC_NO,   KC_AT,   KC_HASH, KC_DLR , KC_PERC,   KC_CIRC, KC_AMPR, KC_LPRN, KC_RPRN, KC_NO,
    KC_TILD, KC_QUOT, KC_DQUO, KC_UNDS, KC_COLN,   KC_SCLN, KC_MINS, KC_LBRC, KC_RBRC, KC_PIPE,
    KC_GRV,  KC_EXLM, KC_EQL,  KC_ASTR, KC_NO,     KC_NO,   KC_PLUS, KC_LCBR, KC_RCBR, KC_BSLS,
                      KC_NO,   KC_NO,   KC_NO,     KC_NO,   KC_NO,   KC_NO
),

/* Keymap 2: Numbers and Movement layer
 * /-----------------------------\      /-----------------------------\
 * |     |  2  |  3  |  4  |  5  |      |  6  |  7  |  8  |  9  |     |
 * |-----+-----+-----+-----+-----|      |-----+-----+-----+-----+-----|
 * | PgU |  1  | Lft | Rgt | Hom |      | End | Dwn | Up  |  0  | PgD | 
 * |-----+-----+-----+-----+-----|      |-----+-----+-----+-----+-----|
 * |     |     |     |     |     |      |     |     |     |     |     |
 * \-----------------------------/      \-----------------------------/
 */
[NUMB] = LAYOUT_gergoplex(
    KC_NO,   KC_2,    KC_3,    KC_4,    KC_5,      KC_6,    KC_7,    KC_8,    KC_9,    KC_NO,
    KC_PGUP, KC_1,    KC_LEFT, KC_RGHT, KC_HOME,   KC_END,  KC_DOWN, KC_UP,   KC_0,    KC_PGDN,
    KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,     KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   
                      KC_NO,   KC_NO,   KC_NO,     KC_NO,   KC_NO,   KC_NO
)

};
