// Cryptor1 Macros

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
    case RIP:
        if (record->event.pressed) {
            // when keycode RIP is pressed
            SEND_STRING(SS_LCTL("a") SS_TAP(X_BSPC));
        } else {
            // when keycode QMKBEST is released
        }
        break;
    }
    return true;
};