#include QMK_KEYBOARD_H


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

// -----> Base layer <-----
    [0] = LAYOUT_split_3x6_3_ex2(
               KC_TAB, KC_Q, KC_W, KC_F, KC_P,  KC_B, KC_LALT, /* |-----| */ KC_RCTL,    KC_J,    KC_L,       KC_U,    KC_Y, KC_QUOT,      KC_BSPC,
               KC_ESC, KC_A, KC_R, KC_S, KC_T,  KC_G,  OSL(5), /* |-----| */ KC_LGUI,    KC_M,    KC_N,       KC_E,    KC_I,    KC_O,       KC_ENT,
        OSM(MOD_RSFT), KC_Z, KC_X, KC_C, KC_D,  KC_V, /* //////-------------\\\\\\ */    KC_K,    KC_H,    KC_COMM,  KC_DOT, KC_SLSH, LT(5,KC_APP),
                                OSM(MOD_LCTL), MO(1),  KC_SPC, /* /-----\ */ OSM(MOD_LSFT), MO(2), OSM(MOD_LALT)),

// -----> Extend layer <-----
    [1] = LAYOUT_split_3x6_3_ex2(
        KC_TRNS, KC_HOME,   C(KC_LEFT),   KC_UP, C(KC_RGHT), KC_PGUP, KC_HOME, /* |------| */   KC_NO,  KC_DEL,                KC_BSPC,    C(KC_BSPC),  OSM(MOD_MEH),       KC_CAPS, KC_TRNS,
        KC_TRNS,  KC_END,      KC_LEFT, KC_DOWN,    KC_RGHT, KC_PGDN,  KC_END, /* |------| */   KC_NO, KC_LGUI,          OSM(MOD_LSFT), OSM(MOD_LCTL), OSM(MOD_LALT), OSM(MOD_LGUI), KC_TRNS,
        KC_TRNS,  KC_ESC, C(S(KC_TAB)),  KC_TAB,  C(KC_TAB),  QK_REP, /* /////----------------\\\\\ */ QK_AREP, OSM(MOD_LCTL|MOD_LSFT),        KC_ENT,        KC_APP,       KC_PSCR,   TG(5),
                                                    KC_TRNS, KC_TRNS, KC_TRNS, /* /------\ */   MO(4),   MO(3),       KC_TRNS),

// -----> Symbols layer <-----
    [2] = LAYOUT_split_3x6_3_ex2(
        KC_TRNS,   KC_LT, KC_TILD,  KC_EQL,   KC_GT, KC_PERC,  KC_NO, /* |------| */  KC_NO, KC_ASTR,       KC_AMPR,       KC_HASH,       KC_UNDS,        KC_GRV, KC_TRNS,
        KC_TRNS, KC_EXLM, KC_MINS, KC_LPRN, KC_LCBR, KC_LBRC,  KC_NO, /* |------| */  KC_NO,   KC_AT, OSM(MOD_LSFT), OSM(MOD_LCTL), OSM(MOD_LALT), OSM(MOD_LGUI), KC_TRNS,
        KC_TRNS,  KC_DLR, KC_PLUS, KC_RPRN, KC_RCBR, KC_RBRC, /* /////--------------\\\\\ */ KC_CIRC,       KC_PIPE,       KC_SCLN,       KC_COLN,       KC_BSLS,   TG(5),
                                              KC_TRNS, MO(3), KC_ENT, /* /------\ */ KC_ENT, KC_TRNS,       KC_TRNS),

