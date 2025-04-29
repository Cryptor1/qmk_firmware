// Cryptor Generic Keymap Blocks
// Qwerty
#define QWERTY_L_R5 _______,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5
#define QWERTY_R_R5 KC_6,     KC_7,    KC_8,    KC_9,    KC_0,    RIP
#define QWERTY_L_R4 TD(EXIT), KC_Q,    KC_W,    KC_E,    KC_R,    KC_T
#define QWERTY_R_R4 KC_Y,     KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC
#define QWERTY_L_R3 TD(CAPS), KC_A,    HOME_S,  HOME_D,  HOME_F,  KC_G
#define QWERTY_R_R3 KC_H,     HOME_J,  HOME_K,  HOME_L,  KC_SCLN, KC_QUOT
#define QWERTY_L_R2 SHFT,     KC_Z,    KC_X,    KC_C,    KC_V,    KC_B  
#define QWERTY_R_R2 KC_N,     KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_ENT
#define QWERTY_L_R1 _______,  KC_MPLY, KC_MNXT, _______, LOWER,   SPCNAV
#define QWERTY_R_R1 WORDBSPC, RAISE,   KC_PSCR, GMG,     BBACK,   BFORWARD
//Lower Layer
#define LOWER_L_R5 _______, _______, KC_MPRV, KC_MNXT, KC_MPLY, _______
#define LOWER_R_R5 _______, KC_NUM,  KC_PSLS, KC_PAST, KC_PMNS, _______
#define LOWER_L_R4 CLOSE,   SWAP_L,  SNAP_L,  SNAP_R,  SWAP_R,  _______
#define LOWER_R_R4 _______, KC_P7,   KC_P8,   KC_P9,   KC_PPLS, KC_TRNS
#define LOWER_L_R3 WINCLS,  KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_ENT
#define LOWER_R_R3 _______, KC_P4,   KC_P5,   KC_P6,   KC_PPLS, _______
#define LOWER_L_R2 MINALL,  KC_HOME, MINI,    MAXI,    KC_END,  _______
#define LOWER_R_R2 _______, KC_P1,   KC_P2,   KC_P3,   KC_ENT,  _______
#define LOWER_L_R1 _______, _______, _______, _______, KC_TRNS, _______
#define LOWER_R_R1 KC_LSFT, KC_P0,   KC_P0,   KC_PDOT, KC_ENT, _______
//Raise Layer
#define RAISE_L_R5 _______, _______, _______, _______, _______, _______
#define RAISE_R_R5 _______, _______, _______, _______, _______, _______
#define RAISE_L_R4 KC_GRV,  KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC
#define RAISE_R_R4 KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_DEL
#define RAISE_L_R3 _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5
#define RAISE_R_R3 KC_F6,   KC_MINS, KC_EQL,  KC_LBRC, KC_RBRC, KC_BSLS
#define RAISE_L_R2 KC_CAPS, KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11
#define RAISE_R_R2 KC_F12,  KC_UNDS, KC_PLUS, KC_LCBR, KC_RCBR, _______
#define RAISE_L_R1 _______, _______, _______, _______, _______, _______
#define RAISE_R_R1 _______, KC_TRNS, _______, _______, _______, QK_BOOT
//Navigation Layer
#define NAV_L_R5 _______, _______,    _______,     _______,    _______,     _______
#define NAV_R_R5 _______, _______,    _______,     _______,    _______,     _______
#define NAV_L_R4 _______, BBACK,      KC_PGDN,     KC_PGUP,    BFORWARD,    NEWTAB
#define NAV_R_R4 _______, _______,    _______,     _______,    _______,     _______
#define NAV_L_R3 _______, WORDLEFT,   KC_DOWN,     KC_UP,      WORDRIGHT,   _______
#define NAV_R_R3 _______, _______,    _______,     _______,    _______,     _______
#define NAV_L_R2 _______, _______,    _______,     _______,    _______,     _______
#define NAV_R_R2 _______, _______,    _______,     _______,    _______,     _______
#define NAV_L_R1 _______, _______,    _______,     _______,    _______,     KC_TRNS
#define NAV_R_R1 _______, _______,    _______,     _______,    _______,     _______
// Template Layer for Future Use
#define GMG_L_R5 KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
#define GMG_R_R5 KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
#define GMG_L_R4 KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
#define GMG_R_R4 KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
#define GMG_L_R3 KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,    KC_TRNS
#define GMG_R_R3 KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
#define GMG_L_R2 KC_LSFT, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
#define GMG_R_R2 KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
#define GMG_L_R1 KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
#define GMG_R_R1 KC_TRNS, KC_TRNS, KC_TRNS, GMG,     KC_TRNS, KC_TRNS
