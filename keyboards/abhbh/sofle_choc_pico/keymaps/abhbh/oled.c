oled_rotation_t oled_init_user(oled_rotation_t rotation) { return OLED_ROTATION_270; }

void render_space(void) {
    oled_write_P(PSTR("     "), false);
}

void render_modifiers(uint8_t modifiers) {
    int mln_count = 4;
    
    if(modifiers & MOD_MASK_GUI) {
        oled_write_P(PSTR("SUPER"), false);
        mln_count--;
    } 

    if(modifiers & MOD_MASK_CTRL) {
        oled_write_P(PSTR(" CTRL"), false);
        mln_count--;
    }

    if(modifiers & MOD_MASK_ALT) {
        oled_write_P(PSTR(" ALT "), false);
        mln_count--;
    }

    if(modifiers & MOD_MASK_SHIFT) {
        oled_write_P(PSTR("SHIFT"), false);
        mln_count--;
    }

    while (mln_count--)
        render_space();

}


void render_layer_state(void) {
    switch (get_highest_layer(layer_state)) {
        case 0:
            oled_write_P(PSTR("     "), false);
            break;
        case 1:
            oled_write_P(PSTR("  EXT"), false);
            break;
        case 2:
            oled_write_P(PSTR("  SYM"), false);
            break;
        case 3:
            oled_write_P(PSTR(" FUNC"), false);
            break;
        case 4:
            oled_write_P(PSTR("WK&NM"), false);
            break;
        case 5:
            oled_write_P(PSTR(" LGCY"), false);
            break;
        default:
            oled_write_P(PSTR("Undefined"), false);
    }
}

void render_led_state(void) {
    // Host Keyboard LED Status
    led_t led_state = host_keyboard_led_state();
    oled_write_P(led_state.num_lock ? PSTR("NUMLK") : PSTR("     "), false);
    oled_write_P(led_state.scroll_lock ? PSTR("SCRLK") : PSTR("     "), false);
    oled_write_P(led_state.caps_lock ? PSTR(" CAPS") : PSTR("     "), false);
    
}


bool oled_task_user(void) {

    if (is_keyboard_master()) {

        oled_set_cursor(0, 1);
        render_layer_state();
        oled_set_cursor(0, 4);
        render_led_state();
        oled_set_cursor(0, 8);
        render_modifiers(get_mods()|get_oneshot_mods());
    } else {
        oled_set_cursor(0, 1);
        render_layer_state();
        oled_set_cursor(0, 4);
        render_led_state();
        oled_set_cursor(0, 8);
        render_modifiers(get_mods()|get_oneshot_mods());
    }

    return false;
}
