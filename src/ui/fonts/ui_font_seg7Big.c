/*******************************************************************************
 * Size: 34 px
 * Bpp: 1
 * Opts: --bpp 1 --size 34 --font /home/osboxes/SquareLine/assets/Seven Segment.ttf -o /home/osboxes/SquareLine/assets/ui_font_seg7Big.c --format lvgl -r 0x20-0x7f --no-compress --no-prefilter
 ******************************************************************************/

#include "../ui.h"

#ifndef UI_FONT_SEG7BIG
#define UI_FONT_SEG7BIG 1
#endif

#if UI_FONT_SEG7BIG

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */
    0x0,

    /* U+0021 "!" */
    0xbf, 0xff, 0xff, 0xff, 0xfc, 0x3e,

    /* U+0022 "\"" */
    0x6, 0xf6,

    /* U+0023 "#" */
    0x0, 0x0, 0x7, 0x30, 0xc, 0xe0, 0x19, 0x80,
    0x73, 0xf, 0xff, 0x9f, 0xff, 0x7, 0x30, 0xc,
    0xe0, 0x19, 0x81, 0xff, 0xf3, 0xff, 0xe1, 0x98,
    0x7, 0x70, 0xc, 0xc0, 0x19, 0x80, 0x22, 0x0,

    /* U+0024 "$" */
    0x6, 0x0, 0x60, 0x6, 0x3, 0xfc, 0x3f, 0xcc,
    0x0, 0xc0, 0xc, 0x0, 0xc0, 0xc, 0x0, 0xc0,
    0xc, 0x0, 0xc0, 0xc, 0x0, 0x3f, 0xc3, 0xfc,
    0x0, 0x30, 0x3, 0x0, 0x30, 0x3, 0x0, 0x30,
    0x3, 0x0, 0x30, 0x3, 0x0, 0x33, 0xfc, 0x3f,
    0xc0, 0x60, 0x6, 0x0, 0x60,

    /* U+0025 "%" */
    0x0, 0x0, 0x80, 0x0, 0x18, 0x0, 0x3, 0x80,
    0x0, 0x30, 0x7c, 0x7, 0x8, 0x20, 0x60, 0x82,
    0xe, 0x8, 0x20, 0xc0, 0x82, 0x1c, 0x8, 0x23,
    0x80, 0x82, 0x30, 0x7, 0xc7, 0x0, 0x0, 0x60,
    0x0, 0xe, 0x3e, 0x0, 0xc4, 0x10, 0x1c, 0x41,
    0x3, 0x84, 0x10, 0x30, 0x41, 0x7, 0x4, 0x10,
    0x60, 0x41, 0xe, 0x3, 0xe0, 0xc0, 0x0, 0x1c,
    0x0, 0x1, 0x80, 0x0, 0x10, 0x0, 0x0,

    /* U+0026 "&" */
    0x3f, 0xe0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x3, 0xfe, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0xc0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0xc, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xc0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xc,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0xc0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0xc, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0xc0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0xc, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xc0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x3, 0xfe, 0x3, 0xfe, 0x3, 0xfe, 0x3, 0xfc,
    0x1, 0xff, 0x3f, 0xe0, 0x3f, 0xe0, 0x3f, 0xe0,
    0x3f, 0xc0, 0x1f, 0xfc, 0x0, 0xc, 0x0, 0xc,
    0x0, 0xc, 0x3, 0x6, 0x0, 0xc0, 0x0, 0xc0,
    0x0, 0xc0, 0x0, 0xc0, 0x30, 0x60, 0xc, 0x0,
    0xc, 0x0, 0xc, 0x0, 0xc, 0x3, 0x6, 0x0,
    0xc0, 0x0, 0xc0, 0x0, 0xc0, 0x0, 0xc0, 0x30,
    0x60, 0xc, 0x0, 0xc, 0x0, 0xc, 0x0, 0xc,
    0x3, 0x6, 0x0, 0xc0, 0x0, 0xc0, 0x0, 0xc0,
    0x0, 0xc0, 0x30, 0x60, 0xc, 0x0, 0xc, 0x0,
    0xc, 0x0, 0xc, 0x3, 0x6, 0x0, 0xc0, 0x0,
    0xc0, 0x0, 0xc0, 0x0, 0xc0, 0x30, 0x60, 0xc,
    0x0, 0xc, 0x0, 0xc, 0x0, 0xc, 0x3, 0x6,
    0x0, 0x3f, 0xe0, 0xc0, 0x0, 0xc0, 0x0, 0x3f,
    0xc0, 0x60, 0x3, 0xfe, 0xc, 0x0, 0xc, 0x0,
    0x3, 0xfc, 0x6, 0x0,

    /* U+0028 "(" */
    0x3f, 0x1f, 0xb0, 0x18, 0xc, 0x6, 0x3, 0x1,
    0x80, 0xc0, 0x60, 0x30, 0x0, 0x0, 0x6, 0x3,
    0x1, 0x80, 0xc0, 0x60, 0x30, 0x18, 0xc, 0x6,
    0x0, 0xfc, 0x7e,

    /* U+0029 ")" */
    0x7e, 0x3f, 0x0, 0x60, 0x30, 0x18, 0xc, 0x6,
    0x3, 0x1, 0x80, 0xc0, 0x60, 0x0, 0x0, 0xc,
    0x6, 0x3, 0x1, 0x80, 0xc0, 0x60, 0x30, 0x18,
    0xd, 0xf8, 0xfc,

    /* U+002A "*" */
    0x0, 0x3, 0x0, 0xc3, 0xb7, 0xff, 0xcf, 0xc3,
    0xf3, 0xff, 0xed, 0xc3, 0x0, 0xc0, 0x0,

    /* U+002B "+" */
    0x0, 0xc0, 0x0, 0x30, 0x0, 0xc, 0x0, 0x3,
    0x0, 0x0, 0xc0, 0x0, 0x30, 0x0, 0xc, 0x0,
    0x3, 0x0, 0xff, 0x3f, 0xff, 0xcf, 0xf0, 0xc,
    0x0, 0x3, 0x0, 0x0, 0xc0, 0x0, 0x30, 0x0,
    0xc, 0x0, 0x3, 0x0, 0x0, 0xc0, 0x0, 0x30,
    0x0,

    /* U+002C "," */
    0x37, 0xec,

    /* U+002D "-" */
    0x7f, 0x9f, 0xe0,

    /* U+002E "." */
    0xf8,

    /* U+002F "/" */
    0x0, 0x4, 0x0, 0x30, 0x1, 0xc0, 0x6, 0x0,
    0x38, 0x0, 0xc0, 0x7, 0x0, 0x18, 0x0, 0xe0,
    0x7, 0x0, 0x18, 0x0, 0x40, 0x0, 0x0, 0x18,
    0x0, 0x60, 0x3, 0x80, 0x1c, 0x0, 0x60, 0x3,
    0x80, 0xc, 0x0, 0x70, 0x1, 0x80, 0xe, 0x0,
    0x30, 0x0,

    /* U+0030 "0" */
    0x3f, 0xe1, 0xff, 0x30, 0x7, 0x80, 0x3c, 0x1,
    0xe0, 0xf, 0x0, 0x78, 0x3, 0xc0, 0x1e, 0x0,
    0xf0, 0x6, 0x0, 0x0, 0x0, 0x60, 0xf, 0x0,
    0x78, 0x3, 0xc0, 0x1e, 0x0, 0xf0, 0x7, 0x80,
    0x3c, 0x1, 0xe0, 0xc, 0xff, 0x87, 0xfc,

    /* U+0031 "1" */
    0xbf, 0xff, 0xfc, 0x3f, 0xff, 0xfe,

    /* U+0032 "2" */
    0x3f, 0xe1, 0xff, 0x0, 0x6, 0x0, 0x30, 0x1,
    0x80, 0xc, 0x0, 0x60, 0x3, 0x0, 0x18, 0x0,
    0xc0, 0x6, 0x7f, 0xc3, 0xfe, 0x60, 0x3, 0x0,
    0x18, 0x0, 0xc0, 0x6, 0x0, 0x30, 0x1, 0x80,
    0xc, 0x0, 0x60, 0x0, 0xff, 0x87, 0xfc,

    /* U+0033 "3" */
    0xff, 0x9f, 0xf0, 0x1, 0x80, 0x30, 0x6, 0x0,
    0xc0, 0x18, 0x3, 0x0, 0x60, 0xc, 0x1, 0xff,
    0xcf, 0xf8, 0x0, 0xc0, 0x18, 0x3, 0x0, 0x60,
    0xc, 0x1, 0x80, 0x30, 0x6, 0x0, 0xff, 0xe7,
    0xfc,

    /* U+0034 "4" */
    0x0, 0x6, 0x0, 0xf0, 0x7, 0x80, 0x3c, 0x1,
    0xe0, 0xf, 0x0, 0x78, 0x3, 0xc0, 0x1e, 0x0,
    0xf0, 0x6, 0x7f, 0xc3, 0xfe, 0x0, 0xc, 0x0,
    0x60, 0x3, 0x0, 0x18, 0x0, 0xc0, 0x6, 0x0,
    0x30, 0x1, 0x80, 0xc, 0x0, 0x60, 0x0,

    /* U+0035 "5" */
    0x3f, 0xe1, 0xff, 0x30, 0x1, 0x80, 0xc, 0x0,
    0x60, 0x3, 0x0, 0x18, 0x0, 0xc0, 0x6, 0x0,
    0x30, 0x0, 0x7f, 0xc3, 0xfe, 0x0, 0xc, 0x0,
    0x60, 0x3, 0x0, 0x18, 0x0, 0xc0, 0x6, 0x0,
    0x30, 0x1, 0x80, 0xc, 0xff, 0x87, 0xfc,

    /* U+0036 "6" */
    0x3f, 0xe1, 0xff, 0x30, 0x1, 0x80, 0xc, 0x0,
    0x60, 0x3, 0x0, 0x18, 0x0, 0xc0, 0x6, 0x0,
    0x30, 0x0, 0x7f, 0xc3, 0xfe, 0x60, 0xf, 0x0,
    0x78, 0x3, 0xc0, 0x1e, 0x0, 0xf0, 0x7, 0x80,
    0x3c, 0x1, 0xe0, 0xc, 0xff, 0x87, 0xfc,

    /* U+0037 "7" */
    0xff, 0x9f, 0xf0, 0x1, 0x80, 0x30, 0x6, 0x0,
    0xc0, 0x18, 0x3, 0x0, 0x60, 0xc, 0x1, 0x80,
    0x0, 0x0, 0x0, 0xc0, 0x18, 0x3, 0x0, 0x60,
    0xc, 0x1, 0x80, 0x30, 0x6, 0x0, 0xc0, 0x18,
    0x0,

    /* U+0038 "8" */
    0x3f, 0xe1, 0xff, 0x30, 0x7, 0x80, 0x3c, 0x1,
    0xe0, 0xf, 0x0, 0x78, 0x3, 0xc0, 0x1e, 0x0,
    0xf0, 0x6, 0x7f, 0xc3, 0xfe, 0x60, 0xf, 0x0,
    0x78, 0x3, 0xc0, 0x1e, 0x0, 0xf0, 0x7, 0x80,
    0x3c, 0x1, 0xe0, 0xc, 0xff, 0x87, 0xfc,

    /* U+0039 "9" */
    0x3f, 0xe1, 0xff, 0x30, 0x7, 0x80, 0x3c, 0x1,
    0xe0, 0xf, 0x0, 0x78, 0x3, 0xc0, 0x1e, 0x0,
    0xf0, 0x6, 0x7f, 0xc3, 0xfe, 0x0, 0xc, 0x0,
    0x60, 0x3, 0x0, 0x18, 0x0, 0xc0, 0x6, 0x0,
    0x30, 0x1, 0x80, 0xc, 0xff, 0x87, 0xfc,

    /* U+003A ":" */
    0x3c, 0x3, 0xe0,

    /* U+003C "<" */
    0x8, 0x71, 0x86, 0x38, 0xc7, 0x18, 0x63, 0x8c,
    0x0, 0x3, 0xe, 0x18, 0x61, 0xc3, 0xe, 0x18,
    0x61, 0xc2,

    /* U+003D "=" */
    0x7f, 0xfc, 0xff, 0xf8, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x1f, 0xff, 0x3f, 0xfe,

    /* U+003E ">" */
    0xc3, 0xe, 0x18, 0x70, 0xc3, 0xe, 0x18, 0x70,
    0xc0, 0x0, 0x31, 0xc6, 0x38, 0xc3, 0x1c, 0x63,
    0x8c, 0x30,

    /* U+003F "?" */
    0x3f, 0xe1, 0xff, 0x0, 0x6, 0x0, 0x30, 0x1,
    0x80, 0xc, 0x0, 0x60, 0x3, 0x0, 0x18, 0x0,
    0xc0, 0x6, 0x7f, 0xc3, 0xfe, 0x60, 0x3, 0x0,
    0x18, 0x0, 0xc0, 0x6, 0x0, 0x30, 0x0, 0x0,
    0x0, 0x0, 0x60, 0x3, 0x0, 0x0, 0x0,

    /* U+0040 "@" */
    0x3f, 0xe1, 0xff, 0x30, 0x7, 0x80, 0x3c, 0x1,
    0xe0, 0xf, 0xf, 0xf8, 0x7f, 0xcc, 0x1e, 0x60,
    0xf3, 0x6, 0x18, 0x0, 0xc0, 0x66, 0xf, 0x30,
    0x79, 0x83, 0xcc, 0x1e, 0x1f, 0x30, 0xf9, 0x80,
    0xc, 0x0, 0x60, 0x0, 0xff, 0x87, 0xfc,

    /* U+0041 "A" */
    0x3f, 0xe1, 0xff, 0x30, 0x7, 0x80, 0x3c, 0x1,
    0xe0, 0xf, 0x0, 0x78, 0x3, 0xc0, 0x1e, 0x0,
    0xf0, 0x6, 0x7f, 0xc3, 0xfe, 0x60, 0xf, 0x0,
    0x78, 0x3, 0xc0, 0x1e, 0x0, 0xf0, 0x7, 0x80,
    0x3c, 0x1, 0xe0, 0xf, 0x0, 0x60, 0x0,

    /* U+0042 "B" */
    0x7f, 0xe5, 0xff, 0x30, 0x7, 0x80, 0x3c, 0x1,
    0xe0, 0xf, 0x0, 0x78, 0x3, 0xc0, 0x1e, 0x0,
    0xf0, 0x6, 0x7f, 0xc3, 0xfe, 0x60, 0xf, 0x0,
    0x78, 0x3, 0xc0, 0x1e, 0x0, 0xf0, 0x7, 0x80,
    0x3c, 0x1, 0xe0, 0xe, 0xff, 0x8f, 0xfc,

    /* U+0043 "C" */
    0x3f, 0xe7, 0xff, 0x0, 0x60, 0xc, 0x1, 0x80,
    0x30, 0x6, 0x0, 0xc0, 0x18, 0x3, 0x0, 0x0,
    0x0, 0x1, 0x80, 0x30, 0x6, 0x0, 0xc0, 0x18,
    0x3, 0x0, 0x60, 0xc, 0x1, 0x80, 0xf, 0xf9,
    0xff,

    /* U+0044 "D" */
    0x7f, 0xe5, 0xff, 0x30, 0x7, 0x80, 0x3c, 0x1,
    0xe0, 0xf, 0x0, 0x78, 0x3, 0xc0, 0x1e, 0x0,
    0xf0, 0x6, 0x0, 0x0, 0x0, 0x60, 0xf, 0x0,
    0x78, 0x3, 0xc0, 0x1e, 0x0, 0xf0, 0x7, 0x80,
    0x3c, 0x1, 0xe0, 0xe, 0xff, 0x8f, 0xfc,

    /* U+0045 "E" */
    0x3f, 0xe7, 0xff, 0x0, 0x60, 0xc, 0x1, 0x80,
    0x30, 0x6, 0x0, 0xc0, 0x18, 0x3, 0x0, 0x1f,
    0xf3, 0xff, 0x80, 0x30, 0x6, 0x0, 0xc0, 0x18,
    0x3, 0x0, 0x60, 0xc, 0x1, 0x80, 0xf, 0xf9,
    0xff,

    /* U+0046 "F" */
    0x3f, 0xe7, 0xff, 0x0, 0x60, 0xc, 0x1, 0x80,
    0x30, 0x6, 0x0, 0xc0, 0x18, 0x3, 0x0, 0x1f,
    0xf3, 0xff, 0x80, 0x30, 0x6, 0x0, 0xc0, 0x18,
    0x3, 0x0, 0x60, 0xc, 0x1, 0x80, 0x30, 0x0,
    0x0,

    /* U+0047 "G" */
    0x3f, 0xe1, 0xff, 0x30, 0x1, 0x80, 0xc, 0x0,
    0x60, 0x3, 0x0, 0x18, 0x0, 0xc0, 0x6, 0x0,
    0x30, 0x0, 0xf, 0xc0, 0x7e, 0x60, 0xf, 0x0,
    0x78, 0x3, 0xc0, 0x1e, 0x0, 0xf0, 0x7, 0x80,
    0x3c, 0x1, 0xe0, 0xc, 0xff, 0x87, 0xfc,

    /* U+0048 "H" */
    0x0, 0x6, 0x0, 0xf0, 0x7, 0x80, 0x3c, 0x1,
    0xe0, 0xf, 0x0, 0x78, 0x3, 0xc0, 0x1e, 0x0,
    0xf0, 0x6, 0x7f, 0xc3, 0xfe, 0x60, 0xf, 0x0,
    0x78, 0x3, 0xc0, 0x1e, 0x0, 0xf0, 0x7, 0x80,
    0x3c, 0x1, 0xe0, 0xf, 0x0, 0x60, 0x0,

    /* U+0049 "I" */
    0xbf, 0xff, 0xfc, 0x3f, 0xff, 0xfe,

    /* U+004A "J" */
    0x0, 0x0, 0x0, 0xc0, 0x6, 0x0, 0x30, 0x1,
    0x80, 0xc, 0x0, 0x60, 0x3, 0x0, 0x18, 0x0,
    0xc0, 0x6, 0x0, 0x0, 0x0, 0x60, 0xf, 0x0,
    0x78, 0x3, 0xc0, 0x1e, 0x0, 0xf0, 0x7, 0x80,
    0x3c, 0x1, 0xe0, 0xc, 0xff, 0x87, 0xfc,

    /* U+004B "K" */
    0x80, 0x1e, 0x1, 0xf0, 0x1d, 0x81, 0xcc, 0x1c,
    0x61, 0xc3, 0x1c, 0x19, 0xc0, 0xdc, 0x6, 0xc0,
    0x30, 0x0, 0x7f, 0xc3, 0xfe, 0x60, 0xf, 0x0,
    0x78, 0x3, 0xc0, 0x1e, 0x0, 0xf0, 0x7, 0x80,
    0x3c, 0x1, 0xe0, 0xf, 0x0, 0x60, 0x0,

    /* U+004C "L" */
    0x0, 0x18, 0x3, 0x0, 0x60, 0xc, 0x1, 0x80,
    0x30, 0x6, 0x0, 0xc0, 0x18, 0x3, 0x0, 0x0,
    0x0, 0x1, 0x80, 0x30, 0x6, 0x0, 0xc0, 0x18,
    0x3, 0x0, 0x60, 0xc, 0x1, 0x80, 0xf, 0xf9,
    0xff,

    /* U+004D "M" */
    0x3f, 0x9f, 0xc3, 0xf9, 0xfc, 0xc0, 0x60, 0x3c,
    0x6, 0x3, 0xc0, 0x60, 0x3c, 0x6, 0x3, 0xc0,
    0x60, 0x3c, 0x6, 0x3, 0xc0, 0x60, 0x3c, 0x6,
    0x3, 0xc0, 0x60, 0x30, 0x0, 0x0, 0x0, 0x0,
    0xc, 0x0, 0x3, 0xc0, 0x0, 0x3c, 0x0, 0x3,
    0xc0, 0x0, 0x3c, 0x0, 0x3, 0xc0, 0x0, 0x3c,
    0x0, 0x3, 0xc0, 0x0, 0x3c, 0x0, 0x3, 0xc0,
    0x0, 0x30, 0x0, 0x0,

    /* U+004E "N" */
    0x3f, 0xe1, 0xff, 0x30, 0x7, 0x80, 0x3c, 0x1,
    0xe0, 0xf, 0x0, 0x78, 0x3, 0xc0, 0x1e, 0x0,
    0xf0, 0x6, 0x0, 0x0, 0x0, 0x60, 0xf, 0x0,
    0x78, 0x3, 0xc0, 0x1e, 0x0, 0xf0, 0x7, 0x80,
    0x3c, 0x1, 0xe0, 0xf, 0x0, 0x60, 0x0,

    /* U+004F "O" */
    0x3f, 0xe1, 0xff, 0x30, 0x7, 0x80, 0x3c, 0x1,
    0xe0, 0xf, 0x0, 0x78, 0x3, 0xc0, 0x1e, 0x0,
    0xf0, 0x6, 0x0, 0x0, 0x0, 0x60, 0xf, 0x0,
    0x78, 0x3, 0xc0, 0x1e, 0x0, 0xf0, 0x7, 0x80,
    0x3c, 0x1, 0xe0, 0xc, 0xff, 0x87, 0xfc,

    /* U+0050 "P" */
    0x3f, 0xe1, 0xff, 0x30, 0x7, 0x80, 0x3c, 0x1,
    0xe0, 0xf, 0x0, 0x78, 0x3, 0xc0, 0x1e, 0x0,
    0xf0, 0x6, 0x7f, 0xc3, 0xfe, 0x60, 0x3, 0x0,
    0x18, 0x0, 0xc0, 0x6, 0x0, 0x30, 0x1, 0x80,
    0xc, 0x0, 0x60, 0x3, 0x0, 0x0, 0x0,

    /* U+0051 "Q" */
    0x3f, 0xe1, 0xff, 0x30, 0x7, 0x80, 0x3c, 0x1,
    0xe0, 0xf, 0x0, 0x78, 0x3, 0xc0, 0x1e, 0x0,
    0xf0, 0x6, 0x0, 0x0, 0x0, 0x60, 0xf, 0x0,
    0x78, 0x3, 0xc0, 0x1e, 0x0, 0xf0, 0x7, 0x80,
    0x3c, 0x7, 0x60, 0x1c, 0xff, 0x67, 0xf8,

    /* U+0052 "R" */
    0x3f, 0xe1, 0xff, 0x30, 0x7, 0x80, 0x3c, 0x1,
    0xe0, 0xf, 0x0, 0x78, 0x3, 0xc0, 0x1e, 0x0,
    0xf0, 0x6, 0x7f, 0xc3, 0xfe, 0x60, 0x3, 0x60,
    0x1b, 0x80, 0xce, 0x6, 0x38, 0x30, 0xe1, 0x83,
    0x8c, 0xe, 0x60, 0x3b, 0x0, 0xf0, 0x3,

    /* U+0053 "S" */
    0x3f, 0xe1, 0xff, 0x30, 0x1, 0x80, 0xc, 0x0,
    0x60, 0x3, 0x0, 0x18, 0x0, 0xc0, 0x6, 0x0,
    0x30, 0x0, 0x7f, 0xc3, 0xfe, 0x0, 0xc, 0x0,
    0x60, 0x3, 0x0, 0x18, 0x0, 0xc0, 0x6, 0x0,
    0x30, 0x1, 0x80, 0xc, 0xff, 0x87, 0xfc,

    /* U+0054 "T" */
    0x7e, 0x7e, 0x7e, 0x7e, 0x1, 0x80, 0x1, 0x80,
    0x1, 0x80, 0x1, 0x80, 0x1, 0x80, 0x1, 0x80,
    0x1, 0x80, 0x1, 0x80, 0x1, 0x80, 0x0, 0x0,
    0x0, 0x0, 0x1, 0x80, 0x1, 0x80, 0x1, 0x80,
    0x1, 0x80, 0x1, 0x80, 0x1, 0x80, 0x1, 0x80,
    0x1, 0x80, 0x1, 0x80, 0x1, 0x80, 0x0, 0x0,

    /* U+0055 "U" */
    0x0, 0x6, 0x0, 0xf0, 0x7, 0x80, 0x3c, 0x1,
    0xe0, 0xf, 0x0, 0x78, 0x3, 0xc0, 0x1e, 0x0,
    0xf0, 0x6, 0x0, 0x0, 0x0, 0x60, 0xf, 0x0,
    0x78, 0x3, 0xc0, 0x1e, 0x0, 0xf0, 0x7, 0x80,
    0x3c, 0x1, 0xe0, 0xc, 0xff, 0x87, 0xfc,

    /* U+0056 "V" */
    0x0, 0x6, 0x0, 0xf0, 0x7, 0x80, 0x3c, 0x1,
    0xe0, 0xf, 0x0, 0x78, 0x3, 0xc0, 0x1e, 0x0,
    0xf0, 0x6, 0x0, 0x0, 0x0, 0x60, 0xf, 0x80,
    0xec, 0x6, 0x60, 0x33, 0x83, 0x8c, 0x18, 0x71,
    0xc1, 0x8c, 0xc, 0x60, 0x77, 0x1, 0x10,

    /* U+0057 "W" */
    0x0, 0x0, 0xc, 0x0, 0x3, 0xc0, 0x0, 0x3c,
    0x0, 0x3, 0xc0, 0x0, 0x3c, 0x0, 0x3, 0xc0,
    0x0, 0x3c, 0x0, 0x3, 0xc0, 0x0, 0x3c, 0x0,
    0x3, 0xc0, 0x0, 0x30, 0x0, 0x0, 0x0, 0x0,
    0xc, 0x6, 0x3, 0xc0, 0x60, 0x3c, 0x6, 0x3,
    0xc0, 0x60, 0x3c, 0x6, 0x3, 0xc0, 0x60, 0x3c,
    0x6, 0x3, 0xc0, 0x60, 0x3c, 0x6, 0x3, 0x3f,
    0x9f, 0xc3, 0xf9, 0xfc,

    /* U+0058 "X" */
    0xc0, 0x1e, 0x0, 0xf8, 0xe, 0xc0, 0x67, 0x7,
    0x18, 0x30, 0xc1, 0x87, 0x1c, 0x18, 0xc0, 0xe6,
    0x3, 0x60, 0x0, 0x0, 0x0, 0x6, 0xc0, 0x73,
    0x3, 0x18, 0x38, 0xe1, 0x83, 0xc, 0x18, 0xe0,
    0xe6, 0x3, 0x70, 0x1f, 0x0, 0x78, 0x3,

    /* U+0059 "Y" */
    0x0, 0x6, 0x0, 0xf0, 0x7, 0x80, 0x3c, 0x1,
    0xe0, 0xf, 0x0, 0x78, 0x3, 0xc0, 0x1e, 0x0,
    0xf0, 0x6, 0x7f, 0xc3, 0xfe, 0x0, 0xc, 0x0,
    0x60, 0x3, 0x0, 0x18, 0x0, 0xc0, 0x6, 0x0,
    0x30, 0x1, 0x80, 0xc, 0xff, 0x87, 0xfc,

    /* U+005A "Z" */
    0x7f, 0xe3, 0xff, 0x0, 0x4, 0x0, 0x60, 0x7,
    0x0, 0x30, 0x3, 0x80, 0x18, 0x1, 0xc0, 0xc,
    0x0, 0xe0, 0x0, 0x0, 0x0, 0x6, 0x0, 0x30,
    0x3, 0x80, 0x18, 0x1, 0xc0, 0xc, 0x0, 0xc0,
    0x6, 0x0, 0x20, 0x0, 0x7f, 0xc7, 0xff,

    /* U+005B "[" */
    0x7f, 0x5f, 0xb0, 0x18, 0xc, 0x6, 0x3, 0x1,
    0x80, 0xc0, 0x60, 0x30, 0x0, 0x0, 0x6, 0x3,
    0x1, 0x80, 0xc0, 0x60, 0x30, 0x18, 0xc, 0x6,
    0x2, 0xfc, 0xfe,

    /* U+005C "\\" */
    0x80, 0x3, 0x0, 0xe, 0x0, 0x18, 0x0, 0x30,
    0x0, 0xe0, 0x1, 0x80, 0x7, 0x0, 0xc, 0x0,
    0x38, 0x0, 0x60, 0x0, 0x80, 0x0, 0x0, 0x6,
    0x0, 0x1c, 0x0, 0x30, 0x0, 0xe0, 0x1, 0xc0,
    0x3, 0x0, 0xe, 0x0, 0x18, 0x0, 0x70, 0x0,
    0xc0, 0x3,

    /* U+005D "]" */
    0x7f, 0x3f, 0x40, 0x60, 0x30, 0x18, 0xc, 0x6,
    0x3, 0x1, 0x80, 0xc0, 0x60, 0x0, 0x0, 0xc,
    0x6, 0x3, 0x1, 0x80, 0xc0, 0x60, 0x30, 0x18,
    0xd, 0xfa, 0xfe,

    /* U+005E "^" */
    0x0, 0x7e, 0x0, 0x3, 0xe7, 0xc0, 0xf, 0xc3,
    0xf0, 0x7e, 0x0, 0x7e, 0xf8, 0x0, 0x1f, 0x40,
    0x0, 0x2,

    /* U+005F "_" */
    0x7f, 0xff, 0xbf, 0xff, 0xc0,

    /* U+0061 "a" */
    0x3f, 0xe1, 0xff, 0x30, 0x7, 0x80, 0x3c, 0x1,
    0xe0, 0xf, 0x0, 0x78, 0x3, 0xc0, 0x1e, 0x0,
    0xf0, 0x6, 0x7f, 0xc3, 0xfe, 0x60, 0xf, 0x0,
    0x78, 0x3, 0xc0, 0x1e, 0x0, 0xf0, 0x7, 0x80,
    0x3c, 0x1, 0xe0, 0xf, 0x0, 0x60, 0x0,

    /* U+0062 "b" */
    0x7f, 0xe5, 0xff, 0x30, 0x7, 0x80, 0x3c, 0x1,
    0xe0, 0xf, 0x0, 0x78, 0x3, 0xc0, 0x1e, 0x0,
    0xf0, 0x6, 0x7f, 0xc3, 0xfe, 0x60, 0xf, 0x0,
    0x78, 0x3, 0xc0, 0x1e, 0x0, 0xf0, 0x7, 0x80,
    0x3c, 0x1, 0xe0, 0xe, 0xff, 0x8f, 0xfc,

    /* U+0063 "c" */
    0x3f, 0xe7, 0xff, 0x0, 0x60, 0xc, 0x1, 0x80,
    0x30, 0x6, 0x0, 0xc0, 0x18, 0x3, 0x0, 0x0,
    0x0, 0x1, 0x80, 0x30, 0x6, 0x0, 0xc0, 0x18,
    0x3, 0x0, 0x60, 0xc, 0x1, 0x80, 0xf, 0xf9,
    0xff,

    /* U+0064 "d" */
    0x7f, 0xe5, 0xff, 0x30, 0x7, 0x80, 0x3c, 0x1,
    0xe0, 0xf, 0x0, 0x78, 0x3, 0xc0, 0x1e, 0x0,
    0xf0, 0x6, 0x0, 0x0, 0x0, 0x60, 0xf, 0x0,
    0x78, 0x3, 0xc0, 0x1e, 0x0, 0xf0, 0x7, 0x80,
    0x3c, 0x1, 0xe0, 0xe, 0xff, 0x8f, 0xfc,

    /* U+0065 "e" */
    0x3f, 0xe7, 0xff, 0x0, 0x60, 0xc, 0x1, 0x80,
    0x30, 0x6, 0x0, 0xc0, 0x18, 0x3, 0x0, 0x1f,
    0xf3, 0xff, 0x80, 0x30, 0x6, 0x0, 0xc0, 0x18,
    0x3, 0x0, 0x60, 0xc, 0x1, 0x80, 0xf, 0xf9,
    0xff,

    /* U+0066 "f" */
    0x3f, 0xe7, 0xff, 0x0, 0x60, 0xc, 0x1, 0x80,
    0x30, 0x6, 0x0, 0xc0, 0x18, 0x3, 0x0, 0x1f,
    0xf3, 0xff, 0x80, 0x30, 0x6, 0x0, 0xc0, 0x18,
    0x3, 0x0, 0x60, 0xc, 0x1, 0x80, 0x30, 0x0,
    0x0,

    /* U+0067 "g" */
    0x3f, 0xe1, 0xff, 0x30, 0x1, 0x80, 0xc, 0x0,
    0x60, 0x3, 0x0, 0x18, 0x0, 0xc0, 0x6, 0x0,
    0x30, 0x0, 0xf, 0xc0, 0x7e, 0x60, 0xf, 0x0,
    0x78, 0x3, 0xc0, 0x1e, 0x0, 0xf0, 0x7, 0x80,
    0x3c, 0x1, 0xe0, 0xc, 0xff, 0x87, 0xfc,

    /* U+0068 "h" */
    0x0, 0x6, 0x0, 0xf0, 0x7, 0x80, 0x3c, 0x1,
    0xe0, 0xf, 0x0, 0x78, 0x3, 0xc0, 0x1e, 0x0,
    0xf0, 0x6, 0x7f, 0xc3, 0xfe, 0x60, 0xf, 0x0,
    0x78, 0x3, 0xc0, 0x1e, 0x0, 0xf0, 0x7, 0x80,
    0x3c, 0x1, 0xe0, 0xf, 0x0, 0x60, 0x0,

    /* U+0069 "i" */
    0xbf, 0xff, 0xfc, 0x3f, 0xff, 0xfe,

    /* U+006A "j" */
    0x0, 0x0, 0x0, 0xc0, 0x6, 0x0, 0x30, 0x1,
    0x80, 0xc, 0x0, 0x60, 0x3, 0x0, 0x18, 0x0,
    0xc0, 0x6, 0x0, 0x0, 0x0, 0x60, 0xf, 0x0,
    0x78, 0x3, 0xc0, 0x1e, 0x0, 0xf0, 0x7, 0x80,
    0x3c, 0x1, 0xe0, 0xc, 0xff, 0x87, 0xfc,

    /* U+006B "k" */
    0x80, 0x1e, 0x1, 0xf0, 0x1d, 0x81, 0xcc, 0x1c,
    0x61, 0xc3, 0x1c, 0x19, 0xc0, 0xdc, 0x6, 0xc0,
    0x30, 0x0, 0x7f, 0xc3, 0xfe, 0x60, 0xf, 0x0,
    0x78, 0x3, 0xc0, 0x1e, 0x0, 0xf0, 0x7, 0x80,
    0x3c, 0x1, 0xe0, 0xf, 0x0, 0x60, 0x0,

    /* U+006C "l" */
    0x0, 0x18, 0x3, 0x0, 0x60, 0xc, 0x1, 0x80,
    0x30, 0x6, 0x0, 0xc0, 0x18, 0x3, 0x0, 0x0,
    0x0, 0x1, 0x80, 0x30, 0x6, 0x0, 0xc0, 0x18,
    0x3, 0x0, 0x60, 0xc, 0x1, 0x80, 0xf, 0xf9,
    0xff,

    /* U+006D "m" */
    0x3f, 0x9f, 0xc3, 0xf9, 0xfc, 0xc0, 0x60, 0x3c,
    0x6, 0x3, 0xc0, 0x60, 0x3c, 0x6, 0x3, 0xc0,
    0x60, 0x3c, 0x6, 0x3, 0xc0, 0x60, 0x3c, 0x6,
    0x3, 0xc0, 0x60, 0x30, 0x0, 0x0, 0x0, 0x0,
    0xc, 0x0, 0x3, 0xc0, 0x0, 0x3c, 0x0, 0x3,
    0xc0, 0x0, 0x3c, 0x0, 0x3, 0xc0, 0x0, 0x3c,
    0x0, 0x3, 0xc0, 0x0, 0x3c, 0x0, 0x3, 0xc0,
    0x0, 0x30, 0x0, 0x0,

    /* U+006E "n" */
    0x3f, 0xe1, 0xff, 0x30, 0x7, 0x80, 0x3c, 0x1,
    0xe0, 0xf, 0x0, 0x78, 0x3, 0xc0, 0x1e, 0x0,
    0xf0, 0x6, 0x0, 0x0, 0x0, 0x60, 0xf, 0x0,
    0x78, 0x3, 0xc0, 0x1e, 0x0, 0xf0, 0x7, 0x80,
    0x3c, 0x1, 0xe0, 0xf, 0x0, 0x60, 0x0,

    /* U+006F "o" */
    0x3f, 0xe1, 0xff, 0x30, 0x7, 0x80, 0x3c, 0x1,
    0xe0, 0xf, 0x0, 0x78, 0x3, 0xc0, 0x1e, 0x0,
    0xf0, 0x6, 0x0, 0x0, 0x0, 0x60, 0xf, 0x0,
    0x78, 0x3, 0xc0, 0x1e, 0x0, 0xf0, 0x7, 0x80,
    0x3c, 0x1, 0xe0, 0xc, 0xff, 0x87, 0xfc,

    /* U+0070 "p" */
    0x3f, 0xe1, 0xff, 0x30, 0x7, 0x80, 0x3c, 0x1,
    0xe0, 0xf, 0x0, 0x78, 0x3, 0xc0, 0x1e, 0x0,
    0xf0, 0x6, 0x7f, 0xc3, 0xfe, 0x60, 0x3, 0x0,
    0x18, 0x0, 0xc0, 0x6, 0x0, 0x30, 0x1, 0x80,
    0xc, 0x0, 0x60, 0x3, 0x0, 0x0, 0x0,

    /* U+0071 "q" */
    0x3f, 0xe1, 0xff, 0x30, 0x7, 0x80, 0x3c, 0x1,
    0xe0, 0xf, 0x0, 0x78, 0x3, 0xc0, 0x1e, 0x0,
    0xf0, 0x6, 0x0, 0x0, 0x0, 0x60, 0xf, 0x0,
    0x78, 0x3, 0xc0, 0x1e, 0x0, 0xf0, 0x7, 0x80,
    0x3c, 0x7, 0x60, 0x1c, 0xff, 0x67, 0xf8,

    /* U+0072 "r" */
    0x3f, 0xe1, 0xff, 0x30, 0x7, 0x80, 0x3c, 0x1,
    0xe0, 0xf, 0x0, 0x78, 0x3, 0xc0, 0x1e, 0x0,
    0xf0, 0x6, 0x7f, 0xc3, 0xfe, 0x60, 0x3, 0x60,
    0x1b, 0x80, 0xce, 0x6, 0x38, 0x30, 0xe1, 0x83,
    0x8c, 0xe, 0x60, 0x3b, 0x0, 0xf0, 0x3,

    /* U+0073 "s" */
    0x3f, 0xe1, 0xff, 0x30, 0x1, 0x80, 0xc, 0x0,
    0x60, 0x3, 0x0, 0x18, 0x0, 0xc0, 0x6, 0x0,
    0x30, 0x0, 0x7f, 0xc3, 0xfe, 0x0, 0xc, 0x0,
    0x60, 0x3, 0x0, 0x18, 0x0, 0xc0, 0x6, 0x0,
    0x30, 0x1, 0x80, 0xc, 0xff, 0x87, 0xfc,

    /* U+0074 "t" */
    0x7e, 0x7e, 0x7e, 0x7e, 0x1, 0x80, 0x1, 0x80,
    0x1, 0x80, 0x1, 0x80, 0x1, 0x80, 0x1, 0x80,
    0x1, 0x80, 0x1, 0x80, 0x1, 0x80, 0x0, 0x0,
    0x0, 0x0, 0x1, 0x80, 0x1, 0x80, 0x1, 0x80,
    0x1, 0x80, 0x1, 0x80, 0x1, 0x80, 0x1, 0x80,
    0x1, 0x80, 0x1, 0x80, 0x1, 0x80, 0x0, 0x0,

    /* U+0075 "u" */
    0x0, 0x6, 0x0, 0xf0, 0x7, 0x80, 0x3c, 0x1,
    0xe0, 0xf, 0x0, 0x78, 0x3, 0xc0, 0x1e, 0x0,
    0xf0, 0x6, 0x0, 0x0, 0x0, 0x60, 0xf, 0x0,
    0x78, 0x3, 0xc0, 0x1e, 0x0, 0xf0, 0x7, 0x80,
    0x3c, 0x1, 0xe0, 0xc, 0xff, 0x87, 0xfc,

    /* U+0076 "v" */
    0x0, 0x6, 0x0, 0xf0, 0x7, 0x80, 0x3c, 0x1,
    0xe0, 0xf, 0x0, 0x78, 0x3, 0xc0, 0x1e, 0x0,
    0xf0, 0x6, 0x0, 0x0, 0x0, 0x60, 0xf, 0x80,
    0xec, 0x6, 0x60, 0x33, 0x83, 0x8c, 0x18, 0x71,
    0xc1, 0x8c, 0xc, 0x60, 0x77, 0x1, 0x10,

    /* U+0077 "w" */
    0x0, 0x0, 0xc, 0x0, 0x3, 0xc0, 0x0, 0x3c,
    0x0, 0x3, 0xc0, 0x0, 0x3c, 0x0, 0x3, 0xc0,
    0x0, 0x3c, 0x0, 0x3, 0xc0, 0x0, 0x3c, 0x0,
    0x3, 0xc0, 0x0, 0x30, 0x0, 0x0, 0x0, 0x0,
    0xc, 0x6, 0x3, 0xc0, 0x60, 0x3c, 0x6, 0x3,
    0xc0, 0x60, 0x3c, 0x6, 0x3, 0xc0, 0x60, 0x3c,
    0x6, 0x3, 0xc0, 0x60, 0x3c, 0x6, 0x3, 0x3f,
    0x9f, 0xc3, 0xf9, 0xfc,

    /* U+0078 "x" */
    0xc0, 0x1e, 0x0, 0xf8, 0xe, 0xc0, 0x67, 0x7,
    0x18, 0x30, 0xc1, 0x87, 0x1c, 0x18, 0xc0, 0xe6,
    0x3, 0x60, 0x0, 0x0, 0x0, 0x6, 0xc0, 0x73,
    0x3, 0x18, 0x38, 0xe1, 0x83, 0xc, 0x18, 0xe0,
    0xe6, 0x3, 0x70, 0x1f, 0x0, 0x78, 0x3,

    /* U+0079 "y" */
    0x0, 0x6, 0x0, 0xf0, 0x7, 0x80, 0x3c, 0x1,
    0xe0, 0xf, 0x0, 0x78, 0x3, 0xc0, 0x1e, 0x0,
    0xf0, 0x6, 0x7f, 0xc3, 0xfe, 0x0, 0xc, 0x0,
    0x60, 0x3, 0x0, 0x18, 0x0, 0xc0, 0x6, 0x0,
    0x30, 0x1, 0x80, 0xc, 0xff, 0x87, 0xfc,

    /* U+007A "z" */
    0x7f, 0xe3, 0xff, 0x0, 0x4, 0x0, 0x60, 0x7,
    0x0, 0x30, 0x3, 0x80, 0x18, 0x1, 0xc0, 0xc,
    0x0, 0xe0, 0x0, 0x0, 0x0, 0x6, 0x0, 0x30,
    0x3, 0x80, 0x18, 0x1, 0xc0, 0xc, 0x0, 0xc0,
    0x6, 0x0, 0x20, 0x0, 0x7f, 0xc7, 0xff,

    /* U+007B "{" */
    0x7, 0xe0, 0x7e, 0x18, 0x1, 0x80, 0x18, 0x1,
    0x80, 0x18, 0x1, 0x80, 0x18, 0x1, 0x80, 0x18,
    0xe, 0x0, 0xe0, 0x1, 0x80, 0x18, 0x1, 0x80,
    0x18, 0x1, 0x80, 0x18, 0x1, 0x80, 0x18, 0x1,
    0x80, 0x7, 0xe0, 0x7e,

    /* U+007C "|" */
    0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf8,

    /* U+007D "}" */
    0x7e, 0x7, 0xe0, 0x1, 0x80, 0x18, 0x1, 0x80,
    0x18, 0x1, 0x80, 0x18, 0x1, 0x80, 0x18, 0x1,
    0x80, 0x7, 0x0, 0x70, 0x18, 0x1, 0x80, 0x18,
    0x1, 0x80, 0x18, 0x1, 0x80, 0x18, 0x1, 0x80,
    0x18, 0x7e, 0x7, 0xe0
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 163, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 100, .box_w = 2, .box_h = 24, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 7, .adv_w = 153, .box_w = 5, .box_h = 3, .ofs_x = 2, .ofs_y = 21},
    {.bitmap_index = 9, .adv_w = 297, .box_w = 15, .box_h = 17, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 41, .adv_w = 273, .box_w = 12, .box_h = 30, .ofs_x = 2, .ofs_y = -3},
    {.bitmap_index = 86, .adv_w = 382, .box_w = 20, .box_h = 25, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 149, .adv_w = 1286, .box_w = 76, .box_h = 24, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 377, .adv_w = 207, .box_w = 9, .box_h = 24, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 404, .adv_w = 207, .box_w = 9, .box_h = 24, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 431, .adv_w = 224, .box_w = 10, .box_h = 12, .ofs_x = 2, .ofs_y = 17},
    {.bitmap_index = 446, .adv_w = 359, .box_w = 18, .box_h = 18, .ofs_x = 2, .ofs_y = 2},
    {.bitmap_index = 487, .adv_w = 126, .box_w = 4, .box_h = 4, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 489, .adv_w = 221, .box_w = 10, .box_h = 2, .ofs_x = 2, .ofs_y = 11},
    {.bitmap_index = 492, .adv_w = 100, .box_w = 2, .box_h = 3, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 493, .adv_w = 295, .box_w = 14, .box_h = 24, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 535, .adv_w = 273, .box_w = 13, .box_h = 24, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 574, .adv_w = 100, .box_w = 2, .box_h = 24, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 580, .adv_w = 273, .box_w = 13, .box_h = 24, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 619, .adv_w = 247, .box_w = 11, .box_h = 24, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 652, .adv_w = 273, .box_w = 13, .box_h = 24, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 691, .adv_w = 273, .box_w = 13, .box_h = 24, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 730, .adv_w = 273, .box_w = 13, .box_h = 24, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 769, .adv_w = 247, .box_w = 11, .box_h = 24, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 802, .adv_w = 273, .box_w = 13, .box_h = 24, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 841, .adv_w = 273, .box_w = 13, .box_h = 24, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 880, .adv_w = 100, .box_w = 2, .box_h = 10, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 883, .adv_w = 158, .box_w = 6, .box_h = 24, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 901, .adv_w = 299, .box_w = 15, .box_h = 8, .ofs_x = 2, .ofs_y = 5},
    {.bitmap_index = 916, .adv_w = 158, .box_w = 6, .box_h = 24, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 934, .adv_w = 273, .box_w = 13, .box_h = 24, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 973, .adv_w = 273, .box_w = 13, .box_h = 24, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1012, .adv_w = 273, .box_w = 13, .box_h = 24, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1051, .adv_w = 273, .box_w = 13, .box_h = 24, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1090, .adv_w = 247, .box_w = 11, .box_h = 24, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1123, .adv_w = 273, .box_w = 13, .box_h = 24, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1162, .adv_w = 247, .box_w = 11, .box_h = 24, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1195, .adv_w = 247, .box_w = 11, .box_h = 24, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1228, .adv_w = 273, .box_w = 13, .box_h = 24, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1267, .adv_w = 273, .box_w = 13, .box_h = 24, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1306, .adv_w = 100, .box_w = 2, .box_h = 24, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1312, .adv_w = 273, .box_w = 13, .box_h = 24, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1351, .adv_w = 273, .box_w = 13, .box_h = 24, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1390, .adv_w = 247, .box_w = 11, .box_h = 24, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1423, .adv_w = 372, .box_w = 20, .box_h = 24, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1483, .adv_w = 273, .box_w = 13, .box_h = 24, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1522, .adv_w = 273, .box_w = 13, .box_h = 24, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1561, .adv_w = 273, .box_w = 13, .box_h = 24, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1600, .adv_w = 273, .box_w = 13, .box_h = 24, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1639, .adv_w = 274, .box_w = 13, .box_h = 24, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1678, .adv_w = 273, .box_w = 13, .box_h = 24, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1717, .adv_w = 318, .box_w = 16, .box_h = 24, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1765, .adv_w = 273, .box_w = 13, .box_h = 24, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1804, .adv_w = 273, .box_w = 13, .box_h = 24, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1843, .adv_w = 372, .box_w = 20, .box_h = 24, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1903, .adv_w = 273, .box_w = 13, .box_h = 24, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1942, .adv_w = 273, .box_w = 13, .box_h = 24, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1981, .adv_w = 273, .box_w = 13, .box_h = 24, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 2020, .adv_w = 207, .box_w = 9, .box_h = 24, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 2047, .adv_w = 295, .box_w = 14, .box_h = 24, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 2089, .adv_w = 207, .box_w = 9, .box_h = 24, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 2116, .adv_w = 447, .box_w = 24, .box_h = 6, .ofs_x = 2, .ofs_y = 10},
    {.bitmap_index = 2134, .adv_w = 339, .box_w = 17, .box_h = 2, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 2139, .adv_w = 273, .box_w = 13, .box_h = 24, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 2178, .adv_w = 273, .box_w = 13, .box_h = 24, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 2217, .adv_w = 247, .box_w = 11, .box_h = 24, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 2250, .adv_w = 273, .box_w = 13, .box_h = 24, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 2289, .adv_w = 247, .box_w = 11, .box_h = 24, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 2322, .adv_w = 247, .box_w = 11, .box_h = 24, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 2355, .adv_w = 273, .box_w = 13, .box_h = 24, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 2394, .adv_w = 273, .box_w = 13, .box_h = 24, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 2433, .adv_w = 100, .box_w = 2, .box_h = 24, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 2439, .adv_w = 273, .box_w = 13, .box_h = 24, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 2478, .adv_w = 273, .box_w = 13, .box_h = 24, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 2517, .adv_w = 247, .box_w = 11, .box_h = 24, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 2550, .adv_w = 372, .box_w = 20, .box_h = 24, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 2610, .adv_w = 273, .box_w = 13, .box_h = 24, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 2649, .adv_w = 273, .box_w = 13, .box_h = 24, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 2688, .adv_w = 273, .box_w = 13, .box_h = 24, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 2727, .adv_w = 273, .box_w = 13, .box_h = 24, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 2766, .adv_w = 274, .box_w = 13, .box_h = 24, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 2805, .adv_w = 273, .box_w = 13, .box_h = 24, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 2844, .adv_w = 318, .box_w = 16, .box_h = 24, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 2892, .adv_w = 273, .box_w = 13, .box_h = 24, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 2931, .adv_w = 273, .box_w = 13, .box_h = 24, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 2970, .adv_w = 372, .box_w = 20, .box_h = 24, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 3030, .adv_w = 273, .box_w = 13, .box_h = 24, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 3069, .adv_w = 273, .box_w = 13, .box_h = 24, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 3108, .adv_w = 273, .box_w = 13, .box_h = 24, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 3147, .adv_w = 261, .box_w = 12, .box_h = 24, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 3183, .adv_w = 100, .box_w = 2, .box_h = 27, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 3190, .adv_w = 261, .box_w = 12, .box_h = 24, .ofs_x = 2, .ofs_y = 0}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/



