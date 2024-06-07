# Introduction

This is a OSU!mania 7 key keypad [QMK based keyboard](https://github.com/qmk/qmk_firmware) created by [me](https://www.youtube.com/channel/UCfn845tEa2im_Ps_k-prNCw).

You can put it in the "keyboard" folder and compile it with [QMK MSYS](https://msys.qmk.fm/)

I probably not gonna post the details of my physical keyboard build as

the size and placement of the keys are created by my taste.

I recommend you to design the physical machine by your likeings

Default :

```cmd
qmk compile -kb akouzosu7 -km default
```

VIA :

```cmd
qmk compile -kb akouzosu7 -km via
```

## Feature

- Microcontroller : [Atmega32u4](https://www.alldatasheet.com/datasheet-pdf/pdf/241057/ATMEL/ATMEGA32U4.html) (pro micro as dev board)
- CPU frequency : 16 Mhz
- It have a 1ms delay / 1000hz pull rate (theoretically)
- Only one layer avalible
- Matrix pins :

```json
"matrix_pins": {
        "cols": ["D0","D4","C6", "D7", "E6", "B4", "B5"],
        "rows": ["B2"]
    },

"diode_direction": "COL2ROW"
```

- Mapped keys :
  - A
  - S
  - D
  - Space
  - K
  - L
  - ;

- LED used : [ws2812b 2020](https://www.alldatasheet.com/datasheet-pdf/pdf/1134522/WORLDSEMI/WS2812B-2020.html)
- RGB matrix driver : WS2812
- WS2812 data pin : B1
- [VIA](https://usevia.app) supported

## Cosmetic feature

- 3 included qmk default RGB matrix animation :
  
  - Breathing
  - Rainbow moving chevron
  - Solid reactive simple

## Custom changes could be made

### Changing default mapped key

While the keys could be change through [VIA](https://usevia.app)

You might want to change the default settings

You can change them in keymap.c file, keycode could be found in [QMK documentation](https://docs.qmk.fm/keycodes_basic)

```C
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_BASE] = LAYOUT_akouz_7k(
  KC_A, KC_S, KC_D, KC_SPC, KC_K, KC_L, KC_SCLN
  )
}
```

### Adding new RGB matrix animation

You can add QMK default RGB matrix animations by defining in config.h file

Further informatation in [QMK documentation](https://docs.qmk.fm/features/rgb_matrix)

```h
#define ENABLE_RGB_MATRIX_BREATHING
```

You need to change the via.json file so that the effect could be choosen through VIA

Changes can refer to [VIA documentation](https://www.caniusevia.com/docs/built_in_menus)

```json
"label": "Effect",
"type": "dropdown",
"content": ["id_qmk_rgb_matrix_effect", 3, 2],
"options": [
  "All Off",
  "Solid Color",
  "Breathing",
  "Rainbow Moving Chevron",
  "Solid Reactive Simple"
]
```
