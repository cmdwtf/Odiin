#include "lvgl/lvgl.h"

/*******************************************************************************
 * Size: 14 px
 * Bpp: 1
 * Opts: 
 ******************************************************************************/

#ifndef ICONS_14
#define ICONS_14 1
#endif

#if ICONS_14

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t gylph_bitmap[] = {
    /* U+30 "0" */
    0x38, 0x8a, 0xc, 0x18, 0x30, 0x60, 0xc1, 0x44,
    0x70,

    /* U+31 "1" */
    0x27, 0x8, 0x42, 0x10, 0x84, 0x27, 0xc0,

    /* U+32 "2" */
    0x7a, 0x10, 0x41, 0x8, 0x63, 0x18, 0x43, 0xf0,

    /* U+33 "3" */
    0x7a, 0x10, 0x41, 0x38, 0x30, 0x41, 0x8d, 0xe0,

    /* U+34 "4" */
    0x4, 0xc, 0xc, 0x14, 0x24, 0x24, 0x44, 0xff,
    0x4, 0x4,

    /* U+35 "5" */
    0xfe, 0x8, 0x3e, 0x8c, 0x10, 0x41, 0x89, 0xe0,

    /* U+36 "6" */
    0x3c, 0x86, 0x5, 0xec, 0x50, 0x60, 0xc1, 0x44,
    0x70,

    /* U+37 "7" */
    0xfe, 0xc, 0x10, 0x60, 0x83, 0x4, 0x10, 0x20,
    0x80,

    /* U+38 "8" */
    0x7d, 0x8e, 0xc, 0x14, 0x4f, 0xa0, 0xc1, 0xc6,
    0xf8,

    /* U+39 "9" */
    0x79, 0x8a, 0xc, 0x1c, 0x6f, 0x40, 0x83, 0x84,
    0xf0
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 134, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 9, .adv_w = 147, .box_w = 5, .box_h = 10, .ofs_x = 2, .ofs_y = 2},
    {.bitmap_index = 16, .adv_w = 136, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 24, .adv_w = 130, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 32, .adv_w = 138, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 42, .adv_w = 141, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 50, .adv_w = 136, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 59, .adv_w = 134, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 68, .adv_w = 134, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 77, .adv_w = 133, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 2}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/



/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 48, .range_length = 10, .glyph_id_start = 1,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    }
};



/*--------------------
 *  ALL CUSTOM DATA
 *--------------------*/

/*Store all the custom data of the font*/
static lv_font_fmt_txt_dsc_t font_dsc = {
    .glyph_bitmap = gylph_bitmap,
    .glyph_dsc = glyph_dsc,
    .cmaps = cmaps,
    .kern_dsc = NULL,
    .kern_scale = 0,
    .cmap_num = 1,
    .bpp = 1,
    .kern_classes = 0,
    .bitmap_format = 0
};


/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
lv_font_t icons_14 = {
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 10,          /*The maximum line height required by the font*/
    .base_line = -2,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
    .dsc = &font_dsc           /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
};

#endif /*#if ICONS_14*/

