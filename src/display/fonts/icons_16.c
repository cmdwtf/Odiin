#include "lvgl/lvgl.h"

/*******************************************************************************
 * Size: 16 px
 * Bpp: 1
 * Opts: 
 ******************************************************************************/

#ifndef ICONS_16
#define ICONS_16 1
#endif

#if ICONS_16

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t gylph_bitmap[] = {
    /* U+30 "0" */
    0x3c, 0x42, 0xc3, 0x81, 0x81, 0x81, 0x81, 0x81,
    0xc3, 0x42, 0x3c,

    /* U+31 "1" */
    0x31, 0xc9, 0x4, 0x10, 0x41, 0x4, 0x10, 0x4f,
    0xc0,

    /* U+32 "2" */
    0x7d, 0x8c, 0x8, 0x10, 0x60, 0x82, 0x8, 0x20,
    0x83, 0xf8,

    /* U+33 "3" */
    0x7d, 0x8c, 0x8, 0x10, 0x67, 0x81, 0x81, 0x3,
    0x8d, 0xf0,

    /* U+34 "4" */
    0x4, 0xc, 0x1c, 0x14, 0x24, 0x44, 0xc4, 0xff,
    0x4, 0x4, 0x4,

    /* U+35 "5" */
    0xff, 0x2, 0x4, 0xf, 0x98, 0x80, 0x81, 0x3,
    0x9, 0xe0,

    /* U+36 "6" */
    0x3e, 0x63, 0x40, 0x80, 0xbc, 0xc2, 0xc1, 0x81,
    0xc1, 0x42, 0x3c,

    /* U+37 "7" */
    0xff, 0x3, 0x2, 0x6, 0xc, 0x8, 0x18, 0x10,
    0x30, 0x20, 0x60,

    /* U+38 "8" */
    0x3c, 0xc3, 0x81, 0x81, 0x42, 0x3c, 0xc3, 0x81,
    0x81, 0xc3, 0x3c,

    /* U+39 "9" */
    0x3c, 0x42, 0x83, 0x81, 0x83, 0x43, 0x3d, 0x1,
    0x2, 0xc6, 0x7c
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 154, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 11, .adv_w = 168, .box_w = 6, .box_h = 11, .ofs_x = 2, .ofs_y = 2},
    {.bitmap_index = 20, .adv_w = 155, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 30, .adv_w = 149, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 40, .adv_w = 158, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 51, .adv_w = 161, .box_w = 7, .box_h = 11, .ofs_x = 2, .ofs_y = 2},
    {.bitmap_index = 61, .adv_w = 156, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 72, .adv_w = 154, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 83, .adv_w = 154, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 94, .adv_w = 153, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 2}
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
lv_font_t icons_16 = {
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 11,          /*The maximum line height required by the font*/
    .base_line = -2,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
    .dsc = &font_dsc           /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
};

#endif /*#if ICONS_16*/

