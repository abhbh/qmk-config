#include QMK_KEYBOARD_H


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [0] = LAYOUT_split_3x6_3_ex2(
               KC_TAB, KC_Q,    KC_W,   KC_F,   KC_P,   KC_B,   KC_LALT,           KC_RCTL,  KC_J,          KC_L, KC_U,    KC_Y,   KC_SCLN,  KC_BSPC,
               KC_ESC, KC_A,    KC_R,   KC_S,   KC_T,   KC_G,   KC_LGUI,            OSL(5),  KC_M,          KC_N, KC_E,    KC_I,   KC_O,     KC_ENT,
        OSM(MOD_LSFT), KC_Z,    KC_X,   KC_C,   KC_D,   KC_V,                                KC_K,          KC_H, KC_COMM, KC_DOT, KC_SLSH,  LT(4,KC_APP),
                                       OSM(MOD_LCTL),  MO(1),    KC_SPC,     OSM(MOD_RSFT), MO(2), OSM(MOD_LALT)),


    [1] = LAYOUT_split_3x6_3_ex2(
        KC_TRNS,  KC_TAB, LCTL(KC_LEFT),   KC_UP, LCTL(KC_RGHT), KC_PGUP, KC_HOME,       KC_NO,  KC_DEL,        KC_ENT, OSM(MOD_LCTL|MOD_LSFT), LCTL(KC_BSPC),       KC_BSPC,  KC_DEL,
        KC_TRNS,  KC_ESC,       KC_LEFT, KC_DOWN,       KC_RGHT, KC_PGDN,  KC_END,       KC_NO, KC_LGUI, OSM(MOD_LGUI),          OSM(MOD_LALT), OSM(MOD_LCTL), OSM(MOD_LSFT), KC_TRNS,
        KC_TRNS,    KC_4,          KC_2,    KC_1,          KC_3,    KC_5,                          KC_6,          KC_8,                   KC_0,          KC_9,          KC_7,   TG(4),
                                                        KC_TRNS, KC_TRNS, KC_TRNS,     KC_TRNS,   MO(3),       OSL(5)),


    [2] = LAYOUT_split_3x6_3_ex2(
        KC_TRNS, KC_TILD, KC_COLN, KC_QUOT,   KC_LT, KC_PERC,  KC_NO,     KC_HOME, KC_ASTR,   KC_GT, KC_DQUO,  KC_EQL, KC_BSPC,  KC_DEL,
        KC_TRNS,  KC_GRV, KC_UNDS, KC_LPRN, KC_LCBR, KC_EXLM,  KC_NO,      KC_END, KC_AMPR, KC_RCBR, KC_RPRN, KC_MINS, KC_QUES, KC_TRNS,
        KC_TRNS, KC_BSLS,   KC_AT, KC_HASH, KC_LBRC,  KC_DLR,                      KC_CIRC, KC_RBRC, KC_PIPE, KC_PLUS,  KC_ENT,   TG(4),
                                            KC_TRNS,   MO(3), KC_ENT,      KC_ENT, KC_TRNS, OSL(5)),


    [3] = LAYOUT_split_3x6_3_ex2(
        QK_BOOT,         KC_NO,       KC_MUTE,       KC_VOLD,       KC_VOLU, OSM(MOD_HYPR), KC_NO,       KC_NO, KC_PAUS, KC_F7, KC_F8, KC_F9, KC_F10, KC_DEL,
          KC_NO, OSM(MOD_LSFT), OSM(MOD_LCTL), OSM(MOD_LALT), OSM(MOD_LGUI),  OSM(MOD_MEH), KC_NO,       KC_NO, KC_PSCR, KC_F4, KC_F5, KC_F6, KC_F11,  KC_NO,
          KC_NO,       KC_SCRL,       KC_MPRV,       KC_MPLY,       KC_MNXT,       KC_CAPS,                      KC_INS, KC_F1, KC_F2, KC_F3, KC_F12,  KC_NO,
                                                                      KC_NO,       KC_TRNS, KC_NO,       KC_NO, KC_TRNS, KC_NO),


    [4] = LAYOUT_split_3x6_3_ex2(
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, QK_MOUSE_BUTTON_1, KC_NO,          KC_NO,  KC_NUM,  KC_P7, KC_P8, KC_P9, KC_PMNS, KC_BSPC,
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,          KC_NO, KC_PAST,  KC_P4, KC_P5, KC_P6, KC_PPLS, KC_TRNS,
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,                        KC_PSLS,  KC_P1, KC_P2, KC_P3, KC_PDOT,   TG(4),
                                    KC_NO, KC_NO, KC_NO,         KC_ENT,   KC_P0, KC_ESC),


    [5] = LAYOUT_split_3x6_3_ex2(
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,       KC_NO, LGUI(KC_2), LGUI(KC_3), LGUI(KC_4), LGUI(KC_5), LGUI(KC_6), KC_NO,
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,     KC_TRNS,    KC_LGUI,      KC_NO,      KC_NO,      KC_NO,      KC_NO, KC_NO,
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,                          KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO, KC_NO,
                                    KC_NO, KC_NO, KC_NO,       KC_NO,      KC_NO,    KC_TRNS)
};
