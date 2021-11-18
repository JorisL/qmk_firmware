#include QMK_KEYBOARD_H


#define _LAYER0 0
#define _LAYER1 1
#define _LAYER2 2
#define _LAYER3 3
#define _LAYER4 4
#define _LAYER5 5

enum custom_keycodes {
    LAYER0 = SAFE_RANGE,
    LAYER1,
    LAYER2,
    LAYER3,
    LAYER4,
    LAYER5,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[_LAYER0] = LAYOUT_planck_grid(
  KC_ESC,  KC_Q,    KC_W,    KC_E,  KC_R,  KC_T,         KC_Y,         KC_U,  KC_I,    KC_O,    KC_P,    KC_BSPC,
  KC_TAB,  KC_A,    KC_S,    KC_D,  KC_F,  KC_G,         KC_H,         KC_J,  KC_K,    KC_L,    KC_SCLN, KC_QUOT,
  KC_LSFT, KC_Z,    KC_X,    KC_C,  KC_V,  KC_B,         KC_N,         KC_M,  KC_COMM, KC_DOT,  KC_SLSH, KC_SFTENT,
  KC_LCTL, KC_LGUI, KC_LALT, MO(5), MO(1), LT(4,KC_SPC), LT(4,KC_SPC), MO(2), KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT
),

[_LAYER1] = LAYOUT_planck_grid(
  KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_TRNS,
  KC_TRNS, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_MINS, KC_EQL,  KC_LBRC, KC_RBRC, KC_BSLS,
  KC_TRNS, KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_NO,   KC_NO,   KC_HOME, KC_END,  KC_TRNS,
  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, MO(3),   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
),

[_LAYER2] = LAYOUT_planck_grid(
  KC_TILD, KC_EXLM, KC_AT,   KC_HASH, KC_DLR, KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_TRNS,
  KC_TRNS, KC_F13,  KC_F14,  KC_F15,  KC_F16, KC_F17,  KC_F18,  KC_UNDS, KC_PLUS, KC_LCBR, KC_RCBR, KC_PIPE,
  KC_TRNS, KC_F19,  KC_F20,  KC_F21,  KC_F22, KC_F23,  KC_F24,  KC_NO,   KC_NO,   KC_PGUP, KC_PGDN, KC_TRNS,
  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, MO(3),  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
),

[_LAYER3] = LAYOUT_planck_grid(
  KC_ESC,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,    KC_F9,   KC_F10,  KC_TRNS,
  KC_TRNS, KC_F11,  KC_F12,  KC_F13,  KC_F14,  KC_F15,  KC_F16,  KC_F17,  KC_F18,   KC_F19,  KC_F20,  KC_NO,
  KC_TRNS, KC_F21,  KC_F22,  KC_F23,  KC_F24,  KC_NO,   RGB_TOG, RGB_MOD, RGB_RMOD, RGB_SAI, RGB_SAD, KC_TRNS,
  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS
),

[_LAYER4] = LAYOUT_planck_grid(
  KC_ESC,  KC_NO,   KC_PGUP, KC_UP,   KC_PGDN, KC_NO,   KC_NO,   KC_P7,   KC_P8, KC_P9,   KC_PSLS, KC_TRNS,
  KC_TRNS, KC_NO,   KC_LEFT, KC_DOWN, KC_RGHT, KC_NO,   KC_NO,   KC_P4,   KC_P5, KC_P6,   KC_PAST, KC_PEQL,
  KC_TRNS, KC_NO,   KC_HOME, KC_NO,   KC_END,  KC_NO,   KC_NO,   KC_P1,   KC_P2, KC_P3,   KC_PMNS, KC_PENT,
  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_PCMM, KC_P0, KC_PDOT, KC_PPLS, KC_NO
),

[_LAYER5] = LAYOUT_planck_grid(
  KC_ESC,  KC_NO,   KC_PGUP, KC_UP,   KC_PGDN, KC_NO,   KC_NO,   KC_BTN1, KC_MS_U, KC_BTN2, KC_ACL0, KC_TRNS,
  KC_TRNS, KC_NO,   KC_LEFT, KC_DOWN, KC_RGHT, KC_NO,   KC_NO,   KC_MS_L, KC_MS_D, KC_MS_R, KC_ACL1, KC_NO,
  KC_TRNS, KC_NO,   KC_HOME, KC_NO,   KC_END,  KC_NO,   KC_NO,   KC_WH_U, KC_BTN3, KC_WH_D, KC_ACL2, KC_TRNS,
  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_MUTE, KC_VOLD, KC_VOLU, KC_MPLY
)
};

// remap shift-backspace to delete
const key_override_t delete_key_override = ko_make_basic(MOD_MASK_SHIFT, KC_BSPACE, KC_DELETE);

// This globally defines all key overrides to be used
const key_override_t **key_overrides = (const key_override_t *[]){
    &delete_key_override,
    NULL // Null terminate the array of overrides!
};

