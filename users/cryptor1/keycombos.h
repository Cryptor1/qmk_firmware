// Cryptor1 Key Combo Definitions

enum custom_keycodes {
  POP=SAFE_RANGE,
  RIP,
  CLOSE,
  SNAP_L,
  SNAP_R,
  MINI,
  MAXI,
  WINCLS,
  SWAP_L,
  SWAP_R,
  MINALL,
  RAISE,
  SHFT,
  PREONIC,
  IRIS,
  IRTOG,
  ALT1,
  SAVE,
  REGEN,
  NEW,
  UNDO,
  SSHOT,
  RN_1,
  RN_2,
  RN_3,
  RN_4,
  MUSIC,
  MOUSE,
  DRAW
};

// Key Combo Definitions
#define CLOSE LALT(KC_F4) // Kill applications
#define SNAP_L LGUI(KC_LEFT) // Snap window to left side of display
#define SNAP_R LGUI(KC_RGHT) // Snap window to right side of display
#define MINI LGUI(KC_DOWN) // Shrink window
#define MAXI LGUI(KC_UP) // Maximize window
#define WINCLS LCTL(KC_W) // Close a single web browser window
#define SWAP_L SGUI(KC_LEFT) // Swap application to left display
#define SWAP_R SGUI(KC_RGHT) // Swap application to right display
#define MINALL LGUI(KC_M) // Minimize all open applications 
#define CTLENT CTL_T(KC_ENT) // Enter on tap & Control on hold (for split spacebar)
#define BKRAISE LT(_RAISE,KC_BSPC) // Backspace on tap & Raise layer on hold
#define TSKMNGR LCA(KC_DEL) // Control + Alt + Delete = Task Manager
#define SLEFT LSFT(KC_LEFT) // Select Left
#define SUP LSFT(KC_UP) // Select Up
#define SRGHT LSFT(KC_RGHT) // Select Right
#define SDWN LSFT(KC_DOWN) // Select Down
#define OPEN LCTL(KC_O) // Creo 'open file'
#define SAVE LCTL(KC_S) // Creo 'save file'
#define REGEN LCTL(KC_G) // Creo 'save file'
#define NEW LCTL(KC_N) // Creo 'new file'
#define UNDO LCTL(KC_Z) // Windows 'redo' command
#define SSHOT SGUI(KC_S) // Windows Screenshot
#define HOME_L LGUI_T(KC_L) // Home Row Mod Tap GUI
#define HOME_K LALT_T(KC_K) // Home Row Mod Tap Alt
#define HOME_J LCTL_T(KC_J) // Home Row Mod Tap Control
#define HOME_S LGUI_T(KC_S) // Home Row Mod Tap GUI
#define HOME_D LALT_T(KC_D) // Home Row Mod Tap Alt
#define HOME_F LCTL_T(KC_F) // Home Row Mod Tap Control
#define BBACK LALT(KC_LEFT) // Back in Browser
#define BFORWARD LALT(KC_RIGHT) // Forward in Browser
#define ZOOMIN LCTL(KC_MS_WH_UP) 
#define ZOOMOUT LCTL(KC_MS_WH_DOWN)

// Layer Combinations
#define RAISE MO(_RAISE) // Raise Layer
#define LOWER MO(_LOWER) // Lower Layer
#define DRAW MO(_DRAW) // Draw Layer
#define SHFT OSM(MOD_LSFT) //OSM Left Shift