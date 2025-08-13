#include QMK_KEYBOARD_H


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

// -----> Base layer <-----
    [0] = LAYOUT_split_3x6_3_ex2(
         KC_TAB, KC_Q, KC_W, KC_F, KC_P, KC_B, KC_LGUI, /* |-----| */ KC_RCTL, KC_J, KC_L,    KC_U,   KC_Y, KC_QUOT,      KC_BSPC,
         KC_ESC, KC_A, KC_R, KC_S, KC_T, KC_G,  OSL(5), /* |-----| */ KC_LALT, KC_M, KC_N,    KC_E,   KC_I,    KC_O,       KC_ENT,
        OS_RSFT, KC_Z, KC_X, KC_C, KC_D, KC_V, /* //////-------------\\\\\\ */ KC_K, KC_H, KC_COMM, KC_DOT, KC_SLSH, LT(5,KC_APP),
                               OS_LCTL, OSL(1), KC_SPC, /* /-----\ */ OS_LSFT, OSL(2), OS_LGUI),

// -----> Extend layer <-----
    [1] = LAYOUT_split_3x6_3_ex2(
        KC_TRNS, KC_HOME,  C(KC_LEFT),   KC_UP, C(KC_RGHT), KC_PGUP, KC_VOLU, /* |------| */   KC_NO,  KC_DEL, KC_BSPC, C(KC_BSPC),  OS_MEH, KC_CAPS, KC_TRNS,
        KC_TRNS,  KC_END,     KC_LEFT, KC_DOWN,    KC_RGHT, KC_PGDN, KC_VOLD, /* |------| */   KC_NO, KC_LGUI, OS_LCTL,    OS_LALT, OS_LGUI, OS_RSFT, KC_TRNS,
        KC_TRNS,  KC_ESC, LCS(KC_TAB),  KC_TAB,  C(KC_TAB), QK_AREP, /* /////----------------\\\\\ */  QK_REP,  OS_LCS,     KC_ENT,  KC_APP, KC_PSCR,   TG(5),
                                                    KC_TRNS, KC_TRNS, KC_TRNS, /* /------\ */   MO(3), MO(4), KC_TRNS),

// -----> Symbols layer <-----
    [2] = LAYOUT_split_3x6_3_ex2(
        KC_TRNS,  KC_GRV,  KC_EQL, KC_HASH, KC_EXLM, KC_PERC, RALT(KC_4), /* |------| */  KC_NO, KC_ASTR, KC_AMPR, KC_UNDS, KC_COLN, KC_SCLN, KC_TRNS,
        KC_TRNS, KC_TILD, KC_MINS, KC_LPRN, KC_LCBR, KC_LBRC,      KC_NO, /* |------| */  KC_NO,   KC_AT, OS_LCTL, OS_LALT, OS_LGUI, OS_RSFT, KC_TRNS,
        KC_TRNS,  KC_DLR, KC_PLUS, KC_RPRN, KC_RCBR, KC_RBRC,     /* /////--------------\\\\\ */ KC_CIRC, KC_PIPE,   KC_LT,   KC_GT, KC_BSLS,   TG(5),
                                                   KC_TRNS, MO(4), MO(3), /* /------\ */ KC_ENT, KC_TRNS, KC_TRNS),

// -----> Adjust and Function layer <-----
    [3] = LAYOUT_split_3x6_3_ex2(
        QK_BOOT,   KC_NO, KC_MUTE, KC_VOLD, KC_VOLU, OS_HYPR, KC_NO, /* |-----| */ KC_NO,  KC_F12, KC_F7, KC_F8, KC_F9,  KC_INS, KC_DEL,
          KC_NO, OS_RSFT, OS_LGUI, OS_LALT, OS_LCTL,  OS_MEH, KC_NO, /* |-----| */ KC_NO,  KC_F11, KC_F4, KC_F5, KC_F6, KC_PAUS,  KC_NO,
          KC_NO, KC_MSTP, KC_MPRV, KC_MPLY, KC_MNXT,   TG(6), /* ///---------------\\\ */  KC_F10, KC_F1, KC_F2, KC_F3, KC_SCRL,  KC_NO,
                                              KC_NO, KC_TRNS, KC_NO, /* /-----\ */ KC_NO, KC_TRNS, KC_NO),