/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 32, .range_length = 7, .glyph_id_start = 1,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    },
    {
        .range_start = 40, .range_length = 19, .glyph_id_start = 8,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    },
    {
        .range_start = 60, .range_length = 36, .glyph_id_start = 27,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    },
    {
        .range_start = 97, .range_length = 29, .glyph_id_start = 63,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    }
};



/*--------------------
 *  ALL CUSTOM DATA
 *--------------------*/

#if LV_VERSION_CHECK(8, 0, 0)
/*Store all the custom data of the font*/
static  lv_font_fmt_txt_glyph_cache_t cache;
static const lv_font_fmt_txt_dsc_t font_dsc = {
#else
static lv_font_fmt_txt_dsc_t font_dsc = {
#endif
    .glyph_bitmap = glyph_bitmap,
    .glyph_dsc = glyph_dsc,
    .cmaps = cmaps,
    .kern_dsc = NULL,
    .kern_scale = 0,
    .cmap_num = 4,
    .bpp = 1,
    .kern_classes = 0,
    .bitmap_format = 0,
#if LV_VERSION_CHECK(8, 0, 0)
    .cache = &cache
#endif
};


/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
#if LV_VERSION_CHECK(8, 0, 0)
const lv_font_t ui_font_seg7Big = {
#else
lv_font_t ui_font_seg7Big = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 32,          /*The maximum line height required by the font*/
    .base_line = 3,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -11,
    .underline_thickness = 2,
#endif
    .dsc = &font_dsc           /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
};



#endif /*#if UI_FONT_SEG7BIG*/
