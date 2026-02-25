oled_rotation_t oled_init_user(oled_rotation_t rotation) { return OLED_ROTATION_270; }

void render_space(void) {
    oled_write_P(PSTR("     "), false);
}

void render_modifiers(uint8_t modifiers) {
    
    if(modifiers & MOD_MASK_GUI) {
        oled_write_ln_P(PSTR("SUPER"), false);
    } 

    if(modifiers & MOD_MASK_CTRL) {
        oled_write_ln_P(PSTR("CTRL"), false);
    }

    if(modifiers & MOD_MASK_ALT) {
        oled_write_ln_P(PSTR("ALT"), false);
    }

    if(modifiers & MOD_MASK_SHIFT) {
        oled_write_ln_P(PSTR("SHIFT"), false);
    }

}


void render_layer_state(void) {
    switch (get_highest_layer(layer_state)) {
        case 0:
            oled_write_P(PSTR("\n"), false);
            break;
        case 1:
            oled_write_P(PSTR("EXT\n"), false);
            break;
        case 2:
            oled_write_P(PSTR("SYM\n"), false);
            break;
        case 3:
            oled_write_P(PSTR("FUNC\n"), false);
            break;
        case 4:
            oled_write_P(PSTR("WKNM\n"), false);
            break;
        case 5:
            oled_write_P(PSTR("LGCY\n"), false);
            break;
        default:
            // Or use the write_ln shortcut over adding '\n' to the end of your string
            oled_write_ln_P(PSTR("Undefined"), false);
    }
}

void render_led_state(void) {
    // Host Keyboard LED Status
    led_t led_state = host_keyboard_led_state();
    oled_write_P(led_state.num_lock ? PSTR("NL ") : PSTR("    "), false);
    oled_write_P(led_state.caps_lock ? PSTR("CL ") : PSTR("    "), false);
    oled_write_P(led_state.scroll_lock ? PSTR("SL ") : PSTR("    "), false);
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
