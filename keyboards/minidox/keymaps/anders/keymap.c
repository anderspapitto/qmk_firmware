#include QMK_KEYBOARD_H

enum combos {
  WF_BSPC
};

const uint16_t PROGMEM wf_combo[] = {KC_W, KC_F, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
  [WF_BSPC] = COMBO(wf_combo, KC_BSPC),
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[0] = LAYOUT_split_3x5_3( \
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

[1] = LAYOUT_split_3x5_3( \
    KC_NO,   KC_2,    KC_3,    KC_4,    KC_5,      KC_6,    KC_7,    KC_8,    KC_9,    KC_NO,
    KC_1,    KC_ESC,  KC_TAB,  KC_ENT,  KC_BSPC,   KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_0,
    KC_GRV,  KC_SCLN, KC_QUOT, KC_MINS, KC_NO,     KC_0,    KC_EQL,  KC_LBRC, KC_RBRC, KC_BSLS,
                      KC_TRNS, KC_TRNS, KC_TRNS,   KC_TRNS, KC_TRNS, KC_TRNS
)

};