// -----> Numbers layer <-----
    [4] = LAYOUT_split_3x6_3_ex2(
        KC_TRNS,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5, KC_NO, /* |-----| */ KC_NO,    KC_6, KC_7, KC_8, KC_9,    KC_0,  KC_TRNS,
        KC_TRNS, OS_RSFT, OS_LGUI, OS_LALT, OS_LCTL,  OS_MEH, KC_NO, /* |-----| */ KC_NO,    KC_0, KC_4, KC_5, KC_6, KC_COMM,  KC_TRNS,
        KC_TRNS,  KC_ESC, KC_LEFT,  KC_TAB, KC_RGHT, QK_AREP, /* ///---------------\\\ */  QK_REP, KC_1, KC_2, KC_3,  KC_DOT,   KC_APP,
                                          KC_TRNS, KC_TRNS, KC_TRNS, /* /-----\ */ KC_TRNS, KC_0, KC_TRNS),

// -----> Workspace Management and Numpad layer <-----
    [5] = LAYOUT_split_3x6_3_ex2(
        KC_TRNS, G(KC_1),      G(KC_2), G(KC_3),      G(KC_4),   G(KC_5), KC_TRNS, /* |-----| */  KC_NUM, KC_PMNS,  KC_P7, KC_P8, KC_P9,   KC_P0, KC_TRNS,
        KC_TRNS, G(KC_6),      G(KC_7), G(KC_8),      G(KC_9),   G(KC_0), KC_TRNS, /* |-----| */ KC_TRNS, KC_PAST,  KC_P4, KC_P5, KC_P6, KC_PPLS, KC_TRNS,
        KC_TRNS,  KC_ESC, LSG(KC_LEFT),  KC_TAB, LSG(KC_RGHT), LCG(KC_C), /* /////---------------\\\\\ */ KC_PSLS,  KC_P1, KC_P2, KC_P3, KC_PDOT,   TG(5),
                                                          KC_TRNS, TG(5), KC_TRNS, /* /-----\ */  KC_PENT, KC_P0, KC_ESC),

// -----> Legacy;) layer <-----
    [6] = LAYOUT_split_3x6_3_ex2(
           KC_M,  KC_TAB, KC_Q, KC_W,    KC_E,    KC_R,   KC_T, /* |-----| */  KC_F5,   KC_1,  KC_3,   KC_5,  KC_NO, KC_CAPS, KC_TRNS,
         KC_ESC, KC_RSFT, KC_A, KC_S,    KC_D,    KC_F,   KC_G, /* |-----| */  KC_F8,   KC_2,  KC_4,   KC_6,  KC_NO,   KC_NO, KC_TRNS,
           KC_I, KC_LCTL, KC_Z, KC_X,    KC_C,    KC_V, /* ////---------------\\\\ */ QK_REP, KC_NO, KC_ENT, KC_ESC, KC_PSCR,   TG(6),
                                      KC_RCTL, KC_LALT, KC_SPC, /* /-----\ */  TG(6), TG(6), TG(6))
};


// Emulate ZMK's default behavior for OSM-on-OSL (which was interestingly QMK's old behavior)
void post_process_record_user(uint16_t keycode, keyrecord_t *record) {
	if (IS_QK_ONE_SHOT_MOD(keycode) && is_oneshot_layer_active() && record->event.pressed) {
		clear_oneshot_layer_state(ONESHOT_OTHER_KEY_PRESSED);
	}
}


// Immediately select the hold action for certain keycodes when another key is pressed
bool get_hold_on_other_key_press(uint16_t keycode, keyrecord_t *record) {
    return IS_QK_ONE_SHOT_LAYER(keycode) || keycode == LT(5,KC_APP);
}
