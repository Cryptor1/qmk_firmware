# Cryptor1 Userspace

### Keyboards
- OLKB Planck Rev. 6
    - MT3 Godspeed, Lubed YOK Polar Panda Switches
- OLKB Preonic Rev. 3
    - SA Carbon, Lubed Gateron Yellows
- Keeb.io Iris Rev. 4
    - MT3 dev/tty, Lubed MX Silent Blacks

### Files

The goal was to build a common userspace that can house keymap 'chunks' that can be maintained flashed to various my keyboards (above). This userspace contains separate files for:
- Shared keymap 'chunks' that can be maintained in this userspace and flashed to multiple keyboards
    - Goal is to have the same keymap across 3 different, ortholinear keyboards
- Macros
- Encoder functions
    - single encoder functions for Planck and Preonic
    - dual encoder functions for Iris
- Tap Dance functions
- Shared config, rules.mk, and layers
