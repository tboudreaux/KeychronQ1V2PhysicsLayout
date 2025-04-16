# Simple QMK layout for physics input

A simple QMK layout to make typing symbols useful for physics and astronomy somewhat more straigtforward on a Keychron Q1V2 ansi_encoder board. Note that this will only work with that exact board and with a mac. The code is straightfoward though and should be easy to adapt to other systems or boards if one wishes. 

# To install
let `<qmk>` be the path to your qmk root firmware directory...

In order to flash this to your board follow these steps:
```bash
git clone https://github.com/tboudreaux/KeychronQ1V2PhysicsLayout.git
mkdir <qmk>/keyboards/keychron/q1v2/ansi_encoder/keymaps/physics
cp KeychronQ1V2PhysicsLayout/src/* <qmk>/keyboards/keychron/q1v2/ansi_encoder/keymaps/physics/
cp <qmk>
MAKEFLAGS="-j" qmk compile -kb keychron/q1v2/ansi_encoder -km physics
```

Then unplug your keyboard, hold down the ESC key and, while still holding it down plug it back in. Ensure that you cannot type and the backlight is not on

You will then need a second keyboard to type this in (or use the onscreen keyboard)
```bash
qmk flash -kb keychron/q1v2/ansi_encoder -km physics
```

Finally, you need to go into MacOS system settings>Keyboard>Input Sources and enable Unicode Hex Input. 

# Usage
All keys are accessed by `<home>-key`, so for example θ would be `<home>-t`.

# Notes
You cannot have any keyboard shortcuts with interfear with `<alt>-<code-point>`. QMK broadcasts unicode as a series of key presses (i.e. 0x0330 is broadcast as 0, 3, 3, 0) + a leader key. On MacOS this is `<alt>/<option>`. If you have a keyshortcut which intercepts these code points then the charecter will fail to write and you will get gibbrish. Personally I have a few keyshortcuts set up like `<alt>-<left>` for window movment, these are okay since no unicode charecter is going to broadcast `<left>`. However, you could not have say `<alt>-F` because every time a F is in the hex representation that will fail. 

# Keymap
- home: Switch to physics layer
- q: ϙ
- w: ω
- e: ε
- r: ρ
- t: θ
- y: ψ
- u: υ
- i: ι
- o: ο
- p: π
- a: α
- s: σ
- d: δ
- f: δ
- g: γ
- h: η
- j: ι
- k: κ
- l: λ
- z: ζ
- x: ξ
- c: χ
- v: τ
- b: β
- n: ν
- m: μ
- 1: ∫
- 2: ∮
- 7: ∈
- 8: ∩
- 9: ⎡
- 0: ⎤
- [: ⎣
- ]: ⎦
- -: ±
- =: ∑
