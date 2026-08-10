#include QMK_KEYBOARD_H
#include "oled.c"


enum layer_names {
    _BASE,
    _EXT,
    _SYM,
    _ADJFN,
    _WKNM,
    _LGCY
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

// -----> Base layer <-----
    [_BASE] = LAYOUT(
        OSL(4),  KC_1,  KC_2,  KC_3,  KC_4,  KC_5, /* |--------------| */ KC_6,  KC_7,    KC_8,   KC_9,    KC_0,       KC_DEL,
        KC_TAB,  KC_Q,  KC_W,  KC_F,  KC_P,  KC_B, /* |--------------| */ KC_J,  KC_L,    KC_U,   KC_Y, KC_QUOT,      KC_BSPC,
        KC_ESC,  KC_A,  KC_R,  KC_S,  KC_T,  KC_G, /* |--------------| */ KC_M,  KC_N,    KC_E,   KC_I,    KC_O,       KC_ENT,
        OS_RSFT, KC_Z,  KC_X,  KC_C,  KC_D,  KC_V, KC_MUTE, /**/ KC_MUTE, KC_K,  KC_H, KC_COMM, KC_DOT, KC_SLSH, LT(4,KC_APP),
                 OS_LGUI, OS_LALT, OS_LCTL, OSL(1), KC_SPC, /**/ OS_LSFT, OSL(2), OS_LGUI, KC_LEFT, KC_RGHT),

// -----> Extend layer <-----
    [_EXT] = LAYOUT(
        XXXXXXX,   KC_F1,       KC_F2,   KC_F3,      KC_F4,   KC_F5, /* |-------------| */    KC_F6,   KC_F7,      KC_F8,   KC_F9,    KC_F10,  KC_F11,
        _______, KC_HOME,  C(KC_LEFT),   KC_UP, C(KC_RGHT), KC_PGUP, /* |-------------| */  OS_HYPR,  KC_DEL, C(KC_BSPC), KC_BSPC,   KC_CAPS,  KC_F12,
        _______,  KC_END,     KC_LEFT, KC_DOWN,    KC_RGHT, KC_PGDN, /* |-------------| */   OS_MEH, OS_LCTL,    OS_LALT, OS_LGUI,   OS_RSFT, _______,
        _______,  KC_ESC, LCS(KC_TAB),  KC_TAB,  C(KC_TAB), QK_AREP, _______, /**/ _______,  QK_REP, XXXXXXX,     KC_ENT,  KC_APP,   KC_PSCR, XXXXXXX,
                                 _______, _______, _______, _______, KC_BSPC, /**/ _______, MO(3), OS_RGUI, OD_RALT, OS_RCTL),


// -----> Symbols layer <-----
    [_SYM] = LAYOUT(
        XXXXXXX, _______, _______, _______, _______, _______, /* |-------------| */  _______, _______, _______, _______, _______, _______,
        _______, KC_TILD, KC_MINS,  KC_EQL,   KC_GT, KC_AMPR, /* |-------------| */  KC_ASTR, KC_HASH, KC_SCLN, KC_COLN,  KC_GRV, _______,
        _______,   KC_AT, KC_UNDS, KC_LPRN, KC_LCBR, KC_LBRC, /* |-------------| */  KC_EXLM, OS_LCTL, OS_LALT, OS_LGUI, OS_RSFT, _______,
      LCA(KC_4), KC_PIPE, KC_PLUS, KC_RPRN, KC_RCBR, KC_RBRC, KC_MPLY, /**/ KC_MPLY,  QK_REP, KC_PERC, KC_CIRC,  KC_DLR, KC_BSLS, XXXXXXX,
                            _______, _______, _______, MO(3), _______, /**/  KC_ENT, _______, OS_RGUI, OD_RALT, OS_RCTL),


// -----> Adjust and Function layer <-----
    [_ADJFN] = LAYOUT(
        QK_BOOT,   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, /* |-------------| */ XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, QK_BOOT,
        XXXXXXX, LAG(KC_L), KC_MUTE, KC_VOLD, KC_VOLU, OS_HYPR, /* |-------------| */ KC_SCRL,   KC_F7,   KC_F8,   KC_F9,  KC_F10, XXXXXXX,
        XXXXXXX,   OS_RSFT, OS_LGUI, OS_LALT, OS_LCTL,  OS_MEH, /* |-------------| */ KC_PAUS,   KC_F4,   KC_F5,   KC_F6,  KC_F11, XXXXXXX,
        XXXXXXX,   KC_MSTP, KC_MPRV, KC_MPLY, KC_MNXT,   TG(5), XXXXXXX, /**/ XXXXXXX, KC_INS,   KC_F1,   KC_F2,   KC_F3,  KC_F12, XXXXXXX,
                            XXXXXXX, XXXXXXX, XXXXXXX, _______, XXXXXXX, /**/ XXXXXXX, _______, XXXXXXX, XXXXXXX, XXXXXXX),


// -----> Workspace Management and Numpad layer <-----
    [_WKNM] = LAYOUT(
          TG(4),   XXXXXXX,      XXXXXXX,   XXXXXXX,      XXXXXXX,   XXXXXXX, /* |-------------| */  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        _______, A(KC_ESC),    LCG(KC_2), LCG(KC_3),    LCG(KC_4), LCG(KC_5), /* |-------------| */  KC_PMNS,   KC_P7,   KC_P8,   KC_P9,   KC_P0, _______,
        _______, LCG(KC_6),    LCG(KC_7), LCG(KC_8),    LCG(KC_9), LCG(KC_0), /* |-------------| */  KC_PAST,   KC_P4,   KC_P5,   KC_P6, KC_PPLS, _______,
        _______,    KC_ESC, LSG(KC_LEFT),    KC_TAB, LSG(KC_RGHT),   QK_AREP, _______, /**/ _______, KC_PSLS,   KC_P1,   KC_P2,   KC_P3, KC_PDOT,   TG(4),
                                            _______, _______, _______, TG(4), _______, /**/ KC_PENT, KC_P0, KC_ESC, KC_NUM, QK_REP),


// -----> Legacy;) layer <-----
    [_LGCY] = LAYOUT(
        KC_GRV,    KC_1,  KC_2,  KC_3,  KC_4,  KC_5, /* |-------------| */  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        KC_M,    KC_TAB,  KC_Q,  KC_W,  KC_E,  KC_R, /* |-------------| */  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        KC_ESC, KC_LSFT,  KC_A,  KC_S,  KC_D,  KC_F, /* |-------------| */  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        KC_I,   KC_LCTL,  KC_Z,  KC_X,  KC_C,  KC_V, _______, /**/ _______,  QK_REP,   KC_NO,  KC_ENT,  KC_ESC, KC_PSCR,   TG(5),
                  XXXXXXX, XXXXXXX, KC_RCTL, KC_LALT, KC_SPC, /**/ XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, TG(5)),


};


