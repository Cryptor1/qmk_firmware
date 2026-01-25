// Cryptor1 Macros

static bool alt_tab_active = false;

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
    case RIP:
        if (record->event.pressed) {
            // when keycode RIP is pressed
            SEND_STRING(SS_LCTL("a") SS_TAP(X_BSPC));
        } else {
            // when keycode RIP is released
        }
        break;
    case ALT_TAB:
        if (record->event.pressed) {
            // when keycode ALT_TAB is pressed
            register_code(KC_LALT);
            tap_code(KC_TAB);
            alt_tab_active = true;
        } else {
            // when keycode ALT_TAB is released
        }         
        return false;
    case KC_ENTER:
        if (record->event.pressed && alt_tab_active) {
            unregister_code(KC_LALT);
            alt_tab_active=false;
        }
        return true;
        
        if (record->event.pressed && !alt_tab_active) {
            tap_code(KC_ENT);
        }
        return true;
    }
    return true;
};