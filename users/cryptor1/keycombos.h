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
  SAVE,
  REGEN,
  NEW,
  UNDO,
  DRAW,
  SPCNAV,
  NEWTAB,
  WORDRIGHT,
  WORDLEFT
};

// Windows Nagivaton Mapkeys
#define CLOSE LALT(KC_F4) // Kill applications
#define SNAP_L LGUI(KC_LEFT) // Snap window to left side of display
#define SNAP_R LGUI(KC_RGHT) // Snap window to right side of display
#define MINI LGUI(KC_DOWN) // Shrink window
#define MAXI LGUI(KC_UP) // Maximize window
#define WINCLS LCTL(KC_W) // Close a single web browser window
#define SWAP_L SGUI(KC_LEFT) // Swap application to left display
#define SWAP_R SGUI(KC_RGHT) // Swap application to right display
#define MINALL LGUI(KC_M) // Minimize all open applications

// Internet Browser Nagivation
#define BBACK LALT(KC_LEFT) // Back in Browser
#define BFORWARD LALT(KC_RIGHT) // Forward in Browser
#define NEWTAB LCTL(KC_T) // Make New Tab in Internet Browser

// Text Navigation
#define WORDLEFT LCTL(KC_LEFT) //Move to previous word in text
#define WORDRIGHT LCTL(KC_RIGHT) //Move to next word in text

// Misc
#define WORDBSPC LCTL(KC_BSPC) //Delete entire last word

// PTC Creo
#define OPEN LCTL(KC_O) // Creo 'open file'
#define SAVE LCTL(KC_S) // Creo 'save file'
#define REGEN LCTL(KC_G) // Creo 'save file'
#define NEW LCTL(KC_N) // Creo 'new file'
#define UNDO LCTL(KC_Z) // Windows 'redo' command

// Homerow Mods for LH and RH
#define HOME_L LGUI_T(KC_L) // Home Row Mod Tap GUI
#define HOME_K LALT_T(KC_K) // Home Row Mod Tap Alt
#define HOME_J LCTL_T(KC_J) // Home Row Mod Tap Control
#define HOME_S LGUI_T(KC_S) // Home Row Mod Tap GUI
#define HOME_D LALT_T(KC_D) // Home Row Mod Tap Alt
#define HOME_F LCTL_T(KC_F) // Home Row Mod Tap Control

// Layer Combinations
#define RAISE MO(_RAISE) // Raise Layer
#define LOWER MO(_LOWER) // Lower Layer
#define DRAW TO(_DRAW) // Draw Layer
#define GMG TO(_GMG) // Gaming Layer
#define SHFT OSM(MOD_LSFT) //OSM Left Shift
#define BKRAISE LT(_RAISE,KC_BSPC) // Backspace on tap & Raise layer on hold
#define SPCNAV LT(_NAV,KC_SPC) //Space on tap & Nav layer on hold