#include "lvgl/lvgl.h"

/*******************************************************************************
 * Size: 8 px
 * Bpp: 1
 * Opts: 
 ******************************************************************************/

#ifndef ICONS_8
#define ICONS_8 1
#endif

#if ICONS_8

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t gylph_bitmap[] = {
    /* U+30 "0" */
    0x69, 0x99, 0x96,

    /* U+31 "1" */
    0x59, 0x25, 0xc0,

    /* U+32 "2" */
    0xf1, 0x12, 0x4f,

    /* U+33 "3" */
    0xe1, 0x16, 0x1f,

    /* U+34 "4" */
    0x11, 0x94, 0xaf, 0x88,

    /* U+35 "5" */
    0xf8, 0xe1, 0x1e,

    /* U+36 "6" */
    0x78, 0xe9, 0x96,

    /* U+37 "7" */
    0xf1, 0x22, 0x44,

    /* U+38 "8" */
    0xe9, 0xff, 0x9f,

    /* U+39 "9" */
    0x69, 0x97, 0x1e
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 77, .box_w = 4, .box_h = 6, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 3, .adv_w = 84, .box_w = 3, .box_h = 6, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 6, .adv_w = 78, .box_w = 4, .box_h = 6, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 9, .adv_w = 74, .box_w = 4, .box_h = 6, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 12, .adv_w = 79, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 16, .adv_w = 81, .box_w = 4, .box_h = 6, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 19, .adv_w = 78, .box_w = 4, .box_h = 6, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 22, .adv_w = 77, .box_w = 4, .box_h = 6, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 25, .adv_w = 77, .box_w = 4, .box_h = 6, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 28, .adv_w = 76, .box_w = 4, .box_h = 6, .ofs_x = 1, .ofs_y = 1}
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
lv_font_t icons_8 = {
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 6,          /*The maximum line height required by the font*/
    .base_line = -1,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
    .dsc = &font_dsc           /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
};

#endif /*#if ICONS_8*/

