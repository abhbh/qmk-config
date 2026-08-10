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
        _______, KC_HOME,  C(KC_LEFT),   KC_UP, C(KC_RGHT), KC_PGUP, KC_VOLU, /* |------| */ XXXXXXX,  KC_DEL, KC_BSPC, C(KC_BSPC),  OS_MEH, KC_CAPS, _______,
        _______,  KC_END,     KC_LEFT, KC_DOWN,    KC_RGHT, KC_PGDN, KC_VOLD, /* |------| */ XXXXXXX, KC_LGUI, OS_LCTL,    OS_LALT, OS_LGUI, OS_RSFT, _______,
        _______,  KC_ESC, LCS(KC_TAB),  KC_TAB,  C(KC_TAB), QK_AREP, /* /////----------------\\\\\ */  QK_REP,  OS_LCS,     KC_ENT,  KC_APP, KC_PSCR, XXXXXXX,
                                                   _______, _______, _______, /* /------\ */   MO(3), MO(4), _______),

// -----> Symbols layer <-----
    [2] = LAYOUT_split_3x6_3_ex2(
        _______, KC_TILD, KC_MINS,  KC_EQL,   KC_GT, KC_AMPR, XXXXXXX, /* |------| */ XXXXXXX, KC_ASTR, KC_HASH, KC_SCLN, KC_COLN,  KC_GRV, _______,
        _______,   KC_AT, KC_UNDS, KC_LPRN, KC_LCBR, KC_LBRC, XXXXXXX, /* |------| */ XXXXXXX, KC_EXLM, OS_LCTL, OS_LALT, OS_LGUI, OS_RSFT, _______,
      LCA(KC_4), KC_PIPE, KC_PLUS, KC_RPRN, KC_RCBR, KC_RBRC,  /* /////--------------\\\\\ */   QK_REP, KC_PERC, KC_CIRC,  KC_DLR, KC_BSLS, XXXXXXX,
                                                _______, MO(4), MO(3), /* /------\ */ KC_ENT, _______, _______),

// -----> Adjust and Function layer <-----
    [3] = LAYOUT_split_3x6_3_ex2(
        QK_BOOT, LAG(KC_L), KC_MUTE, KC_VOLD, KC_VOLU, OS_HYPR, XXXXXXX, /* |--| */ XXXXXXX, KC_SCRL, KC_F7, KC_F8, KC_F9, KC_F10, XXXXXXX,
        XXXXXXX,   OS_RSFT, OS_LGUI, OS_LALT, OS_LCTL,  OS_MEH, XXXXXXX, /* |--| */ XXXXXXX, KC_PAUS, KC_F4, KC_F5, KC_F6, KC_F11, XXXXXXX,
        XXXXXXX,   KC_MSTP, KC_MPRV, KC_MPLY, KC_MNXT,   TG(6), /* ///---------------\\\ */   KC_INS, KC_F1, KC_F2, KC_F3, KC_F12, XXXXXXX,
                                             XXXXXXX, _______, XXXXXXX, /* /----\ */ XXXXXXX, _______, XXXXXXX),

// -----> Numbers layer <-----
    [4] = LAYOUT_split_3x6_3_ex2(
        _______,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5, XXXXXXX, /* |--| */ XXXXXXX,    KC_6, KC_7, KC_8, KC_9,    KC_0, _______,
        _______, OS_RSFT, OS_LGUI, OS_LALT, OS_LCTL,  OS_MEH, XXXXXXX, /* |--| */ XXXXXXX, KC_PERC, KC_4, KC_5, KC_6, KC_COMM, _______,
        _______,  KC_ESC, KC_LEFT,  KC_TAB, KC_RGHT, QK_AREP, /* ///---------------\\\ */   QK_REP, KC_1, KC_2, KC_3,  KC_DOT, XXXXXXX,
                                           _______, _______, _______, /* /----\ */ _______, KC_0, _______),

// -----> Workspace Management and Numpad layer <-----
    [5] = LAYOUT_split_3x6_3_ex2(
        _______, A(KC_ESC),    LCG(KC_2), LCG(KC_3),    LCG(KC_4), LCG(KC_5), _______, /* |-----| */  KC_NUM, KC_PMNS,  KC_P7, KC_P8, KC_P9,   KC_P0, _______,
        _______, LCG(KC_6),    LCG(KC_7), LCG(KC_8),    LCG(KC_9), LCG(KC_0), _______, /* |-----| */  QK_REP, KC_PAST,  KC_P4, KC_P5, KC_P6, KC_PPLS, _______,
        _______,    KC_ESC, LSG(KC_LEFT),    KC_TAB, LSG(KC_RGHT), LCG(KC_C), /* /////---------------\\\\\ */ KC_PSLS,  KC_P1, KC_P2, KC_P3, KC_PDOT,   TG(5),
                                                              _______, TG(5), _______, /* /-----\ */ KC_PENT, KC_P0, KC_ESC),

// -----> Legacy;) layer <-----
    [6] = LAYOUT_split_3x6_3_ex2(
           KC_M,  KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, /* |-----| */ KC_F5,   KC_1,    KC_3,   KC_5,  XXXXXXX, KC_CAPS, _______,
         KC_ESC, KC_RSFT, KC_A, KC_S, KC_D, KC_F, KC_G, /* |-----| */ KC_F8,   KC_2,    KC_4,   KC_6,  XXXXXXX, XXXXXXX, _______,
           KC_I, KC_LCTL, KC_Z, KC_X, KC_C, KC_V, /* ////------------\\\\ */ QK_REP, XXXXXXX, KC_ENT,   KC_ESC, KC_PSCR,   TG(6),
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