// Encoders
#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [_BASE]  = { ENCODER_CCW_CW(KC_PGUP, KC_PGDN),       ENCODER_CCW_CW(KC_UP, KC_DOWN) },
    [_EXT]   = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU),       ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
    [_SYM]   = { ENCODER_CCW_CW(KC_MPRV, KC_MNXT),       ENCODER_CCW_CW(KC_MPRV, KC_MNXT) },
    [_ADJFN] = { ENCODER_CCW_CW(KC_PGUP, KC_PGDN),       ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
    [_WKNM]  = { ENCODER_CCW_CW(C(KC_PGUP), C(KC_PGDN)), ENCODER_CCW_CW(LCS(KC_TAB), C(KC_TAB)) },
    [_LGCY]  = { ENCODER_CCW_CW(KC_PGUP, KC_PGDN),       ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
};
#endif


// Emulate ZMK's default behavior for OSM-on-OSL (which was interestingly QMK's old behavior)
void post_process_record_user(uint16_t keycode, keyrecord_t *record) {
	if (IS_QK_ONE_SHOT_MOD(keycode) && is_oneshot_layer_active() && record->event.pressed) {
		clear_oneshot_layer_state(ONESHOT_OTHER_KEY_PRESSED);
	}
}


// Immediately select the hold action for certain keycodes when another key is pressed
bool get_hold_on_other_key_press(uint16_t keycode, keyrecord_t *record) {
    return IS_QK_ONE_SHOT_LAYER(keycode) || keycode == LT(4,KC_APP);
}