// -----> Adjust and Function layer <-----
    [3] = LAYOUT_split_3x6_3_ex2(
        QK_BOOT,         KC_NO,       KC_MUTE,       KC_VOLD,       KC_VOLU, OSM(MOD_HYPR), KC_NO, /* |-----| */ KC_NO,  KC_F12, KC_F7, KC_F8, KC_F9,  KC_INS, KC_DEL,
          KC_NO, OSM(MOD_LGUI), OSM(MOD_LALT), OSM(MOD_LCTL), OSM(MOD_LSFT),  OSM(MOD_MEH), KC_NO, /* |-----| */ KC_NO,  KC_F11, KC_F4, KC_F5, KC_F6, KC_PAUS,  KC_NO,
          KC_NO,       KC_MSTP,       KC_MPRV,       KC_MPLY,       KC_MNXT,         TG(6), /* ///---------------\\\ */  KC_F10, KC_F1, KC_F2, KC_F3, KC_SCRL,  KC_NO,
                                                                            KC_NO, KC_TRNS, KC_NO, /* /-----\ */ KC_NO, KC_TRNS, KC_NO),

// -----> Numbers layer <-----
    [4] = LAYOUT_split_3x6_3_ex2(
        KC_TRNS,          KC_1,          KC_2,          KC_3,          KC_4,          KC_5, KC_NO, /* |-----| */ KC_NO,    KC_6, KC_7, KC_8, KC_9,    KC_0,  KC_TRNS,
        KC_TRNS, OSM(MOD_LGUI), OSM(MOD_LALT), OSM(MOD_LCTL), OSM(MOD_LSFT),  OSM(MOD_MEH), KC_NO, /* |-----| */ KC_NO,    KC_0, KC_4, KC_5, KC_6, KC_COMM,  KC_TRNS,
        KC_TRNS,        KC_ESC,        KC_DEL,        KC_TAB,        KC_ENT,        QK_REP, /* ///---------------\\\ */ QK_AREP, KC_1, KC_2, KC_3,  KC_DOT,   KC_APP,
                                                                            KC_NO, KC_TRNS, KC_NO, /* /-----\ */ KC_TRNS,  KC_0, KC_NO),

// -----> Workspace Management and Numpad layer <-----
    [5] = LAYOUT_split_3x6_3_ex2(
        KC_TRNS, A(KC_TAB),   C(G(KC_2)), C(G(KC_3)),   C(G(KC_4)), C(G(KC_5)), KC_TRNS, /* |-----| */   KC_NO, KC_PAST,  KC_P7, KC_P8, KC_P9, KC_PMNS, KC_TRNS,
        KC_TRNS, A(KC_ESC),   C(G(KC_6)), C(G(KC_7)),   C(G(KC_8)), C(G(KC_9)), KC_TRNS, /* |-----| */   KC_NO,   KC_P0,  KC_P4, KC_P5, KC_P6, KC_PPLS, KC_TRNS,
        KC_TRNS,    KC_ESC, LSG(KC_LEFT),     KC_TAB, LSG(KC_RGHT), C(G(KC_0)), /* /////---------------\\\\\ */ KC_PSLS,  KC_P1, KC_P2, KC_P3, KC_PDOT,   TG(5),
                                                           KC_TRNS,      TG(5), KC_TRNS, /* /-----\ */ KC_PENT,  KC_NUM, KC_ESC),

// -----> Legacy layer <-----
    [6] = LAYOUT_split_3x6_3_ex2(
           KC_M,  KC_TAB, KC_Q, KC_W,    KC_E,    KC_R,   KC_T, /* |-----| */  KC_F5,   KC_1,  KC_3,   KC_5,   KC_7, KC_CAPS, KC_TRNS,
         KC_ESC, KC_LSFT, KC_A, KC_S,    KC_D,    KC_F,   KC_G, /* |-----| */  KC_F8,   KC_2,  KC_4,   KC_6,   KC_8,   KC_NO, KC_TRNS,
           KC_I, KC_LCTL, KC_Z, KC_X,    KC_C,    KC_V, /* ////---------------\\\\ */ QK_REP, KC_NO, KC_ENT, KC_ESC, KC_PSCR,   TG(6),
                                      KC_RCTL, KC_LALT, KC_SPC, /* /-----\ */  TG(6),  TG(6),  TG(6))
};


bool get_hold_on_other_key_press(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case LT(5,KC_APP):
            // Immediately select the hold action when another key is pressed.
            return true;
        default:
            // Do not select the hold action when another key is pressed.
            return false;
    }
}
