#include "lvgl/lvgl.h"

/*******************************************************************************
 * Size: 16 px
 * Bpp: 1
 * Opts: 
 ******************************************************************************/

#ifndef UNASCII_FANTASY_16
#define UNASCII_FANTASY_16 1
#endif

#if UNASCII_FANTASY_16

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t gylph_bitmap[] = {
    /* U+20 " " */
    0x0,

    /* U+21 "!" */
    0xff, 0xcc,

    /* U+22 "\"" */
    0xcf, 0x3c, 0xc0,

    /* U+23 "#" */
    0x6c, 0xdb, 0xfb, 0x6f, 0xed, 0x9b, 0x0,

    /* U+24 "$" */
    0x31, 0xfc, 0x1e, 0xf, 0xe3, 0x0,

    /* U+25 "%" */
    0xc7, 0x98, 0x61, 0x86, 0x78, 0xc0,

    /* U+26 "&" */
    0x38, 0xd8, 0xe3, 0xbd, 0xd9, 0x9d, 0x80,

    /* U+27 "'" */
    0x6f, 0x0,

    /* U+28 "(" */
    0x36, 0xcc, 0xc6, 0x30,

    /* U+29 ")" */
    0xc6, 0x33, 0x36, 0xc0,

    /* U+2A "*" */
    0x66, 0x3c, 0xff, 0x3c, 0x66,

    /* U+2B "+" */
    0x30, 0xcf, 0xcc, 0x30,

    /* U+2C "," */
    0x6f, 0x0,

    /* U+2D "-" */
    0xfc,

    /* U+2E "." */
    0xf0,

    /* U+2F "/" */
    0x3, 0x6, 0xc, 0x18, 0x30, 0x60, 0xc0,

    /* U+30 "0" */
    0x3c, 0xdf, 0x1e, 0x3c, 0x7d, 0x9e, 0x0,

    /* U+31 "1" */
    0x2f, 0xb6, 0xc8,

    /* U+32 "2" */
    0x7d, 0x9e, 0x38, 0xe7, 0x18, 0xff, 0x0,

    /* U+33 "3" */
    0x7b, 0x31, 0x8e, 0xe, 0x67, 0x0,

    /* U+34 "4" */
    0x45, 0x9b, 0x37, 0xf4, 0xc1, 0x82, 0x0,

    /* U+35 "5" */
    0xfd, 0x83, 0xf0, 0x74, 0x7c, 0xde, 0x0,

    /* U+36 "6" */
    0x39, 0x8f, 0xb3, 0xc7, 0x97, 0x80,

    /* U+37 "7" */
    0x7f, 0xcc, 0x31, 0xf1, 0x87, 0xe, 0x0,

    /* U+38 "8" */
    0x3c, 0xec, 0xdb, 0xec, 0xf9, 0xdf, 0x0,

    /* U+39 "9" */
    0x7a, 0x78, 0xf3, 0x7c, 0x67, 0x0,

    /* U+3A ":" */
    0xf0, 0xf0,

    /* U+3B ";" */
    0x6c, 0x6, 0xf0,

    /* U+3C "<" */
    0x19, 0x99, 0x86, 0x18, 0x60,

    /* U+3D "=" */
    0xfc, 0xf, 0xc0,

    /* U+3E ">" */
    0xc3, 0xc, 0x33, 0x33, 0x0,

    /* U+3F "?" */
    0x7b, 0x30, 0xc6, 0x30, 0x3, 0x0,

    /* U+40 "@" */
    0x7d, 0x8f, 0x7e, 0xfd, 0xf8, 0x1f, 0x0,

    /* U+41 "A" */
    0x1e, 0xdb, 0x37, 0xec, 0xcd, 0xbb, 0x80,

    /* U+42 "B" */
    0xf8, 0xdb, 0xe3, 0x66, 0x6c, 0xff, 0x0,

    /* U+43 "C" */
    0x38, 0xdb, 0x6, 0xc, 0x1c, 0xdf, 0x0,

    /* U+44 "D" */
    0xf0, 0xf1, 0xb3, 0x36, 0x6c, 0xff, 0x0,

    /* U+45 "E" */
    0x38, 0xdb, 0x7, 0x8c, 0x1c, 0xdf, 0x0,

    /* U+46 "F" */
    0xfc, 0xcf, 0x83, 0xc6, 0xc, 0x30, 0x0,

    /* U+47 "G" */
    0x38, 0xdb, 0x6, 0xfc, 0xcd, 0x8f, 0x0,

    /* U+48 "H" */
    0xee, 0xcd, 0x9f, 0xf6, 0xec, 0xfb, 0x80,

    /* U+49 "I" */
    0x3f, 0xc3, 0xc, 0x30, 0xff, 0x0,

    /* U+4A "J" */
    0x3e, 0xd8, 0x30, 0x6c, 0xd9, 0x9e, 0x0,

    /* U+4B "K" */
    0xe6, 0xdb, 0xe3, 0x66, 0xcd, 0xb9, 0x80,

    /* U+4C "L" */
    0x60, 0x60, 0xc1, 0x86, 0xe, 0x37, 0x80,

    /* U+4D "M" */
    0x67, 0x9f, 0xfe, 0xbc, 0x78, 0xf3, 0x0,

    /* U+4E "N" */
    0xe6, 0xed, 0xfb, 0x76, 0x6c, 0xf3, 0x0,

    /* U+4F "O" */
    0x38, 0xdb, 0x1e, 0x3c, 0x7d, 0x9e, 0x0,

    /* U+50 "P" */
    0xdc, 0xcd, 0xb3, 0xc6, 0xc, 0x30, 0x0,

    /* U+51 "Q" */
    0x38, 0xdb, 0x1e, 0x3c, 0xbd, 0x9d, 0x80,

    /* U+52 "R" */
    0xdc, 0xcd, 0xb3, 0xc6, 0xcd, 0xb1, 0x80,

    /* U+53 "S" */
    0x1c, 0x6d, 0x81, 0xe0, 0x78, 0xdf, 0x0,

    /* U+54 "T" */
    0x7f, 0xb1, 0x60, 0xc3, 0x6, 0xc, 0x0,

    /* U+55 "U" */
    0xee, 0xcd, 0x9e, 0x3c, 0x7c, 0xdf, 0x0,

    /* U+56 "V" */
    0xee, 0xcd, 0x9e, 0x3c, 0xcf, 0xc, 0x0,

    /* U+57 "W" */
    0x63, 0x8f, 0x1e, 0xbf, 0xfd, 0xf1, 0x0,

    /* U+58 "X" */
    0xc6, 0xd8, 0xf1, 0xc7, 0x8d, 0xb1, 0x80,

    /* U+59 "Y" */
    0x67, 0x9b, 0x33, 0xe0, 0xdb, 0x1c, 0x0,

    /* U+5A "Z" */
    0xf8, 0x3d, 0xde, 0xef, 0xf, 0x80,

    /* U+5B "[" */
    0xfc, 0xcc, 0xcc, 0xf0,

    /* U+5C "\\" */
    0xc0, 0x60, 0x30, 0x18, 0xc, 0x6, 0x3,

    /* U+5D "]" */
    0xf3, 0x33, 0x33, 0xf0,

    /* U+5E "^" */
    0x10, 0x71, 0xb6, 0x30,

    /* U+5F "_" */
    0xff,

    /* U+60 "`" */
    0xc6, 0x30,

    /* U+61 "a" */
    0x7b, 0x6d, 0xb6, 0x6c,

    /* U+62 "b" */
    0x61, 0x87, 0x9b, 0x6d, 0xbd, 0x80,

    /* U+63 "c" */
    0x7b, 0x3c, 0x33, 0xfc,

    /* U+64 "d" */
    0x30, 0x67, 0xb6, 0xdb, 0x67, 0xc0,

    /* U+65 "e" */
    0x7f, 0x3f, 0xf0, 0xf8,

    /* U+66 "f" */
    0x39, 0xb6, 0x3f, 0x61, 0x8c, 0x0,

    /* U+67 "g" */
    0x7f, 0x3c, 0xff, 0xf, 0xe0,

    /* U+68 "h" */
    0xc3, 0xc, 0x3c, 0xdb, 0x6c, 0xc0,

    /* U+69 "i" */
    0xc3, 0x6c, 0xc0,

    /* U+6A "j" */
    0x18, 0x1, 0xc6, 0x18, 0x6f, 0x0,

    /* U+6B "k" */
    0xc3, 0xf, 0xb6, 0xf3, 0x6c, 0xc0,

    /* U+6C "l" */
    0xdb, 0x6d, 0x98,

    /* U+6D "m" */
    0x67, 0xff, 0x5e, 0x3c, 0x60,

    /* U+6E "n" */
    0xf3, 0x6d, 0xb6, 0xcc,

    /* U+6F "o" */
    0x7f, 0x3c, 0xf3, 0xf8,

    /* U+70 "p" */
    0x3e, 0xcd, 0x9f, 0xe6, 0xc, 0x0,

    /* U+71 "q" */
    0x7f, 0x3c, 0xff, 0xc, 0x30,

    /* U+72 "r" */
    0xdb, 0xbc, 0x30, 0xc0,

    /* U+73 "s" */
    0x7f, 0xf, 0xc3, 0xf8,

    /* U+74 "t" */
    0x20, 0xcf, 0xcc, 0x30, 0xc1, 0x80,

    /* U+75 "u" */
    0xcd, 0x9b, 0x36, 0x67, 0x60,

    /* U+76 "v" */
    0xcf, 0x9b, 0x36, 0xcf, 0x0,

    /* U+77 "w" */
    0xc7, 0x8f, 0x5f, 0xfc, 0xc0,

    /* U+78 "x" */
    0xcd, 0xe3, 0x1e, 0xcc,

    /* U+79 "y" */
    0xcf, 0x9b, 0x33, 0xe0, 0xc7, 0x0,

    /* U+7A "z" */
    0x7c, 0x63, 0x18, 0xf8,

    /* U+7B "{" */
    0x1c, 0xc3, 0x38, 0x30, 0xc1, 0xc0,

    /* U+7C "|" */
    0xff, 0xfc,

    /* U+7D "}" */
    0xe0, 0xc3, 0x7, 0x30, 0xce, 0x0,

    /* U+7E "~" */
    0x77, 0xb8,

    /* U+7F "" */
    0xc1, 0x42, 0xbd, 0x2c, 0x40, 0x81, 0x0,

    /* U+80 "" */
    0xe1, 0x43, 0xbd, 0x5e, 0xa1, 0x43, 0x80,

    /* U+81 "" */
    0xe1, 0x43, 0x95, 0x6e, 0x40, 0x83, 0x80,

    /* U+82 "" */
    0xe1, 0x43, 0xbd, 0x1e, 0xe1, 0x3, 0x80,

    /* U+83 "" */
    0xe1, 0x43, 0xbd, 0x1e, 0xe0, 0x43, 0x80,

    /* U+84 "" */
    0xe0, 0x81, 0x3a, 0x5e, 0xa1, 0x42, 0x80,

    /* U+85 "" */
    0xe1, 0x42, 0xa5, 0x4a, 0x81, 0x3, 0x80,

    /* U+86 "" */
    0xe1, 0x3, 0xb9, 0x4e, 0xe0, 0x43, 0x80,

    /* U+87 "" */
    0xe1, 0x3, 0x3c, 0x4e, 0xe0, 0x43, 0x80,

    /* U+88 "" */
    0xa1, 0x43, 0xbd, 0x4a, 0xe0, 0x43, 0x80,

    /* U+89 "" */
    0xa1, 0x43, 0x8d, 0x1a, 0x21, 0x43, 0x80,

    /* U+8A "" */
    0xf0, 0xf0, 0xf7, 0xf4, 0xf7, 0x67, 0xf,

    /* U+8B "" */
    0xe0, 0xa0, 0xee, 0xef, 0x8b, 0xb, 0xf, 0xe,

    /* U+8C "" */
    0xe1, 0x43, 0xac, 0x58, 0xa1, 0x43, 0x80,

    /* U+8D "" */
    0xe1, 0xe3, 0xff, 0xab, 0x56, 0x83, 0x80,

    /* U+8E "" */
    0xe1, 0x3, 0xb9, 0x1e, 0xe1, 0x3, 0x80,

    /* U+8F "" */
    0xe1, 0x3, 0xb9, 0x1e, 0x60, 0x43, 0x80,

    /* U+90 "" */
    0xe1, 0x62, 0xfd, 0xcf, 0x9d, 0x3, 0x80,

    /* U+91 "" */
    0xe1, 0x43, 0x94, 0x68, 0x40, 0x83, 0x80,

    /* U+92 "" */
    0xe1, 0x43, 0xbc, 0x18, 0xe1, 0x3, 0x80,

    /* U+93 "" */
    0xe1, 0x3, 0xb9, 0x4e, 0xc1, 0x3, 0x80,

    /* U+94 "" */
    0xe1, 0x2, 0x3c, 0x4e, 0x81, 0x3, 0x80,

    /* U+95 "" */
    0xa1, 0xc3, 0xad, 0x5a, 0xe1, 0xc2, 0x80,

    /* U+96 "" */
    0xe1, 0x3, 0xb9, 0x5e, 0xe1, 0x2, 0x0,

    /* U+97 "" */
    0xe1, 0x3, 0x3c, 0x5e, 0xe1, 0x2, 0x0,

    /* U+98 "" */
    0xe1, 0x43, 0xb9, 0x5e, 0xe1, 0x43, 0x80,

    /* U+99 "" */
    0xe1, 0x43, 0xb9, 0x5e, 0xe0, 0x43, 0x80,

    /* U+9A "" */
    0xe1, 0x43, 0xb9, 0x5e, 0xe1, 0x42, 0x80,

    /* U+9B "" */
    0xe1, 0x2, 0x3c, 0x4e, 0xe0, 0x43, 0x80,

    /* U+9C "" */
    0xe1, 0x3, 0xb9, 0x2e, 0x40, 0x81, 0x0,

    /* U+9D "" */
    0xe1, 0x42, 0xbd, 0x4e, 0xe0, 0x43, 0x80,

    /* U+9E "" */
    0xe1, 0x43, 0xac, 0x78, 0xe1, 0x42, 0x80,

    /* U+9F "" */
    0xe1, 0x43, 0xbd, 0x5a, 0xe1, 0x2, 0x0,

    /* U+A0 " " */
    0x0,

    /* U+A1 "¡" */
    0xcf, 0xfc,

    /* U+A2 "¢" */
    0x18, 0xff, 0x66, 0xc7, 0xe3, 0x0,

    /* U+A3 "£" */
    0x38, 0xd9, 0x87, 0x86, 0xc, 0xff, 0x0,

    /* U+A4 "¤" */
    0xcd, 0xec, 0xde, 0xcc,

    /* U+A5 "¥" */
    0xc3, 0x66, 0x3c, 0x18, 0x3c, 0x18, 0x18,

    /* U+A6 "¦" */
    0xfc, 0xfc,

    /* U+A7 "§" */
    0x7b, 0x7, 0xb3, 0xcd, 0xe0, 0xde,

    /* U+A8 "¨" */
    0xcc,

    /* U+A9 "©" */
    0x7e, 0x81, 0x9d, 0xb1, 0xb1, 0x9d, 0x81, 0x7e,

    /* U+AA "ª" */
    0x7b, 0x6d, 0x9f, 0x3, 0xf0,

    /* U+AB "«" */
    0x33, 0x66, 0xcc, 0x66, 0x33,

    /* U+AC "¬" */
    0xfc, 0x30, 0xc0,

    /* U+AD "­" */
    0xf0,

    /* U+AE "®" */
    0x7e, 0x81, 0xb9, 0xa5, 0xb9, 0xa5, 0x81, 0x7e,

    /* U+AF "¯" */
    0xfc,

    /* U+B0 "°" */
    0x7b, 0x37, 0x80,

    /* U+B1 "±" */
    0x30, 0xcf, 0xcc, 0x30, 0xf, 0xc0,

    /* U+B2 "²" */
    0xe3, 0x6c, 0xf0,

    /* U+B3 "³" */
    0xf0, 0xcc, 0x3f, 0x0,

    /* U+B4 "´" */
    0x36, 0xc0,

    /* U+B5 "µ" */
    0x66, 0xcd, 0x9b, 0xe6, 0x18, 0x0,

    /* U+B6 "¶" */
    0x7f, 0xdf, 0x5d, 0x34, 0xd3, 0x40,

    /* U+B7 "·" */
    0xc0,

    /* U+B8 "¸" */
    0x70,

    /* U+B9 "¹" */
    0x7d, 0xb6,

    /* U+BA "º" */
    0x76, 0xf6, 0xe0, 0x7c,

    /* U+BB "»" */
    0xcc, 0x66, 0x33, 0x66, 0xcc,

    /* U+BC "¼" */
    0x40, 0xc6, 0x4c, 0x5a, 0x36, 0x6a, 0xcf, 0x2,

    /* U+BD "½" */
    0x40, 0xc6, 0x4c, 0x5e, 0x33, 0x66, 0xcc, 0xf,

    /* U+BE "¾" */
    0xc0, 0x26, 0x6c, 0x3a, 0xf6, 0x6a, 0xcf, 0x2,

    /* U+BF "¿" */
    0x30, 0x3, 0x18, 0xc3, 0x37, 0x80,

    /* U+C0 "À" */
    0xe0, 0x7, 0xb3, 0xff, 0x3c, 0xc0,

    /* U+C1 "Á" */
    0x1c, 0x7, 0xb3, 0xff, 0x3c, 0xc0,

    /* U+C2 "Â" */
    0x33, 0x30, 0x1e, 0xcf, 0xfc, 0xc0,

    /* U+C3 "Ã" */
    0x77, 0xb8, 0x1, 0xe6, 0x6f, 0xd9, 0x80,

    /* U+C4 "Ä" */
    0xcc, 0x7, 0xb3, 0xff, 0x3c, 0xc0,

    /* U+C5 "Å" */
    0x30, 0xc0, 0x1e, 0xcf, 0xfc, 0xc0,

    /* U+C6 "Æ" */
    0x3f, 0x6c, 0xcc, 0xfe, 0xcc, 0xcc, 0xcf,

    /* U+C7 "Ç" */
    0x38, 0xdb, 0x6, 0xc, 0x1c, 0xdf, 0xc,

    /* U+C8 "È" */
    0x70, 0x3, 0xfe, 0xf, 0x98, 0x3f, 0x80,

    /* U+C9 "É" */
    0xe, 0x3, 0xfe, 0xf, 0x98, 0x3f, 0x80,

    /* U+CA "Ê" */
    0x18, 0xcc, 0x7, 0xff, 0x18, 0x3f, 0x80,

    /* U+CB "Ë" */
    0x66, 0x3, 0xfe, 0xf, 0x98, 0x3f, 0x80,

    /* U+CC "Ì" */
    0xe0, 0xf, 0xcc, 0x30, 0xcf, 0xc0,

    /* U+CD "Í" */
    0x1c, 0xf, 0xcc, 0x30, 0xcf, 0xc0,

    /* U+CE "Î" */
    0x33, 0x30, 0x3f, 0x30, 0xcf, 0xc0,

    /* U+CF "Ï" */
    0xcc, 0xf, 0xcc, 0x30, 0xcf, 0xc0,

    /* U+D0 "Ð" */
    0x78, 0xd9, 0x9f, 0xb6, 0x6d, 0x9e, 0x0,

    /* U+D1 "Ñ" */
    0x77, 0xb8, 0x6, 0x3f, 0x7b, 0xf1, 0x80,

    /* U+D2 "Ò" */
    0x70, 0x1, 0xf6, 0x3c, 0x78, 0xdf, 0x0,

    /* U+D3 "Ó" */
    0xe, 0x1, 0xf6, 0x3c, 0x78, 0xdf, 0x0,

    /* U+D4 "Ô" */
    0x18, 0xcc, 0x3, 0xec, 0x78, 0xdf, 0x0,

    /* U+D5 "Õ" */
    0x77, 0xb8, 0x3, 0xec, 0x78, 0xdf, 0x0,

    /* U+D6 "Ö" */
    0x66, 0x1, 0xf6, 0x3c, 0x78, 0xdf, 0x0,

    /* U+D7 "×" */
    0xc6, 0xd8, 0xe3, 0x6c, 0x60,

    /* U+D8 "Ø" */
    0x7f, 0x3d, 0xff, 0xef, 0x3f, 0x80,

    /* U+D9 "Ù" */
    0x70, 0x3, 0x1e, 0x3c, 0x78, 0xdf, 0x0,

    /* U+DA "Ú" */
    0xe, 0x3, 0x1e, 0x3c, 0x78, 0xdf, 0x0,

    /* U+DB "Û" */
    0x18, 0xcc, 0x6, 0x3c, 0x78, 0xdf, 0x0,

    /* U+DC "Ü" */
    0x66, 0x3, 0x1e, 0x3c, 0x78, 0xdf, 0x0,

    /* U+DD "Ý" */
    0x1c, 0xc, 0xf3, 0x78, 0xc3, 0x0,

    /* U+DE "Þ" */
    0xc1, 0x83, 0xf6, 0x3f, 0xd8, 0x30, 0x0,

    /* U+DF "ß" */
    0x7b, 0x3c, 0xf6, 0xcf, 0x3d, 0x80,

    /* U+E0 "à" */
    0xe0, 0x7, 0xb6, 0xdb, 0x66, 0xc0,

    /* U+E1 "á" */
    0x1c, 0x7, 0xb6, 0xdb, 0x66, 0xc0,

    /* U+E2 "â" */
    0x18, 0xcc, 0x1, 0xf6, 0x78, 0xdf, 0x80,

    /* U+E3 "ã" */
    0x77, 0xb8, 0xf3, 0x66, 0xcd, 0x8d, 0x80,

    /* U+E4 "ä" */
    0xcc, 0x7, 0xb6, 0xdb, 0x66, 0xc0,

    /* U+E5 "å" */
    0x18, 0x30, 0x1, 0xf6, 0x78, 0xdf, 0x80,

    /* U+E6 "æ" */
    0x7e, 0x1b, 0x7f, 0xd8, 0x77,

    /* U+E7 "ç" */
    0x7b, 0x3c, 0x33, 0xfc, 0xc0,

    /* U+E8 "è" */
    0xe0, 0x7, 0xf3, 0xff, 0xf, 0x80,

    /* U+E9 "é" */
    0x1c, 0x7, 0xf3, 0xff, 0xf, 0x80,

    /* U+EA "ê" */
    0x33, 0x30, 0x1e, 0xff, 0x7, 0x80,

    /* U+EB "ë" */
    0xcc, 0x7, 0xf3, 0xff, 0xf, 0x80,

    /* U+EC "ì" */
    0xe0, 0x1c, 0x63, 0x19, 0xe0,

    /* U+ED "í" */
    0x38, 0x38, 0xc6, 0x33, 0xc0,

    /* U+EE "î" */
    0x33, 0x30, 0x1c, 0x30, 0xc7, 0x80,

    /* U+EF "ï" */
    0xcc, 0x7, 0xc, 0x30, 0xc7, 0x80,

    /* U+F0 "ð" */
    0xc, 0x7c, 0x33, 0xec, 0xd9, 0x9e, 0x0,

    /* U+F1 "ñ" */
    0x77, 0xb9, 0xe3, 0x66, 0xcd, 0x99, 0x80,

    /* U+F2 "ò" */
    0xe0, 0x7, 0xf3, 0xcf, 0x3f, 0x80,

    /* U+F3 "ó" */
    0x1c, 0x7, 0xf3, 0xcf, 0x3f, 0x80,

    /* U+F4 "ô" */
    0x33, 0x30, 0x1e, 0xcf, 0x37, 0x80,

    /* U+F5 "õ" */
    0x77, 0xb8, 0xfb, 0x36, 0x6c, 0xdf, 0x0,

    /* U+F6 "ö" */
    0xcc, 0x7, 0xf3, 0xcf, 0x3f, 0x80,

    /* U+F7 "÷" */
    0x30, 0xc0, 0x3f, 0x0, 0xc3, 0x0,

    /* U+F8 "ø" */
    0x2, 0xfb, 0x3e, 0xbe, 0x6f, 0xa0, 0x0,

    /* U+F9 "ù" */
    0x70, 0x3, 0x36, 0x6c, 0xd9, 0x9d, 0x80,

    /* U+FA "ú" */
    0xe, 0x3, 0x36, 0x6c, 0xd9, 0x9d, 0x80,

    /* U+FB "û" */
    0x33, 0x30, 0x33, 0xcf, 0x37, 0xc0,

    /* U+FC "ü" */
    0x66, 0x3, 0x36, 0x6c, 0xd9, 0x9d, 0x80,

    /* U+FD "ý" */
    0xe, 0x3, 0x3e, 0x6c, 0xcf, 0x83, 0x1c,

    /* U+FE "þ" */
    0xc3, 0xf, 0xb3, 0xcf, 0xec, 0x30,

    /* U+FF "ÿ" */
    0x66, 0x3, 0x3e, 0x6c, 0xcf, 0x83, 0x1c,

    /* U+100 "Ā" */
    0xfc, 0x7, 0xb3, 0xff, 0x3c, 0xc0,

    /* U+101 "ā" */
    0xfc, 0x7, 0xb6, 0xdb, 0x66, 0xc0,

    /* U+102 "Ă" */
    0xc6, 0xf8, 0x1, 0xe6, 0x6f, 0xd9, 0x80,

    /* U+103 "ă" */
    0xc6, 0xf8, 0xf3, 0x66, 0xcd, 0x8d, 0x80,

    /* U+104 "Ą" */
    0x1e, 0xdb, 0x37, 0xec, 0xcd, 0xbb, 0x87,

    /* U+105 "ą" */
    0x7b, 0x6d, 0xb6, 0x6c, 0x70,

    /* U+106 "Ć" */
    0xe, 0x1, 0xfe, 0xc, 0x18, 0x1f, 0x80,

    /* U+107 "ć" */
    0x1c, 0x7, 0xb3, 0xc3, 0x3f, 0xc0,

    /* U+108 "Ĉ" */
    0x18, 0xcc, 0x3, 0xfc, 0x18, 0x1f, 0x80,

    /* U+109 "ĉ" */
    0x33, 0x37, 0xb3, 0xc3, 0x3f, 0xc0,

    /* U+10A "Ċ" */
    0x18, 0x1, 0xfe, 0xc, 0x18, 0x1f, 0x80,

    /* U+10B "ċ" */
    0x30, 0x7, 0xb3, 0xc3, 0x3f, 0xc0,

    /* U+10C "Č" */
    0x66, 0x30, 0x3, 0xfc, 0x18, 0x1f, 0x80,

    /* U+10D "č" */
    0xcc, 0xc7, 0xb3, 0xc3, 0x3f, 0xc0,

    /* U+10E "Ď" */
    0xcc, 0xc0, 0x3e, 0xcf, 0x3f, 0x80,

    /* U+10F "ď" */
    0x1a, 0x35, 0xe6, 0xcd, 0x9b, 0x1e, 0x0,

    /* U+110 "Đ" */
    0x78, 0xd9, 0x9f, 0xb6, 0x6d, 0x9e, 0x0,

    /* U+111 "đ" */
    0xc, 0x7c, 0x33, 0xec, 0xd9, 0x9f, 0x0,

    /* U+112 "Ē" */
    0x7e, 0x3, 0xfe, 0xf, 0x98, 0x3f, 0x80,

    /* U+113 "ē" */
    0xfc, 0x7, 0xf3, 0xff, 0xf, 0x80,

    /* U+114 "Ĕ" */
    0xc6, 0xf8, 0x7, 0xff, 0x18, 0x3f, 0x80,

    /* U+115 "ĕ" */
    0xc6, 0xf8, 0xfb, 0x37, 0xec, 0x1f, 0x0,

    /* U+116 "Ė" */
    0x18, 0x3, 0xfe, 0xf, 0x98, 0x3f, 0x80,

    /* U+117 "ė" */
    0x30, 0x7, 0xf3, 0xff, 0xf, 0x80,

    /* U+118 "Ę" */
    0x38, 0xdb, 0x7, 0x8c, 0x1c, 0xdf, 0x7,

    /* U+119 "ę" */
    0x7f, 0x3f, 0xf0, 0xf8, 0x70,

    /* U+11A "Ě" */
    0x66, 0x30, 0x7, 0xff, 0x18, 0x3f, 0x80,

    /* U+11B "ě" */
    0xcc, 0xc0, 0x1e, 0xff, 0x7, 0x80,

    /* U+11C "Ĝ" */
    0x33, 0x30, 0x1f, 0xc3, 0x37, 0xc0,

    /* U+11D "ĝ" */
    0x33, 0x30, 0x1f, 0xcd, 0xf0, 0xfe,

    /* U+11E "Ğ" */
    0xc6, 0xf8, 0x1, 0xf6, 0xc, 0xcf, 0x80,

    /* U+11F "ğ" */
    0xc6, 0xf8, 0x1, 0xf6, 0x67, 0xc1, 0xbe,

    /* U+120 "Ġ" */
    0x30, 0x7, 0xf0, 0xdf, 0x37, 0xc0,

    /* U+121 "ġ" */
    0x30, 0x7, 0xf3, 0xcd, 0xf0, 0xfe,

    /* U+122 "Ģ" */
    0x7b, 0x3c, 0x37, 0xcf, 0x37, 0xf8,

    /* U+123 "ģ" */
    0x20, 0xc0, 0x1f, 0xcd, 0xf0, 0xfe,

    /* U+124 "Ĥ" */
    0x33, 0x30, 0x33, 0xff, 0x3c, 0xc0,

    /* U+125 "ĥ" */
    0xcd, 0xa7, 0x7, 0xec, 0x78, 0xf1, 0x80,

    /* U+126 "Ħ" */
    0x66, 0xff, 0x66, 0x7e, 0x66, 0x66, 0x66,

    /* U+127 "ħ" */
    0xc3, 0xcc, 0x3e, 0xcf, 0x3c, 0xc0,

    /* U+128 "Ĩ" */
    0x77, 0xb8, 0x3, 0xf1, 0x83, 0x1f, 0x80,

    /* U+129 "ĩ" */
    0x77, 0xb8, 0x1, 0xc1, 0x83, 0xf, 0x0,

    /* U+12A "Ī" */
    0xfc, 0xf, 0xcc, 0x30, 0xcf, 0xc0,

    /* U+12B "ī" */
    0xfc, 0x7, 0xc, 0x30, 0xc7, 0x80,

    /* U+12C "Ĭ" */
    0xc6, 0xf8, 0x3, 0xf1, 0x83, 0x1f, 0x80,

    /* U+12D "ĭ" */
    0xc6, 0xf8, 0x1, 0xc1, 0x83, 0xf, 0x0,

    /* U+12E "Į" */
    0x3f, 0xc3, 0xc, 0x30, 0xff, 0x7,

    /* U+12F "į" */
    0xc0, 0xcc, 0xc6, 0x70,

    /* U+130 "İ" */
    0x30, 0xf, 0xcc, 0x30, 0xcf, 0xc0,

    /* U+131 "ı" */
    0xe6, 0x66, 0xf0,

    /* U+132 "Ĳ" */
    0xc7, 0x8f, 0x1e, 0x3c, 0x7a, 0xf3, 0x0,

    /* U+133 "ĳ" */
    0xcc, 0xc, 0xf3, 0xcf, 0x3c, 0xc6,

    /* U+134 "Ĵ" */
    0x18, 0xcc, 0x0, 0x30, 0x60, 0xff, 0x0,

    /* U+135 "ĵ" */
    0x33, 0x30, 0x6, 0x18, 0x61, 0xbc,

    /* U+136 "Ķ" */
    0xe6, 0xdb, 0xe3, 0x66, 0xcd, 0xbb, 0x8c,

    /* U+137 "ķ" */
    0xc3, 0xf, 0xb6, 0xf3, 0x6d, 0xcc,

    /* U+138 "ĸ" */
    0xcf, 0x6f, 0x36, 0xcc,

    /* U+139 "Ĺ" */
    0x1c, 0xc, 0x30, 0xc3, 0xf, 0xc0,

    /* U+13A "ĺ" */
    0x38, 0x38, 0xc6, 0x33, 0xe0,

    /* U+13B "Ļ" */
    0x60, 0x60, 0xc1, 0x86, 0xe, 0x37, 0x8c,

    /* U+13C "ļ" */
    0x71, 0x8c, 0x63, 0x19, 0xfc,

    /* U+13D "Ľ" */
    0xcf, 0x6c, 0x30, 0xc3, 0xf, 0xc0,

    /* U+13E "ľ" */
    0xe6, 0xd9, 0x83, 0x6, 0xc, 0x3c, 0x0,

    /* U+13F "Ŀ" */
    0xc3, 0xc, 0x36, 0xc3, 0xf, 0xc0,

    /* U+140 "ŀ" */
    0x38, 0x38, 0xc6, 0x33, 0xe0,

    /* U+141 "Ł" */
    0x30, 0x60, 0xf3, 0xcf, 0x6, 0xf, 0x80,

    /* U+142 "ł" */
    0xf0, 0xc3, 0xde, 0xf0, 0xc3, 0xc0,

    /* U+143 "Ń" */
    0xe, 0x3, 0x1f, 0x3f, 0x7b, 0xf3, 0x80,

    /* U+144 "ń" */
    0x1c, 0xf, 0x36, 0xdb, 0x6c, 0xc0,

    /* U+145 "Ņ" */
    0xe6, 0xed, 0xfb, 0x76, 0x6c, 0xf3, 0xc,

    /* U+146 "ņ" */
    0xf3, 0x6d, 0xb6, 0xdc, 0xc0,

    /* U+147 "Ň" */
    0x66, 0x30, 0x6, 0x3f, 0x7b, 0xf1, 0x80,

    /* U+148 "ň" */
    0xcc, 0xc0, 0x3e, 0xcf, 0x3c, 0xc0,

    /* U+149 "ŉ" */
    0xbd, 0x6c, 0xd9, 0xb3, 0x60,

    /* U+14A "Ŋ" */
    0xfd, 0x8f, 0x1e, 0x3c, 0x78, 0xf3, 0xc,

    /* U+14B "ŋ" */
    0xfb, 0x3c, 0xf3, 0xcc, 0x60,

    /* U+14C "Ō" */
    0x7e, 0x1, 0xf6, 0x3c, 0x78, 0xdf, 0x0,

    /* U+14D "ō" */
    0xfc, 0x7, 0xf3, 0xcf, 0x3f, 0x80,

    /* U+14E "Ŏ" */
    0xc6, 0xf8, 0x3, 0xec, 0x78, 0xdf, 0x0,

    /* U+14F "ŏ" */
    0xc6, 0xf8, 0xfb, 0x36, 0x6c, 0xdf, 0x0,

    /* U+150 "Ő" */
    0x67, 0x98, 0x3, 0xec, 0x78, 0xdf, 0x0,

    /* U+151 "ő" */
    0x67, 0x98, 0xfb, 0x36, 0x6c, 0xdf, 0x0,

    /* U+152 "Œ" */
    0x1c, 0x6d, 0x81, 0xe0, 0x78, 0xdf, 0xc,

    /* U+153 "œ" */
    0x7f, 0xf, 0xc3, 0xf8, 0xc0,

    /* U+154 "Ŕ" */
    0x1c, 0xf, 0xb3, 0xfb, 0x3c, 0xc0,

    /* U+155 "ŕ" */
    0x1c, 0xf, 0xb3, 0xc3, 0xc, 0x0,

    /* U+156 "Ŗ" */
    0xfd, 0x8f, 0x1f, 0xec, 0xd8, 0xf5, 0x98,

    /* U+157 "ŗ" */
    0xfb, 0x3c, 0x30, 0xc3, 0x80,

    /* U+158 "Ř" */
    0xcc, 0xc0, 0x3e, 0xcf, 0xec, 0xc0,

    /* U+159 "ř" */
    0xcc, 0xc0, 0x3e, 0xcf, 0xc, 0x0,

    /* U+15A "Ś" */
    0xe, 0x1, 0xfe, 0x3, 0xc0, 0xff, 0x0,

    /* U+15B "ś" */
    0x1c, 0x7, 0xf0, 0xfc, 0x3f, 0x80,

    /* U+15C "Ŝ" */
    0x18, 0xcd, 0xfe, 0x3, 0xc0, 0xff, 0x0,

    /* U+15D "ŝ" */
    0x33, 0x37, 0xf0, 0xfc, 0x3f, 0x80,

    /* U+15E "Ş" */
    0x7b, 0x3c, 0x1e, 0xf, 0x37, 0xb8,

    /* U+15F "ş" */
    0x3e, 0xc0, 0xf0, 0x37, 0xdc, 0x0,

    /* U+160 "Š" */
    0x66, 0x30, 0x3, 0xff, 0x3, 0xff, 0x0,

    /* U+161 "š" */
    0xcc, 0xc0, 0x1f, 0xf0, 0xff, 0x80,

    /* U+162 "Ţ" */
    0xfc, 0xc3, 0xc, 0x30, 0xc3, 0x1c,

    /* U+163 "ţ" */
    0x63, 0x3e, 0xc6, 0x30, 0xfc,

    /* U+164 "Ť" */
    0xcc, 0xcf, 0xcc, 0x30, 0xc3, 0x0,

    /* U+165 "ť" */
    0x6, 0xd9, 0x87, 0xc6, 0xc, 0xe, 0x0,

    /* U+166 "Ŧ" */
    0xfc, 0xc3, 0x1e, 0x30, 0xc3, 0x0,

    /* U+167 "ŧ" */
    0x63, 0x3e, 0xcf, 0x30, 0xe0,

    /* U+168 "Ũ" */
    0x77, 0xb8, 0x6, 0x3c, 0x78, 0xdf, 0x0,

    /* U+169 "ũ" */
    0x77, 0xbb, 0x36, 0x6c, 0xd9, 0x9d, 0x80,

    /* U+16A "Ū" */
    0x7e, 0x3, 0x1e, 0x3c, 0x78, 0xdf, 0x0,

    /* U+16B "ū" */
    0x7e, 0x3, 0x36, 0x6c, 0xd9, 0x9d, 0x80,

    /* U+16C "Ŭ" */
    0xc6, 0xf8, 0x6, 0x3c, 0x78, 0xdf, 0x0,

    /* U+16D "ŭ" */
    0xc6, 0xfb, 0x36, 0x6c, 0xd9, 0x9d, 0x80,

    /* U+16E "Ů" */
    0x18, 0x30, 0x6, 0x3c, 0x78, 0xdf, 0x0,

    /* U+16F "ů" */
    0x30, 0xc0, 0x33, 0xcf, 0x37, 0xc0,

    /* U+170 "Ű" */
    0x67, 0x98, 0x6, 0x3c, 0x78, 0xdf, 0x0,

    /* U+171 "ű" */
    0x67, 0x9b, 0x36, 0x6c, 0xd9, 0x9d, 0x80,

    /* U+172 "Ų" */
    0xee, 0xcd, 0x9e, 0x3c, 0x7c, 0xdf, 0x7,

    /* U+173 "ų" */
    0xcd, 0x9b, 0x36, 0x67, 0x61, 0xc0,

    /* U+174 "Ŵ" */
    0x18, 0xcc, 0x6, 0x3d, 0x7f, 0xf1, 0x80,

    /* U+175 "ŵ" */
    0x18, 0xcc, 0x6, 0x3d, 0x6f, 0x9b, 0x0,

    /* U+176 "Ŷ" */
    0x33, 0x30, 0x33, 0x78, 0xc3, 0x0,

    /* U+177 "ŷ" */
    0x33, 0x30, 0x33, 0xcd, 0xf0, 0xde,

    /* U+178 "Ÿ" */
    0xcc, 0xc, 0xf3, 0x78, 0xc3, 0x0,

    /* U+179 "Ź" */
    0xe, 0x3, 0xf8, 0x63, 0x8c, 0x3f, 0x80,

    /* U+17A "ź" */
    0x1c, 0xf, 0xc6, 0x31, 0x8f, 0xc0,

    /* U+17B "Ż" */
    0x18, 0x3, 0xf8, 0x63, 0x8c, 0x3f, 0x80,

    /* U+17C "ż" */
    0x30, 0xf, 0xc6, 0x31, 0x8f, 0xc0,

    /* U+17D "Ž" */
    0xcc, 0xc0, 0x3f, 0x19, 0x8f, 0xc0,

    /* U+17E "ž" */
    0xcc, 0xc0, 0x3f, 0x19, 0x8f, 0xc0,

    /* U+17F "ſ" */
    0x7b, 0x3c, 0x30, 0xc3, 0xc, 0x0,

    /* U+180 "ƀ" */
    0x61, 0xf1, 0x83, 0xe6, 0x6c, 0xdf, 0x0,

    /* U+181 "Ɓ" */
    0x7d, 0x6e, 0xd9, 0xe3, 0x66, 0xcf, 0x0,

    /* U+182 "Ƃ" */
    0xff, 0xc, 0x3e, 0xcf, 0x3f, 0x80,

    /* U+183 "ƃ" */
    0xfb, 0xf, 0xb3, 0xcf, 0x3f, 0x80,

    /* U+184 "Ƅ" */
    0x61, 0xc1, 0x83, 0xe6, 0x6c, 0xdf, 0x0,

    /* U+185 "ƅ" */
    0x61, 0xc1, 0x83, 0xe6, 0x6c, 0xcf, 0x0,

    /* U+186 "Ɔ" */
    0x7b, 0x30, 0xc3, 0xf, 0x37, 0x80,

    /* U+187 "Ƈ" */
    0x6, 0xff, 0x6, 0xc, 0x18, 0x1f, 0x80,

    /* U+188 "ƈ" */
    0x6, 0x19, 0xf6, 0xc, 0x18, 0x1f, 0x0,

    /* U+189 "Ɖ" */
    0x78, 0xd9, 0x9f, 0xb6, 0x6d, 0x9e, 0x0,

    /* U+18A "Ɗ" */
    0x7d, 0x6e, 0xd9, 0xb3, 0x66, 0xdf, 0x0,

    /* U+18B "Ƌ" */
    0x7c, 0x30, 0xdf, 0xcf, 0x37, 0xc0,

    /* U+18C "ƌ" */
    0x7c, 0x37, 0xf3, 0xcf, 0x37, 0xc0,

    /* U+18D "ƍ" */
    0x7b, 0x3c, 0xde, 0xc, 0xe0,

    /* U+18E "Ǝ" */
    0xfc, 0x30, 0xdf, 0xc, 0x3f, 0xc0,

    /* U+18F "Ə" */
    0x7b, 0x30, 0xff, 0xcf, 0x37, 0x80,

    /* U+190 "Ɛ" */
    0x7b, 0x3c, 0x1c, 0xc3, 0x37, 0x80,

    /* U+191 "Ƒ" */
    0x7e, 0xc1, 0x83, 0xe6, 0xc, 0x18, 0x60,

    /* U+192 "ƒ" */
    0xe, 0x1b, 0x18, 0x3c, 0x18, 0x18, 0xd8, 0x70,

    /* U+193 "Ɠ" */
    0x6, 0xfb, 0x6, 0xd, 0xd9, 0x9f, 0x0,

    /* U+194 "Ɣ" */
    0xc7, 0x8f, 0x1b, 0x63, 0x8d, 0x8e, 0x0,

    /* U+195 "ƕ" */
    0xc0, 0xc0, 0xf3, 0xdb, 0xdb, 0xdb, 0xce,

    /* U+197 "Ɨ" */
    0xfc, 0xc3, 0x3f, 0x30, 0xcf, 0xc0,

    /* U+198 "Ƙ" */
    0xcf, 0xb7, 0x67, 0x8d, 0x99, 0xb3, 0x0,

    /* U+199 "ƙ" */
    0x7b, 0xc, 0xf6, 0xf3, 0x6c, 0xc0,

    /* U+19A "ƚ" */
    0xf0, 0xc3, 0x3f, 0x30, 0xc3, 0xc0,

    /* U+19B "ƛ" */
    0xc, 0x7c, 0x33, 0xec, 0xd9, 0xb3, 0x0,

    /* U+19C "Ɯ" */
    0xd7, 0xaf, 0x5e, 0xbd, 0x7a, 0xdf, 0x80,

    /* U+19D "Ɲ" */
    0xc7, 0xcf, 0xdf, 0xfd, 0xf9, 0xf1, 0xe0,

    /* U+19E "ƞ" */
    0xfb, 0x3c, 0xf3, 0xcc, 0x30,

    /* U+19F "Ɵ" */
    0x7b, 0x3c, 0xff, 0xcf, 0x37, 0x80,

    /* U+1B7 "Ʒ" */
    0xfe, 0x18, 0x61, 0xe0, 0x78, 0xdf, 0x0,

    /* U+1CD "Ǎ" */
    0xcc, 0xc0, 0x1e, 0xcf, 0xfc, 0xc0,

    /* U+1CE "ǎ" */
    0x66, 0x30, 0x1, 0xf6, 0x78, 0xdf, 0x80,

    /* U+1CF "Ǐ" */
    0xcc, 0xc0, 0x3f, 0x30, 0xcf, 0xc0,

    /* U+1D0 "ǐ" */
    0xcc, 0xc0, 0x1c, 0x30, 0xc7, 0x80,

    /* U+1D1 "Ǒ" */
    0x66, 0x30, 0x3, 0xec, 0x78, 0xdf, 0x0,

    /* U+1D2 "ǒ" */
    0xcc, 0xc0, 0x1e, 0xcf, 0x37, 0x80,

    /* U+1D3 "Ǔ" */
    0x66, 0x30, 0x6, 0x3c, 0x78, 0xdf, 0x0,

    /* U+1D4 "ǔ" */
    0xcc, 0xc0, 0x33, 0xcf, 0x37, 0xc0,

    /* U+1D5 "Ǖ" */
    0xfe, 0xd8, 0x6, 0x3c, 0x78, 0xdf, 0x0,

    /* U+1D6 "ǖ" */
    0xfe, 0xd8, 0x3, 0x36, 0x6c, 0xcf, 0x80,

    /* U+1D7 "Ǘ" */
    0xc, 0xdb, 0x0, 0xc6, 0xc6, 0xc6, 0x7c,

    /* U+1D8 "ǘ" */
    0xc, 0xdb, 0x0, 0x66, 0x66, 0x66, 0x3e,

    /* U+1D9 "Ǚ" */
    0x3c, 0xdb, 0x0, 0xc6, 0xc6, 0xc6, 0x7c,

    /* U+1DA "ǚ" */
    0x3c, 0xdb, 0x0, 0x66, 0x66, 0x66, 0x3e,

    /* U+1DB "Ǜ" */
    0x30, 0xdb, 0x0, 0xc6, 0xc6, 0xc6, 0x7c,

    /* U+1DC "ǜ" */
    0x30, 0xdb, 0x0, 0x66, 0x66, 0x66, 0x3e,

    /* U+1DD "ǝ" */
    0x78, 0x3f, 0xf3, 0x78,

    /* U+1DE "Ǟ" */
    0xfe, 0xd8, 0x1, 0xe6, 0x6f, 0xd9, 0x80,

    /* U+1DF "ǟ" */
    0xfe, 0xd8, 0x1, 0xf6, 0x78, 0xdf, 0x80,

    /* U+1E0 "Ǡ" */
    0xfe, 0xd8, 0x1, 0xe6, 0x6f, 0xd9, 0x80,

    /* U+1E1 "ǡ" */
    0xfe, 0xd8, 0x1, 0xf6, 0x78, 0xdf, 0x80,

    /* U+1E2 "Ǣ" */
    0x7e, 0x0, 0x7f, 0xcc, 0xfe, 0xcc, 0xcf,

    /* U+1E3 "ǣ" */
    0x7e, 0x0, 0x7e, 0x1b, 0x7f, 0xd8, 0x77,

    /* U+1E6 "Ǧ" */
    0xcc, 0xc0, 0x1f, 0xc3, 0x37, 0xc0,

    /* U+1E7 "ǧ" */
    0xcc, 0xc0, 0x1f, 0xcd, 0xf0, 0xfe,

    /* U+1E8 "Ǩ" */
    0x66, 0x30, 0x6, 0x7f, 0x99, 0xb1, 0x80,

    /* U+1E9 "ǩ" */
    0xcc, 0xc0, 0x30, 0xdb, 0xcc, 0xc0,

    /* U+1EE "Ǯ" */
    0x66, 0x33, 0xf8, 0x33, 0xd0, 0xdf, 0x0,

    /* U+1EF "ǯ" */
    0xcc, 0xcf, 0xc3, 0x78, 0x3c, 0xde,

    /* U+1F0 "ǰ" */
    0xcc, 0xc0, 0x6, 0x18, 0x61, 0xbc,

    /* U+1F4 "Ǵ" */
    0x1c, 0x7, 0xf0, 0xdf, 0x37, 0xc0,

    /* U+1F5 "ǵ" */
    0x1c, 0x7, 0xf3, 0xcd, 0xf0, 0xfe,

    /* U+1F8 "Ǹ" */
    0x70, 0x3, 0x1f, 0x3f, 0x7b, 0xf3, 0x80,

    /* U+1F9 "ǹ" */
    0xe0, 0xf, 0x36, 0xdb, 0x6c, 0xc0,

    /* U+1FA "Ǻ" */
    0xcf, 0x60, 0x1e, 0xcf, 0xfc, 0xc0,

    /* U+1FB "ǻ" */
    0x66, 0xd8, 0x1, 0xf6, 0x78, 0xdf, 0x80,

    /* U+1FC "Ǽ" */
    0xe, 0x0, 0x7f, 0xcc, 0xfe, 0xcc, 0xcf,

    /* U+1FD "ǽ" */
    0xe, 0x0, 0x7e, 0x1b, 0x7f, 0xd8, 0x77,

    /* U+1FE "Ǿ" */
    0x1c, 0x7, 0xf3, 0xff, 0x3f, 0x80,

    /* U+1FF "ǿ" */
    0xe, 0x5, 0xf6, 0x7d, 0x7c, 0xdf, 0x40,

    /* U+200 "Ȁ" */
    0xcc, 0xcc, 0x1, 0xe6, 0x6f, 0xd9, 0x80,

    /* U+201 "ȁ" */
    0xcc, 0xcc, 0xf3, 0x66, 0xcd, 0x8d, 0x80,

    /* U+202 "Ȃ" */
    0x7d, 0x8c, 0x1, 0xe6, 0x6f, 0xd9, 0x80,

    /* U+203 "ȃ" */
    0x3c, 0xd9, 0xb3, 0x67, 0xf8, 0xc0,

    /* U+204 "Ȅ" */
    0xcc, 0xcc, 0x7, 0xff, 0x18, 0x3f, 0x80,

    /* U+205 "ȅ" */
    0xcc, 0xcc, 0xfb, 0x37, 0xec, 0x1f, 0x0,

    /* U+206 "Ȇ" */
    0x7d, 0x8c, 0x7, 0xff, 0x18, 0x3f, 0x80,

    /* U+207 "ȇ" */
    0x3e, 0xcd, 0xfb, 0x7, 0xd8, 0xc0,

    /* U+208 "Ȉ" */
    0xcc, 0xcc, 0x3, 0xf1, 0x83, 0x1f, 0x80,

    /* U+209 "ȉ" */
    0xcc, 0xcc, 0x1, 0xc1, 0x83, 0xf, 0x0,

    /* U+20A "Ȋ" */
    0x7d, 0x8c, 0x3, 0xf1, 0x83, 0x1f, 0x80,

    /* U+20B "ȋ" */
    0x38, 0x30, 0x63, 0xec, 0x60,

    /* U+20C "Ȍ" */
    0xcc, 0xcc, 0x3, 0xec, 0x78, 0xdf, 0x0,

    /* U+20D "ȍ" */
    0xcc, 0xcc, 0xfb, 0x36, 0x6c, 0xdf, 0x0,

    /* U+20E "Ȏ" */
    0x7d, 0x8c, 0x3, 0xec, 0x78, 0xdf, 0x0,

    /* U+20F "ȏ" */
    0x3e, 0xcd, 0x9b, 0x37, 0xd8, 0xc0,

    /* U+210 "Ȑ" */
    0xcc, 0xcc, 0x3, 0xe6, 0x6f, 0x99, 0x80,

    /* U+211 "ȑ" */
    0xcc, 0xcc, 0x3, 0xe6, 0x6c, 0x18, 0x0,

    /* U+212 "Ȓ" */
    0x7d, 0x8c, 0x3, 0xe6, 0x6f, 0x99, 0x80,

    /* U+213 "ȓ" */
    0x7c, 0xcd, 0x83, 0xec, 0x60,

    /* U+214 "Ȕ" */
    0xcc, 0xcc, 0x6, 0x3c, 0x78, 0xdf, 0x0,

    /* U+215 "ȕ" */
    0xcc, 0xcf, 0x36, 0x6c, 0xd9, 0x9d, 0x80,

    /* U+216 "Ȗ" */
    0x7d, 0x8c, 0x6, 0x3c, 0x78, 0xdf, 0x0,

    /* U+217 "ȗ" */
    0xcd, 0x9b, 0x36, 0x67, 0xf8, 0xc0,

    /* U+218 "Ș" */
    0x1c, 0x6d, 0x81, 0xe0, 0x78, 0xdf, 0x18,

    /* U+219 "ș" */
    0x7f, 0xf, 0xc3, 0xf9, 0x80,

    /* U+21A "Ț" */
    0x7f, 0xb1, 0x60, 0xc3, 0x6, 0xe, 0x18,

    /* U+21B "ț" */
    0x20, 0xcf, 0xcc, 0x30, 0xc3, 0x98,

    /* U+226 "Ȧ" */
    0x30, 0x7, 0xb3, 0xff, 0x3c, 0xc0,

    /* U+227 "ȧ" */
    0x30, 0x7, 0xb6, 0xdb, 0x66, 0xc0,

    /* U+22A "Ȫ" */
    0xfe, 0xd8, 0x3, 0xec, 0x78, 0xdf, 0x0,

    /* U+22B "ȫ" */
    0xfe, 0xd8, 0x1, 0xe6, 0x6c, 0xcf, 0x0,

    /* U+22C "Ȭ" */
    0xfe, 0xca, 0x63, 0xec, 0x78, 0xdf, 0x0,

    /* U+22D "ȭ" */
    0xfe, 0xca, 0x61, 0xe6, 0x6c, 0xcf, 0x0,

    /* U+22E "Ȯ" */
    0x18, 0x1, 0xf6, 0x3c, 0x78, 0xdf, 0x0,

    /* U+22F "ȯ" */
    0x30, 0x7, 0xf3, 0xcf, 0x3f, 0x80,

    /* U+230 "Ȱ" */
    0xfe, 0xd8, 0x3, 0xec, 0x78, 0xdf, 0x0,

    /* U+231 "ȱ" */
    0xfe, 0xd8, 0x1, 0xe6, 0x6c, 0xcf, 0x0,

    /* U+232 "Ȳ" */
    0xfc, 0xc, 0xf3, 0x78, 0xc3, 0x0,

    /* U+233 "ȳ" */
    0x7e, 0x3, 0x3e, 0x6c, 0xcf, 0x83, 0x1c,

    /* U+258 "ɘ" */
    0x7b, 0x3f, 0xc3, 0x78,

    /* U+259 "ə" */
    0x78, 0x3f, 0xf3, 0x78,

    /* U+263 "ɣ" */
    0xc7, 0x8d, 0xb1, 0xc6, 0xc7, 0x0,

    /* U+292 "ʒ" */
    0xfc, 0x37, 0x83, 0xcd, 0xe0,

    /* U+294 "ʔ" */
    0x7b, 0x30, 0xc6, 0x30, 0xc3, 0x0,

    /* U+2C6 "ˆ" */
    0x33, 0x30,

    /* U+2C9 "ˉ" */
    0xf0,

    /* U+2CD "ˍ" */
    0xf0,

    /* U+2DC "˜" */
    0xfe, 0xca, 0x60,

    /* U+300 "̀" */
    0xe0,

    /* U+301 "́" */
    0xe0,

    /* U+302 "̂" */
    0x33, 0x30,

    /* U+303 "̃" */
    0x77, 0xb8,

    /* U+304 "̄" */
    0xfc,

    /* U+305 "̅" */
    0xff,

    /* U+306 "̆" */
    0xc6, 0xf8,

    /* U+307 "̇" */
    0xc0,

    /* U+308 "̈" */
    0xcc,

    /* U+309 "̉" */
    0xc5, 0x0,

    /* U+30A "̊" */
    0xf0,

    /* U+30B "̋" */
    0x67, 0x98,

    /* U+30C "̌" */
    0xcc, 0xc0,

    /* U+30D "̍" */
    0x99,

    /* U+30F "̏" */
    0xcc, 0xcc,

    /* U+310 "̐" */
    0xb5, 0x23, 0x0,

    /* U+311 "̑" */
    0x7d, 0x8c,

    /* U+313 "̓" */
    0x78,

    /* U+314 "̔" */
    0xcc,

    /* U+315 "̕" */
    0x78,

    /* U+316 "̖" */
    0xf0,

    /* U+317 "̗" */
    0xf0,

    /* U+318 "̘" */
    0x8f,

    /* U+31B "̛" */
    0x78,

    /* U+31C "̜" */
    0xc0,

    /* U+31F "̟" */
    0x27, 0xc0,

    /* U+320 "̠" */
    0xf9,

    /* U+321 "̡" */
    0x1f, 0x80,

    /* U+322 "̢" */
    0xc7,

    /* U+323 "̣" */
    0xc0,

    /* U+324 "̤" */
    0xcc,

    /* U+325 "̥" */
    0xc0,

    /* U+326 "̦" */
    0x78,

    /* U+327 "̧" */
    0x70,

    /* U+328 "̨" */
    0xe0,

    /* U+329 "̩" */
    0xc0,

    /* U+32B "̫" */
    0x92, 0xd8,

    /* U+32C "̬" */
    0xcc, 0xc0,

    /* U+32E "̮" */
    0xc6, 0xf8,

    /* U+330 "̰" */
    0x77, 0xb8,

    /* U+332 "̲" */
    0xff,

    /* U+333 "̳" */
    0xff, 0xff,

    /* U+335 "̵" */
    0xfc,

    /* U+336 "̶" */
    0xff,

    /* U+337 "̷" */
    0xc, 0x63, 0x18, 0xc0,

    /* U+338 "̸" */
    0x3, 0x6, 0xc, 0x18, 0x30, 0x60, 0xc0, 0x80,

    /* U+339 "̹" */
    0xc0,

    /* U+33A "̺" */
    0x9f,

    /* U+33B "̻" */
    0xff,

    /* U+33C "̼" */
    0x6d, 0x24,

    /* U+33D "̽" */
    0x8b, 0xa2,

    /* U+33E "̾" */
    0xff, 0xff,

    /* U+340 "̀" */
    0xe0,

    /* U+341 "́" */
    0xe0,

    /* U+342 "͂" */
    0x77, 0xb8,

    /* U+343 "̓" */
    0x78,

    /* U+344 "̈́" */
    0xc, 0xdb,

    /* U+34F "͏" */
    0x0,

    /* U+362 "͢" */
    0x5, 0xfc,

    /* U+386 "Ά" */
    0x1c, 0x7, 0xb3, 0xff, 0x3c, 0xc0,

    /* U+388 "Έ" */
    0xe, 0x3, 0xfe, 0xf, 0x98, 0x3f, 0x80,

    /* U+389 "Ή" */
    0x1c, 0xc, 0xf3, 0xff, 0x3c, 0xc0,

    /* U+38A "Ί" */
    0x1c, 0xf, 0xcc, 0x30, 0xcf, 0xc0,

    /* U+38C "Ό" */
    0xe, 0x1, 0xf6, 0x3c, 0x78, 0xdf, 0x0,

    /* U+38E "Ύ" */
    0x1c, 0xc, 0xf3, 0x78, 0xc3, 0x0,

    /* U+38F "Ώ" */
    0x7f, 0x8f, 0x1e, 0x3c, 0x6d, 0xbb, 0x80,

    /* U+391 "Α" */
    0x31, 0xec, 0xf3, 0xff, 0x3c, 0xc0,

    /* U+392 "Β" */
    0xfb, 0x3c, 0xfe, 0xcf, 0x3f, 0x80,

    /* U+393 "Γ" */
    0xff, 0xc, 0x30, 0xc3, 0xc, 0x0,

    /* U+394 "Δ" */
    0x10, 0x71, 0xb6, 0x3c, 0x78, 0xff, 0x80,

    /* U+395 "Ε" */
    0xff, 0xc, 0x3e, 0xc3, 0xf, 0xc0,

    /* U+396 "Ζ" */
    0xfc, 0x31, 0x8c, 0x63, 0xf, 0xc0,

    /* U+397 "Η" */
    0xcf, 0x3c, 0xff, 0xcf, 0x3c, 0xc0,

    /* U+398 "Θ" */
    0x7d, 0x8f, 0x1f, 0xfc, 0x78, 0xdf, 0x0,

    /* U+399 "Ι" */
    0xfc, 0xc3, 0xc, 0x30, 0xcf, 0xc0,

    /* U+39A "Κ" */
    0xc7, 0x9b, 0x67, 0x8d, 0x99, 0xb1, 0x80,

    /* U+39B "Λ" */
    0x10, 0x71, 0xb6, 0x3c, 0x78, 0xf1, 0x80,

    /* U+39C "Μ" */
    0xc7, 0xdf, 0xfe, 0xbc, 0x78, 0xf1, 0x80,

    /* U+39D "Ν" */
    0xc7, 0xcf, 0xde, 0xfc, 0xf8, 0xf1, 0x80,

    /* U+39E "Ξ" */
    0xff, 0x8c, 0x3, 0xe0, 0x18, 0xff, 0x80,

    /* U+39F "Ο" */
    0x7b, 0x3c, 0xf3, 0xcf, 0x37, 0x80,

    /* U+3A0 "Π" */
    0xff, 0x8f, 0x1e, 0x3c, 0x78, 0xf1, 0x80,

    /* U+3A1 "Ρ" */
    0xfb, 0x3c, 0xfe, 0xc3, 0xc, 0x0,

    /* U+3A3 "Σ" */
    0xfe, 0xc0, 0xc0, 0xc3, 0xc, 0x3f, 0x80,

    /* U+3A4 "Τ" */
    0xfc, 0xc3, 0xc, 0x30, 0xc3, 0x0,

    /* U+3A5 "Υ" */
    0xcf, 0x3c, 0xde, 0x30, 0xc3, 0x0,

    /* U+3A6 "Φ" */
    0x10, 0xfb, 0x5e, 0xbd, 0x6f, 0x84, 0x0,

    /* U+3A7 "Χ" */
    0xc3, 0x66, 0x3c, 0x18, 0x3c, 0x66, 0xc3,

    /* U+3A8 "Ψ" */
    0x11, 0xaf, 0x5e, 0xbd, 0x6f, 0x84, 0x0,

    /* U+3A9 "Ω" */
    0x7d, 0x8f, 0x1e, 0x3c, 0x6d, 0xbb, 0x80,

    /* U+3AA "Ϊ" */
    0xcc, 0xf, 0xcc, 0x30, 0xcf, 0xc0,

    /* U+3AB "Ϋ" */
    0xcc, 0xc, 0xf3, 0x78, 0xc3, 0x0,

    /* U+3AC "ά" */
    0xe, 0x1, 0xde, 0x7c, 0x79, 0xdd, 0x80,

    /* U+3AD "έ" */
    0x1c, 0x7, 0xf0, 0x7b, 0x7, 0xc0,

    /* U+3AE "ή" */
    0x1c, 0xf, 0xb3, 0xcf, 0x3c, 0xc3,

    /* U+3AF "ί" */
    0x70, 0xcc, 0xcc, 0x60,

    /* U+3B1 "α" */
    0x77, 0x9f, 0x1e, 0x77, 0x60,

    /* U+3B2 "β" */
    0x7d, 0x8f, 0x1f, 0xec, 0x7c, 0xf7, 0x60,

    /* U+3B3 "γ" */
    0xc6, 0xd8, 0xe3, 0x66, 0xc7, 0x0,

    /* U+3B4 "δ" */
    0xfe, 0xc0, 0xc3, 0xec, 0x78, 0xdf, 0x0,

    /* U+3B5 "ε" */
    0x7f, 0x7, 0xb0, 0x7c,

    /* U+3B6 "ζ" */
    0xff, 0x8c, 0x33, 0xcc, 0x18, 0x1f, 0x1,

    /* U+3B7 "η" */
    0xfb, 0x3c, 0xf3, 0xcc, 0x30,

    /* U+3B8 "θ" */
    0x7b, 0x3c, 0xff, 0xcf, 0x37, 0x80,

    /* U+3B9 "ι" */
    0xdb, 0x66,

    /* U+3BA "κ" */
    0xcf, 0x6f, 0x36, 0xcc,

    /* U+3BB "λ" */
    0x79, 0x98, 0x1b, 0xfc, 0x78, 0xf1, 0x80,

    /* U+3BC "μ" */
    0xcd, 0x9b, 0x36, 0x6f, 0x78, 0x0,

    /* U+3BD "ν" */
    0xcf, 0x3c, 0xde, 0x30,

    /* U+3BE "ξ" */
    0xfe, 0xd, 0xf6, 0x7, 0x18, 0x1f, 0x1,

    /* U+3BF "ο" */
    0x7b, 0x3c, 0xf3, 0x78,

    /* U+3C0 "π" */
    0xff, 0x66, 0x66, 0x66, 0x66,

    /* U+3C1 "ρ" */
    0x7b, 0x3c, 0xfe, 0xc3, 0x0,

    /* U+3C2 "ς" */
    0x7d, 0x8f, 0x6, 0x7, 0xc0, 0xc0,

    /* U+3C3 "σ" */
    0x7f, 0x9b, 0x1e, 0x37, 0xc0,

    /* U+3C4 "τ" */
    0xfc, 0xc3, 0xc, 0x18,

    /* U+3C5 "υ" */
    0xc6, 0xcd, 0x9b, 0x33, 0xc0,

    /* U+3C6 "φ" */
    0x6e, 0xdb, 0xdb, 0x7e, 0x18, 0x18,

    /* U+3C7 "χ" */
    0xc6, 0xd8, 0xe3, 0x6c, 0x60,

    /* U+3C8 "ψ" */
    0xc3, 0xdb, 0xdb, 0x7e, 0x18, 0x18,

    /* U+3C9 "ω" */
    0xc7, 0xaf, 0x5f, 0xf6, 0xc0,

    /* U+3CA "ϊ" */
    0xcc, 0x3, 0xc, 0x30, 0xc1, 0x80,

    /* U+3CB "ϋ" */
    0x66, 0x3, 0x1b, 0x36, 0x6c, 0xcf, 0x0,

    /* U+3CC "ό" */
    0x1c, 0x7, 0xb3, 0xcf, 0x37, 0x80,

    /* U+3CD "ύ" */
    0xe, 0x3, 0x1b, 0x36, 0x6c, 0xcf, 0x0,

    /* U+3CE "ώ" */
    0xe, 0x3, 0x1e, 0xbd, 0x7f, 0xdb, 0x0,

    /* U+400 "Ѐ" */
    0x70, 0x3, 0xfe, 0xf, 0x98, 0x3f, 0x80,

    /* U+401 "Ё" */
    0x66, 0x3, 0xfe, 0xf, 0x98, 0x3f, 0x80,

    /* U+405 "Ѕ" */
    0x1c, 0x6d, 0x81, 0xe0, 0x78, 0xdf, 0x0,

    /* U+406 "І" */
    0x3f, 0xc3, 0xc, 0x30, 0xff, 0x0,

    /* U+407 "Ї" */
    0xcc, 0xf, 0xcc, 0x30, 0xcf, 0xc0,

    /* U+408 "Ј" */
    0x3e, 0xd8, 0x30, 0x6c, 0xd9, 0x9e, 0x0,

    /* U+409 "Љ" */
    0x3c, 0x6c, 0x6c, 0x6e, 0x6d, 0x6d, 0xce,

    /* U+410 "А" */
    0x31, 0xec, 0xf3, 0xff, 0x3c, 0xc0,

    /* U+411 "Б" */
    0xff, 0xc, 0x3e, 0xcf, 0x3f, 0x80,

    /* U+412 "В" */
    0xfb, 0x3c, 0xfe, 0xcf, 0x3f, 0x80,

    /* U+413 "Г" */
    0xff, 0xc, 0x30, 0xc3, 0xc, 0x0,

    /* U+414 "Д" */
    0x1e, 0x36, 0x66, 0x66, 0x66, 0x66, 0xff, 0xc3,

    /* U+415 "Е" */
    0xff, 0xc, 0x3e, 0xc3, 0xf, 0xc0,

    /* U+416 "Ж" */
    0xd7, 0xad, 0xf1, 0xc7, 0xda, 0xf5, 0x80,

    /* U+417 "З" */
    0x7b, 0x30, 0xce, 0xf, 0x37, 0x80,

    /* U+418 "И" */
    0xc7, 0x8f, 0x3e, 0xff, 0x7c, 0xf1, 0x80,

    /* U+419 "Й" */
    0x39, 0x8f, 0x3e, 0xff, 0x7c, 0xf1, 0x80,

    /* U+41A "К" */
    0xc7, 0x9b, 0x67, 0x8d, 0x99, 0xb1, 0x80,

    /* U+41B "Л" */
    0x1e, 0x6d, 0x9b, 0x36, 0x6c, 0xf1, 0x80,

    /* U+41C "М" */
    0xc7, 0xdf, 0xfe, 0xbc, 0x78, 0xf1, 0x80,

    /* U+41D "Н" */
    0xcf, 0x3c, 0xff, 0xcf, 0x3c, 0xc0,

    /* U+41E "О" */
    0x7b, 0x3c, 0xf3, 0xcf, 0x37, 0x80,

    /* U+41F "П" */
    0xff, 0x3c, 0xf3, 0xcf, 0x3c, 0xc0,

    /* U+420 "Р" */
    0xfb, 0x3c, 0xfe, 0xc3, 0xc, 0x0,

    /* U+421 "С" */
    0x7b, 0x3c, 0x30, 0xc3, 0x37, 0x80,

    /* U+422 "Т" */
    0xfc, 0xc3, 0xc, 0x30, 0xc3, 0x0,

    /* U+423 "У" */
    0xcf, 0x3c, 0xdf, 0xc, 0x3f, 0x80,

    /* U+424 "Ф" */
    0x10, 0xfb, 0x5e, 0xbd, 0x6f, 0x84, 0x0,

    /* U+425 "Х" */
    0xc3, 0x66, 0x3c, 0x18, 0x3c, 0x66, 0xc3,

    /* U+426 "Ц" */
    0xcd, 0x9b, 0x36, 0x6c, 0xd9, 0xbf, 0x83,

    /* U+427 "Ч" */
    0xc7, 0x8f, 0x1b, 0xf0, 0x60, 0xc1, 0x80,

    /* U+428 "Ш" */
    0xd7, 0xaf, 0x5e, 0xbd, 0x7a, 0xff, 0x80,

    /* U+429 "Щ" */
    0xd6, 0xd6, 0xd6, 0xd6, 0xd6, 0xd6, 0xff, 0x3,

    /* U+42A "Ъ" */
    0xf1, 0xe2, 0xc1, 0xe3, 0x66, 0xcf, 0x0,

    /* U+42B "Ы" */
    0xc7, 0x8f, 0x1f, 0xbd, 0xfb, 0xfd, 0x80,

    /* U+42C "Ь" */
    0xc3, 0xc, 0x3e, 0xcf, 0x3f, 0x80,

    /* U+42D "Э" */
    0x79, 0x98, 0x19, 0xf0, 0x79, 0x9e, 0x0,

    /* U+42E "Ю" */
    0xdd, 0xaf, 0x5f, 0xbd, 0x7a, 0xf7, 0x0,

    /* U+42F "Я" */
    0x7f, 0x3c, 0xf3, 0x7d, 0xbc, 0xc0,

    /* U+430 "а" */
    0x78, 0x37, 0xf3, 0x7c,

    /* U+431 "б" */
    0xd, 0xec, 0x3e, 0xcf, 0x37, 0x80,

    /* U+432 "в" */
    0xfb, 0x3f, 0xb3, 0xf8,

    /* U+433 "г" */
    0xff, 0xc, 0x30, 0xc0,

    /* U+434 "д" */
    0x3c, 0xd9, 0xb3, 0x6f, 0xf8, 0xc0,

    /* U+435 "е" */
    0x7b, 0x3f, 0xf0, 0x78,

    /* U+436 "ж" */
    0xd6, 0xf8, 0xe3, 0xed, 0x60,

    /* U+437 "з" */
    0x7d, 0x8c, 0x76, 0x37, 0xc0,

    /* U+438 "и" */
    0xc7, 0x9f, 0x7f, 0xbe, 0x60,

    /* U+439 "й" */
    0x39, 0x8f, 0x3e, 0xff, 0x7c, 0xc0,

    /* U+43A "к" */
    0xcf, 0x6f, 0x36, 0xcc,

    /* U+43B "л" */
    0x3e, 0xcd, 0x9b, 0x3e, 0x60,

    /* U+43C "м" */
    0xc7, 0xff, 0xfe, 0xbc, 0x60,

    /* U+43D "н" */
    0xcf, 0x3f, 0xf3, 0xcc,

    /* U+43E "о" */
    0x7b, 0x3c, 0xf3, 0x78,

    /* U+43F "п" */
    0xff, 0x3c, 0xf3, 0xcc,

    /* U+440 "р" */
    0xfb, 0x3c, 0xfe, 0xc3, 0x0,

    /* U+441 "с" */
    0x7e, 0x31, 0x87, 0x80,

    /* U+442 "т" */
    0xfc, 0xc3, 0xc, 0x30,

    /* U+443 "у" */
    0xcf, 0x3c, 0xdf, 0xd, 0xe0,

    /* U+444 "ф" */
    0x10, 0x21, 0xf6, 0xbd, 0x6f, 0x84, 0x8,

    /* U+445 "х" */
    0xc6, 0xd8, 0xe3, 0x6c, 0x60,

    /* U+446 "ц" */
    0xcd, 0x9b, 0x36, 0x6f, 0xe0, 0xc0,

    /* U+447 "ч" */
    0xcf, 0x37, 0xc3, 0xc,

    /* U+448 "ш" */
    0xd7, 0xaf, 0x5e, 0xbf, 0xe0,

    /* U+449 "щ" */
    0xd7, 0xaf, 0x5e, 0xbf, 0xe0, 0xc0,

    /* U+44A "ъ" */
    0xe1, 0xc1, 0xf3, 0x37, 0xc0,

    /* U+44B "ы" */
    0xc7, 0x8f, 0xde, 0xff, 0x60,

    /* U+44C "ь" */
    0xc3, 0xf, 0xb3, 0xf8,

    /* U+44D "э" */
    0x7d, 0x8c, 0x7e, 0x37, 0xc0,

    /* U+44E "ю" */
    0xcd, 0xaf, 0xde, 0xbc, 0xc0,

    /* U+44F "я" */
    0x7f, 0x37, 0xdb, 0xcc,

    /* U+450 "ѐ" */
    0xe0, 0x7, 0xf3, 0xff, 0xf, 0x80,

    /* U+451 "ё" */
    0xcc, 0x7, 0xf3, 0xff, 0xf, 0x80,

    /* U+455 "ѕ" */
    0x7f, 0xf, 0xc3, 0xf8,

    /* U+456 "і" */
    0xc3, 0x6c, 0xc0,

    /* U+457 "ї" */
    0xcc, 0x7, 0xc, 0x30, 0xc7, 0x80,

    /* U+458 "ј" */
    0x18, 0x1, 0xc6, 0x18, 0x6f, 0x0,

    /* U+4D0 "Ӑ" */
    0xc6, 0xf8, 0x1, 0xe6, 0x6f, 0xd9, 0x80,

    /* U+4D1 "ӑ" */
    0xc6, 0xf8, 0xf3, 0x66, 0xcd, 0x8d, 0x80,

    /* U+4D2 "Ӓ" */
    0xcc, 0x7, 0xb3, 0xff, 0x3c, 0xc0,

    /* U+4D3 "ӓ" */
    0xcc, 0x7, 0xb6, 0xdb, 0x66, 0xc0,

    /* U+4D4 "Ӕ" */
    0x3f, 0x6c, 0xcc, 0xfe, 0xcc, 0xcc, 0xcf,

    /* U+4D5 "ӕ" */
    0x7e, 0x1b, 0x7f, 0xd8, 0x77,

    /* U+4D6 "Ӗ" */
    0xc6, 0xf8, 0x7, 0xff, 0x18, 0x3f, 0x80,

    /* U+4D7 "ӗ" */
    0xc6, 0xf8, 0xfb, 0x37, 0xec, 0x1f, 0x0,

    /* U+4E6 "Ӧ" */
    0x66, 0x1, 0xf6, 0x3c, 0x78, 0xdf, 0x0,

    /* U+4E7 "ӧ" */
    0xcc, 0x7, 0xf3, 0xcf, 0x3f, 0x80,

    /* U+4F1 "ӱ" */
    0x66, 0x3, 0x3e, 0x6c, 0xcf, 0x83, 0x1c,

    /* U+5D0 "א" */
    0xcf, 0xb7, 0xb7, 0xcc,

    /* U+5D1 "ב" */
    0xf0, 0x61, 0x86, 0xfc,

    /* U+5D2 "ג" */
    0x70, 0xce, 0xfd, 0x80,

    /* U+5D3 "ד" */
    0xfc, 0x61, 0x86, 0x18,

    /* U+5D4 "ה" */
    0xf8, 0x3c, 0xf3, 0xcc,

    /* U+5D5 "ו" */
    0xcd, 0xb6,

    /* U+5D6 "ז" */
    0xfc, 0x63, 0xc, 0x30,

    /* U+5D7 "ח" */
    0xf9, 0xb6, 0xdb, 0x6c,

    /* U+5D8 "ט" */
    0xc3, 0x6c, 0xf3, 0xcd, 0xe0,

    /* U+5D9 "י" */
    0xe3, 0x30,

    /* U+5DA "ך" */
    0xf8, 0x30, 0xc3, 0xc, 0x30, 0xc0,

    /* U+5DB "כ" */
    0xf0, 0xc6, 0x3f, 0x0,

    /* U+5DC "ל" */
    0xc3, 0xe0, 0xc3, 0x18, 0xc3, 0x0,

    /* U+5DD "ם" */
    0xfc, 0xcd, 0x9b, 0x37, 0xe0,

    /* U+5DE "מ" */
    0xfb, 0x3c, 0xf3, 0xcf, 0x70,

    /* U+5DF "ן" */
    0xcd, 0xb6, 0xc0,

    /* U+5E0 "נ" */
    0x63, 0x33, 0xf0,

    /* U+5E1 "ס" */
    0xff, 0x3c, 0xf3, 0x78,

    /* U+5E2 "ע" */
    0x66, 0xcd, 0x9b, 0x3f, 0xc0,

    /* U+5E3 "ף" */
    0xfb, 0x36, 0xc3, 0xc, 0x30,

    /* U+5E4 "פ" */
    0xfb, 0x36, 0xc3, 0xf8,

    /* U+5E5 "ץ" */
    0xde, 0xdc, 0xc6, 0x30,

    /* U+5E6 "צ" */
    0xcf, 0x37, 0x87, 0xfc,

    /* U+5E7 "ק" */
    0xf8, 0xf7, 0xbd, 0x60,

    /* U+5E8 "ר" */
    0xf0, 0xc6, 0x31, 0x80,

    /* U+5E9 "ש" */
    0xd7, 0xaf, 0x5f, 0x37, 0xc0,

    /* U+5EA "ת" */
    0xfe, 0xcd, 0x9b, 0x3c, 0x60,

    /* U+623 "أ" */
    0x78, 0x92, 0x40,

    /* U+627 "ا" */
    0xf8,

    /* U+628 "ب" */
    0x81, 0x81, 0x7e, 0x0, 0x18,

    /* U+629 "ة" */
    0xd8, 0x1e, 0x97, 0x80,

    /* U+62A "ت" */
    0x36, 0x0, 0x81, 0x81, 0x7e,

    /* U+62B "ث" */
    0x18, 0x66, 0x0, 0x81, 0x7e,

    /* U+62C "ج" */
    0x70, 0x27, 0xe0, 0xb1, 0xf0,

    /* U+62D "ح" */
    0x70, 0x27, 0xe0, 0x81, 0xf0,

    /* U+62F "د" */
    0x20, 0xa3, 0xf0,

    /* U+630 "ذ" */
    0xc0, 0x40, 0x91, 0x7c,

    /* U+631 "ر" */
    0x4, 0x10, 0xbc,

    /* U+632 "ز" */
    0xc, 0x0, 0x41, 0xb, 0xc0,

    /* U+633 "س" */
    0xab, 0x7e, 0x82, 0x0,

    /* U+634 "ش" */
    0x8, 0x28, 0x5, 0x5b, 0xf4, 0x10, 0x0,

    /* U+635 "ص" */
    0xf, 0x66, 0xfd, 0x4, 0x0,

    /* U+637 "ط" */
    0x10, 0x10, 0x17, 0x19, 0xff,

    /* U+638 "ظ" */
    0x16, 0x10, 0x17, 0x19, 0xff,

    /* U+639 "ع" */
    0x39, 0x1f, 0x8, 0x3c,

    /* U+63A "غ" */
    0xc1, 0xc8, 0xf8, 0x41, 0xe0,

    /* U+640 "ـ" */
    0xff,

    /* U+641 "ف" */
    0x6, 0x0, 0x8f, 0x89, 0x7f,

    /* U+642 "ق" */
    0x1b, 0x0, 0xf, 0x89, 0x8f, 0x81, 0x7e,

    /* U+643 "ك" */
    0x2, 0x36, 0xcc, 0x17, 0xc0,

    /* U+644 "ل" */
    0x1, 0x1, 0x1, 0x1, 0x81, 0x81, 0x7e,

    /* U+645 "م" */
    0x8, 0x57, 0x62, 0x82, 0x0,

    /* U+646 "ن" */
    0x18, 0x81, 0x81, 0x81, 0x7e,

    /* U+647 "ه" */
    0xf7, 0x80,

    /* U+648 "و" */
    0x8, 0x51, 0xc1, 0xf8,

    /* U+649 "ى" */
    0x6, 0x12, 0x1c, 0x17, 0xc0,

    /* U+64A "ي" */
    0x6, 0x12, 0x1c, 0x17, 0xc0, 0x1b, 0x0,

    /* U+671 "ٱ" */
    0x39, 0x99, 0x88, 0x20, 0x80,

    /* U+672 "ٲ" */
    0xd, 0x48, 0xc8, 0x20, 0x80,

    /* U+673 "ٳ" */
    0x20, 0x82, 0x8, 0xd, 0x48, 0xc0,

    /* U+1560 "ᕠ" */
    0x18, 0x1, 0xfe, 0x3, 0xc0, 0xff, 0x0,

    /* U+1561 "ᕡ" */
    0x30, 0x7, 0xf0, 0xfc, 0x3f, 0x80,

    /* U+1562 "ᕢ" */
    0x1c, 0x6d, 0x81, 0xe0, 0x78, 0xdf, 0xc,

    /* U+1563 "ᕣ" */
    0x7f, 0xf, 0xc3, 0xf8, 0xc0,

    /* U+156A "ᕪ" */
    0x30, 0xf, 0xcc, 0x30, 0xc3, 0x0,

    /* U+156C "ᕬ" */
    0x7f, 0xb1, 0x60, 0xc3, 0x6, 0xc, 0xc,

    /* U+156D "ᕭ" */
    0x20, 0xcf, 0xcc, 0x30, 0xc1, 0x8c,

    /* U+156E "ᕮ" */
    0x7f, 0xb1, 0x60, 0xc3, 0x6, 0xc, 0x3f,

    /* U+156F "ᕯ" */
    0x20, 0xcf, 0xcc, 0x30, 0xc1, 0xbf,

    /* U+1570 "ᕰ" */
    0x7f, 0xb1, 0x60, 0xc3, 0x6, 0x1d, 0x9e,

    /* U+1571 "ᕱ" */
    0x20, 0xcf, 0xcc, 0x30, 0xcd, 0xde,

    /* U+15EC "ᗬ" */
    0xfc, 0xf, 0xb3, 0xfb, 0x3c, 0xcc,

    /* U+15ED "ᗭ" */
    0xfc, 0xf, 0xb3, 0xc3, 0xc, 0xc,

    /* U+15EF "ᗯ" */
    0xdb, 0xbc, 0x30, 0xc3, 0xf0,

    /* U+16A0 "ᚠ" */
    0xdf, 0xb1, 0xbf, 0x63, 0x0,

    /* U+16A1 "ᚡ" */
    0xdf, 0x9b, 0xf6, 0xc, 0xdf, 0xb0, 0x0,

    /* U+16A2 "ᚢ" */
    0xc3, 0x8f, 0x36, 0xcf, 0x3c, 0xc0,

    /* U+16A3 "ᚣ" */
    0xc1, 0xc3, 0xc6, 0xcc, 0xd8, 0xf5, 0x80,

    /* U+16A4 "ᚤ" */
    0x38, 0xd9, 0xb6, 0x3d, 0x78, 0xf1, 0x80,

    /* U+16A5 "ᚥ" */
    0x30, 0xc7, 0x9e, 0xcf, 0x3c, 0xc0,

    /* U+16A6 "ᚦ" */
    0xc6, 0x3d, 0xbf, 0x63, 0x0,

    /* U+16A7 "ᚧ" */
    0xc1, 0xfb, 0x1e, 0xbc, 0x7f, 0xb0, 0x0,

    /* U+16A8 "ᚨ" */
    0xf6, 0xf1, 0xed, 0xe3, 0x0,

    /* U+16A9 "ᚩ" */
    0xff, 0xed, 0xbf, 0xfb, 0x6c, 0x30,

    /* U+16AA "ᚪ" */
    0xff, 0xed, 0xbc, 0xdb, 0xc, 0x0,

    /* U+16AB "ᚫ" */
    0xf6, 0xf1, 0xed, 0xe3, 0x0,

    /* U+16B1 "ᚱ" */
    0xf3, 0x6c, 0xf6, 0xf3, 0x6c, 0xc0,

    /* U+16B2 "ᚲ" */
    0x36, 0xc6, 0x30,

    /* U+16B3 "ᚳ" */
    0xc3, 0xc, 0x38, 0xf3, 0x6c, 0xc0,

    /* U+16B4 "ᚴ" */
    0xde, 0xfd, 0x8c, 0x63, 0x0,

    /* U+16B5 "ᚵ" */
    0xd7, 0x8f, 0x36, 0xcf, 0x18, 0x30, 0x0,

    /* U+16B6 "ᚶ" */
    0x6d, 0xbf, 0x98, 0x61, 0x86, 0x0,

    /* U+16B7 "ᚷ" */
    0xcf, 0x37, 0x8c, 0x7b, 0x3c, 0xc0,

    /* U+16B8 "ᚸ" */
    0xef, 0xdd, 0xf7, 0xb7, 0xdd, 0xfb, 0x80,

    /* U+16B9 "ᚹ" */
    0xf3, 0x6c, 0xf6, 0xf3, 0xc, 0x0,

    /* U+16BA "ᚺ" */
    0xcf, 0x3f, 0xff, 0xdf, 0x3c, 0xf3,

    /* U+16BB "ᚻ" */
    0xcf, 0x3f, 0xff, 0xff, 0xfd, 0xf3,

    /* U+16BC "ᚼ" */
    0x30, 0x63, 0xdf, 0xef, 0x7e, 0xc, 0x0,

    /* U+16BD "ᚽ" */
    0x66, 0x6f, 0x66, 0x60,

    /* U+16BE "ᚾ" */
    0x30, 0xcb, 0x3f, 0x34, 0xc3, 0x0,

    /* U+16BF "ᚿ" */
    0xc6, 0x31, 0xed, 0xe3, 0x0,

    /* U+16C0 "ᛀ" */
    0x30, 0xcb, 0x3f, 0x34, 0xc3, 0x0,

    /* U+16C1 "ᛁ" */
    0xff, 0xfc,

    /* U+16C2 "ᛂ" */
    0x66, 0x6f, 0x66, 0x60,

    /* U+16C3 "ᛃ" */
    0x61, 0x99, 0x98, 0x60,

    /* U+16C4 "ᛄ" */
    0x30, 0x61, 0xf7, 0xbf, 0xce, 0xc, 0x0,

    /* U+16C5 "ᛅ" */
    0x30, 0xc3, 0x7f, 0xb0, 0xc3, 0x0,

    /* U+16C6 "ᛆ" */
    0x18, 0xc6, 0xfd, 0x8c, 0x60,

    /* U+16C7 "ᛇ" */
    0x3c, 0x7c, 0xd9, 0x83, 0x1e, 0x3c, 0x38,

    /* U+16C8 "ᛈ" */
    0xcf, 0x3f, 0xb0, 0xfb, 0x3c, 0xc0,

    /* U+16C9 "ᛉ" */
    0xd7, 0xad, 0xf0, 0xc1, 0x83, 0x6, 0x0,

    /* U+16CA "ᛊ" */
    0x7c, 0x63, 0x6c, 0x70,

    /* U+16CB "ᛋ" */
    0xcc, 0xdf, 0xb3, 0x30,

    /* U+16CC "ᛌ" */
    0xff,

    /* U+16CD "ᛍ" */
    0x66, 0x6f,

    /* U+16CE "ᛎ" */
    0x31, 0xef, 0xf3, 0x80,

    /* U+16CF "ᛏ" */
    0x30, 0xfb, 0xdf, 0x83, 0x6, 0xc, 0x0,

    /* U+16D0 "ᛐ" */
    0x1b, 0xf6, 0x31, 0x8c, 0x60,

    /* U+16D1 "ᛑ" */
    0x19, 0xed, 0x86, 0x3c, 0x61, 0x80,

    /* U+16D2 "ᛒ" */
    0xf3, 0x6f, 0x36, 0xcf, 0x6f, 0x0,

    /* U+16D3 "ᛓ" */
    0xc3, 0x7f, 0xbf, 0xff, 0xec, 0x30,

    /* U+16D4 "ᛔ" */
    0xfd, 0xaf, 0xf6, 0x3d, 0x78, 0xff, 0x0,

    /* U+16D5 "ᛕ" */
    0xcf, 0x6f, 0xb0, 0xf3, 0x6c, 0xc0,

    /* U+16D6 "ᛖ" */
    0x83, 0x8f, 0xfe, 0xbc, 0x78, 0xf1, 0x80,

    /* U+16D7 "ᛗ" */
    0xcf, 0xfb, 0x7f, 0xcf, 0x3c, 0xc0,

    /* U+16D8 "ᛘ" */
    0xb7, 0xf3, 0xc, 0x30, 0xc3, 0x0,

    /* U+16D9 "ᛙ" */
    0xf6, 0x66, 0x66, 0x60,

    /* U+16DA "ᛚ" */
    0xe7, 0xb7, 0x8c, 0x63, 0x0,

    /* U+16DB "ᛛ" */
    0x71, 0xe6, 0xd8, 0xf1, 0x86, 0x0,

    /* U+16DC "ᛜ" */
    0x31, 0xec, 0xde, 0x30,

    /* U+16DD "ᛝ" */
    0xcf, 0x37, 0xb3, 0x7b, 0x3c, 0xc0,

    /* U+16DE "ᛞ" */
    0x87, 0x3f, 0xed, 0xff, 0x38, 0x40,

    /* U+16DF "ᛟ" */
    0x31, 0xec, 0xde, 0x31, 0xec, 0xc0,

    /* U+16E0 "ᛠ" */
    0xb7, 0xfb, 0x4c, 0x30, 0xc3, 0x0,

    /* U+16E1 "ᛡ" */
    0x36, 0xc6, 0x30,

    /* U+16E2 "ᛢ" */
    0xb3, 0xcb, 0xc, 0x30, 0xd3, 0xcd,

    /* U+16E3 "ᛣ" */
    0x18, 0x30, 0x60, 0xc7, 0xda, 0xf5, 0x80,

    /* U+16E4 "ᛤ" */
    0xd7, 0xad, 0xf6, 0xb7, 0xda, 0xf5, 0x80,

    /* U+16E5 "ᛥ" */
    0x87, 0x3f, 0xf3, 0xff, 0x38, 0x40,

    /* U+16E6 "ᛦ" */
    0xe1, 0xf3, 0x3e, 0x3f, 0xfa, 0xf5, 0x80,

    /* U+16E7 "ᛧ" */
    0xff,

    /* U+16E8 "ᛨ" */
    0x30, 0xfb, 0xd7, 0x8f, 0x7f, 0x8c, 0x0,

    /* U+16E9 "ᛩ" */
    0x3d, 0xbc, 0xdb, 0x3c, 0x30, 0xc0,

    /* U+16EA "ᛪ" */
    0x61, 0xe1, 0x93, 0xe4, 0xc3, 0xc3, 0x0,

    /* U+16EB "᛫" */
    0xc0,

    /* U+16EC "᛬" */
    0xc3,

    /* U+16ED "᛭" */
    0x78, 0xcb, 0x7f, 0xb4, 0xc7, 0x80,

    /* U+16EE "ᛮ" */
    0x38, 0x78, 0xdf, 0x8b, 0x6, 0xc, 0x0,

    /* U+16EF "ᛯ" */
    0xd7, 0xad, 0xf0, 0xc7, 0xda, 0xf5, 0x80,

    /* U+16F0 "ᛰ" */
    0x10, 0x21, 0xf6, 0xb7, 0xc2, 0x4, 0x0,

    /* U+16F1 "ᛱ" */
    0xc3, 0xc, 0x3e, 0xdb, 0x3c, 0xc0,

    /* U+16F2 "ᛲ" */
    0x33, 0xbf, 0xdc, 0xc0,

    /* U+16F3 "ᛳ" */
    0x30, 0xfb, 0xdf, 0xe7, 0x6, 0xc, 0x0,

    /* U+16F4 "ᛴ" */
    0x61, 0x86, 0xde, 0xd8, 0x61, 0x80,

    /* U+16F5 "ᛵ" */
    0x79, 0xe7, 0x98,

    /* U+16F6 "ᛶ" */
    0xc1, 0x81, 0xbb, 0xfd, 0x81, 0x83, 0x0,

    /* U+16F7 "ᛷ" */
    0xc3, 0xf, 0xb3, 0xcf, 0x3c, 0xc0,

    /* U+16F8 "ᛸ" */
    0x30, 0xc3, 0xc, 0x7b, 0x3c, 0xc0,

    /* U+1E00 "Ḁ" */
    0x1e, 0xdb, 0x37, 0xec, 0xcd, 0xbb, 0x8c,

    /* U+1E01 "ḁ" */
    0x7b, 0x6d, 0xb6, 0x6c, 0xc0,

    /* U+1E02 "Ḃ" */
    0x30, 0xf, 0xb3, 0xfb, 0x3f, 0x80,

    /* U+1E04 "Ḅ" */
    0xf8, 0xdb, 0xe3, 0x66, 0x6c, 0xff, 0xc,

    /* U+1E05 "ḅ" */
    0x61, 0x87, 0x9b, 0x6d, 0xbd, 0x8c,

    /* U+1E06 "Ḇ" */
    0xf8, 0xdb, 0xe3, 0x66, 0x6c, 0xff, 0x3f,

    /* U+1E07 "ḇ" */
    0x61, 0x87, 0x9b, 0x6d, 0xbd, 0xbf,

    /* U+1E0A "Ḋ" */
    0x30, 0xf, 0xb3, 0xcf, 0x3f, 0x80,

    /* U+1E0C "Ḍ" */
    0xf0, 0xf1, 0xb3, 0x36, 0x6c, 0xff, 0xc,

    /* U+1E0D "ḍ" */
    0x30, 0x67, 0xb6, 0xdb, 0x67, 0xcc,

    /* U+1E0E "Ḏ" */
    0xf0, 0xf1, 0xb3, 0x36, 0x6c, 0xff, 0x3f,

    /* U+1E0F "ḏ" */
    0x30, 0x67, 0xb6, 0xdb, 0x67, 0xff,

    /* U+1E41 "ṁ" */
    0x18, 0x1, 0x9f, 0xfd, 0x78, 0xf1, 0x80,

    /* U+1E42 "Ṃ" */
    0x67, 0x9f, 0xfe, 0xbc, 0x78, 0xf3, 0xc,

    /* U+1E43 "ṃ" */
    0x67, 0xff, 0x5e, 0x3c, 0x63, 0x0,

    /* U+1E44 "Ṅ" */
    0x18, 0x3, 0x1f, 0x3f, 0x7b, 0xf3, 0x80,

    /* U+1E45 "ṅ" */
    0x30, 0xf, 0x36, 0xdb, 0x6c, 0xc0,

    /* U+1E46 "Ṇ" */
    0xe6, 0xed, 0xfb, 0x76, 0x6c, 0xf3, 0xc,

    /* U+1E47 "ṇ" */
    0xf3, 0x6d, 0xb6, 0xcc, 0xc0,

    /* U+1E48 "Ṉ" */
    0xe6, 0xed, 0xfb, 0x76, 0x6c, 0xf3, 0x3f,

    /* U+1E49 "ṉ" */
    0xf3, 0x6d, 0xb6, 0xcf, 0xf0,

    /* U+1E4A "Ṋ" */
    0xe6, 0xed, 0xfb, 0x76, 0x6c, 0xfb, 0x9e,

    /* U+1E4B "ṋ" */
    0xf3, 0x6d, 0xb6, 0xcd, 0xe0,

    /* U+1E58 "Ṙ" */
    0x30, 0xf, 0xb3, 0xfb, 0x3c, 0xc0,

    /* U+1E59 "ṙ" */
    0x30, 0xf, 0xb3, 0xc3, 0xc, 0x0,

    /* U+1E5A "Ṛ" */
    0xdc, 0xcd, 0xb3, 0xc6, 0xcd, 0xb1, 0x8c,

    /* U+1E5B "ṛ" */
    0xdb, 0xbc, 0x30, 0xc0, 0xc0,

    /* U+1E5E "Ṟ" */
    0xdc, 0xcd, 0xb3, 0xc6, 0xcd, 0xb1, 0xbf,

    /* U+1F00 "ἀ" */
    0x18, 0x60, 0x3, 0xbc, 0xf9, 0xdd, 0x80,

    /* U+1F01 "ἁ" */
    0x30, 0x30, 0x3, 0xbc, 0xf9, 0xdd, 0x80,

    /* U+1F02 "ἂ" */
    0x34, 0xc4, 0x3, 0xbc, 0xf9, 0xdd, 0x80,

    /* U+1F03 "ἃ" */
    0x64, 0x64, 0x3, 0xbc, 0xf9, 0xdd, 0x80,

    /* U+1F04 "ἄ" */
    0x32, 0xc8, 0x3, 0xbc, 0xf9, 0xdd, 0x80,

    /* U+1F05 "ἅ" */
    0x62, 0x68, 0x3, 0xbc, 0xf9, 0xdd, 0x80,

    /* U+1F06 "ἆ" */
    0xdb, 0x8, 0x0, 0x76, 0xce, 0xce, 0x76,

    /* U+1F07 "ἇ" */
    0xdb, 0x10, 0x0, 0x76, 0xce, 0xce, 0x76,

    /* U+1F08 "Ἀ" */
    0x31, 0x80, 0x1e, 0xcf, 0xfc, 0xc0,

    /* U+1F09 "Ἁ" */
    0x60, 0xc0, 0x1e, 0xcf, 0xfc, 0xc0,

    /* U+1F0A "Ἂ" */
    0x6b, 0x10, 0x1e, 0xcf, 0xfc, 0xc0,

    /* U+1F0B "Ἃ" */
    0xc9, 0x90, 0x1e, 0xcf, 0xfc, 0xc0,

    /* U+1F0C "Ἄ" */
    0x67, 0x20, 0x1e, 0xcf, 0xfc, 0xc0,

    /* U+1F0D "Ἅ" */
    0xc5, 0xa0, 0x1e, 0xcf, 0xfc, 0xc0,

    /* U+1F0E "Ἆ" */
    0xdb, 0x8, 0x0, 0x3c, 0x66, 0x7e, 0x66,

    /* U+1F0F "Ἇ" */
    0xdb, 0x10, 0x0, 0x3c, 0x66, 0x7e, 0x66,

    /* U+1F10 "ἐ" */
    0x31, 0x87, 0xf0, 0x7b, 0x7, 0xc0,

    /* U+1F11 "ἑ" */
    0x60, 0xc7, 0xf0, 0x7b, 0x7, 0xc0,

    /* U+1F12 "ἒ" */
    0x6b, 0x17, 0xf0, 0x7b, 0x7, 0xc0,

    /* U+1F13 "ἓ" */
    0xc9, 0x97, 0xf0, 0x7b, 0x7, 0xc0,

    /* U+1F14 "ἔ" */
    0x67, 0x27, 0xf0, 0x7b, 0x7, 0xc0,

    /* U+1F15 "ἕ" */
    0xc5, 0xa7, 0xf0, 0x7b, 0x7, 0xc0,

    /* U+1F16 "἖" */
    0xdb, 0x8, 0x3e, 0x60, 0x3c, 0x60, 0x3e,

    /* U+1F17 "἗" */
    0xdb, 0x10, 0x3e, 0x60, 0x3c, 0x60, 0x3e,

    /* U+1F18 "Ἐ" */
    0x18, 0x60, 0x7, 0xff, 0x18, 0x3f, 0x80,

    /* U+1F19 "Ἑ" */
    0x30, 0x30, 0x7, 0xff, 0x18, 0x3f, 0x80,

    /* U+1F1A "Ἒ" */
    0x34, 0xc4, 0x7, 0xff, 0x18, 0x3f, 0x80,

    /* U+1F1B "Ἓ" */
    0x64, 0x64, 0x7, 0xff, 0x18, 0x3f, 0x80,

    /* U+1F1C "Ἔ" */
    0x32, 0xc8, 0x7, 0xff, 0x18, 0x3f, 0x80,

    /* U+1F1D "Ἕ" */
    0x62, 0x68, 0x7, 0xff, 0x18, 0x3f, 0x80,

    /* U+1F1E "἞" */
    0xdb, 0x8, 0x0, 0xfe, 0xf0, 0xc0, 0xfe,

    /* U+1F1F "἟" */
    0xdb, 0x10, 0x0, 0xfe, 0xf0, 0xc0, 0xfe,

    /* U+1F20 "ἠ" */
    0x31, 0x80, 0x3e, 0xcf, 0x3c, 0xc3,

    /* U+1F21 "ἡ" */
    0x60, 0xc0, 0x3e, 0xcf, 0x3c, 0xc3,

    /* U+1F22 "ἢ" */
    0x6b, 0x10, 0x3e, 0xcf, 0x3c, 0xc3,

    /* U+1F23 "ἣ" */
    0xc9, 0x90, 0x3e, 0xcf, 0x3c, 0xc3,

    /* U+1F24 "ἤ" */
    0x67, 0x20, 0x3e, 0xcf, 0x3c, 0xc3,

    /* U+1F25 "ἥ" */
    0xc5, 0xa0, 0x3e, 0xcf, 0x3c, 0xc3,

    /* U+1F26 "ἦ" */
    0xdb, 0x8, 0x0, 0x7c, 0x66, 0x66, 0x66, 0x6,

    /* U+1F27 "ἧ" */
    0xdb, 0x10, 0x0, 0x7c, 0x66, 0x66, 0x66, 0x6,

    /* U+1F28 "Ἠ" */
    0x31, 0x80, 0x33, 0xff, 0x3c, 0xc0,

    /* U+1F29 "Ἡ" */
    0x60, 0xc0, 0x33, 0xff, 0x3c, 0xc0,

    /* U+1F2A "Ἢ" */
    0x6b, 0x10, 0x33, 0xff, 0x3c, 0xc0,

    /* U+1F2B "Ἣ" */
    0xc9, 0x90, 0x33, 0xff, 0x3c, 0xc0,

    /* U+1F2C "Ἤ" */
    0x67, 0x20, 0x33, 0xff, 0x3c, 0xc0,

    /* U+1F2D "Ἥ" */
    0xc5, 0xa0, 0x33, 0xff, 0x3c, 0xc0,

    /* U+1F2E "Ἦ" */
    0xdb, 0x8, 0x0, 0x66, 0x7e, 0x66, 0x66,

    /* U+1F2F "Ἧ" */
    0xdb, 0x10, 0x0, 0x66, 0x7e, 0x66, 0x66,

    /* U+1F30 "ἰ" */
    0x6c, 0x6, 0x66, 0x30,

    /* U+1F31 "ἱ" */
    0xc6, 0x6, 0x66, 0x30,

    /* U+1F32 "ἲ" */
    0x6b, 0x10, 0xc, 0x30, 0xc1, 0x80,

    /* U+1F33 "ἳ" */
    0xc9, 0x90, 0xc, 0x30, 0xc1, 0x80,

    /* U+1F34 "ἴ" */
    0x67, 0x20, 0xc, 0x30, 0xc1, 0x80,

    /* U+1F35 "ἵ" */
    0xc5, 0xa0, 0xc, 0x30, 0xc1, 0x80,

    /* U+1F36 "ἶ" */
    0xdb, 0x8, 0x0, 0x18, 0x18, 0x18, 0xc,

    /* U+1F37 "ἷ" */
    0xdb, 0x10, 0x0, 0x18, 0x18, 0x18, 0xc,

    /* U+1F38 "Ἰ" */
    0x31, 0x80, 0x3f, 0x30, 0xcf, 0xc0,

    /* U+1F39 "Ἱ" */
    0x60, 0xc0, 0x3f, 0x30, 0xcf, 0xc0,

    /* U+1F3A "Ἲ" */
    0x6b, 0x10, 0x3f, 0x30, 0xcf, 0xc0,

    /* U+1F3B "Ἳ" */
    0xc9, 0x90, 0x3f, 0x30, 0xcf, 0xc0,

    /* U+1F3C "Ἴ" */
    0x67, 0x20, 0x3f, 0x30, 0xcf, 0xc0,

    /* U+1F3D "Ἵ" */
    0xc5, 0xa0, 0x3f, 0x30, 0xcf, 0xc0,

    /* U+1F3E "Ἶ" */
    0xdb, 0x8, 0x0, 0x7e, 0x18, 0x18, 0x7e,

    /* U+1F3F "Ἷ" */
    0xdb, 0x10, 0x0, 0x7e, 0x18, 0x18, 0x7e,

    /* U+1F40 "ὀ" */
    0x31, 0x80, 0x1e, 0xcf, 0x37, 0x80,

    /* U+1F41 "ὁ" */
    0x60, 0xc0, 0x1e, 0xcf, 0x37, 0x80,

    /* U+1F42 "ὂ" */
    0x6b, 0x10, 0x1e, 0xcf, 0x37, 0x80,

    /* U+1F43 "ὃ" */
    0xc9, 0x90, 0x1e, 0xcf, 0x37, 0x80,

    /* U+1F44 "ὄ" */
    0x67, 0x20, 0x1e, 0xcf, 0x37, 0x80,

    /* U+1F45 "ὅ" */
    0xc5, 0xa0, 0x1e, 0xcf, 0x37, 0x80,

    /* U+1F46 "὆" */
    0xdb, 0x8, 0x0, 0x3c, 0x66, 0x66, 0x3c,

    /* U+1F47 "὇" */
    0xdb, 0x10, 0x0, 0x3c, 0x66, 0x66, 0x3c,

    /* U+1F48 "Ὀ" */
    0x18, 0x60, 0x3, 0xec, 0x78, 0xdf, 0x0,

    /* U+1F49 "Ὁ" */
    0x30, 0x30, 0x3, 0xec, 0x78, 0xdf, 0x0,

    /* U+1F4A "Ὂ" */
    0x34, 0xc4, 0x3, 0xec, 0x78, 0xdf, 0x0,

    /* U+1F4B "Ὃ" */
    0x64, 0x64, 0x3, 0xec, 0x78, 0xdf, 0x0,

    /* U+1F4C "Ὄ" */
    0x32, 0xc8, 0x3, 0xec, 0x78, 0xdf, 0x0,

    /* U+1F4D "Ὅ" */
    0x62, 0x68, 0x3, 0xec, 0x78, 0xdf, 0x0,

    /* U+1F4E "὎" */
    0xdb, 0x8, 0x0, 0x7c, 0xc6, 0xc6, 0x7c,

    /* U+1F4F "὏" */
    0xdb, 0x10, 0x0, 0x7c, 0xc6, 0xc6, 0x7c,

    /* U+1F50 "ὐ" */
    0x18, 0x60, 0x6, 0x36, 0x6c, 0xcf, 0x0,

    /* U+1F51 "ὑ" */
    0x30, 0x30, 0x6, 0x36, 0x6c, 0xcf, 0x0,

    /* U+1F52 "ὒ" */
    0x34, 0xc4, 0x6, 0x36, 0x6c, 0xcf, 0x0,

    /* U+1F53 "ὓ" */
    0x64, 0x64, 0x6, 0x36, 0x6c, 0xcf, 0x0,

    /* U+1F54 "ὔ" */
    0x32, 0xc8, 0x6, 0x36, 0x6c, 0xcf, 0x0,

    /* U+1F55 "ὕ" */
    0x62, 0x68, 0x6, 0x36, 0x6c, 0xcf, 0x0,

    /* U+1F56 "ὖ" */
    0xdb, 0x8, 0x0, 0xc6, 0x66, 0x66, 0x3c,

    /* U+1F57 "ὗ" */
    0xdb, 0x10, 0x0, 0xc6, 0x66, 0x66, 0x3c,

    /* U+1F58 "὘" */
    0x31, 0x80, 0x33, 0x78, 0xc3, 0x0,

    /* U+1F59 "Ὑ" */
    0x60, 0xc0, 0x33, 0x78, 0xc3, 0x0,

    /* U+1F5A "὚" */
    0x6b, 0x10, 0x33, 0x78, 0xc3, 0x0,

    /* U+1F5B "Ὓ" */
    0xc9, 0x90, 0x33, 0x78, 0xc3, 0x0,

    /* U+1F5C "὜" */
    0x67, 0x20, 0x33, 0x78, 0xc3, 0x0,

    /* U+1F5D "Ὕ" */
    0xc5, 0xa0, 0x33, 0x78, 0xc3, 0x0,

    /* U+1F5E "὞" */
    0xdb, 0x8, 0x0, 0x66, 0x3c, 0x18, 0x18,

    /* U+1F5F "Ὗ" */
    0xdb, 0x10, 0x0, 0x66, 0x3c, 0x18, 0x18,

    /* U+1F60 "ὠ" */
    0x18, 0x60, 0x6, 0x3d, 0x7f, 0xdb, 0x0,

    /* U+1F61 "ὡ" */
    0x30, 0x30, 0x6, 0x3d, 0x7f, 0xdb, 0x0,

    /* U+1F62 "ὢ" */
    0x34, 0xc4, 0x6, 0x3d, 0x7f, 0xdb, 0x0,

    /* U+1F63 "ὣ" */
    0x64, 0x64, 0x6, 0x3d, 0x7f, 0xdb, 0x0,

    /* U+1F64 "ὤ" */
    0x32, 0xc8, 0x6, 0x3d, 0x7f, 0xdb, 0x0,

    /* U+1F65 "ὥ" */
    0x62, 0x68, 0x6, 0x3d, 0x7f, 0xdb, 0x0,

    /* U+1F66 "ὦ" */
    0xdb, 0x8, 0x0, 0xc6, 0xd6, 0xfe, 0x6c,

    /* U+1F67 "ὧ" */
    0xdb, 0x10, 0x0, 0xc6, 0xd6, 0xfe, 0x6c,

    /* U+1F68 "Ὠ" */
    0x7d, 0xef, 0x1e, 0x3c, 0x6d, 0xbb, 0x80,

    /* U+1F69 "Ὡ" */
    0x7d, 0xbf, 0x1e, 0x3c, 0x6d, 0xbb, 0x80,

    /* U+1F6A "Ὢ" */
    0x7d, 0xcf, 0x1e, 0x3c, 0x6d, 0xbb, 0x80,

    /* U+1F6B "Ὣ" */
    0x7d, 0xef, 0x1e, 0x3c, 0x6d, 0xbb, 0x80,

    /* U+1F6C "Ὤ" */
    0x7f, 0xcf, 0x1e, 0x3c, 0x6d, 0xbb, 0x80,

    /* U+1F6D "Ὥ" */
    0x7f, 0xef, 0x1e, 0x3c, 0x6d, 0xbb, 0x80,

    /* U+1F6E "Ὦ" */
    0xff, 0xce, 0xc6, 0xc6, 0xc6, 0x6c, 0xee,

    /* U+1F6F "Ὧ" */
    0xff, 0xd6, 0xc6, 0xc6, 0xc6, 0x6c, 0xee,

    /* U+1F70 "ὰ" */
    0x70, 0x1, 0xde, 0x7c, 0x79, 0xdd, 0x80,

    /* U+1F71 "ά" */
    0xe, 0x1, 0xde, 0x7c, 0x79, 0xdd, 0x80,

    /* U+1F72 "ὲ" */
    0xe0, 0x7, 0xf0, 0x7b, 0x7, 0xc0,

    /* U+1F73 "έ" */
    0x1c, 0x7, 0xf0, 0x7b, 0x7, 0xc0,

    /* U+1F74 "ὴ" */
    0xe0, 0xf, 0xb3, 0xcf, 0x3c, 0xc3,

    /* U+1F75 "ή" */
    0x1c, 0xf, 0xb3, 0xcf, 0x3c, 0xc3,

    /* U+1F76 "ὶ" */
    0xe0, 0xc, 0x63, 0x18, 0x60,

    /* U+1F77 "ί" */
    0x70, 0xcc, 0xcc, 0x60,

    /* U+1F78 "ὸ" */
    0xe0, 0x7, 0xb3, 0xcf, 0x37, 0x80,

    /* U+1F79 "ό" */
    0x1c, 0x7, 0xb3, 0xcf, 0x37, 0x80,

    /* U+1F7A "ὺ" */
    0x70, 0x3, 0x1b, 0x36, 0x6c, 0xcf, 0x0,

    /* U+1F7B "ύ" */
    0xe, 0x3, 0x1b, 0x36, 0x6c, 0xcf, 0x0,

    /* U+1F7C "ὼ" */
    0x70, 0x3, 0x1e, 0xbd, 0x7f, 0xdb, 0x0,

    /* U+1F7D "ώ" */
    0xe, 0x3, 0x1e, 0xbd, 0x7f, 0xdb, 0x0,

    /* U+1F80 "ᾀ" */
    0x18, 0x60, 0x3, 0xbc, 0xf9, 0xdd, 0x8c,

    /* U+1F81 "ᾁ" */
    0x30, 0x30, 0x3, 0xbc, 0xf9, 0xdd, 0x8c,

    /* U+1F82 "ᾂ" */
    0x34, 0xc4, 0x3, 0xbc, 0xf9, 0xdd, 0x8c,

    /* U+1F83 "ᾃ" */
    0x64, 0x64, 0x3, 0xbc, 0xf9, 0xdd, 0x8c,

    /* U+1F84 "ᾄ" */
    0x32, 0xc8, 0x3, 0xbc, 0xf9, 0xdd, 0x8c,

    /* U+1F85 "ᾅ" */
    0x62, 0x68, 0x3, 0xbc, 0xf9, 0xdd, 0x8c,

    /* U+1F86 "ᾆ" */
    0xdb, 0x8, 0x0, 0x76, 0xce, 0xce, 0x76, 0x18,

    /* U+1F87 "ᾇ" */
    0xdb, 0x10, 0x0, 0x76, 0xce, 0xce, 0x76, 0x18,

    /* U+1F88 "ᾈ" */
    0x31, 0x80, 0x1e, 0xcf, 0xfe, 0xcc,

    /* U+1F89 "ᾉ" */
    0x60, 0xc0, 0x1e, 0xcf, 0xfe, 0xcc,

    /* U+1F8A "ᾊ" */
    0x6b, 0x10, 0x1e, 0xcf, 0xfe, 0xcc,

    /* U+1F8B "ᾋ" */
    0xc9, 0x90, 0x1e, 0xcf, 0xfe, 0xcc,

    /* U+1F8C "ᾌ" */
    0x67, 0x20, 0x1e, 0xcf, 0xfe, 0xcc,

    /* U+1F8D "ᾍ" */
    0xc5, 0xa0, 0x1e, 0xcf, 0xfe, 0xcc,

    /* U+1F8E "ᾎ" */
    0xdb, 0x8, 0x0, 0x3c, 0x66, 0x7e, 0x76, 0x18,

    /* U+1F8F "ᾏ" */
    0xdb, 0x10, 0x0, 0x3c, 0x66, 0x7e, 0x76, 0x18,

    /* U+1F90 "ᾐ" */
    0x31, 0x80, 0x3e, 0xcf, 0x3e, 0xcf,

    /* U+1F91 "ᾑ" */
    0x60, 0xc0, 0x3e, 0xcf, 0x3e, 0xcf,

    /* U+1F92 "ᾒ" */
    0x6b, 0x10, 0x3e, 0xcf, 0x3e, 0xcf,

    /* U+1F93 "ᾓ" */
    0xc9, 0x90, 0x3e, 0xcf, 0x3e, 0xcf,

    /* U+1F94 "ᾔ" */
    0x67, 0x20, 0x3e, 0xcf, 0x3e, 0xcf,

    /* U+1F95 "ᾕ" */
    0xc5, 0xa0, 0x3e, 0xcf, 0x3e, 0xcf,

    /* U+1F96 "ᾖ" */
    0xdb, 0x8, 0x0, 0x7c, 0x66, 0x66, 0x76, 0x1e,

    /* U+1F97 "ᾗ" */
    0xdb, 0x10, 0x0, 0x7c, 0x66, 0x66, 0x76, 0x1e,

    /* U+1F98 "ᾘ" */
    0x31, 0x80, 0x33, 0xff, 0x3e, 0xcc,

    /* U+1F99 "ᾙ" */
    0x60, 0xc0, 0x33, 0xff, 0x3e, 0xcc,

    /* U+1F9A "ᾚ" */
    0x6b, 0x10, 0x33, 0xff, 0x3e, 0xcc,

    /* U+1F9B "ᾛ" */
    0xc9, 0x90, 0x33, 0xff, 0x3e, 0xcc,

    /* U+1F9C "ᾜ" */
    0x67, 0x20, 0x33, 0xff, 0x3e, 0xcc,

    /* U+1F9D "ᾝ" */
    0xc5, 0xa0, 0x33, 0xff, 0x3e, 0xcc,

    /* U+1F9E "ᾞ" */
    0xdb, 0x8, 0x0, 0x66, 0x7e, 0x66, 0x76, 0x18,

    /* U+1F9F "ᾟ" */
    0xdb, 0x10, 0x0, 0x66, 0x7e, 0x66, 0x76, 0x18,

    /* U+1FA0 "ᾠ" */
    0x18, 0x60, 0x6, 0x3d, 0x7f, 0xdf, 0xc,

    /* U+1FA1 "ᾡ" */
    0x30, 0x30, 0x6, 0x3d, 0x7f, 0xdf, 0xc,

    /* U+1FA2 "ᾢ" */
    0x34, 0xc4, 0x6, 0x3d, 0x7f, 0xdf, 0xc,

    /* U+1FA3 "ᾣ" */
    0x64, 0x64, 0x6, 0x3d, 0x7f, 0xdf, 0xc,

    /* U+1FA4 "ᾤ" */
    0x32, 0xc8, 0x6, 0x3d, 0x7f, 0xdf, 0xc,

    /* U+1FA5 "ᾥ" */
    0x62, 0x68, 0x6, 0x3d, 0x7f, 0xdf, 0xc,

    /* U+1FA6 "ᾦ" */
    0xdb, 0x8, 0x0, 0xc6, 0xd6, 0xfe, 0x7c, 0x18,

    /* U+1FA7 "ᾧ" */
    0xdb, 0x10, 0x0, 0xc6, 0xd6, 0xfe, 0x7c, 0x18,

    /* U+1FA8 "ᾨ" */
    0x7d, 0xef, 0x1e, 0x3c, 0x6d, 0xbf, 0x8c,

    /* U+1FA9 "ᾩ" */
    0x7d, 0xbf, 0x1e, 0x3c, 0x6d, 0xbf, 0x8c,

    /* U+1FAA "ᾪ" */
    0x7d, 0xcf, 0x1e, 0x3c, 0x6d, 0xbf, 0x8c,

    /* U+1FAB "ᾫ" */
    0x7d, 0xef, 0x1e, 0x3c, 0x6d, 0xbf, 0x8c,

    /* U+1FAC "ᾬ" */
    0x7f, 0xcf, 0x1e, 0x3c, 0x6d, 0xbf, 0x8c,

    /* U+1FAD "ᾭ" */
    0x7f, 0xef, 0x1e, 0x3c, 0x6d, 0xbf, 0x8c,

    /* U+1FAE "ᾮ" */
    0xff, 0xce, 0xc6, 0xc6, 0xc6, 0x6c, 0xfe, 0x18,

    /* U+1FAF "ᾯ" */
    0xff, 0xd6, 0xc6, 0xc6, 0xc6, 0x6c, 0xfe, 0x18,

    /* U+1FB0 "ᾰ" */
    0x7e, 0x1, 0xde, 0x7c, 0x79, 0xdd, 0x80,

    /* U+1FB1 "ᾱ" */
    0xc6, 0xf8, 0x3, 0xbc, 0xf9, 0xdd, 0x80,

    /* U+1FB2 "ᾲ" */
    0x70, 0x1, 0xde, 0x7c, 0x79, 0xdd, 0x8c,

    /* U+1FB3 "ᾳ" */
    0x77, 0x9f, 0x1e, 0x77, 0x63, 0x0,

    /* U+1FB4 "ᾴ" */
    0xe, 0x1, 0xde, 0x7c, 0x79, 0xdd, 0x8c,

    /* U+1FB6 "ᾶ" */
    0x77, 0xb8, 0x3, 0xbc, 0xf9, 0xdd, 0x80,

    /* U+1FB7 "ᾷ" */
    0x77, 0xb8, 0x3, 0xbc, 0xf9, 0xdd, 0x8c,

    /* U+1FB8 "Ᾰ" */
    0xfc, 0x7, 0xb3, 0xff, 0x3c, 0xc0,

    /* U+1FB9 "Ᾱ" */
    0xc6, 0xf8, 0x1, 0xe6, 0x6f, 0xd9, 0x80,

    /* U+1FBA "Ὰ" */
    0xe0, 0x7, 0xb3, 0xff, 0x3e, 0xcc,

    /* U+1FBB "Ά" */
    0x7b, 0x3f, 0xf3, 0xec, 0xc0,

    /* U+1FBC "ᾼ" */
    0x1c, 0x7, 0xb3, 0xff, 0x3e, 0xcc,

    /* U+1FC2 "ῂ" */
    0xe0, 0xf, 0xb3, 0xcf, 0x3e, 0xcf,

    /* U+1FC3 "ῃ" */
    0xfb, 0x3c, 0xf3, 0xec, 0xf0,

    /* U+1FC4 "ῄ" */
    0x1c, 0xf, 0xb3, 0xcf, 0x3e, 0xcf,

    /* U+1FC6 "ῆ" */
    0x77, 0xb8, 0x3, 0xe6, 0x6c, 0xd9, 0x83,

    /* U+1FC7 "ῇ" */
    0x77, 0xb8, 0x3, 0xe6, 0x6c, 0xdd, 0x8f,

    /* U+1FCA "Ὴ" */
    0xe0, 0xc, 0xf3, 0xff, 0x3e, 0xcc,

    /* U+1FCB "Ή" */
    0xcf, 0x3f, 0xf3, 0xec, 0xc0,

    /* U+1FCC "ῌ" */
    0x1c, 0xc, 0xf3, 0xff, 0x3e, 0xcc,

    /* U+1FD0 "ῐ" */
    0xfc, 0x3, 0xc, 0x30, 0xc1, 0x80,

    /* U+1FD1 "ῑ" */
    0xc6, 0xf8, 0x0, 0xc1, 0x83, 0x3, 0x0,

    /* U+1FD2 "ῒ" */
    0xe0, 0xc, 0x63, 0x19, 0xe6,

    /* U+1FD3 "ΐ" */
    0x66, 0x66, 0xf6,

    /* U+1FD4 "῔" */
    0x38, 0x18, 0xc6, 0x33, 0xcc,

    /* U+1FD6 "ῖ" */
    0x77, 0xb8, 0x0, 0xc1, 0x83, 0x3, 0x0,

    /* U+1FD7 "ῗ" */
    0x77, 0xb8, 0x0, 0xc1, 0x83, 0xf, 0xc,

    /* U+1FD8 "Ῐ" */
    0xfc, 0xf, 0xcc, 0x30, 0xcf, 0xc0,

    /* U+1FD9 "Ῑ" */
    0xc6, 0xf8, 0x3, 0xf1, 0x83, 0x1f, 0x80,

    /* U+1FDA "Ὶ" */
    0xe0, 0xf, 0xcc, 0x30, 0xcf, 0xcc,

    /* U+1FDB "Ί" */
    0xfc, 0xc3, 0xc, 0xfc, 0xc0,

    /* U+1FDC "῜" */
    0x1c, 0xf, 0xcc, 0x30, 0xcf, 0xcc,

    /* U+1FE0 "ῠ" */
    0x7e, 0x3, 0x1b, 0x36, 0x6c, 0xcf, 0x0,

    /* U+1FE1 "ῡ" */
    0xc6, 0xf8, 0x6, 0x36, 0x6c, 0xcf, 0x0,

    /* U+1FE2 "ῢ" */
    0x70, 0x3, 0x1b, 0x36, 0x6c, 0xcf, 0xc,

    /* U+1FE3 "ΰ" */
    0xc6, 0xcd, 0x9b, 0x33, 0xc3, 0x0,

    /* U+1FE6 "ῦ" */
    0x77, 0xb8, 0x6, 0x36, 0x6c, 0xcf, 0x0,

    /* U+1FE7 "ῧ" */
    0x77, 0xb8, 0x6, 0x36, 0x6c, 0xcf, 0xc,

    /* U+1FE8 "Ῠ" */
    0xfc, 0xc, 0xf3, 0x78, 0xc3, 0x0,

    /* U+1FE9 "Ῡ" */
    0xc6, 0xf8, 0x3, 0x33, 0xc3, 0x6, 0x0,

    /* U+1FEA "Ὺ" */
    0xe0, 0xc, 0xf3, 0x78, 0xc7, 0xc,

    /* U+1FEB "Ύ" */
    0xcf, 0x37, 0x8c, 0x70, 0xc0,

    /* U+1FF2 "ῲ" */
    0x70, 0x3, 0x1e, 0xbd, 0x7f, 0xdf, 0xc,

    /* U+1FF3 "ῳ" */
    0xc7, 0xaf, 0x5f, 0xf7, 0xc3, 0x0,

    /* U+1FF4 "ῴ" */
    0xe, 0x3, 0x1e, 0xbd, 0x7f, 0xdf, 0xc,

    /* U+1FF6 "ῶ" */
    0x77, 0xb8, 0x6, 0x3d, 0x7f, 0xdb, 0x0,

    /* U+1FF7 "ῷ" */
    0x77, 0xb8, 0x6, 0x3d, 0x7f, 0xdf, 0xc,

    /* U+1FFA "Ὼ" */
    0x7d, 0x8f, 0x1e, 0x3c, 0x6d, 0xbf, 0x8c,

    /* U+1FFB "Ώ" */
    0x7d, 0x8f, 0x1b, 0x6f, 0xe3, 0x0,

    /* U+1FFC "ῼ" */
    0x7f, 0x8f, 0x1e, 0x3c, 0x6d, 0xbf, 0x8c,

    /* U+2010 "‐" */
    0xf0,

    /* U+2011 "‑" */
    0xf0,

    /* U+2012 "‒" */
    0xf8,

    /* U+2013 "–" */
    0xfe,

    /* U+2014 "—" */
    0xff,

    /* U+2015 "―" */
    0xfe,

    /* U+2016 "‖" */
    0xde, 0xf7, 0xbd, 0xef, 0x60,

    /* U+2017 "‗" */
    0xff, 0x0, 0xff,

    /* U+2018 "‘" */
    0xe0,

    /* U+2019 "’" */
    0xe0,

    /* U+201C "“" */
    0xcc, 0xcc,

    /* U+201D "”" */
    0x67, 0x98,

    /* U+2020 "†" */
    0x30, 0xcf, 0xcc, 0x30, 0xc3, 0x0,

    /* U+2021 "‡" */
    0x30, 0xcf, 0xcc, 0xfc, 0xc3, 0x0,

    /* U+2022 "•" */
    0x6f, 0xf6,

    /* U+2024 "․" */
    0xf0,

    /* U+2025 "‥" */
    0xcf, 0x30,

    /* U+2026 "…" */
    0x93, 0x24,

    /* U+2030 "‰" */
    0xc6, 0xcc, 0x18, 0x60, 0xdb, 0xdb,

    /* U+2031 "‱" */
    0xc6, 0xcc, 0x18, 0x60, 0xd5, 0xd5,

    /* U+2032 "′" */
    0x36, 0xc0,

    /* U+2033 "″" */
    0x36, 0xdb, 0x60,

    /* U+2034 "‴" */
    0x2a, 0xaa, 0xa0,

    /* U+2035 "‵" */
    0xc6, 0x30,

    /* U+2036 "‶" */
    0xd8, 0xd8, 0xd8,

    /* U+2037 "‷" */
    0xa8, 0xa8, 0xa8,

    /* U+203C "‼" */
    0xcf, 0x3c, 0xf3, 0xcc, 0xc, 0xc0,

    /* U+203D "‽" */
    0x7d, 0x6c, 0xd9, 0xe3, 0x0, 0xc, 0x0,

    /* U+2044 "⁄" */
    0x6, 0x18, 0x61, 0x86, 0x18, 0x0,

    /* U+2047 "⁇" */
    0xcc, 0xcd, 0x9e, 0x6c, 0xc0, 0x33, 0x0,

    /* U+2048 "⁈" */
    0xe6, 0x6c, 0xdb, 0x3c, 0x60, 0x31, 0x80,

    /* U+2049 "⁉" */
    0xdd, 0x8f, 0x1e, 0x6d, 0x80, 0x36, 0x0,

    /* U+2070 "⁰" */
    0x76, 0xf7, 0xb7, 0x0,

    /* U+2071 "ⁱ" */
    0xcf, 0xc0,

    /* U+2074 "⁴" */
    0x39, 0x6d, 0xbf, 0x18,

    /* U+2075 "⁵" */
    0xfe, 0x3c, 0x3f, 0x0,

    /* U+2076 "⁶" */
    0x76, 0x3d, 0xb7, 0x0,

    /* U+2077 "⁷" */
    0xf8, 0xcc, 0xc6, 0x0,

    /* U+2078 "⁸" */
    0x76, 0xdd, 0xb7, 0x0,

    /* U+2079 "⁹" */
    0x76, 0xde, 0x37, 0x0,

    /* U+207A "⁺" */
    0x30, 0xcf, 0xcc, 0x30,

    /* U+207B "⁻" */
    0xff, 0xf0,

    /* U+207C "⁼" */
    0xff, 0xf0, 0x3f, 0xfc,

    /* U+207F "ⁿ" */
    0xf6, 0xf7, 0xb0,

    /* U+20A7 "₧" */
    0xf8, 0xcc, 0xcc, 0xfa, 0xc6, 0xcf, 0xc6, 0xc7,

    /* U+20AC "€" */
    0x3e, 0xc3, 0xf3, 0xf, 0x8c, 0xf, 0x80,

    /* U+2117 "℗" */
    0x7f, 0x7f, 0xf7, 0x7b, 0xfd, 0xfe, 0xef, 0x47,
    0xff, 0x7f, 0x0,

    /* U+2120 "℠" */
    0x77, 0xef, 0x9b, 0xbf, 0x7c, 0x0,

    /* U+2122 "™" */
    0xea, 0x9d, 0x3a, 0x54, 0xa0,

    /* U+2150 "⅐" */
    0x41, 0x8d, 0x32, 0xc3, 0xec, 0x71, 0x2,

    /* U+2151 "⅑" */
    0x40, 0xc6, 0x4c, 0x5e, 0x39, 0x67, 0xc1, 0x6,

    /* U+2152 "⅒" */
    0x40, 0xc6, 0x46, 0x5c, 0x72, 0xd5, 0xd5, 0x12,

    /* U+2153 "⅓" */
    0x40, 0xc6, 0x4c, 0x5e, 0x31, 0x62, 0xc1, 0x6,

    /* U+2154 "⅔" */
    0xc0, 0x26, 0x4c, 0x9e, 0xf1, 0x62, 0xc1, 0x6,

    /* U+2155 "⅕" */
    0x40, 0xc6, 0x4c, 0x5f, 0x34, 0x66, 0xc1, 0x6,

    /* U+2156 "⅖" */
    0xc0, 0x26, 0x4c, 0x9f, 0xf4, 0x66, 0xc1, 0x6,

    /* U+2157 "⅗" */
    0xc0, 0x26, 0x6c, 0x3f, 0xf4, 0x66, 0xc1, 0x6,

    /* U+2158 "⅘" */
    0x20, 0x66, 0xac, 0xff, 0x34, 0x66, 0xc1, 0x6,

    /* U+2159 "⅙" */
    0x40, 0xc6, 0x4c, 0x5e, 0x38, 0x6e, 0xc9, 0x6,

    /* U+215A "⅚" */
    0xe0, 0x86, 0xcc, 0x3e, 0xf8, 0x6e, 0xc9, 0x6,

    /* U+215B "⅛" */
    0x40, 0xc6, 0x4c, 0x5e, 0x39, 0x66, 0xc9, 0x6,

    /* U+215C "⅜" */
    0xc0, 0x26, 0x6c, 0x3e, 0xf9, 0x66, 0xc9, 0x6,

    /* U+215D "⅝" */
    0xe0, 0x86, 0xcc, 0x3e, 0xf9, 0x66, 0xc9, 0x6,

    /* U+215E "⅞" */
    0xe0, 0x26, 0x4c, 0x5e, 0x39, 0x66, 0xc9, 0x6,

    /* U+215F "⅟" */
    0x41, 0x8d, 0x32, 0xc3, 0xc, 0x30, 0x0,

    /* U+2189 "↉" */
    0x40, 0xa6, 0xac, 0x5e, 0x31, 0x62, 0xc1, 0x6,

    /* U+2190 "←" */
    0x20, 0xc3, 0xff, 0xf6, 0x4, 0x0,

    /* U+2191 "↑" */
    0x31, 0xef, 0xcc, 0x30, 0xc3, 0xc,

    /* U+2192 "→" */
    0x8, 0x1b, 0xff, 0xf0, 0xc1, 0x0,

    /* U+2193 "↓" */
    0x30, 0xc3, 0xc, 0x33, 0xf7, 0x8c,

    /* U+2194 "↔" */
    0x24, 0x66, 0xff, 0xff, 0x66, 0x24,

    /* U+2195 "↕" */
    0x31, 0xef, 0xcc, 0x33, 0xf7, 0x8c,

    /* U+2196 "↖" */
    0xf1, 0xc3, 0xc5, 0xc1, 0xc1, 0xc1, 0x0,

    /* U+2197 "↗" */
    0x1e, 0x1c, 0x79, 0xd7, 0x1c, 0x10, 0x0,

    /* U+2198 "↘" */
    0x41, 0xc1, 0xc1, 0xd1, 0xe1, 0xc7, 0x80,

    /* U+2199 "↙" */
    0x4, 0x1c, 0x75, 0xcf, 0x1c, 0x3c, 0x0,

    /* U+21A5 "↥" */
    0x18, 0x3c, 0x7e, 0x18, 0x18, 0x18, 0x18, 0xff,

    /* U+21A8 "↨" */
    0x18, 0x3c, 0x7e, 0x18, 0x7e, 0x3c, 0x18, 0xff,

    /* U+21B2 "↲" */
    0x6, 0xc, 0x9b, 0x3f, 0xec, 0x8, 0x0,

    /* U+21BC "↼" */
    0x20, 0xc3, 0xff, 0xf0,

    /* U+21BD "↽" */
    0xff, 0xfd, 0x81, 0x0,

    /* U+21BE "↾" */
    0xce, 0xfc, 0xcc, 0xcc,

    /* U+21BF "↿" */
    0x37, 0xf3, 0x33, 0x33,

    /* U+21C0 "⇀" */
    0x8, 0x1b, 0xff, 0xf0,

    /* U+21C1 "⇁" */
    0xff, 0xfc, 0x30, 0x40,

    /* U+21C2 "⇂" */
    0xcc, 0xcc, 0xcf, 0xec,

    /* U+21C3 "⇃" */
    0x33, 0x33, 0x3f, 0x73,

    /* U+21E6 "⇦" */
    0x18, 0x38, 0x6f, 0xc1, 0xc1, 0x6f, 0x38, 0x18,

    /* U+21E7 "⇧" */
    0x18, 0x3c, 0x66, 0xc3, 0xe7, 0x24, 0x24, 0x3c,

    /* U+21E8 "⇨" */
    0x18, 0x1c, 0xf6, 0x83, 0x83, 0xf6, 0x1c, 0x18,

    /* U+21E9 "⇩" */
    0x3c, 0x24, 0x24, 0xe7, 0xc3, 0x66, 0x3c, 0x18,

    /* U+2205 "∅" */
    0x6, 0xc, 0x7e, 0xdb, 0xdb, 0x7e, 0x60, 0xc0,

    /* U+2212 "−" */
    0xfc,

    /* U+2213 "∓" */
    0xfc, 0x3, 0xc, 0xfc, 0xc3, 0x0,

    /* U+2214 "∔" */
    0x30, 0x3, 0xc, 0xfc, 0xc3, 0x0,

    /* U+2215 "∕" */
    0x6, 0x18, 0x61, 0x86, 0x18, 0x0,

    /* U+2218 "∘" */
    0x7b, 0x3c, 0xde,

    /* U+221A "√" */
    0x1, 0x3, 0x6, 0x8c, 0xd8, 0x70, 0x20,

    /* U+221B "∛" */
    0x70, 0x79, 0x3b, 0x3e, 0x7c, 0x7c, 0x70, 0x30,

    /* U+221C "∜" */
    0x30, 0x38, 0x7c, 0x7f, 0x6f, 0xe7, 0xf1, 0xe0,
    0x20,

    /* U+221E "∞" */
    0x7e, 0xdf, 0xdf, 0x7e,

    /* U+221F "∟" */
    0xc1, 0x83, 0x7, 0xf0,

    /* U+2229 "∩" */
    0x7b, 0x3c, 0xf3, 0xcf, 0x3c, 0xc0,

    /* U+2248 "≈" */
    0x77, 0xb8, 0x3, 0xbd, 0xc0,

    /* U+2261 "≡" */
    0xfc, 0xf, 0xc0, 0xfc,

    /* U+2264 "≤" */
    0x18, 0xc6, 0xc, 0x18, 0xf, 0xc0,

    /* U+2265 "≥" */
    0x60, 0xc1, 0x8c, 0x60, 0xf, 0xc0,

    /* U+22C5 "⋅" */
    0xf0,

    /* U+2301 "⌁" */
    0x30, 0x3c, 0x3b, 0x19, 0xf0, 0x78, 0x18,

    /* U+2318 "⌘" */
    0x61, 0xdd, 0xf1, 0x23, 0xdf, 0xfc, 0x30,

    /* U+231A "⌚" */
    0x7e, 0xc3, 0xd3, 0xd3, 0xdb, 0xc3, 0xc3, 0x7e,

    /* U+231B "⌛" */
    0xfe, 0x64, 0x7c, 0x3c, 0x18, 0x3c, 0x7e, 0xff,

    /* U+2320 "⌠" */
    0x76, 0xf7, 0x8c, 0x63, 0x18,

    /* U+2321 "⌡" */
    0x18, 0xc6, 0x31, 0xef, 0x6e,

    /* U+239B "⎛" */
    0x36, 0xcc, 0xcc, 0xcc,

    /* U+239C "⎜" */
    0xff, 0xff,

    /* U+239D "⎝" */
    0xcc, 0xcc, 0xc6, 0x30,

    /* U+239E "⎞" */
    0xc6, 0x33, 0x33, 0x33,

    /* U+239F "⎟" */
    0xff, 0xff,

    /* U+23A0 "⎠" */
    0x33, 0x33, 0x36, 0xc0,

    /* U+23A1 "⎡" */
    0xfc, 0xcc, 0xcc, 0xcc,

    /* U+23A2 "⎢" */
    0xff, 0xff,

    /* U+23A3 "⎣" */
    0xcc, 0xcc, 0xcc, 0xf0,

    /* U+23A4 "⎤" */
    0xf3, 0x33, 0x33, 0x33,

    /* U+23A5 "⎥" */
    0xff, 0xff,

    /* U+23A6 "⎦" */
    0x33, 0x33, 0x33, 0xf0,

    /* U+23A7 "⎧" */
    0x7c, 0xcc, 0xcc, 0xcc,

    /* U+23A8 "⎨" */
    0x18, 0xcd, 0xce, 0x18, 0x63,

    /* U+23A9 "⎩" */
    0xcc, 0xcc, 0xcc, 0x70,

    /* U+23AA "⎪" */
    0xff, 0xff,

    /* U+23AB "⎫" */
    0xe3, 0x33, 0x33, 0x33,

    /* U+23AC "⎬" */
    0xc6, 0x18, 0x73, 0xb3, 0x18,

    /* U+23AD "⎭" */
    0x33, 0x33, 0x33, 0xe0,

    /* U+23AE "⎮" */
    0xff, 0xff,

    /* U+23AF "⎯" */
    0xff, 0xff,

    /* U+23B2 "⎲" */
    0xff, 0x83, 0x3, 0x3, 0x3, 0x3, 0x3,

    /* U+23B3 "⎳" */
    0x6, 0xc, 0x18, 0x30, 0x60, 0xc0, 0xff,

    /* U+23B7 "⎷" */
    0xc, 0x30, 0xc6, 0xd9, 0xe3, 0x0,

    /* U+23B8 "⎸" */
    0xff, 0xff,

    /* U+23B9 "⎹" */
    0xff, 0xff,

    /* U+23BA "⎺" */
    0xff, 0xff,

    /* U+23BB "⎻" */
    0xff, 0xff,

    /* U+23BC "⎼" */
    0xff, 0xff,

    /* U+23BD "⎽" */
    0xff, 0xff,

    /* U+23D0 "⏐" */
    0xff, 0xff,

    /* U+23DA "⏚" */
    0xff, 0x0, 0x7e, 0x0, 0x3c, 0x0, 0x18,

    /* U+23E9 "⏩" */
    0x89, 0x9b, 0xbe, 0x68, 0x80,

    /* U+23EA "⏪" */
    0x22, 0xcf, 0xbb, 0x32, 0x20,

    /* U+23EB "⏫" */
    0x23, 0xbe, 0x2, 0x3b, 0xe0,

    /* U+23EC "⏬" */
    0xfb, 0x88, 0xf, 0xb8, 0x80,

    /* U+2500 "─" */
    0xff, 0xff,

    /* U+2501 "━" */
    0xff, 0xff, 0xff, 0xff,

    /* U+2502 "│" */
    0xff, 0xff,

    /* U+2503 "┃" */
    0xff, 0xff, 0xff, 0xff,

    /* U+2504 "┄" */
    0xdd, 0xdd,

    /* U+2505 "┅" */
    0xdd, 0xdd, 0xdd, 0xdd,

    /* U+2506 "┆" */
    0xf3, 0xf3,

    /* U+2507 "┇" */
    0xff, 0xf, 0xff, 0xf,

    /* U+2508 "┈" */
    0xab, 0x54,

    /* U+2509 "┉" */
    0xab, 0x54,

    /* U+250A "┊" */
    0xcc, 0xcc,

    /* U+250B "┋" */
    0xf0, 0xf0, 0xf0, 0xf0,

    /* U+250C "┌" */
    0xff, 0xf1, 0x8c, 0x0,

    /* U+250D "┍" */
    0xff, 0xff, 0xfc, 0x60,

    /* U+250E "┎" */
    0xff, 0xff, 0x3c, 0xf0,

    /* U+250F "┏" */
    0xff, 0xff, 0xff, 0xf3, 0xc0,

    /* U+2510 "┐" */
    0xff, 0xc6, 0x31, 0x80,

    /* U+2511 "┑" */
    0xff, 0xff, 0xf1, 0x8c,

    /* U+2512 "┒" */
    0xff, 0xf3, 0xcf, 0x3c,

    /* U+2513 "┓" */
    0xff, 0xff, 0xff, 0x3c, 0xf0,

    /* U+2514 "└" */
    0xc6, 0x31, 0xff, 0x80,

    /* U+2515 "┕" */
    0xc6, 0x3f, 0xff, 0xfc,

    /* U+2516 "┖" */
    0xf3, 0xcf, 0x3f, 0xfc,

    /* U+2517 "┗" */
    0xf3, 0xcf, 0xff, 0xff, 0xf0,

    /* U+2518 "┘" */
    0x18, 0xc7, 0xff, 0x80,

    /* U+2519 "┙" */
    0x18, 0xff, 0xff, 0xfc,

    /* U+251A "┚" */
    0x3c, 0xf3, 0xff, 0xfc,

    /* U+251B "┛" */
    0x3c, 0xff, 0xff, 0xff, 0xf0,

    /* U+251C "├" */
    0xc6, 0x31, 0xff, 0xe3, 0x18,

    /* U+251D "┝" */
    0xc6, 0x3f, 0xff, 0xff, 0x18,

    /* U+251E "┞" */
    0xf3, 0xcf, 0x3f, 0x7d, 0x86, 0x18,

    /* U+251F "┟" */
    0x61, 0x87, 0xdf, 0xff, 0xff, 0x3c,

    /* U+2520 "┠" */
    0xf3, 0xcf, 0x3f, 0xff, 0xcf, 0x3c,

    /* U+2521 "┡" */
    0xf3, 0xcf, 0xff, 0x7d, 0xf6, 0x18,

    /* U+2522 "┢" */
    0x61, 0x86, 0x1f, 0xff, 0xcf, 0x3c,

    /* U+2523 "┣" */
    0xf3, 0xcf, 0xff, 0xff, 0xff, 0x3c,

    /* U+2524 "┤" */
    0x18, 0xc7, 0xff, 0x8c, 0x63,

    /* U+2525 "┥" */
    0x18, 0xff, 0xff, 0xfc, 0x63,

    /* U+2526 "┦" */
    0x3c, 0xf3, 0xff, 0xf8, 0x61, 0x86,

    /* U+2527 "┧" */
    0x18, 0x6f, 0xbe, 0xff, 0xf3, 0xcf,

    /* U+2528 "┨" */
    0x3c, 0xf3, 0xff, 0xfc, 0xf3, 0xcf,

    /* U+2529 "┩" */
    0x3c, 0xff, 0xff, 0xfb, 0xe1, 0x86,

    /* U+252A "┪" */
    0x18, 0x61, 0xbe, 0xfc, 0xf3, 0xcf,

    /* U+252B "┫" */
    0x3c, 0xff, 0xff, 0xff, 0xf3, 0xcf,

    /* U+252C "┬" */
    0xff, 0xff, 0x18, 0x18, 0x18,

    /* U+252D "┭" */
    0xf0, 0xff, 0xff, 0xf8, 0x18, 0x18,

    /* U+252E "┮" */
    0xf, 0xff, 0xff, 0x1f, 0x18, 0x18,

    /* U+252F "┯" */
    0xff, 0xff, 0xff, 0xff, 0x18, 0x18,

    /* U+2530 "┰" */
    0xff, 0xff, 0x3c, 0x3c, 0x3c,

    /* U+2531 "┱" */
    0xf0, 0xff, 0xff, 0xfc, 0x3c, 0x3c,

    /* U+2532 "┲" */
    0xf, 0xff, 0xff, 0x3f, 0x3c, 0x3c,

    /* U+2533 "┳" */
    0xff, 0xff, 0xff, 0xff, 0x3c, 0x3c,

    /* U+2534 "┴" */
    0x18, 0x18, 0x18, 0xff, 0xff,

    /* U+2535 "┵" */
    0x18, 0x18, 0xf8, 0xff, 0xff, 0xf0,

    /* U+2536 "┶" */
    0x18, 0x18, 0x1f, 0xff, 0xff, 0xf,

    /* U+2537 "┷" */
    0x18, 0x18, 0xff, 0xff, 0xff, 0xff,

    /* U+2538 "┸" */
    0x3c, 0x3c, 0x3c, 0xff, 0xff,

    /* U+2539 "┹" */
    0x3c, 0x3c, 0xfc, 0xff, 0xff, 0xf0,

    /* U+253A "┺" */
    0x3c, 0x3c, 0x3f, 0xff, 0xff, 0xf,

    /* U+253B "┻" */
    0x3c, 0x3c, 0xff, 0xff, 0xff, 0xff,

    /* U+253C "┼" */
    0x18, 0x18, 0x18, 0xff, 0xff, 0x18, 0x18, 0x18,

    /* U+253D "┽" */
    0x18, 0x18, 0xf8, 0xff, 0xff, 0xf8, 0x18, 0x18,

    /* U+253E "┾" */
    0x18, 0x18, 0x1f, 0xff, 0xff, 0x1f, 0x18, 0x18,

    /* U+253F "┿" */
    0x18, 0x18, 0xff, 0xff, 0xff, 0xff, 0x18, 0x18,

    /* U+2540 "╀" */
    0x3c, 0x3c, 0x3c, 0xff, 0xff, 0x18, 0x18, 0x18,

    /* U+2541 "╁" */
    0x18, 0x18, 0x18, 0xff, 0xff, 0x3c, 0x3c, 0x3c,

    /* U+2542 "╂" */
    0x3c, 0x3c, 0x3c, 0xff, 0xff, 0x3c, 0x3c, 0x3c,

    /* U+2543 "╃" */
    0x3c, 0x3c, 0xfc, 0xff, 0xff, 0xf8, 0x18, 0x18,

    /* U+2544 "╄" */
    0x3c, 0x3c, 0x3f, 0xff, 0xff, 0x1f, 0x18, 0x18,

    /* U+2545 "╅" */
    0x18, 0x18, 0xf8, 0xff, 0xff, 0xfc, 0x3c, 0x3c,

    /* U+2546 "╆" */
    0x18, 0x18, 0x1f, 0xff, 0xff, 0x3f, 0x3c, 0x3c,

    /* U+2547 "╇" */
    0x3c, 0x3c, 0xff, 0xff, 0xff, 0xff, 0x18, 0x18,

    /* U+2548 "╈" */
    0x18, 0x18, 0xff, 0xff, 0xff, 0xff, 0x3c, 0x3c,

    /* U+2549 "╉" */
    0x3c, 0x3c, 0xfc, 0xff, 0xff, 0xfc, 0x3c, 0x3c,

    /* U+254A "╊" */
    0x3c, 0x3c, 0x3f, 0xff, 0xff, 0x3f, 0x3c, 0x3c,

    /* U+254B "╋" */
    0x3c, 0x3c, 0xff, 0xff, 0xff, 0xff, 0x3c, 0x3c,

    /* U+254C "╌" */
    0x99, 0x99,

    /* U+254D "╍" */
    0x99, 0x99, 0x99, 0x99,

    /* U+254E "╎" */
    0xc3, 0xc3,

    /* U+254F "╏" */
    0xf0, 0xf, 0xf0, 0xf,

    /* U+2550 "═" */
    0xff, 0x0, 0xff,

    /* U+2551 "║" */
    0xde, 0xf7, 0xbd, 0xef, 0x7b,

    /* U+2552 "╒" */
    0xfe, 0x3f, 0x8c, 0x60,

    /* U+2553 "╓" */
    0xff, 0xff, 0x66, 0xcd, 0x80,

    /* U+2554 "╔" */
    0xff, 0x83, 0x7e, 0xcd, 0x9b, 0x0,

    /* U+2555 "╕" */
    0xf8, 0xfe, 0x31, 0x8c,

    /* U+2556 "╖" */
    0xff, 0xf6, 0xdb, 0x6c,

    /* U+2557 "╗" */
    0xfc, 0x3e, 0xdb, 0x6d, 0xb0,

    /* U+2558 "╘" */
    0xc6, 0x3f, 0x8f, 0x80,

    /* U+2559 "╙" */
    0xd9, 0xb3, 0x67, 0xff, 0xe0,

    /* U+255A "╚" */
    0xd9, 0xb3, 0x7e, 0xf, 0xe0,

    /* U+255B "╛" */
    0x18, 0xfe, 0x3f, 0x80,

    /* U+255C "╜" */
    0x6d, 0xb6, 0xff, 0xfc,

    /* U+255D "╝" */
    0x6d, 0xbe, 0xc3, 0xfc,

    /* U+255E "╞" */
    0xc6, 0x3f, 0x8f, 0xe3, 0x18,

    /* U+255F "╟" */
    0xd9, 0xb3, 0x66, 0xfd, 0xfb, 0x36, 0x6c,

    /* U+2560 "╠" */
    0xd9, 0xb3, 0x7e, 0xd, 0xfb, 0x36, 0x6c,

    /* U+2561 "╡" */
    0x18, 0xfe, 0x3f, 0x8c, 0x63,

    /* U+2562 "╢" */
    0x6d, 0xb6, 0xfb, 0xed, 0xb6, 0xdb,

    /* U+2563 "╣" */
    0x6d, 0xbe, 0xc3, 0xed, 0xb6, 0xdb,

    /* U+2564 "╤" */
    0xff, 0x0, 0xff, 0x18, 0x18, 0x18,

    /* U+2565 "╥" */
    0xff, 0xff, 0x6c, 0x6c, 0x6c,

    /* U+2566 "╦" */
    0xff, 0x0, 0xef, 0x6c, 0x6c, 0x6c,

    /* U+2567 "╧" */
    0x18, 0x18, 0xff, 0x0, 0xff,

    /* U+2568 "╨" */
    0x6c, 0x6c, 0x6c, 0xff, 0xff,

    /* U+2569 "╩" */
    0x6c, 0x6c, 0xef, 0x0, 0xff,

    /* U+256A "╪" */
    0x18, 0x18, 0xff, 0x18, 0xff, 0x18, 0x18, 0x18,

    /* U+256B "╫" */
    0x6c, 0x6c, 0x6c, 0xff, 0xff, 0x6c, 0x6c, 0x6c,

    /* U+256C "╬" */
    0x6c, 0x6c, 0xef, 0x0, 0xef, 0x6c, 0x6c, 0x6c,

    /* U+256D "╭" */
    0x3b, 0xf9, 0x8c, 0x0,

    /* U+256E "╮" */
    0xe7, 0x8e, 0x31, 0x80,

    /* U+256F "╯" */
    0x18, 0xcf, 0xee, 0x0,

    /* U+2570 "╰" */
    0xc6, 0x38, 0xf3, 0x80,

    /* U+2571 "╱" */
    0x3, 0x6, 0xc, 0x18, 0x30, 0x60, 0xc0, 0x80,

    /* U+2572 "╲" */
    0xc0, 0x60, 0x30, 0x18, 0xc, 0x6, 0x3, 0x1,

    /* U+2573 "╳" */
    0xc3, 0x66, 0x3c, 0x18, 0x3c, 0x66, 0xc3, 0x81,

    /* U+2574 "╴" */
    0xff,

    /* U+2575 "╵" */
    0xff,

    /* U+2576 "╶" */
    0xff,

    /* U+2577 "╷" */
    0xff,

    /* U+2578 "╸" */
    0xff, 0xff,

    /* U+2579 "╹" */
    0xff, 0xff,

    /* U+257A "╺" */
    0xff, 0xff,

    /* U+257B "╻" */
    0xff, 0xff,

    /* U+257C "╼" */
    0xf, 0xff, 0xff, 0xf,

    /* U+257D "╽" */
    0x66, 0x66, 0xff, 0xff,

    /* U+257E "╾" */
    0xf0, 0xff, 0xff, 0xf0,

    /* U+257F "╿" */
    0xff, 0xff, 0x66, 0x66,

    /* U+2580 "▀" */
    0xff, 0xff, 0xff, 0xff,

    /* U+2581 "▁" */
    0xff,

    /* U+2582 "▂" */
    0xff, 0xff,

    /* U+2583 "▃" */
    0xff, 0xff, 0xff,

    /* U+2584 "▄" */
    0xff, 0xff, 0xff, 0xff,

    /* U+2585 "▅" */
    0xff, 0xff, 0xff, 0xff, 0xff,

    /* U+2586 "▆" */
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff,

    /* U+2587 "▇" */
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,

    /* U+2588 "█" */
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,

    /* U+2589 "▉" */
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,

    /* U+258A "▊" */
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff,

    /* U+258B "▋" */
    0xff, 0xff, 0xff, 0xff, 0xff,

    /* U+258C "▌" */
    0xff, 0xff, 0xff, 0xff,

    /* U+258D "▍" */
    0xff, 0xff, 0xff,

    /* U+258E "▎" */
    0xff, 0xff,

    /* U+258F "▏" */
    0xff,

    /* U+2590 "▐" */
    0xff, 0xff, 0xff, 0xff,

    /* U+2591 "░" */
    0x23, 0x10, 0x8c, 0x42, 0x31, 0x8, 0xc4,

    /* U+2592 "▒" */
    0xff, 0x7f, 0xbf, 0xdf, 0xef, 0xf7, 0xfb, 0xfd,
    0xff, 0x5, 0x80,

    /* U+2593 "▓" */
    0xdd, 0x77, 0xdd, 0x77, 0xdd, 0x77, 0xdd, 0x77,

    /* U+2594 "▔" */
    0xff,

    /* U+2595 "▕" */
    0xff,

    /* U+2596 "▖" */
    0xff, 0xff,

    /* U+2597 "▗" */
    0xff, 0xff,

    /* U+2598 "▘" */
    0xff, 0xff,

    /* U+2599 "▙" */
    0xf0, 0xf0, 0xf0, 0xf0, 0xff, 0xff, 0xff, 0xff,

    /* U+259A "▚" */
    0xf8, 0x7c, 0x3e, 0x1f, 0xf, 0xf8, 0x7c, 0x3e,
    0x1f, 0xf, 0x80,

    /* U+259B "▛" */
    0xff, 0xff, 0xff, 0xff, 0xf0, 0xf0, 0xf0, 0xf0,

    /* U+259C "▜" */
    0xff, 0xff, 0xff, 0xff, 0xf, 0xf, 0xf, 0xf,

    /* U+259D "▝" */
    0xff, 0xff,

    /* U+259E "▞" */
    0xf, 0x87, 0xc3, 0xe1, 0xff, 0xff, 0xc3, 0xe1,
    0xf0, 0xf8, 0x0,

    /* U+259F "▟" */
    0xf, 0xf, 0xf, 0xf, 0xff, 0xff, 0xff, 0xff,

    /* U+25A0 "■" */
    0xff, 0xff, 0xff, 0xff, 0xf0,

    /* U+25A1 "□" */
    0xff, 0x3c, 0xf3, 0xcf, 0xf0,

    /* U+25A2 "▢" */
    0x7d, 0x8f, 0x1e, 0x3c, 0x78, 0xdf, 0x0,

    /* U+25A3 "▣" */
    0xff, 0x6, 0xed, 0xdb, 0xb0, 0x7f, 0x80,

    /* U+25A4 "▤" */
    0xff, 0x0, 0xff, 0x0, 0xff, 0x0, 0xff,

    /* U+25A5 "▥" */
    0xab, 0x56, 0xad, 0x5a, 0xb5, 0x6a, 0xd5,

    /* U+25A6 "▦" */
    0x44, 0xff, 0x44, 0x44, 0x44, 0xff, 0x44, 0x44,

    /* U+25A7 "▧" */
    0xcc, 0x73, 0x1c, 0xc7, 0x3d, 0xc7, 0x70, 0xc4,
    0x20, 0x0, 0x0,

    /* U+25A8 "▨" */
    0x19, 0x9d, 0x9d, 0x9d, 0x8c, 0xc0, 0xc8, 0xc9,
    0xd8, 0xc0, 0x0,

    /* U+25A9 "▩" */
    0xff, 0x7b, 0x3e, 0xdf, 0x3f, 0xff, 0xf2, 0xfd,
    0x78, 0x8, 0x0,

    /* U+25AA "▪" */
    0xff, 0x80,

    /* U+25AB "▫" */
    0xf7, 0x80,

    /* U+25AC "▬" */
    0xff, 0xff, 0xc0,

    /* U+25AD "▭" */
    0xff, 0x3f, 0xc0,

    /* U+25AE "▮" */
    0xff, 0xff, 0xff, 0xf0,

    /* U+25AF "▯" */
    0xf9, 0x99, 0x99, 0xf0,

    /* U+25B0 "▰" */
    0x3f, 0x7e, 0xfc,

    /* U+25B1 "▱" */
    0x3f, 0x66, 0xfc,

    /* U+25B2 "▲" */
    0x18, 0x18, 0x3c, 0x3c, 0x7e, 0x7e, 0xff, 0xff,

    /* U+25B3 "△" */
    0x18, 0x18, 0x3c, 0x66, 0x66, 0xc3, 0xc3, 0xff,

    /* U+25B4 "▴" */
    0x21, 0x1c, 0xef, 0xfc,

    /* U+25B5 "▵" */
    0x18, 0x3c, 0x76, 0xe3, 0xc3, 0xff,

    /* U+25B6 "▶" */
    0xc0, 0xf0, 0xfc, 0xff, 0xff, 0xfc, 0xf0, 0xc0,

    /* U+25B7 "▷" */
    0xc0, 0xf0, 0xdc, 0xc7, 0xdc, 0xf0, 0xc0,

    /* U+25B8 "▸" */
    0xc3, 0xcf, 0xfc, 0xc0,

    /* U+25B9 "▹" */
    0xe1, 0xf2, 0x7d, 0xff, 0x9c, 0x0,

    /* U+25BA "►" */
    0xe0, 0xfc, 0xff, 0xfc, 0xe0,

    /* U+25BB "▻" */
    0xf0, 0xdc, 0xc7, 0xdc, 0xf0,

    /* U+25BC "▼" */
    0xff, 0xff, 0x7e, 0x7e, 0x3c, 0x3c, 0x18, 0x18,

    /* U+25BD "▽" */
    0xff, 0xc3, 0xc3, 0x66, 0x66, 0x3c, 0x18, 0x18,

    /* U+25BE "▾" */
    0xff, 0xdc, 0xe2, 0x10,

    /* U+25BF "▿" */
    0xff, 0xc3, 0xc3, 0xe6, 0x7c, 0x3c, 0x18,

    /* U+25C0 "◀" */
    0x3, 0xf, 0x3f, 0xff, 0xff, 0x3f, 0xf, 0x3,

    /* U+25C1 "◁" */
    0x3, 0xf, 0x3b, 0xe3, 0x3b, 0xf, 0x3,

    /* U+25C2 "◂" */
    0xc, 0xff, 0xcf, 0xc,

    /* U+25C3 "◃" */
    0xe, 0x7f, 0xef, 0xd3, 0xe0, 0xc0,

    /* U+25C4 "◄" */
    0x7, 0x3f, 0xff, 0x3f, 0x7,

    /* U+25C5 "◅" */
    0xf, 0x3b, 0xe3, 0x3b, 0xf,

    /* U+25C6 "◆" */
    0x18, 0x3c, 0x7e, 0xff, 0xff, 0x7e, 0x3c, 0x18,

    /* U+25C7 "◇" */
    0x18, 0x3c, 0x66, 0xc3, 0xc3, 0x66, 0x3c, 0x18,

    /* U+25C8 "◈" */
    0x1c, 0x1f, 0x1e, 0xdf, 0xff, 0xff, 0xf9, 0xfc,
    0x7c, 0x1c, 0x0,

    /* U+25C9 "◉" */
    0x3c, 0x66, 0xc3, 0xdb, 0xdb, 0xc3, 0x66, 0x3c,

    /* U+25CA "◊" */
    0x10, 0x71, 0xb6, 0x3c, 0x6d, 0x8e, 0x8,

    /* U+25CB "○" */
    0x7b, 0x38, 0x61, 0xcd, 0xe0,

    /* U+25CC "◌" */
    0x10, 0x88, 0x4, 0x10, 0x8, 0x84, 0x0,

    /* U+25CD "◍" */
    0x18, 0x7e, 0xfb, 0xdb, 0x7e, 0x18,

    /* U+25CE "◎" */
    0x3c, 0x7e, 0xfb, 0xff, 0xff, 0xfe, 0x7e, 0x3c,

    /* U+25CF "●" */
    0x7b, 0xff, 0xff, 0xfd, 0xe0,

    /* U+25D0 "◐" */
    0x3c, 0x76, 0xf3, 0xf3, 0xf3, 0xf3, 0x76, 0x3c,

    /* U+25D1 "◑" */
    0x3c, 0x6e, 0xcf, 0xcf, 0xcf, 0xcf, 0x6e, 0x3c,

    /* U+25D2 "◒" */
    0x3c, 0x66, 0xc3, 0xc3, 0xff, 0xff, 0x7e, 0x3c,

    /* U+25D3 "◓" */
    0x3c, 0x7e, 0xff, 0xff, 0xc3, 0xc3, 0x66, 0x3c,

    /* U+25D4 "◔" */
    0x3c, 0x6e, 0xcf, 0xcf, 0xc3, 0xc3, 0x66, 0x3c,

    /* U+25D5 "◕" */
    0x3c, 0x6e, 0xcf, 0xcf, 0xff, 0xff, 0x7e, 0x3c,

    /* U+25D6 "◖" */
    0x1d, 0xff, 0xff, 0x7c, 0x70,

    /* U+25D7 "◗" */
    0xe3, 0xef, 0xff, 0xfb, 0x80,

    /* U+25D8 "◘" */
    0xff, 0xff, 0xe7, 0xc3, 0xc3, 0xe7, 0xff, 0xff,

    /* U+25D9 "◙" */
    0xff, 0xc3, 0x99, 0xbd, 0xbd, 0x99, 0xc3, 0xff,

    /* U+25DA "◚" */
    0xff, 0xc3, 0x99, 0xbd,

    /* U+25DB "◛" */
    0xbd, 0x99, 0xc3, 0xff,

    /* U+25DC "◜" */
    0x3b, 0x31, 0x80,

    /* U+25DD "◝" */
    0xe1, 0x86, 0x30,

    /* U+25DE "◞" */
    0x18, 0xcd, 0xc0,

    /* U+25DF "◟" */
    0xc6, 0x18, 0x70,

    /* U+25E0 "◠" */
    0x3c, 0x66, 0xc3, 0xc3,

    /* U+25E1 "◡" */
    0xc3, 0xc3, 0x66, 0x3c,

    /* U+25E2 "◢" */
    0x1, 0x3, 0x7, 0xf, 0x1f, 0x3f, 0x7f, 0xff,

    /* U+25E3 "◣" */
    0x80, 0xc0, 0xe0, 0xf0, 0xf8, 0xfc, 0xfe, 0xff,

    /* U+25E4 "◤" */
    0xff, 0xfe, 0xfc, 0xf8, 0xf0, 0xe0, 0xc0, 0x80,

    /* U+25E5 "◥" */
    0xff, 0x7f, 0x3f, 0x1f, 0xf, 0x7, 0x3, 0x1,

    /* U+25E6 "◦" */
    0x77, 0xf7, 0xf7, 0x0,

    /* U+25E7 "◧" */
    0xff, 0xf3, 0xf3, 0xf3, 0xf3, 0xf3, 0xf3, 0xff,

    /* U+25E8 "◨" */
    0xff, 0xcf, 0xcf, 0xcf, 0xcf, 0xcf, 0xcf, 0xff,

    /* U+25E9 "◩" */
    0xff, 0xff, 0xff, 0xfb, 0xf3, 0xe3, 0xc3, 0xff,

    /* U+25EA "◪" */
    0xff, 0xc3, 0xc7, 0xcf, 0xdf, 0xff, 0xff, 0xff,

    /* U+25EB "◫" */
    0xff, 0xdb, 0xdb, 0xdb, 0xdb, 0xdb, 0xdb, 0xff,

    /* U+25EC "◬" */
    0x1c, 0xe, 0xf, 0x8e, 0x66, 0xf7, 0x6f, 0x7,
    0xff,

    /* U+25ED "◭" */
    0x18, 0x18, 0x3c, 0x76, 0x76, 0xf3, 0xf3, 0xff,

    /* U+25EE "◮" */
    0x18, 0x18, 0x3c, 0x6e, 0x6e, 0xcf, 0xcf, 0xff,

    /* U+25EF "◯" */
    0x3c, 0x66, 0xc3, 0xc3, 0xc3, 0xc3, 0x66, 0x3c,

    /* U+25F0 "◰" */
    0xff, 0xdb, 0xdb, 0xdb, 0xfb, 0xc3, 0xc3, 0xff,

    /* U+25F1 "◱" */
    0xff, 0xc3, 0xc3, 0xc3, 0xfb, 0xdb, 0xdb, 0xff,

    /* U+25F2 "◲" */
    0xff, 0xc3, 0xc3, 0xc3, 0xdf, 0xdb, 0xdb, 0xff,

    /* U+25F3 "◳" */
    0xff, 0xdb, 0xdb, 0xdb, 0xdf, 0xc3, 0xc3, 0xff,

    /* U+25F4 "◴" */
    0x3c, 0x7e, 0xdb, 0xdb, 0xfb, 0xc3, 0x66, 0x3c,

    /* U+25F5 "◵" */
    0x3c, 0x66, 0xc3, 0xfb, 0xdb, 0xdb, 0x7e, 0x3c,

    /* U+25F6 "◶" */
    0x3c, 0x66, 0xc3, 0xdf, 0xdb, 0xdb, 0x7e, 0x3c,

    /* U+25F7 "◷" */
    0x3c, 0x7e, 0xdb, 0xdb, 0xdf, 0xc3, 0x66, 0x3c,

    /* U+25F8 "◸" */
    0xff, 0xc6, 0xcc, 0xd8, 0xf0, 0xe0, 0xc0, 0x80,

    /* U+25F9 "◹" */
    0xff, 0x63, 0x33, 0x1b, 0xf, 0x7, 0x3, 0x1,

    /* U+25FA "◺" */
    0x80, 0xc0, 0xe0, 0xf0, 0xd8, 0xcc, 0xc6, 0xff,

    /* U+25FB "◻" */
    0xf9, 0x9f,

    /* U+25FC "◼" */
    0xff, 0xff,

    /* U+25FD "◽" */
    0xff, 0x1c, 0x7f,

    /* U+25FE "◾" */
    0xff, 0xff, 0xff,

    /* U+25FF "◿" */
    0x1, 0x3, 0x7, 0xf, 0x1b, 0x33, 0x63, 0xff,

    /* U+2602 "☂" */
    0x3e, 0x3f, 0xbf, 0xff, 0xf1, 0xe0, 0xc0, 0x78,
    0x3c, 0xc, 0x0,

    /* U+2605 "★" */
    0x8, 0x38, 0xff, 0x18, 0x7e, 0xf3, 0xc0,

    /* U+2606 "☆" */
    0x8, 0x38, 0xfe, 0xfe, 0x7e, 0xf3, 0xc0,

    /* U+2609 "☉" */
    0x7d, 0x8f, 0xdf, 0xbc, 0x7f, 0xdf, 0x0,

    /* U+260E "☎" */
    0x7f, 0x71, 0xfe, 0xff, 0xf7, 0x73, 0xb9, 0xfc,

    /* U+2610 "☐" */
    0xff, 0x6, 0xc, 0x18, 0x30, 0x7f, 0x80,

    /* U+2611 "☑" */
    0xff, 0xe, 0x3d, 0xfb, 0xf3, 0x7f, 0x80,

    /* U+2612 "☒" */
    0xff, 0x6, 0xfd, 0xfb, 0xf7, 0xff, 0x80,

    /* U+2615 "☕" */
    0xfc, 0x7f, 0xff, 0x3f, 0x9f, 0xff, 0xe3, 0xe0,
    0xf0,

    /* U+2625 "☥" */
    0x7d, 0x8d, 0xb1, 0xcf, 0xe7, 0xe, 0x0,

    /* U+2628 "☨" */
    0x31, 0xe3, 0x3f, 0x30, 0xc3, 0x0,

    /* U+262F "☯" */
    0x7f, 0x7f, 0xfc, 0x7e, 0x7f, 0xf9, 0xf8,

    /* U+2630 "☰" */
    0xfe, 0x3, 0xf8, 0xf, 0xe0,

    /* U+2631 "☱" */
    0xc6, 0x3, 0xf8, 0xf, 0xe0,

    /* U+2632 "☲" */
    0xfe, 0x3, 0x18, 0xf, 0xe0,

    /* U+2633 "☳" */
    0xc6, 0x3, 0x18, 0xf, 0xe0,

    /* U+2634 "☴" */
    0xfe, 0x3, 0xf8, 0xc, 0x60,

    /* U+2635 "☵" */
    0xc6, 0x3, 0xf8, 0xc, 0x60,

    /* U+2636 "☶" */
    0xfe, 0x3, 0x18, 0xc, 0x60,

    /* U+2637 "☷" */
    0xc6, 0x3, 0x18, 0xc, 0x60,

    /* U+2639 "☹" */
    0x7f, 0x60, 0xf5, 0xf8, 0x3c, 0xdf, 0xff, 0xdf,
    0xff, 0x7f, 0x0,

    /* U+263A "☺" */
    0x7e, 0xff, 0xd3, 0xc1, 0xfd, 0xcd, 0xc1, 0xff,
    0x7e,

    /* U+263B "☻" */
    0x7e, 0xff, 0xdb, 0xff, 0xc3, 0xe7, 0xff, 0x7e,

    /* U+2640 "♀" */
    0x7b, 0x3c, 0xf3, 0x78, 0xcf, 0xcc,

    /* U+2642 "♂" */
    0xf, 0x7, 0xf, 0x7d, 0xcc, 0xcc, 0xcc, 0x78,

    /* U+2660 "♠" */
    0x10, 0x71, 0xf7, 0xff, 0xe7, 0x1f, 0x0,

    /* U+2661 "♡" */
    0x6d, 0xff, 0x1e, 0x36, 0xc7, 0x4, 0x0,

    /* U+2662 "♢" */
    0x10, 0x71, 0xb6, 0x36, 0xc7, 0x4, 0x0,

    /* U+2663 "♣" */
    0x38, 0x73, 0xff, 0x7f, 0xe7, 0x1f, 0x0,

    /* U+2664 "♤" */
    0x10, 0x71, 0xb6, 0x3e, 0xe7, 0x1f, 0x0,

    /* U+2665 "♥" */
    0x6d, 0xff, 0xff, 0xf7, 0xc7, 0x4, 0x0,

    /* U+2666 "♦" */
    0x10, 0x71, 0xf7, 0xf7, 0xc7, 0x4, 0x0,

    /* U+2667 "♧" */
    0x3c, 0x7b, 0xff, 0x1f, 0x62, 0x9f, 0x80,

    /* U+2669 "♩" */
    0x18, 0xc6, 0x31, 0xbf, 0xee,

    /* U+266A "♪" */
    0x18, 0x1c, 0x1e, 0x1b, 0x18, 0x78, 0xf8, 0x70,

    /* U+266B "♫" */
    0x7f, 0x63, 0x63, 0x63, 0x63, 0x67, 0xe6, 0xc0,

    /* U+266C "♬" */
    0x7f, 0x63, 0x7f, 0x63, 0x63, 0x67, 0xe6, 0xc0,

    /* U+2683 "⚃" */
    0xff, 0x81, 0xa5, 0x81, 0x81, 0xa5, 0x81, 0xff,

    /* U+268A "⚊" */
    0xfe,

    /* U+268B "⚋" */
    0xc6,

    /* U+268C "⚌" */
    0xfe, 0x3, 0xf8,

    /* U+268D "⚍" */
    0xc6, 0x3, 0xf8,

    /* U+268E "⚎" */
    0xfe, 0x3, 0x18,

    /* U+268F "⚏" */
    0xc6, 0x3, 0x18,

    /* U+269E "⚞" */
    0xe0, 0x70, 0x7, 0xff, 0xe0, 0xe, 0x70,

    /* U+269F "⚟" */
    0xe, 0x70, 0x7, 0xff, 0xe0, 0xe, 0x7,

    /* U+26AA "⚪" */
    0x3c, 0x66, 0xc3, 0xc3, 0x66, 0x3c,

    /* U+26AB "⚫" */
    0x3c, 0x7e, 0xff, 0xff, 0x7e, 0x3c,

    /* U+26AC "⚬" */
    0x77, 0xf7, 0xf7, 0x0,

    /* U+26C8 "⛈" */
    0x3c, 0xff, 0xff, 0x18, 0xc, 0x18, 0x30, 0x18,

    /* U+26F5 "⛵" */
    0x20, 0x30, 0x20, 0x20, 0xff, 0x7e, 0x3c,

    /* U+2708 "✈" */
    0x30, 0x38, 0x9c, 0xff, 0xff, 0x9c, 0x38, 0x30,

    /* U+2713 "✓" */
    0x2, 0xc, 0x36, 0xcf, 0x1c, 0x30, 0x0,

    /* U+2734 "✴" */
    0xc8, 0xea, 0x3c, 0xfe, 0x1c, 0x3a, 0xeb, 0xc0,

    /* U+2735 "✵" */
    0xc8, 0xee, 0x3c, 0xee, 0x1c, 0x3e, 0xeb, 0xc0,

    /* U+2764 "❤" */
    0x66, 0xff, 0xff, 0x7e, 0x3c, 0x18,

    /* U+2800 "⠀" */
    0x0,

    /* U+2801 "⠁" */
    0xff,

    /* U+2802 "⠂" */
    0xff,

    /* U+2803 "⠃" */
    0xff, 0xff,

    /* U+2804 "⠄" */
    0xff,

    /* U+2805 "⠅" */
    0xff, 0x0, 0xff,

    /* U+2806 "⠆" */
    0xff, 0xff,

    /* U+2807 "⠇" */
    0xff, 0xff, 0xff,

    /* U+2808 "⠈" */
    0xff,

    /* U+2809 "⠉" */
    0xff, 0xff,

    /* U+280A "⠊" */
    0xf, 0x87, 0xff, 0xff, 0xf, 0x80,

    /* U+280B "⠋" */
    0xff, 0xff, 0xf0, 0xf0,

    /* U+280C "⠌" */
    0xf, 0xf, 0x0, 0x0, 0xf0, 0xf0,

    /* U+280D "⠍" */
    0xff, 0xff, 0x0, 0x0, 0xf0, 0xf0,

    /* U+280E "⠎" */
    0xf, 0x87, 0xff, 0xff, 0xf, 0x87, 0xc3, 0xe0,

    /* U+280F "⠏" */
    0xff, 0xff, 0xf0, 0xf0, 0xf0, 0xf0,

    /* U+2810 "⠐" */
    0xff,

    /* U+2811 "⠑" */
    0xf8, 0x7c, 0x3f, 0xe1, 0xf0, 0xf8,

    /* U+2812 "⠒" */
    0xff, 0xff,

    /* U+2813 "⠓" */
    0xf0, 0xf0, 0xff, 0xff,

    /* U+2814 "⠔" */
    0xf, 0x87, 0xff, 0xff, 0xf, 0x80,

    /* U+2815 "⠕" */
    0xf8, 0x7c, 0x3f, 0xe1, 0xff, 0xff, 0xc3, 0xe0,

    /* U+2816 "⠖" */
    0xff, 0xff, 0xf0, 0xf0,

    /* U+2817 "⠗" */
    0xf0, 0xf0, 0xff, 0xff, 0xf0, 0xf0,

    /* U+2818 "⠘" */
    0xff, 0xff,

    /* U+2819 "⠙" */
    0xff, 0xff, 0xf, 0xf,

    /* U+281A "⠚" */
    0xf, 0xf, 0xff, 0xff,

    /* U+281B "⠛" */
    0xff, 0xff, 0xff, 0xff,

    /* U+281C "⠜" */
    0xf, 0x87, 0xc3, 0xe1, 0xff, 0xff, 0xc3, 0xe0,

    /* U+281D "⠝" */
    0xff, 0xff, 0xc3, 0xe1, 0xff, 0xff, 0xc3, 0xe0,

    /* U+281E "⠞" */
    0xf, 0xf, 0xff, 0xff, 0xf0, 0xf0,

    /* U+281F "⠟" */
    0xff, 0xff, 0xff, 0xff, 0xf0, 0xf0,

    /* U+2820 "⠠" */
    0xff,

    /* U+2821 "⠡" */
    0xf0, 0xf0, 0x0, 0x0, 0xf, 0xf,

    /* U+2822 "⠢" */
    0xf8, 0x7c, 0x3f, 0xe1, 0xf0, 0xf8,

    /* U+2823 "⠣" */
    0xf8, 0x7c, 0x3e, 0x1f, 0xf, 0xf8, 0x7c, 0x3e,

    /* U+2824 "⠤" */
    0xff, 0xff,

    /* U+2825 "⠥" */
    0xf0, 0xf0, 0x0, 0x0, 0xff, 0xff,

    /* U+2826 "⠦" */
    0xf0, 0xf0, 0xff, 0xff,

    /* U+2827 "⠧" */
    0xf0, 0xf0, 0xf0, 0xf0, 0xff, 0xff,

    /* U+2828 "⠨" */
    0xff, 0x0, 0xff,

    /* U+2829 "⠩" */
    0xff, 0xff, 0x0, 0x0, 0xf, 0xf,

    /* U+282A "⠪" */
    0xf, 0x87, 0xff, 0xff, 0xf, 0xf8, 0x7c, 0x3e,

    /* U+282B "⠫" */
    0xff, 0xff, 0xfe, 0x1f, 0xf, 0xf8, 0x7c, 0x3e,

    /* U+282C "⠬" */
    0xf, 0xf, 0x0, 0x0, 0xff, 0xff,

    /* U+282D "⠭" */
    0xff, 0xff, 0x0, 0x0, 0xff, 0xff,

    /* U+282E "⠮" */
    0xf, 0x87, 0xff, 0xff, 0xf, 0xff, 0xfc,

    /* U+282F "⠯" */
    0xff, 0xff, 0xf0, 0xf0, 0xff, 0xff,

    /* U+2830 "⠰" */
    0xff, 0xff,

    /* U+2831 "⠱" */
    0xf8, 0x7c, 0x3f, 0xe1, 0xf0, 0xf8, 0x7c, 0x3e,

    /* U+2832 "⠲" */
    0xff, 0xff, 0xf, 0xf,

    /* U+2833 "⠳" */
    0xf0, 0xf0, 0xff, 0xff, 0xf, 0xf,

    /* U+2834 "⠴" */
    0xf, 0xf, 0xff, 0xff,

    /* U+2835 "⠵" */
    0xf8, 0x7c, 0x3f, 0xe1, 0xff, 0xff, 0xfc,

    /* U+2836 "⠶" */
    0xff, 0xff, 0xff, 0xff,

    /* U+2837 "⠷" */
    0xf0, 0xf0, 0xff, 0xff, 0xff, 0xff,

    /* U+2838 "⠸" */
    0xff, 0xff, 0xff,

    /* U+2839 "⠹" */
    0xff, 0xff, 0xf, 0xf, 0xf, 0xf,

    /* U+283A "⠺" */
    0xf, 0xf, 0xff, 0xff, 0xf, 0xf,

    /* U+283B "⠻" */
    0xff, 0xff, 0xff, 0xff, 0xf, 0xf,

    /* U+283C "⠼" */
    0xf, 0xf, 0xf, 0xf, 0xff, 0xff,

    /* U+283D "⠽" */
    0xff, 0xff, 0xf, 0xf, 0xff, 0xff,

    /* U+283E "⠾" */
    0xf, 0xf, 0xff, 0xff, 0xff, 0xff,

    /* U+283F "⠿" */
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff,

    /* U+2840 "⡀" */
    0xff,

    /* U+2841 "⡁" */
    0xff, 0x0, 0x0, 0xff,

    /* U+2842 "⡂" */
    0xff, 0x0, 0xff,

    /* U+2843 "⡃" */
    0xff, 0xff, 0x0, 0xff,

    /* U+2844 "⡄" */
    0xff, 0xff,

    /* U+2845 "⡅" */
    0xff, 0x0, 0xff, 0xff,

    /* U+2846 "⡆" */
    0xff, 0xff, 0xff,

    /* U+2847 "⡇" */
    0xff, 0xff, 0xff, 0xff,

    /* U+2848 "⡈" */
    0xf, 0xf, 0x0, 0x0, 0x0, 0x0, 0xf0, 0xf0,

    /* U+2849 "⡉" */
    0xff, 0xff, 0x0, 0x0, 0x0, 0x0, 0xf0, 0xf0,

    /* U+284A "⡊" */
    0xf, 0xf, 0xff, 0xf0, 0xf0, 0x0, 0xf0, 0xf0,

    /* U+284B "⡋" */
    0xff, 0xff, 0xf0, 0xf0, 0x0, 0x0, 0xf0, 0xf0,

    /* U+284C "⡌" */
    0xf, 0xf, 0x0, 0x0, 0xf0, 0xf0, 0xf0, 0xf0,

    /* U+284D "⡍" */
    0xff, 0xff, 0x0, 0x0, 0xf0, 0xf0, 0xf0, 0xf0,

    /* U+284E "⡎" */
    0xf, 0x87, 0xff, 0xff, 0xf, 0x87, 0xc3, 0xe1,
    0xf0, 0xf8, 0x0,

    /* U+284F "⡏" */
    0xff, 0xff, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0,

    /* U+2850 "⡐" */
    0xf, 0xf, 0x0, 0x0, 0xf0, 0xf0,

    /* U+2851 "⡑" */
    0xf0, 0xf0, 0xff, 0xf, 0xf, 0x0, 0xf0, 0xf0,

    /* U+2852 "⡒" */
    0xff, 0xff, 0x0, 0x0, 0xf0, 0xf0,

    /* U+2853 "⡓" */
    0xf0, 0xf0, 0xff, 0xff, 0x0, 0x0, 0xf0, 0xf0,

    /* U+2854 "⡔" */
    0xf, 0x87, 0xff, 0xff, 0xf, 0x87, 0xc3, 0xe0,

    /* U+2855 "⡕" */
    0xf8, 0x7c, 0x3f, 0xe1, 0xff, 0xff, 0xc3, 0xe1,
    0xf0, 0xf8, 0x0,

    /* U+2856 "⡖" */
    0xff, 0xff, 0xf0, 0xf0, 0xf0, 0xf0,

    /* U+2857 "⡗" */
    0xf0, 0xf0, 0xff, 0xff, 0xf0, 0xf0, 0xf0, 0xf0,

    /* U+2858 "⡘" */
    0xf, 0xf, 0xf, 0xf, 0x0, 0x0, 0xf0, 0xf0,

    /* U+2859 "⡙" */
    0xff, 0xff, 0xf, 0xf, 0x0, 0x0, 0xf0, 0xf0,

    /* U+285A "⡚" */
    0xf, 0xf, 0xff, 0xff, 0x0, 0x0, 0xf0, 0xf0,

    /* U+285B "⡛" */
    0xff, 0xff, 0xff, 0xff, 0x0, 0x0, 0xf0, 0xf0,

    /* U+285C "⡜" */
    0xf, 0x87, 0xc3, 0xe1, 0xff, 0xff, 0xc3, 0xe1,
    0xf0, 0xf8, 0x0,

    /* U+285D "⡝" */
    0xff, 0xff, 0xc3, 0xe1, 0xff, 0xff, 0xc3, 0xe1,
    0xf0, 0xf8, 0x0,

    /* U+285E "⡞" */
    0xf, 0xf, 0xff, 0xff, 0xf0, 0xf0, 0xf0, 0xf0,

    /* U+285F "⡟" */
    0xff, 0xff, 0xff, 0xff, 0xf0, 0xf0, 0xf0, 0xf0,

    /* U+2860 "⡠" */
    0xf, 0x87, 0xff, 0xff, 0xf, 0x80,

    /* U+2861 "⡡" */
    0xf0, 0xf0, 0x0, 0x0, 0xf, 0xf, 0xff, 0xf0,
    0xf0,

    /* U+2862 "⡢" */
    0xf8, 0x7c, 0x3f, 0xe1, 0xff, 0xff, 0xc3, 0xe0,

    /* U+2863 "⡣" */
    0xf8, 0x7c, 0x3e, 0x1f, 0xf, 0xf8, 0x7f, 0xff,
    0xf0, 0xf8, 0x0,

    /* U+2864 "⡤" */
    0xff, 0xff, 0xf0, 0xf0,

    /* U+2865 "⡥" */
    0xf0, 0xf0, 0x0, 0x0, 0xff, 0xff, 0xf0, 0xf0,

    /* U+2866 "⡦" */
    0xf0, 0xf0, 0xff, 0xff, 0xf0, 0xf0,

    /* U+2867 "⡧" */
    0xf0, 0xf0, 0xf0, 0xf0, 0xff, 0xff, 0xf0, 0xf0,

    /* U+2868 "⡨" */
    0xf, 0x87, 0xc0, 0x0, 0x0, 0xf8, 0x7f, 0xff,
    0xf0, 0xf8, 0x0,

    /* U+2869 "⡩" */
    0xff, 0xff, 0x0, 0x0, 0xf, 0xf, 0xff, 0xf0,
    0xf0,

    /* U+286A "⡪" */
    0xf, 0x87, 0xff, 0xff, 0xf, 0xf8, 0x7f, 0xff,
    0xf0, 0xf8, 0x0,

    /* U+286B "⡫" */
    0xff, 0xff, 0xfe, 0x1f, 0xf, 0xf8, 0x7f, 0xff,
    0xf0, 0xf8, 0x0,

    /* U+286C "⡬" */
    0xf, 0xf, 0x0, 0x0, 0xff, 0xff, 0xf0, 0xf0,

    /* U+286D "⡭" */
    0xff, 0xff, 0x0, 0x0, 0xff, 0xff, 0xf0, 0xf0,

    /* U+286E "⡮" */
    0xf, 0x87, 0xff, 0xff, 0xf, 0xff, 0xff, 0xe1,
    0xf0,

    /* U+286F "⡯" */
    0xff, 0xff, 0xf0, 0xf0, 0xff, 0xff, 0xf0, 0xf0,

    /* U+2870 "⡰" */
    0xf, 0x87, 0xc3, 0xe1, 0xff, 0xff, 0xc3, 0xe0,

    /* U+2871 "⡱" */
    0xf8, 0x7c, 0x3f, 0xe1, 0xf0, 0xf8, 0x7f, 0xff,
    0xf0, 0xf8, 0x0,

    /* U+2872 "⡲" */
    0xff, 0xff, 0xc3, 0xe1, 0xff, 0xff, 0xc3, 0xe0,

    /* U+2873 "⡳" */
    0xf0, 0xf0, 0xff, 0xff, 0xf, 0xf, 0xff, 0xf0,
    0xf0,

    /* U+2874 "⡴" */
    0xf, 0xf, 0xff, 0xff, 0xf0, 0xf0,

    /* U+2875 "⡵" */
    0xf0, 0xf0, 0xff, 0xf, 0xff, 0xff, 0xf0, 0xf0,

    /* U+2876 "⡶" */
    0xff, 0xff, 0xff, 0xff, 0xf0, 0xf0,

    /* U+2877 "⡷" */
    0xf0, 0xf0, 0xff, 0xff, 0xff, 0xff, 0xf0, 0xf0,

    /* U+2878 "⡸" */
    0xf, 0x87, 0xc3, 0xe1, 0xf0, 0xf8, 0x7f, 0xff,
    0xf0, 0xf8, 0x0,

    /* U+2879 "⡹" */
    0xff, 0xff, 0xc3, 0xe1, 0xf0, 0xf8, 0x7f, 0xff,
    0xf0, 0xf8, 0x0,

    /* U+287A "⡺" */
    0xf, 0x87, 0xff, 0xff, 0xf0, 0xf8, 0x7f, 0xff,
    0xf0, 0xf8, 0x0,

    /* U+287B "⡻" */
    0xff, 0xff, 0xff, 0xff, 0xf0, 0xf8, 0x7f, 0xff,
    0xf0, 0xf8, 0x0,

    /* U+287C "⡼" */
    0xf, 0xf, 0xf, 0xf, 0xff, 0xff, 0xf0, 0xf0,

    /* U+287D "⡽" */
    0xff, 0xff, 0xf, 0xf, 0xff, 0xff, 0xf0, 0xf0,

    /* U+287E "⡾" */
    0xf, 0xf, 0xff, 0xff, 0xff, 0xff, 0xf0, 0xf0,

    /* U+287F "⡿" */
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0xf0,

    /* U+2880 "⢀" */
    0xff,

    /* U+2881 "⢁" */
    0xf0, 0xf0, 0x0, 0x0, 0x0, 0x0, 0xf, 0xf,

    /* U+2882 "⢂" */
    0xf0, 0xf0, 0x0, 0x0, 0xf, 0xf,

    /* U+2883 "⢃" */
    0xf0, 0xf0, 0xf0, 0xf0, 0x0, 0x0, 0xf, 0xf,

    /* U+2884 "⢄" */
    0xf8, 0x7c, 0x3f, 0xe1, 0xf0, 0xf8,

    /* U+2885 "⢅" */
    0xf0, 0xf0, 0x0, 0x0, 0xf0, 0xf0, 0xff, 0xf,
    0xf,

    /* U+2886 "⢆" */
    0xf8, 0x7c, 0x3e, 0x1f, 0xf, 0xf8, 0x7c, 0x3e,

    /* U+2887 "⢇" */
    0xf8, 0x7c, 0x3e, 0x1f, 0xf, 0x87, 0xc3, 0xfe,
    0x1f, 0xf, 0x80,

    /* U+2888 "⢈" */
    0xff, 0x0, 0x0, 0xff,

    /* U+2889 "⢉" */
    0xff, 0xff, 0x0, 0x0, 0x0, 0x0, 0xf, 0xf,

    /* U+288A "⢊" */
    0xf, 0x87, 0xff, 0xff, 0xf, 0x80, 0x0, 0x1e,
    0xf,

    /* U+288B "⢋" */
    0xff, 0xff, 0xf0, 0xf0, 0x0, 0x0, 0xf, 0xf,

    /* U+288C "⢌" */
    0x7, 0x83, 0xc0, 0x0, 0xf, 0x87, 0xc3, 0xfe,
    0x1f, 0xf, 0x80,

    /* U+288D "⢍" */
    0xff, 0xff, 0x0, 0x0, 0xf0, 0xf0, 0xff, 0xf,
    0xf,

    /* U+288E "⢎" */
    0xf, 0x87, 0xff, 0xff, 0xf, 0x87, 0xc3, 0xfe,
    0x1f, 0xf, 0x80,

    /* U+288F "⢏" */
    0xff, 0xff, 0xfe, 0x1f, 0xf, 0x87, 0xc3, 0xfe,
    0x1f, 0xf, 0x80,

    /* U+2890 "⢐" */
    0xff, 0x0, 0xff,

    /* U+2891 "⢑" */
    0xf8, 0x7c, 0x3f, 0xe1, 0xf0, 0xf8, 0x0, 0x1e,
    0xf,

    /* U+2892 "⢒" */
    0xff, 0xff, 0x0, 0x0, 0xf, 0xf,

    /* U+2893 "⢓" */
    0xf0, 0xf0, 0xff, 0xff, 0x0, 0x0, 0xf, 0xf,

    /* U+2894 "⢔" */
    0xf, 0x87, 0xff, 0xff, 0xf, 0xf8, 0x7c, 0x3e,

    /* U+2895 "⢕" */
    0xf8, 0x7c, 0x3f, 0xc1, 0xef, 0xf7, 0xc3, 0xfe,
    0x1f, 0xf, 0x80,

    /* U+2896 "⢖" */
    0xff, 0xff, 0xfe, 0x1f, 0xf, 0xf8, 0x7c, 0x3e,

    /* U+2897 "⢗" */
    0xf0, 0xf0, 0xff, 0xff, 0xf0, 0xf0, 0xff, 0xf,
    0xf,

    /* U+2898 "⢘" */
    0xff, 0xff, 0x0, 0xff,

    /* U+2899 "⢙" */
    0xff, 0xff, 0xf, 0xf, 0x0, 0x0, 0xf, 0xf,

    /* U+289A "⢚" */
    0xf, 0xf, 0xff, 0xff, 0x0, 0x0, 0xf, 0xf,

    /* U+289B "⢛" */
    0xff, 0xff, 0xff, 0xff, 0x0, 0x0, 0xf, 0xf,

    /* U+289C "⢜" */
    0xf, 0x87, 0xc3, 0xe1, 0xff, 0xff, 0xc3, 0xfe,
    0x1f, 0xf, 0x80,

    /* U+289D "⢝" */
    0xff, 0xff, 0xc3, 0xe1, 0xff, 0xff, 0xc3, 0xfe,
    0x1f, 0xf, 0x80,

    /* U+289E "⢞" */
    0x7, 0x83, 0xff, 0xff, 0xff, 0x87, 0xc3, 0xfe,
    0x1f, 0xf, 0x80,

    /* U+289F "⢟" */
    0xff, 0xff, 0xff, 0xff, 0xff, 0x87, 0xc3, 0xfe,
    0x1f, 0xf, 0x80,

    /* U+28A0 "⢠" */
    0xff, 0xff,

    /* U+28A1 "⢡" */
    0xf0, 0xf0, 0x0, 0x0, 0xf, 0xf, 0xf, 0xf,

    /* U+28A2 "⢢" */
    0xf8, 0x7c, 0x3f, 0xe1, 0xf0, 0xf8, 0x7c, 0x3e,

    /* U+28A3 "⢣" */
    0xf8, 0x7c, 0x3e, 0x1f, 0xf, 0xf8, 0x7c, 0x3e,
    0x1f, 0xf, 0x80,

    /* U+28A4 "⢤" */
    0xff, 0xff, 0xf, 0xf,

    /* U+28A5 "⢥" */
    0xf0, 0xf0, 0x0, 0x0, 0xff, 0xff, 0xf, 0xf,

    /* U+28A6 "⢦" */
    0xf0, 0xf0, 0xff, 0xff, 0xf, 0xf,

    /* U+28A7 "⢧" */
    0xf0, 0xf0, 0xf0, 0xf0, 0xff, 0xff, 0xf, 0xf,

    /* U+28A8 "⢨" */
    0xff, 0x0, 0xff, 0xff,

    /* U+28A9 "⢩" */
    0xff, 0xff, 0x0, 0x0, 0xf, 0xf, 0xf, 0xf,

    /* U+28AA "⢪" */
    0xf, 0x87, 0xff, 0xff, 0xf, 0xf8, 0x7c, 0x3e,
    0x1f, 0xf, 0x80,

    /* U+28AB "⢫" */
    0xff, 0xff, 0xfe, 0x1f, 0xf, 0xf8, 0x7c, 0x3e,
    0x1f, 0xf, 0x80,

    /* U+28AC "⢬" */
    0xf, 0xf, 0x0, 0x0, 0xff, 0xff, 0xf, 0xf,

    /* U+28AD "⢭" */
    0xff, 0xff, 0x0, 0x0, 0xff, 0xff, 0xf, 0xf,

    /* U+28AE "⢮" */
    0xf, 0x87, 0xff, 0xff, 0xf, 0xff, 0xfc, 0x1e,
    0xf,

    /* U+28AF "⢯" */
    0xff, 0xff, 0xf0, 0xf0, 0xff, 0xff, 0xf, 0xf,

    /* U+28B0 "⢰" */
    0xff, 0xff, 0xff,

    /* U+28B1 "⢱" */
    0xf8, 0x7c, 0x3f, 0xe1, 0xf0, 0xf8, 0x7c, 0x3e,
    0x1f, 0xf, 0x80,

    /* U+28B2 "⢲" */
    0xff, 0xff, 0xf, 0xf, 0xf, 0xf,

    /* U+28B3 "⢳" */
    0xf0, 0xf0, 0xff, 0xff, 0xf, 0xf, 0xf, 0xf,

    /* U+28B4 "⢴" */
    0xf, 0xf, 0xff, 0xff, 0xf, 0xf,

    /* U+28B5 "⢵" */
    0xf8, 0xf8, 0xff, 0xf, 0xff, 0xff, 0x7, 0x7,

    /* U+28B6 "⢶" */
    0xff, 0xff, 0xff, 0xff, 0xf, 0xf,

    /* U+28B7 "⢷" */
    0xf0, 0xf0, 0xff, 0xff, 0xff, 0xff, 0xf, 0xf,

    /* U+28B8 "⢸" */
    0xff, 0xff, 0xff, 0xff,

    /* U+28B9 "⢹" */
    0xff, 0xff, 0xf, 0xf, 0xf, 0xf, 0xf, 0xf,

    /* U+28BA "⢺" */
    0xf, 0xf, 0xff, 0xff, 0xf, 0xf, 0xf, 0xf,

    /* U+28BB "⢻" */
    0xff, 0xff, 0xff, 0xff, 0xf, 0xf, 0xf, 0xf,

    /* U+28BC "⢼" */
    0xf, 0xf, 0xf, 0xf, 0xff, 0xff, 0xf, 0xf,

    /* U+28BD "⢽" */
    0xff, 0xff, 0xf, 0xf, 0xff, 0xff, 0xf, 0xf,

    /* U+28BE "⢾" */
    0xf, 0xf, 0xff, 0xff, 0xff, 0xff, 0xf, 0xf,

    /* U+28BF "⢿" */
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf, 0xf,

    /* U+28C0 "⣀" */
    0xff, 0xff,

    /* U+28C1 "⣁" */
    0xf0, 0xf0, 0x0, 0x0, 0x0, 0x0, 0xff, 0xff,

    /* U+28C2 "⣂" */
    0xf0, 0xf0, 0x0, 0x0, 0xff, 0xff,

    /* U+28C3 "⣃" */
    0xf0, 0xf0, 0xf0, 0xf0, 0x0, 0x0, 0xff, 0xff,

    /* U+28C4 "⣄" */
    0xf0, 0xf0, 0xff, 0xff,

    /* U+28C5 "⣅" */
    0xf0, 0xf0, 0x0, 0x0, 0xf0, 0xf0, 0xff, 0xff,

    /* U+28C6 "⣆" */
    0xf0, 0xf0, 0xf0, 0xf0, 0xff, 0xff,

    /* U+28C7 "⣇" */
    0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xff, 0xff,

    /* U+28C8 "⣈" */
    0xf, 0xf, 0x0, 0x0, 0x0, 0x0, 0xff, 0xff,

    /* U+28C9 "⣉" */
    0xff, 0xff, 0x0, 0x0, 0x0, 0x0, 0xff, 0xff,

    /* U+28CA "⣊" */
    0xf, 0xf, 0xff, 0xf0, 0xf0, 0x0, 0xff, 0xff,

    /* U+28CB "⣋" */
    0xff, 0xff, 0xf0, 0xf0, 0x0, 0x0, 0xff, 0xff,

    /* U+28CC "⣌" */
    0xf, 0xf, 0x0, 0x0, 0xf0, 0xf0, 0xff, 0xff,

    /* U+28CD "⣍" */
    0xff, 0xff, 0x0, 0x0, 0xf0, 0xf0, 0xff, 0xff,

    /* U+28CE "⣎" */
    0xf, 0x87, 0xff, 0xff, 0xf, 0x87, 0xc3, 0xff,
    0xff,

    /* U+28CF "⣏" */
    0xff, 0xff, 0xf0, 0xf0, 0xf0, 0xf0, 0xff, 0xff,

    /* U+28D0 "⣐" */
    0xf, 0xf, 0x0, 0x0, 0xff, 0xff,

    /* U+28D1 "⣑" */
    0xf0, 0xf0, 0xff, 0xf, 0xf, 0x0, 0xff, 0xff,

    /* U+28D2 "⣒" */
    0xff, 0xff, 0x0, 0x0, 0xff, 0xff,

    /* U+28D3 "⣓" */
    0xf0, 0xf0, 0xff, 0xff, 0x0, 0x0, 0xff, 0xff,

    /* U+28D4 "⣔" */
    0xf, 0x87, 0xff, 0xff, 0xf, 0xff, 0xfc,

    /* U+28D5 "⣕" */
    0xf8, 0x7c, 0x3f, 0xe1, 0xff, 0xff, 0xc3, 0xff,
    0xff,

    /* U+28D6 "⣖" */
    0xff, 0xff, 0xf0, 0xf0, 0xff, 0xff,

    /* U+28D7 "⣗" */
    0xf0, 0xf0, 0xff, 0xff, 0xf0, 0xf0, 0xff, 0xff,

    /* U+28D8 "⣘" */
    0xf, 0xf, 0xf, 0xf, 0x0, 0x0, 0xff, 0xff,

    /* U+28D9 "⣙" */
    0xff, 0xff, 0xf, 0xf, 0x0, 0x0, 0xff, 0xff,

    /* U+28DA "⣚" */
    0xf, 0xf, 0xff, 0xff, 0x0, 0x0, 0xff, 0xff,

    /* U+28DB "⣛" */
    0xff, 0xff, 0xff, 0xff, 0x0, 0x0, 0xff, 0xff,

    /* U+28DC "⣜" */
    0xf, 0x87, 0xc3, 0xe1, 0xff, 0xff, 0xc3, 0xff,
    0xff,

    /* U+28DD "⣝" */
    0xff, 0xff, 0xc3, 0xe1, 0xff, 0xff, 0xc3, 0xff,
    0xff,

    /* U+28DE "⣞" */
    0xf, 0xf, 0xff, 0xff, 0xf0, 0xf0, 0xff, 0xff,

    /* U+28DF "⣟" */
    0xff, 0xff, 0xff, 0xff, 0xf0, 0xf0, 0xff, 0xff,

    /* U+28E0 "⣠" */
    0xf, 0xf, 0xff, 0xff,

    /* U+28E1 "⣡" */
    0xf0, 0xf0, 0x0, 0x0, 0xf, 0xf, 0xff, 0xff,

    /* U+28E2 "⣢" */
    0xf8, 0x7c, 0x3f, 0xe1, 0xff, 0xff, 0xfc,

    /* U+28E3 "⣣" */
    0xf8, 0x7c, 0x3e, 0x1f, 0xf, 0xf8, 0x7f, 0xff,
    0xff,

    /* U+28E4 "⣤" */
    0xff, 0xff, 0xff, 0xff,

    /* U+28E5 "⣥" */
    0xf0, 0xf0, 0x0, 0x0, 0xff, 0xff, 0xff, 0xff,

    /* U+28E6 "⣦" */
    0xf0, 0xf0, 0xff, 0xff, 0xff, 0xff,

    /* U+28E7 "⣧" */
    0xf0, 0xf0, 0xf0, 0xf0, 0xff, 0xff, 0xff, 0xff,

    /* U+28E8 "⣨" */
    0xf, 0xf, 0x0, 0x0, 0xf, 0xf, 0xff, 0xff,

    /* U+28E9 "⣩" */
    0xff, 0xff, 0x0, 0x0, 0xf, 0xf, 0xff, 0xff,

    /* U+28EA "⣪" */
    0xf, 0x87, 0xff, 0xff, 0xf, 0xf8, 0x7f, 0xff,
    0xff,

    /* U+28EB "⣫" */
    0xff, 0xff, 0xfe, 0x1f, 0xf, 0xf8, 0x7f, 0xff,
    0xff,

    /* U+28EC "⣬" */
    0xf, 0xf, 0x0, 0x0, 0xff, 0xff, 0xff, 0xff,

    /* U+28ED "⣭" */
    0xff, 0xff, 0x0, 0x0, 0xff, 0xff, 0xff, 0xff,

    /* U+28EE "⣮" */
    0xf, 0x87, 0xff, 0xff, 0xf, 0xff, 0xff, 0xff,
    0xff,

    /* U+28EF "⣯" */
    0xff, 0xff, 0xf0, 0xf0, 0xff, 0xff, 0xff, 0xff,

    /* U+28F0 "⣰" */
    0xf, 0xf, 0xf, 0xf, 0xff, 0xff,

    /* U+28F1 "⣱" */
    0xf8, 0x7c, 0x3f, 0xe1, 0xf0, 0xf8, 0x7f, 0xff,
    0xff,

    /* U+28F2 "⣲" */
    0xff, 0xff, 0xf, 0xf, 0xff, 0xff,

    /* U+28F3 "⣳" */
    0xf0, 0xf0, 0xff, 0xff, 0xf, 0xf, 0xff, 0xff,

    /* U+28F4 "⣴" */
    0xf, 0xf, 0xff, 0xff, 0xff, 0xff,

    /* U+28F5 "⣵" */
    0xf8, 0x7c, 0x3f, 0xe1, 0xff, 0xff, 0xff, 0xff,
    0xff,

    /* U+28F6 "⣶" */
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff,

    /* U+28F7 "⣷" */
    0xf0, 0xf0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,

    /* U+28F8 "⣸" */
    0xf, 0xf, 0xf, 0xf, 0xf, 0xf, 0xff, 0xff,

    /* U+28F9 "⣹" */
    0xff, 0xff, 0xf, 0xf, 0xf, 0xf, 0xff, 0xff,

    /* U+28FA "⣺" */
    0xf, 0xf, 0xff, 0xff, 0xf, 0xf, 0xff, 0xff,

    /* U+28FB "⣻" */
    0xff, 0xff, 0xff, 0xff, 0xf, 0xf, 0xff, 0xff,

    /* U+28FC "⣼" */
    0xf, 0xf, 0xf, 0xf, 0xff, 0xff, 0xff, 0xff,

    /* U+28FD "⣽" */
    0xff, 0xff, 0xf, 0xf, 0xff, 0xff, 0xff, 0xff,

    /* U+28FE "⣾" */
    0xf, 0xf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,

    /* U+28FF "⣿" */
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,

    /* U+29C9 "⧉" */
    0xf9, 0x12, 0xfd, 0x5f, 0xa4, 0x4f, 0x80,

    /* U+2B12 "⬒" */
    0xff, 0xff, 0xff, 0xff, 0xc3, 0xc3, 0xc3, 0xff,

    /* U+2B13 "⬓" */
    0xff, 0xc3, 0xc3, 0xc3, 0xff, 0xff, 0xff, 0xff,

    /* U+2B14 "⬔" */
    0xff, 0xff, 0xff, 0xdf, 0xcf, 0xc7, 0xc3, 0xff,

    /* U+2B15 "⬕" */
    0xff, 0xc3, 0xe3, 0xf3, 0xfb, 0xff, 0xff, 0xff,

    /* U+2B16 "⬖" */
    0x18, 0x3c, 0x76, 0xf3, 0xf3, 0x76, 0x3c, 0x18,

    /* U+2B17 "⬗" */
    0x18, 0x3c, 0x6e, 0xcf, 0xcf, 0x6e, 0x3c, 0x18,

    /* U+2B18 "⬘" */
    0x18, 0x3c, 0x7e, 0xff, 0xc3, 0x66, 0x3c, 0x18,

    /* U+2B19 "⬙" */
    0x18, 0x3c, 0x66, 0xc3, 0xff, 0x7e, 0x3c, 0x18,

    /* U+2B1D "⬝" */
    0xf0,

    /* U+2B24 "⬤" */
    0x3c, 0x7e, 0xff, 0xff, 0xff, 0xff, 0x7e, 0x3c,

    /* U+2B25 "⬥" */
    0x23, 0xbf, 0xf7, 0x10,

    /* U+2B26 "⬦" */
    0x23, 0xb7, 0xb7, 0x10,

    /* U+2B27 "⬧" */
    0x23, 0xbf, 0xff, 0xb8, 0x80,

    /* U+2B28 "⬨" */
    0x11, 0xee, 0xf3, 0xcf, 0xe7, 0x8c,

    /* U+2B29 "⬩" */
    0x23, 0xbe, 0xe2, 0x0,

    /* U+2B2A "⬪" */
    0x5f, 0xf4,

    /* U+2B2B "⬫" */
    0x5e, 0xf4,

    /* U+2B2C "⬬" */
    0x3c, 0x7e, 0xff, 0xff, 0x7e, 0x3c,

    /* U+2B2D "⬭" */
    0x3c, 0x66, 0xc3, 0xc3, 0x66, 0x3c,

    /* U+2B2E "⬮" */
    0x31, 0xef, 0xff, 0xff, 0xf7, 0x8c,

    /* U+2B2F "⬯" */
    0x31, 0xec, 0xf3, 0xcf, 0x37, 0x8c,

    /* U+2B55 "⭕" */
    0x3c, 0x7e, 0xe7, 0xc3, 0xc3, 0xe7, 0x7e, 0x3c,

    /* U+2B58 "⭘" */
    0x7b, 0xfc, 0xf3, 0xfd, 0xe0,

    /* U+2B73 "⭳" */
    0x73, 0xbe, 0xe2, 0x3, 0xe0,

    /* U+2B9C "⮜" */
    0x3, 0xe, 0x3c, 0xf8, 0x3c, 0xe, 0x3,

    /* U+2B9D "⮝" */
    0x10, 0x20, 0xe1, 0xc7, 0xcd, 0xb1, 0xc1,

    /* U+2B9E "⮞" */
    0xc0, 0x70, 0x3c, 0x1f, 0x3c, 0x70, 0xc0,

    /* U+2B9F "⮟" */
    0x83, 0x8d, 0xb3, 0xe3, 0x87, 0x4, 0x8,

    /* U+2BBA "⮺" */
    0x3e, 0x47, 0xed, 0x5b, 0xf1, 0x3e, 0x0,

    /* U+2BC0 "⯀" */
    0xff, 0xff, 0xff, 0xff, 0xf0,

    /* U+2BC5 "⯅" */
    0x10, 0x20, 0xe1, 0xc7, 0xcf, 0xbf, 0xff,

    /* U+2BC6 "⯆" */
    0xff, 0xfd, 0xf3, 0xe3, 0x87, 0x4, 0x8,

    /* U+2BC7 "⯇" */
    0x3, 0xf, 0x3f, 0xff, 0x3f, 0xf, 0x3,

    /* U+2BC8 "⯈" */
    0xc0, 0xf0, 0xfc, 0xff, 0xfc, 0xf0, 0xc0,

    /* U+2BCA "⯊" */
    0x31, 0xe7, 0xbf, 0xff, 0xf0,

    /* U+2BCB "⯋" */
    0xff, 0xff, 0xde, 0x78, 0xc0,

    /* U+2E2E "⸮" */
    0x7b, 0x3c, 0xd8, 0x30, 0x3, 0x0,

    /* U+4DC0 "䷀" */
    0xff, 0xff, 0xf8, 0xf, 0xff, 0xff, 0x80,

    /* U+4DC1 "䷁" */
    0xc7, 0x8f, 0x18, 0xc, 0x78, 0xf1, 0x80,

    /* U+4DC2 "䷂" */
    0xc7, 0xff, 0x18, 0xc, 0x78, 0xff, 0x80,

    /* U+4DC3 "䷃" */
    0xff, 0x8f, 0x18, 0xc, 0x7f, 0xf1, 0x80,

    /* U+4DC4 "䷄" */
    0xc7, 0xff, 0x18, 0xf, 0xff, 0xff, 0x80,

    /* U+4DC5 "䷅" */
    0xff, 0xff, 0xf8, 0xc, 0x7f, 0xf1, 0x80,

    /* U+4DC6 "䷆" */
    0xc7, 0x8f, 0x18, 0xc, 0x7f, 0xf1, 0x80,

    /* U+4DC7 "䷇" */
    0xc7, 0xff, 0x18, 0xc, 0x78, 0xf1, 0x80,

    /* U+4DC8 "䷈" */
    0xff, 0xff, 0x18, 0xf, 0xff, 0xff, 0x80,

    /* U+4DC9 "䷉" */
    0xff, 0xff, 0xf8, 0xc, 0x7f, 0xff, 0x80,

    /* U+4DCA "䷊" */
    0xc7, 0x8f, 0x18, 0xf, 0xff, 0xff, 0x80,

    /* U+4DCB "䷋" */
    0xff, 0xff, 0xf8, 0xc, 0x78, 0xf1, 0x80,

    /* U+4DCC "䷌" */
    0xff, 0xff, 0xf8, 0xf, 0xf8, 0xff, 0x80,

    /* U+4DCD "䷍" */
    0xff, 0x8f, 0xf8, 0xf, 0xff, 0xff, 0x80,

    /* U+4DCE "䷎" */
    0xc7, 0x8f, 0x18, 0xf, 0xf8, 0xf1, 0x80,

    /* U+4DCF "䷏" */
    0xc7, 0x8f, 0xf8, 0xc, 0x78, 0xf1, 0x80,

    /* U+4DD0 "䷐" */
    0xc7, 0xff, 0xf8, 0xc, 0x78, 0xff, 0x80,

    /* U+4DD1 "䷑" */
    0xff, 0x8f, 0x18, 0xf, 0xff, 0xf1, 0x80,

    /* U+4DD2 "䷒" */
    0xc7, 0x8f, 0x18, 0xc, 0x7f, 0xff, 0x80,

    /* U+4DD3 "䷓" */
    0xff, 0xff, 0x18, 0xc, 0x78, 0xf1, 0x80,

    /* U+4DD4 "䷔" */
    0xff, 0x8f, 0xf8, 0xc, 0x78, 0xff, 0x80,

    /* U+4DD5 "䷕" */
    0xff, 0x8f, 0x18, 0xf, 0xf8, 0xff, 0x80,

    /* U+4DD6 "䷖" */
    0xff, 0x8f, 0x18, 0xc, 0x78, 0xf1, 0x80,

    /* U+4DD7 "䷗" */
    0xc7, 0x8f, 0x18, 0xc, 0x78, 0xff, 0x80,

    /* U+4DD8 "䷘" */
    0xff, 0xff, 0xf8, 0xc, 0x78, 0xff, 0x80,

    /* U+4DD9 "䷙" */
    0xff, 0x8f, 0x18, 0xf, 0xff, 0xff, 0x80,

    /* U+4DDA "䷚" */
    0xff, 0x8f, 0x18, 0xc, 0x78, 0xff, 0x80,

    /* U+4DDB "䷛" */
    0xc7, 0xff, 0xf8, 0xf, 0xff, 0xf1, 0x80,

    /* U+4DDC "䷜" */
    0xc7, 0xff, 0x18, 0xc, 0x7f, 0xf1, 0x80,

    /* U+4DDD "䷝" */
    0xff, 0x8f, 0xf8, 0xf, 0xf8, 0xff, 0x80,

    /* U+4DDE "䷞" */
    0xc7, 0xff, 0xf8, 0xf, 0xf8, 0xf1, 0x80,

    /* U+4DDF "䷟" */
    0xc7, 0x8f, 0xf8, 0xf, 0xff, 0xf1, 0x80,

    /* U+4DE0 "䷠" */
    0xff, 0xff, 0xf8, 0xf, 0xf8, 0xf1, 0x80,

    /* U+4DE1 "䷡" */
    0xc7, 0x8f, 0xf8, 0xf, 0xff, 0xff, 0x80,

    /* U+4DE2 "䷢" */
    0xff, 0x8f, 0xf8, 0xc, 0x78, 0xf1, 0x80,

    /* U+4DE3 "䷣" */
    0xc7, 0x8f, 0x18, 0xf, 0xf8, 0xff, 0x80,

    /* U+4DE4 "䷤" */
    0xff, 0xff, 0x18, 0xf, 0xf8, 0xff, 0x80,

    /* U+4DE5 "䷥" */
    0xff, 0x8f, 0xf8, 0xc, 0x7f, 0xff, 0x80,

    /* U+4DE6 "䷦" */
    0xc7, 0xff, 0x18, 0xf, 0xf8, 0xf1, 0x80,

    /* U+4DE7 "䷧" */
    0xc7, 0x8f, 0xf8, 0xc, 0x7f, 0xf1, 0x80,

    /* U+4DE8 "䷨" */
    0xff, 0x8f, 0x18, 0xc, 0x7f, 0xff, 0x80,

    /* U+4DE9 "䷩" */
    0xff, 0xff, 0x18, 0xc, 0x78, 0xff, 0x80,

    /* U+4DEA "䷪" */
    0xc7, 0xff, 0xf8, 0xf, 0xff, 0xff, 0x80,

    /* U+4DEB "䷫" */
    0xff, 0xff, 0xf8, 0xf, 0xff, 0xf1, 0x80,

    /* U+4DEC "䷬" */
    0xc7, 0xff, 0xf8, 0xc, 0x78, 0xf1, 0x80,

    /* U+4DED "䷭" */
    0xc7, 0x8f, 0x18, 0xf, 0xff, 0xf1, 0x80,

    /* U+4DEE "䷮" */
    0xc7, 0xff, 0xf8, 0xc, 0x7f, 0xf1, 0x80,

    /* U+4DEF "䷯" */
    0xc7, 0xff, 0x18, 0xf, 0xff, 0xf1, 0x80,

    /* U+4DF0 "䷰" */
    0xc7, 0xff, 0xf8, 0xf, 0xf8, 0xff, 0x80,

    /* U+4DF1 "䷱" */
    0xff, 0x8f, 0xf8, 0xf, 0xff, 0xf1, 0x80,

    /* U+4DF2 "䷲" */
    0xc7, 0x8f, 0xf8, 0xc, 0x78, 0xff, 0x80,

    /* U+4DF3 "䷳" */
    0xff, 0x8f, 0x18, 0xf, 0xf8, 0xf1, 0x80,

    /* U+4DF4 "䷴" */
    0xff, 0xff, 0x18, 0xf, 0xf8, 0xf1, 0x80,

    /* U+4DF5 "䷵" */
    0xc7, 0x8f, 0xf8, 0xc, 0x7f, 0xff, 0x80,

    /* U+4DF6 "䷶" */
    0xc7, 0x8f, 0xf8, 0xf, 0xf8, 0xff, 0x80,

    /* U+4DF7 "䷷" */
    0xff, 0x8f, 0xf8, 0xf, 0xf8, 0xf1, 0x80,

    /* U+4DF8 "䷸" */
    0xff, 0xff, 0x18, 0xf, 0xff, 0xf1, 0x80,

    /* U+4DF9 "䷹" */
    0xc7, 0xff, 0xf8, 0xc, 0x7f, 0xff, 0x80,

    /* U+4DFA "䷺" */
    0xff, 0xff, 0x18, 0xc, 0x7f, 0xf1, 0x80,

    /* U+4DFB "䷻" */
    0xff, 0x8f, 0xf8, 0xc, 0x7f, 0xff, 0x80,

    /* U+4DFC "䷼" */
    0xff, 0xff, 0x18, 0xc, 0x7f, 0xff, 0x80,

    /* U+4DFD "䷽" */
    0xc7, 0x8f, 0xf8, 0xf, 0xf8, 0xf1, 0x80,

    /* U+4DFE "䷾" */
    0xc7, 0xff, 0x18, 0xf, 0xf8, 0xff, 0x80,

    /* U+4DFF "䷿" */
    0xff, 0x8f, 0xf8, 0xc, 0x7f, 0xf1, 0x80,

    /* U+E080 "" */
    0x0,

    /* U+E081 "" */
    0xff, 0xf0,

    /* U+E082 "" */
    0xff, 0xff,

    /* U+E083 "" */
    0xff, 0xff, 0xff,

    /* U+E084 "" */
    0xff, 0xf0,

    /* U+E085 "" */
    0xff, 0xf0, 0xf, 0xff,

    /* U+E086 "" */
    0xff, 0xff, 0xff,

    /* U+E087 "" */
    0xff, 0xff, 0xff, 0xff,

    /* U+E088 "" */
    0xff, 0xf0,

    /* U+E089 "" */
    0xff, 0xff, 0xff,

    /* U+E08A "" */
    0xf, 0xf, 0xff, 0xf0, 0xf0, 0xf0,

    /* U+E08B "" */
    0xff, 0xff, 0xff, 0xf0, 0xf0, 0xf0,

    /* U+E08C "" */
    0xf, 0xf, 0xf, 0x0, 0x0, 0xf0, 0xf0, 0xf0,

    /* U+E08D "" */
    0xff, 0xff, 0xff, 0x0, 0x0, 0xf0, 0xf0, 0xf0,

    /* U+E08E "" */
    0xf, 0xf, 0xff, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0,

    /* U+E08F "" */
    0xff, 0xff, 0xff, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0,

    /* U+E090 "" */
    0xff, 0xff,

    /* U+E091 "" */
    0xf0, 0xf0, 0xff, 0xf, 0xf, 0xf,

    /* U+E092 "" */
    0xff, 0xff, 0xff, 0xff,

    /* U+E093 "" */
    0xf0, 0xf0, 0xff, 0xff, 0xff, 0xff,

    /* U+E094 "" */
    0xf, 0xf, 0xf, 0xff, 0xf0, 0xf0,

    /* U+E095 "" */
    0xf0, 0xf0, 0xff, 0xf, 0xf, 0xff, 0xf0, 0xf0,

    /* U+E096 "" */
    0xff, 0xff, 0xff, 0xff, 0xf0, 0xf0,

    /* U+E097 "" */
    0xf0, 0xf0, 0xff, 0xff, 0xff, 0xff, 0xf0, 0xf0,

    /* U+E098 "" */
    0xff, 0xff, 0xff,

    /* U+E099 "" */
    0xff, 0xff, 0xff, 0xf, 0xf, 0xf,

    /* U+E09A "" */
    0xf, 0xf, 0xff, 0xff, 0xff, 0xff,

    /* U+E09B "" */
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff,

    /* U+E09C "" */
    0xf, 0xf, 0xf, 0xf, 0xf, 0xff, 0xf0, 0xf0,

    /* U+E09D "" */
    0xff, 0xff, 0xff, 0xf, 0xf, 0xff, 0xf0, 0xf0,

    /* U+E09E "" */
    0xf, 0xf, 0xff, 0xff, 0xff, 0xff, 0xf0, 0xf0,

    /* U+E09F "" */
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0xf0,

    /* U+E0A0 "" */
    0xff, 0xf0,

    /* U+E0A1 "" */
    0xf0, 0xf0, 0xf0, 0x0, 0x0, 0xf, 0xf, 0xf,

    /* U+E0A2 "" */
    0xf0, 0xf0, 0xf0, 0xff, 0xf, 0xf,

    /* U+E0A3 "" */
    0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xff, 0xf, 0xf,

    /* U+E0A4 "" */
    0xff, 0xff, 0xff,

    /* U+E0A5 "" */
    0xf0, 0xf0, 0xf0, 0x0, 0x0, 0xff, 0xff, 0xff,

    /* U+E0A6 "" */
    0xf0, 0xf0, 0xf0, 0xff, 0xff, 0xff,

    /* U+E0A7 "" */
    0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xff, 0xff, 0xff,

    /* U+E0A8 "" */
    0xff, 0xf0, 0xf, 0xff,

    /* U+E0A9 "" */
    0xff, 0xff, 0xff, 0x0, 0x0, 0xf, 0xf, 0xf,

    /* U+E0AA "" */
    0xf, 0xf, 0xff, 0xf0, 0xf0, 0xff, 0xf, 0xf,

    /* U+E0AB "" */
    0xff, 0xff, 0xff, 0xf0, 0xf0, 0xff, 0xf, 0xf,

    /* U+E0AC "" */
    0xf, 0xf, 0xf, 0x0, 0x0, 0xff, 0xff, 0xff,

    /* U+E0AD "" */
    0xff, 0xff, 0xff, 0x0, 0x0, 0xff, 0xff, 0xff,

    /* U+E0AE "" */
    0xf, 0xf, 0xff, 0xf0, 0xf0, 0xff, 0xff, 0xff,

    /* U+E0AF "" */
    0xff, 0xff, 0xff, 0xf0, 0xf0, 0xff, 0xff, 0xff,

    /* U+E0B0 "" */
    0xff, 0xff, 0xff,

    /* U+E0B1 "" */
    0xf0, 0xf0, 0xff, 0xf, 0xf, 0xf, 0xf, 0xf,

    /* U+E0B2 "" */
    0xff, 0xff, 0xff, 0xff, 0xf, 0xf,

    /* U+E0B3 "" */
    0xf0, 0xf0, 0xff, 0xff, 0xff, 0xff, 0xf, 0xf,

    /* U+E0B4 "" */
    0xf, 0xf, 0xf, 0xff, 0xff, 0xff,

    /* U+E0B5 "" */
    0xf0, 0xf0, 0xff, 0xf, 0xf, 0xff, 0xff, 0xff,

    /* U+E0B6 "" */
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff,

    /* U+E0B7 "" */
    0xf0, 0xf0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,

    /* U+E0B8 "" */
    0xff, 0xff, 0xff, 0xff,

    /* U+E0B9 "" */
    0xff, 0xff, 0xff, 0xf, 0xf, 0xf, 0xf, 0xf,

    /* U+E0BA "" */
    0xf, 0xf, 0xff, 0xff, 0xff, 0xff, 0xf, 0xf,

    /* U+E0BB "" */
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf, 0xf,

    /* U+E0BC "" */
    0xf, 0xf, 0xf, 0xf, 0xf, 0xff, 0xff, 0xff,

    /* U+E0BD "" */
    0xff, 0xff, 0xff, 0xf, 0xf, 0xff, 0xff, 0xff,

    /* U+E0BE "" */
    0xf, 0xf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,

    /* U+E0BF "" */
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,

    /* U+E0C0 "" */
    0x0,

    /* U+E0C1 "" */
    0xfc,

    /* U+E0C2 "" */
    0xfc,

    /* U+E0C3 "" */
    0xfc, 0x7e,

    /* U+E0C4 "" */
    0xfc,

    /* U+E0C5 "" */
    0xfc, 0x0, 0x3f,

    /* U+E0C6 "" */
    0xfc, 0x7e,

    /* U+E0C7 "" */
    0xfc, 0x7e, 0x3f,

    /* U+E0C8 "" */
    0xfc,

    /* U+E0C9 "" */
    0xef, 0xdc,

    /* U+E0CA "" */
    0xe, 0x1c, 0x7, 0xe, 0x0,

    /* U+E0CB "" */
    0xef, 0xdc, 0x7, 0xe, 0x0,

    /* U+E0CC "" */
    0xe, 0x1c, 0x0, 0x0, 0x1c, 0x38, 0x0,

    /* U+E0CD "" */
    0xef, 0xdc, 0x0, 0x0, 0x0, 0x38, 0x70,

    /* U+E0CE "" */
    0xe, 0x1c, 0x7, 0xe, 0x0, 0x38, 0x70,

    /* U+E0CF "" */
    0xef, 0xdc, 0x7, 0xe, 0x0, 0x38, 0x70,

    /* U+E0D0 "" */
    0xfc,

    /* U+E0D1 "" */
    0xe1, 0xc0, 0x0, 0x70, 0xe0,

    /* U+E0D2 "" */
    0xef, 0xdc,

    /* U+E0D3 "" */
    0xe1, 0xc0, 0x7, 0x7e, 0xe0,

    /* U+E0D4 "" */
    0xe, 0x1f, 0x87, 0x0,

    /* U+E0D5 "" */
    0xe1, 0xc0, 0x0, 0x70, 0xe0, 0x38, 0x70,

    /* U+E0D6 "" */
    0xef, 0xdc, 0x7, 0xe, 0x0,

    /* U+E0D7 "" */
    0xe1, 0xc0, 0x7, 0x7e, 0xe0, 0x38, 0x70,

    /* U+E0D8 "" */
    0xfc, 0x7e,

    /* U+E0D9 "" */
    0xef, 0xdc, 0x0, 0x70, 0xe0,

    /* U+E0DA "" */
    0xe, 0x1c, 0x7, 0x7e, 0xe0,

    /* U+E0DB "" */
    0xef, 0xdc, 0x7, 0x7e, 0xe0,

    /* U+E0DC "" */
    0xe, 0x1c, 0x0, 0x70, 0xfc, 0x38, 0x0,

    /* U+E0DD "" */
    0xef, 0xdc, 0x0, 0x70, 0xe0, 0x38, 0x70,

    /* U+E0DE "" */
    0xe, 0x1c, 0x7, 0x7e, 0xe0, 0x38, 0x70,

    /* U+E0DF "" */
    0xef, 0xdc, 0x7, 0x7e, 0xe0, 0x38, 0x70,

    /* U+E0E0 "" */
    0xfc,

    /* U+E0E1 "" */
    0xe1, 0xc0, 0x0, 0x0, 0x0, 0x3, 0x87,

    /* U+E0E2 "" */
    0xe1, 0xc0, 0x0, 0x70, 0xe0,

    /* U+E0E3 "" */
    0xe1, 0xc0, 0x7, 0xe, 0x0, 0x3, 0x87,

    /* U+E0E4 "" */
    0xe1, 0xdc, 0x38,

    /* U+E0E5 "" */
    0xe1, 0xc0, 0x0, 0x0, 0x0, 0x3b, 0xf7,

    /* U+E0E6 "" */
    0xe1, 0xc0, 0x7, 0x7e, 0xe0,

    /* U+E0E7 "" */
    0xe1, 0xc0, 0x7, 0xe, 0x0, 0x3b, 0xf7,

    /* U+E0E8 "" */
    0xfc, 0x0, 0x3f,

    /* U+E0E9 "" */
    0xef, 0xdc, 0x0, 0x0, 0x0, 0x3, 0x87,

    /* U+E0EA "" */
    0xe, 0x1c, 0x7, 0xe, 0x0, 0x3, 0x87,

    /* U+E0EB "" */
    0xef, 0xdc, 0x7, 0xe, 0x0, 0x3, 0x87,

    /* U+E0EC "" */
    0xe, 0x1c, 0x0, 0x0, 0x1c, 0x3b, 0x87,

    /* U+E0ED "" */
    0xef, 0xdc, 0x0, 0x0, 0x0, 0x3b, 0xf7,

    /* U+E0EE "" */
    0xe, 0x1c, 0x7, 0xe, 0x0, 0x3b, 0xf7,

    /* U+E0EF "" */
    0xef, 0xdc, 0x7, 0xe, 0x0, 0x3b, 0xf7,

    /* U+E0F0 "" */
    0xff, 0xfe,

    /* U+E0F1 "" */
    0xe1, 0xc0, 0x0, 0x70, 0xe1, 0xc3, 0x87,

    /* U+E0F2 "" */
    0xef, 0xdc, 0x38, 0x70, 0xe0,

    /* U+E0F3 "" */
    0xe1, 0xc0, 0x7, 0x7e, 0xe1, 0xc3, 0x87,

    /* U+E0F4 "" */
    0xe, 0x1f, 0xbf, 0x70, 0xe0,

    /* U+E0F5 "" */
    0xe1, 0xc0, 0x0, 0x70, 0xe1, 0xfb, 0xf7,

    /* U+E0F6 "" */
    0xef, 0xdc, 0x3f, 0x7e, 0xe0,

    /* U+E0F7 "" */
    0xe1, 0xc0, 0x7, 0x7e, 0xe1, 0xfb, 0xf7,

    /* U+E0F8 "" */
    0xfc, 0x7e, 0x3f,

    /* U+E0F9 "" */
    0xef, 0xdc, 0x0, 0x70, 0xe0, 0x3, 0x87,

    /* U+E0FA "" */
    0xe, 0x1c, 0x7, 0x7e, 0xe0, 0x3, 0x87,

    /* U+E0FB "" */
    0xef, 0xdc, 0x7, 0x7e, 0xe0, 0x3, 0x87,

    /* U+E0FC "" */
    0xe, 0x1c, 0x0, 0x70, 0xfc, 0x3b, 0x87,

    /* U+E0FD "" */
    0xef, 0xdc, 0x0, 0x70, 0xe0, 0x3b, 0xf7,

    /* U+E0FE "" */
    0xe, 0x1c, 0x7, 0x7e, 0xe0, 0x3b, 0xf7,

    /* U+E0FF "" */
    0xef, 0xdc, 0x7, 0x7e, 0xe0, 0x3b, 0xf7,

    /* U+E100 "" */
    0xff, 0xff,

    /* U+E101 "" */
    0xff, 0xff, 0xff,

    /* U+E102 "" */
    0xff, 0xff, 0xff, 0xff, 0xff,

    /* U+E103 "" */
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff,

    /* U+E104 "" */
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,

    /* U+E105 "" */
    0xff, 0xff,

    /* U+E106 "" */
    0xff, 0xff, 0xff,

    /* U+E107 "" */
    0xff, 0xff, 0xff, 0xff, 0xff,

    /* U+E108 "" */
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff,

    /* U+E109 "" */
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,

    /* U+E10A "" */
    0xff, 0x7f, 0xbf, 0xdf, 0xf0, 0x78,

    /* U+E10B "" */
    0xff, 0x7f, 0xbf, 0xdf, 0xf0, 0x78,

    /* U+E10C "" */
    0xf7, 0xbd, 0xef, 0x7b, 0xdf, 0x58,

    /* U+E10D "" */
    0xf7, 0xbd, 0xef, 0x7b, 0xdf, 0x58,

    /* U+E10E "" */
    0xee, 0x77, 0x3f, 0xe7, 0x73, 0xb8,

    /* U+E10F "" */
    0xee, 0x77, 0x3f, 0xe7, 0x73, 0xb8,

    /* U+E110 "" */
    0xe7, 0x3c, 0x6f, 0x73, 0xe7, 0x38,

    /* U+E111 "" */
    0xe7, 0x3c, 0x6f, 0x73, 0xe7, 0x38,

    /* U+E112 "" */
    0x2, 0x6, 0xe, 0x1e, 0x3e, 0x7e, 0xff, 0xf,

    /* U+E113 "" */
    0xc0, 0xe0, 0xf0, 0xf8, 0xfc, 0xfe, 0xff, 0xf,

    /* U+E114 "" */
    0xff, 0xff, 0xfe, 0xfc, 0xf8, 0xf0, 0xc0, 0xc0,

    /* U+E115 "" */
    0xff, 0x7f, 0xdf, 0xe7, 0xf1, 0xf8, 0x78, 0x1c,
    0x6, 0x1, 0x0,

    /* U+E116 "" */
    0x2, 0xc, 0x79, 0xf7, 0xff, 0xc0,

    /* U+E117 "" */
    0x81, 0x83, 0xc7, 0xcf, 0xdf, 0xc0,

    /* U+E118 "" */
    0xff, 0xfb, 0xe7, 0x8c, 0x10, 0x0,

    /* U+E119 "" */
    0xfe, 0xfc, 0xf8, 0xf0, 0x60, 0x40,

    /* U+E11A "" */
    0xff, 0xff, 0xfe, 0xfc, 0xf0, 0xe0, 0xc0, 0x80,

    /* U+E11B "" */
    0xff, 0xff, 0x7f, 0x3f, 0xf, 0x7, 0x3, 0x1,

    /* U+E11C "" */
    0x1, 0x3, 0x7, 0xf, 0x3f, 0x7f, 0xff, 0xff,

    /* U+E11D "" */
    0x80, 0xc0, 0xe0, 0xf0, 0xfc, 0xfe, 0xff, 0xff,

    /* U+E11E "" */
    0x3, 0xf, 0x3f, 0xff,

    /* U+E11F "" */
    0xc0, 0xf0, 0xfc, 0xff,

    /* U+E120 "" */
    0xff, 0xfc, 0xf0, 0xc0,

    /* U+E121 "" */
    0xff, 0x3f, 0xf, 0x3,

    /* U+E122 "" */
    0xff, 0xff, 0xff, 0xff, 0xfc, 0xf0, 0xc0,

    /* U+E123 "" */
    0xff, 0xff, 0xff, 0xff, 0x3f, 0xf, 0x3,

    /* U+E124 "" */
    0x3, 0xf, 0x3f, 0xff, 0xff, 0xff, 0xff,

    /* U+E125 "" */
    0xc0, 0xf0, 0xfc, 0xff, 0xff, 0xff, 0xff,

    /* U+E126 "" */
    0x11, 0x33, 0x77, 0xff,

    /* U+E127 "" */
    0x88, 0xcc, 0xee, 0xff,

    /* U+E128 "" */
    0xff, 0xee, 0xcc, 0x88,

    /* U+E129 "" */
    0xff, 0x77, 0x33, 0x11,

    /* U+E12A "" */
    0xff, 0xfe, 0xfe, 0xfc, 0xfc, 0xfc, 0xf8, 0xf8,

    /* U+E12B "" */
    0xff, 0x7f, 0x7f, 0x3f, 0x3f, 0x3f, 0x1f, 0x1f,

    /* U+E12C "" */
    0x1f, 0x1f, 0x3f, 0x3f, 0x3f, 0x7f, 0x7f, 0xff,

    /* U+E12D "" */
    0xf8, 0xf8, 0xfc, 0xfc, 0xfc, 0xfe, 0xfe, 0xff,

    /* U+E12E "" */
    0x3, 0x1f, 0xff,

    /* U+E12F "" */
    0xc0, 0xf8, 0xff,

    /* U+E130 "" */
    0xff, 0xf8, 0xc0,

    /* U+E131 "" */
    0xff, 0x1f, 0x3,

    /* U+E132 "" */
    0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0xe0,

    /* U+E133 "" */
    0xff, 0xff, 0xff, 0xff, 0xff, 0x3f, 0x7,

    /* U+E134 "" */
    0x7, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff,

    /* U+E135 "" */
    0xe0, 0xfc, 0xff, 0xff, 0xff, 0xff, 0xff,

    /* U+E136 "" */
    0x13, 0x37, 0xff,

    /* U+E137 "" */
    0x8c, 0xce, 0xff,

    /* U+E138 "" */
    0xff, 0xec, 0xc8,

    /* U+E139 "" */
    0xff, 0x73, 0x31,

    /* U+E13A "" */
    0xff, 0xff, 0xfe, 0xfc, 0xfc, 0xf8, 0xf0, 0xf0,

    /* U+E13B "" */
    0xff, 0xff, 0x7f, 0x3f, 0x3f, 0x1f, 0xf, 0xf,

    /* U+E13C "" */
    0xf, 0xf, 0x1f, 0x3f, 0x3f, 0x7f, 0xff, 0xff,

    /* U+E13D "" */
    0xf0, 0xf0, 0xf8, 0xfc, 0xfc, 0xfe, 0xff, 0xff,

    /* U+E13E "" */
    0x13, 0x7f,

    /* U+E13F "" */
    0x8c, 0xef,

    /* U+E140 "" */
    0xfe, 0xc8,

    /* U+E141 "" */
    0xf7, 0x31,

    /* U+E142 "" */
    0xff, 0xff, 0xff, 0xff, 0xfe, 0xfc, 0xf8, 0xf0,

    /* U+E143 "" */
    0xff, 0xff, 0xff, 0xff, 0x7f, 0x3f, 0x1f, 0xf,

    /* U+E144 "" */
    0xf, 0x1f, 0x3f, 0x7f, 0xff, 0xff, 0xff, 0xff,

    /* U+E145 "" */
    0xf0, 0xf8, 0xfc, 0xfe, 0xff, 0xff, 0xff, 0xff,

    /* U+E146 "" */
    0x37, 0xff,

    /* U+E147 "" */
    0xce, 0xff,

    /* U+E148 "" */
    0xff, 0xec,

    /* U+E149 "" */
    0xff, 0x73,

    /* U+E14A "" */
    0x2f, 0x80,

    /* U+E14B "" */
    0x9b, 0x80,

    /* U+E14C "" */
    0xfa, 0x0,

    /* U+E14D "" */
    0xec, 0x80,

    /* U+E14E "" */
    0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xfc, 0xf8,

    /* U+E14F "" */
    0xff, 0xff, 0xff, 0xff, 0xff, 0x7f, 0x3f, 0x1f,

    /* U+E150 "" */
    0x1f, 0x3f, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff,

    /* U+E151 "" */
    0xf8, 0xfc, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xff,

    /* U+E152 "" */
    0x3, 0x3f, 0xff, 0xff, 0xff,

    /* U+E153 "" */
    0xc0, 0xfc, 0xff, 0xff, 0xff,

    /* U+E154 "" */
    0xff, 0xff, 0xff, 0xfc, 0xc0,

    /* U+E155 "" */
    0xff, 0xff, 0xff, 0x3f, 0x3,

    /* U+E156 "" */
    0xe7, 0xe7, 0xc3, 0xc3, 0x81, 0x81,

    /* U+E157 "" */
    0xfc, 0xf0, 0xc0, 0x0, 0x33, 0xff,

    /* U+E158 "" */
    0x81, 0x81, 0xc3, 0xc3, 0xe7, 0xe7,

    /* U+E159 "" */
    0xff, 0xcc, 0x0, 0x3, 0xf, 0x3f,

    /* U+E15A "" */
    0x18, 0x3c, 0x7e, 0xff,

    /* U+E15B "" */
    0x8c, 0xef, 0xfe, 0xc8,

    /* U+E15C "" */
    0xff, 0x7e, 0x3c, 0x18,

    /* U+E15D "" */
    0x13, 0x7f, 0xf7, 0x31,

    /* U+E15E "" */
    0xff, 0xff, 0xff, 0xff, 0xe7, 0xc3, 0x81,

    /* U+E15F "" */
    0xfe, 0xfc, 0xf8, 0xf1, 0xe7, 0xdf, 0xff,

    /* U+E160 "" */
    0x81, 0xc3, 0xe7, 0xff, 0xff, 0xff, 0xff,

    /* U+E161 "" */
    0xff, 0xfb, 0xe7, 0x8f, 0x1f, 0x3f, 0x7f,

    /* U+E162 "" */
    0x18, 0x3c, 0x7e, 0xff, 0xff, 0xff, 0xff, 0xff,

    /* U+E163 "" */
    0xf8, 0xfc, 0xfe, 0xff, 0xff, 0xfe, 0xfc, 0xf8,

    /* U+E164 "" */
    0xff, 0xff, 0xff, 0xff, 0xff, 0x7e, 0x3c, 0x18,

    /* U+E165 "" */
    0x1f, 0x3f, 0x7f, 0xff, 0xff, 0x7f, 0x3f, 0x1f,

    /* U+E166 "" */
    0xe7, 0xc3, 0x81,

    /* U+E167 "" */
    0xec, 0x80, 0x5f,

    /* U+E168 "" */
    0x81, 0xc3, 0xe7,

    /* U+E169 "" */
    0xfa, 0x1, 0x37,

    /* U+E16A "" */
    0xff, 0x7e, 0x3c, 0x18, 0x18, 0x3c, 0x7e, 0xff,

    /* U+E16B "" */
    0x81, 0xc3, 0xe7, 0xff, 0xff, 0xe7, 0xc3, 0x81,

    /* U+E16C "" */
    0xff, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0,

    /* U+E16D "" */
    0xff, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3,

    /* U+E16E "" */
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0xff,

    /* U+E16F "" */
    0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xff,

    /* U+E170 "" */
    0xff, 0xff,

    /* U+E171 "" */
    0xff, 0xff,

    /* U+E172 "" */
    0xff, 0xff,

    /* U+E173 "" */
    0xff, 0xff,

    /* U+E174 "" */
    0xff, 0xff,

    /* U+E175 "" */
    0xff, 0xff,

    /* U+E176 "" */
    0xff, 0xff,

    /* U+E177 "" */
    0xff, 0xff,

    /* U+E178 "" */
    0xff, 0xff,

    /* U+E179 "" */
    0xe0, 0x38, 0xe, 0x3,

    /* U+E17A "" */
    0x80, 0xe0, 0x38, 0xe, 0x3,

    /* U+E17B "" */
    0x1, 0x7, 0x1c, 0x70, 0xc0,

    /* U+E17C "" */
    0x7, 0x1c, 0x70, 0xc0,

    /* U+E17D "" */
    0x86, 0x30, 0xc6, 0x18, 0xc3,

    /* U+E17E "" */
    0xc3, 0x18, 0x63, 0xc, 0x61,

    /* U+E17F "" */
    0x19, 0x8c, 0xc6, 0x63, 0x10,

    /* U+E180 "" */
    0x8, 0xc6, 0x63, 0x31, 0x98,

    /* U+E181 "" */
    0xe0, 0x38, 0xe, 0x3, 0xe, 0x38, 0xe0,

    /* U+E182 "" */
    0x3, 0xe, 0x78, 0xe0, 0xf8, 0x38, 0x7,

    /* U+E183 "" */
    0xc3, 0xc3, 0x66, 0x66, 0x3c, 0x3c, 0x18, 0x18,

    /* U+E184 "" */
    0x18, 0x18, 0x3c, 0x3c, 0x66, 0x66, 0xc3, 0xc3,

    /* U+E185 "" */
    0x80,

    /* U+E186 "" */
    0xff, 0xff, 0xff, 0xff, 0xf0,

    /* U+E187 "" */
    0xff, 0xff, 0xff, 0xff, 0xf0,

    /* U+E188 "" */
    0xfd, 0xfb, 0xf7, 0xef, 0xdf, 0xc5, 0x80,

    /* U+E189 "" */
    0x31, 0xe7, 0xbf, 0xff, 0xf0,

    /* U+E18A "" */
    0xff, 0xff, 0xde, 0x78, 0xc0,

    /* U+E18B "" */
    0x7, 0x1f, 0x3f, 0x7f, 0x7f, 0xff, 0xff, 0xff,

    /* U+E18C "" */
    0xe0, 0xf8, 0xfc, 0xfe, 0xfe, 0xff, 0xff, 0xff,

    /* U+E18D "" */
    0xff, 0xff, 0xff, 0xfe, 0xfe, 0xfc, 0xf8, 0xe0,

    /* U+E18E "" */
    0xff, 0xff, 0xff, 0x7f, 0x7f, 0x3f, 0x1f, 0x7,

    /* U+E18F "" */
    0x6, 0x31, 0xb8, 0x78, 0x0, 0x6, 0x3, 0x84,
    0xec, 0x30, 0x0,

    /* U+E190 "" */
    0x8, 0x0, 0x8, 0x0,

    /* U+E191 "" */
    0x80, 0x2, 0x8, 0x0, 0x20,

    /* U+E192 "" */
    0x22, 0x2, 0x20, 0x2, 0x20, 0x22, 0x0,

    /* U+E193 "" */
    0x88, 0x0, 0x55, 0x0, 0x22, 0x0, 0x55,

    /* U+E194 "" */
    0xff, 0xbb, 0xff, 0xee, 0xff, 0xbb, 0xff, 0xee,

    /* U+E195 "" */
    0xbf, 0xff, 0xfb, 0xff, 0xbf, 0xff, 0xfb, 0xff,

    /* U+E196 "" */
    0xff, 0xff, 0xdf, 0xff, 0xff, 0xff, 0xfd, 0xff,

    /* U+E197 "" */
    0xaa, 0x2, 0xa8, 0xa, 0xa0, 0x2a, 0x80,

    /* U+E198 "" */
    0x88, 0x0, 0x8, 0x80,

    /* U+E199 "" */
    0xee, 0x77, 0x3f, 0xc7, 0x6f, 0xf7, 0x73, 0xfe,
    0x77, 0x3b, 0x80,

    /* U+E19A "" */
    0x33, 0x66, 0xcc, 0x99, 0x33, 0x66, 0xcc, 0x99,

    /* U+E19B "" */
    0xcc, 0x66, 0x33, 0x99, 0xcc, 0x66, 0x33, 0x99,

    /* U+E19C "" */
    0xff, 0xff, 0xff, 0xff, 0xf7, 0xff, 0xff, 0xff,
    0xff, 0x3, 0x0,

    /* U+E19D "" */
    0x7f, 0xff, 0xff, 0xff, 0xef, 0xff, 0xff, 0xff,
    0xff,

    /* U+E19E "" */
    0xf7, 0xff, 0xff, 0xdf, 0xef, 0xf7, 0xfb, 0xfd,
    0xfe, 0xfe, 0x0,

    /* U+E19F "" */
    0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0x3f,

    /* U+E1A0 "" */
    0xff, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xff,

    /* U+E1A1 "" */
    0xff, 0x3, 0x3, 0x33, 0x33, 0x3, 0x3, 0xff,

    /* U+E1A2 "" */
    0xff, 0xff,

    /* U+E1A3 "" */
    0xff, 0xff,

    /* U+E1A4 "" */
    0xff, 0xff,

    /* U+E1A5 "" */
    0x3c, 0x99, 0xc3, 0xe7, 0xc3, 0x99, 0x3c, 0x7e,

    /* U+E1A6 "" */
    0xff, 0x0, 0xff, 0x0, 0xff, 0x0, 0x0, 0xff,

    /* U+E1A7 "" */
    0x18, 0x18, 0xff, 0xff, 0x18, 0x18,

    /* U+E1A8 "" */
    0x30, 0xc3, 0x3f, 0xfc, 0xc3, 0xc,

    /* U+E1A9 "" */
    0x2a, 0x7f, 0xb5, 0x7f, 0xff, 0xff, 0xff, 0xff,
    0xff, 0x3, 0x0,

    /* U+E1AA "" */
    0x3b, 0x9d, 0xff, 0xfd, 0xcf, 0xf9, 0xdf, 0xff,
    0xdc, 0xe, 0x0,

    /* U+E800 "" */
    0xc0, 0xc0, 0xc0, 0xff, 0xff, 0xc0, 0xc0, 0xc0,

    /* U+E801 "" */
    0xff, 0xff, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18,

    /* U+E802 "" */
    0x3, 0x3, 0x3, 0xff, 0xff, 0x3, 0x3, 0x3,

    /* U+E803 "" */
    0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0xff, 0xff,

    /* U+E804 "" */
    0xff, 0xc0, 0xc0, 0xc0,

    /* U+E805 "" */
    0xfc, 0xcc, 0xcc, 0xcc,

    /* U+E806 "" */
    0xff, 0x3, 0x3, 0x3,

    /* U+E807 "" */
    0xf3, 0x33, 0x33, 0x33,

    /* U+E808 "" */
    0x3, 0x3, 0x3, 0xff,

    /* U+E809 "" */
    0x33, 0x33, 0x33, 0x3f,

    /* U+E80A "" */
    0xc0, 0xc0, 0xc0, 0xff,

    /* U+E80B "" */
    0xc0, 0xc0, 0xc0, 0xff, 0xff,

    /* U+E80C "" */
    0xff, 0xff, 0xc0, 0xc0, 0xc0,

    /* U+E80D "" */
    0xfe, 0x31, 0x8c, 0x63, 0x18,

    /* U+E80E "" */
    0xf8, 0xc6, 0x31, 0x8c, 0x63,

    /* U+E80F "" */
    0xff, 0xff, 0x3, 0x3, 0x3,

    /* U+E810 "" */
    0x3, 0x3, 0x3, 0xff, 0xff,

    /* U+E811 "" */
    0x18, 0xc6, 0x31, 0x8c, 0x7f,

    /* U+E812 "" */
    0xc6, 0x31, 0x8c, 0x63, 0x1f,

    /* U+E813 "" */
    0xc0, 0x70, 0x1c, 0x6, 0x6, 0x3, 0x3, 0x1,

    /* U+E814 "" */
    0x80, 0xc0, 0xc0, 0x60, 0x60, 0x38, 0xe, 0x3,

    /* U+E815 "" */
    0x3, 0xe, 0x38, 0x60, 0x60, 0xc0, 0xc0, 0x80,

    /* U+E816 "" */
    0x1, 0x3, 0x3, 0x6, 0x6, 0x1c, 0x70, 0xc0,

    /* U+E817 "" */
    0x19, 0x99, 0x88, 0x0,

    /* U+E818 "" */
    0xc3, 0xc, 0x30, 0x80,

    /* U+E819 "" */
    0x18, 0x3c, 0x66, 0xc3, 0x81,

    /* U+E81A "" */
    0x8, 0xcc, 0xcc, 0x0,

    /* U+E81B "" */
    0x18, 0x30, 0x60, 0xc1, 0x83, 0x6, 0xc, 0x18,

    /* U+E81C "" */
    0xc3, 0xc, 0x31, 0x99, 0x98,

    /* U+E81D "" */
    0x18, 0x3c, 0x66, 0xc3, 0x83, 0x6, 0xc, 0x18,

    /* U+E81E "" */
    0x86, 0x18, 0x61, 0x80,

    /* U+E81F "" */
    0x81, 0xc3, 0x66, 0x3c, 0x18,

    /* U+E820 "" */
    0x18, 0x30, 0x60, 0xc1, 0xc3, 0x66, 0x3c, 0x18,

    /* U+E821 "" */
    0x18, 0xc, 0x6, 0x83, 0xc3, 0x66, 0x3c, 0x18,

    /* U+E822 "" */
    0xc3, 0xc, 0x30,

    /* U+E823 "" */
    0x19, 0x99, 0x80,

    /* U+E824 "" */
    0xc3, 0x66, 0x3c, 0x18,

    /* U+E825 "" */
    0xc6, 0x31,

    /* U+E826 "" */
    0xc0, 0x60, 0x30, 0x18, 0xc, 0x6, 0x3, 0x1,

    /* U+E827 "" */
    0x19, 0x99, 0x86, 0x18, 0x61,

    /* U+E828 "" */
    0xc3, 0x66, 0x3c, 0x18, 0xc, 0x6, 0x3, 0x1,

    /* U+E829 "" */
    0x36, 0xc8,

    /* U+E82A "" */
    0x3c, 0x66, 0xc3, 0x81,

    /* U+E82B "" */
    0xc0, 0x60, 0x30, 0x18, 0x3c, 0x66, 0xc3, 0x81,

    /* U+E82C "" */
    0x3, 0x6, 0xc, 0x18, 0x3c, 0x66, 0xc3, 0x81,

    /* U+E82D "" */
    0xc3, 0xd, 0xff, 0x33, 0x10,

    /* U+E82E "" */
    0x18, 0x18, 0x18, 0xf8, 0xfc, 0x6, 0x3, 0x1,

    /* U+E82F "" */
    0x18, 0x18, 0x18, 0x18, 0x3c, 0x66, 0xc3, 0x81,

    /* U+E830 "" */
    0xdf, 0xb9, 0xf7, 0x80,

    /* U+E831 "" */
    0x19, 0x99, 0xf7, 0x98, 0x61,

    /* U+E832 "" */
    0xc0, 0x60, 0x30, 0x1f, 0x1f, 0x18, 0x18, 0x18,

    /* U+E833 "" */
    0xc3, 0x66, 0x3c, 0x18, 0x18, 0x18, 0x18, 0x18,

    /* U+E834 "" */
    0xf7, 0xdf, 0xb9, 0x80,

    /* U+E835 "" */
    0xc3, 0xd, 0xff, 0x0,

    /* U+E836 "" */
    0xff, 0x6c, 0x80,

    /* U+E837 "" */
    0x18, 0xc6, 0x33, 0x33, 0x10,

    /* U+E838 "" */
    0xc6, 0x31, 0x86, 0x18, 0x61,

    /* U+E839 "" */
    0xff, 0x63, 0x10,

    /* U+E83A "" */
    0x19, 0x99, 0xf7, 0x80,

    /* U+E83B "" */
    0x19, 0x99, 0x8c, 0x63, 0x18,

    /* U+E83C "" */
    0xc3, 0xc, 0x31, 0x8c, 0x63,

    /* U+E83D "" */
    0x2, 0x20, 0x1, 0x8, 0x40, 0x4, 0x80, 0x10,

    /* U+E83E "" */
    0x9, 0x20, 0x4, 0x80, 0x11, 0x40, 0x8, 0x2,

    /* U+E83F "" */
    0x88, 0x2, 0x40, 0x0, 0x88, 0xc1, 0x41, 0x91,

    /* U+E840 "" */
    0xee, 0x7f, 0xbf, 0xdf, 0xef, 0xf7, 0xfb, 0xfd,
    0xff, 0x33, 0x80,

    /* U+E841 "" */
    0xff, 0x0, 0x0, 0x0, 0xff,

    /* U+E842 "" */
    0x8c, 0x63, 0x18, 0xc6, 0x31,

    /* U+E843 "" */
    0xaa, 0x2, 0x20, 0xa, 0xa0, 0x22, 0x0,

    /* U+E844 "" */
    0x4, 0x4, 0x4, 0x4, 0x4, 0x4, 0xff, 0x4,

    /* U+E845 "" */
    0x61, 0xf0, 0x38, 0x6e, 0x23, 0xe0, 0xf0, 0x38,
    0x76, 0x30, 0x0,

    /* U+E846 "" */
    0x1, 0x1, 0xff, 0x10, 0x10, 0x10, 0xff, 0x1,

    /* U+E847 "" */
    0x61, 0xf9, 0xb7, 0xff, 0x6f, 0x1f, 0x2, 0x1,
    0x0,

    /* U+E848 "" */
    0xc, 0x6, 0x3f, 0xdf, 0xbe, 0x6, 0x3, 0xfd,
    0xfe, 0x6, 0x0,

    /* U+E849 "" */
    0xf1, 0xf8, 0xff, 0xff, 0xe3, 0xf1, 0xfb, 0xff,
    0xff, 0x3, 0x0,

    /* U+E84A "" */
    0x8c, 0x7c, 0x1e, 0xc6, 0x69, 0x70, 0x0, 0x4c,
    0x2f, 0x7, 0x80,

    /* U+E84B "" */
    0x80, 0x2, 0x20, 0x8, 0x0, 0x2a, 0x80,

    /* U+E84C "" */
    0x80, 0x0, 0xc, 0xe, 0x7, 0x3, 0x30, 0x70,
    0x60,

    /* U+E84D "" */
    0xbf, 0x7f, 0xc0, 0xc0, 0xe0, 0xe0, 0xe0, 0xc0,
    0xf4,

    /* U+E84E "" */
    0x36, 0x30, 0x3, 0x63, 0x6f, 0x6c, 0xcc, 0xc6,

    /* U+E84F "" */
    0x33, 0x19, 0x8c, 0xce, 0x3e, 0x6, 0x60, 0x78,
    0x76, 0x30, 0x0,

    /* U+E850 "" */
    0x3, 0x30, 0xf8, 0x10, 0x8, 0x7, 0x0, 0xcd,
    0x3c,

    /* U+E851 "" */
    0xcc, 0xcc, 0xcc, 0xcf,

    /* U+E852 "" */
    0xc3, 0x99, 0xf9, 0xf3, 0xe7, 0xff, 0xe7, 0xff,

    /* U+E853 "" */
    0x7d, 0x8f, 0x18, 0xc, 0x78, 0xdf, 0x0,

    /* U+E854 "" */
    0xfc, 0xfc,

    /* U+E855 "" */
    0x7c, 0xc, 0x1b, 0xec, 0x18, 0x1f, 0x0,

    /* U+E856 "" */
    0xf8, 0x30, 0xfe, 0xc, 0x3f, 0x80,

    /* U+E857 "" */
    0xc7, 0x8f, 0x1b, 0xe0, 0x60, 0xc1, 0x80,

    /* U+E858 "" */
    0x7d, 0x83, 0x3, 0xe0, 0x60, 0xdf, 0x0,

    /* U+E859 "" */
    0x7d, 0x83, 0x3, 0xec, 0x78, 0xdf, 0x0,

    /* U+E85A "" */
    0xf8, 0x30, 0xc0, 0xc, 0x30, 0xc0,

    /* U+E85B "" */
    0x7d, 0x8f, 0x1b, 0xec, 0x78, 0xdf, 0x0,

    /* U+E85C "" */
    0x7d, 0x8f, 0x1b, 0xe0, 0x60, 0xdf, 0x0,

    /* U+E85D "" */
    0xfd, 0xf9, 0xf3, 0x27, 0xf, 0x1f, 0x3f, 0xff,

    /* U+E85E "" */
    0x6c, 0xdb, 0xb8, 0xe, 0xed, 0x9b, 0x0,

    /* U+E85F "" */
    0x1, 0x8e, 0x38, 0x70, 0xe1, 0xc7, 0x18,

    /* U+E860 "" */
    0xf7, 0x7f, 0x8e, 0xf, 0xf7, 0xf9, 0xc0, 0x61,
    0xff, 0xff, 0x80,

    /* U+E861 "" */
    0xfb, 0x7f, 0x83, 0x1f, 0xef, 0xf0, 0x70, 0x31,
    0xff, 0xff, 0x80,

    /* U+E862 "" */
    0x7, 0x37, 0x7f, 0xfe, 0x37, 0x37, 0x37, 0x37,

    /* U+E863 "" */
    0x7, 0x37, 0x37, 0x37, 0xfe, 0xff, 0x3f, 0x37,
    0x7,

    /* U+E864 "" */
    0xf9, 0xf9, 0xd9, 0x99, 0x1, 0x9f, 0xdf, 0xff,

    /* U+E865 "" */
    0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3,

    /* U+E866 "" */
    0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xff,

    /* U+E867 "" */
    0xff, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3,

    /* U+E868 "" */
    0xff, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xff,

    /* U+E869 "" */
    0xff, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0xff,

    /* U+E86A "" */
    0x19, 0x99, 0x8c, 0x30, 0xc3,

    /* U+E86B "" */
    0x18, 0xc, 0x6, 0x83, 0xc1, 0x60, 0x30, 0x18,

    /* U+E86C "" */
    0x18, 0x3c, 0x66, 0xc3, 0xc1, 0x60, 0x30, 0x18,

    /* U+E86D "" */
    0x18, 0x3c, 0x66, 0xc3, 0xc3, 0x66, 0x3c, 0x18,

    /* U+E86E "" */
    0xff, 0xff, 0xff, 0xfe, 0xfc, 0xf9, 0xf3, 0xe7,

    /* U+E86F "" */
    0xe7, 0xc3, 0x99, 0x3c, 0x3c, 0x99, 0xc3, 0xe7,

    /* U+E870 "" */
    0xf6, 0xf6, 0xf6, 0xf6,

    /* U+E871 "" */
    0xaa, 0xff, 0xff, 0xaa,

    /* U+E872 "" */
    0xe, 0xf, 0x8e, 0x9e, 0xce, 0x60, 0x38, 0xe,
    0x3,

    /* U+E873 "" */
    0x38, 0x7e, 0x39, 0x8e, 0x73, 0x3, 0x83, 0x81,
    0x80,

    /* U+E874 "" */
    0xff, 0x0, 0x81, 0xc2, 0x42, 0xc1, 0x80,

    /* U+E875 "" */
    0x3, 0x8f, 0xdf, 0x9e, 0xc, 0x0,

    /* U+E876 "" */
    0xe0, 0x7e, 0xf, 0xc0, 0xf0, 0x18,

    /* U+E877 "" */
    0x6, 0x7, 0x7, 0x67, 0x67, 0x27, 0x23, 0x30,
    0x70, 0x30, 0x0,

    /* U+E878 "" */
    0x30, 0x1c, 0x37, 0x1d, 0xc7, 0x31, 0xcc, 0x70,
    0x1c, 0x6, 0x0,

    /* U+E879 "" */
    0x1d, 0xcc, 0x30, 0x70, 0x70,

    /* U+E87A "" */
    0xe0, 0xe0, 0xc3, 0x3b, 0x80,

    /* U+E87B "" */
    0xff, 0xff, 0x0, 0x0, 0xff, 0xff,

    /* U+E87C "" */
    0xdb, 0xff, 0xdb, 0x18, 0x18, 0xdb, 0xff, 0xdb,

    /* U+E87D "" */
    0x31, 0xee, 0xf3, 0xcf, 0xff, 0xfb, 0xc4,

    /* U+EC00 "" */
    0x7, 0x7, 0xf7, 0x7f, 0x7, 0x30, 0x3b, 0x31,
    0xf0, 0x30, 0x0,

    /* U+EC01 "" */
    0x4e, 0x7e, 0xfb, 0x3f, 0x37, 0xf4, 0xfc, 0xcf,

    /* U+EC02 "" */
    0xf7, 0xf9, 0xbd, 0xfe, 0x0, 0x6, 0x33, 0x85,
    0x4a, 0xa0, 0x0,

    /* U+EC03 "" */
    0xd7, 0xf9, 0xf6, 0x4, 0xd8, 0x30, 0x0,

    /* U+EC04 "" */
    0x30, 0xf9, 0xff, 0xff, 0x4e, 0x80,

    /* U+EC05 "" */
    0x73, 0x77, 0x7f, 0xe6, 0x11, 0x96, 0x21, 0x68,

    /* U+EC06 "" */
    0x91, 0xd2, 0x40, 0x3, 0xc0, 0x0, 0x4a, 0x89,

    /* U+EC07 "" */
    0x7e, 0xff, 0x9d, 0xff, 0xe3, 0xbf, 0xff, 0x7e,

    /* U+EC0A "" */
    0xa, 0x14, 0x28, 0xd1, 0xa6, 0x7c, 0xf1,

    /* U+EC0B "" */
    0xa1, 0x42, 0x85, 0x8b, 0x13, 0x27, 0xc7,

    /* U+EC0C "" */
    0x8, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0xcb,

    /* U+EC0D "" */
    0x71, 0x8f, 0x16, 0xc, 0x58, 0xdc, 0x0,

    /* U+EC0E "" */
    0x18, 0x18, 0x3c, 0x7e, 0xff, 0xdb, 0x18, 0x3c,

    /* U+EC0F "" */
    0x3c, 0x18, 0xdb, 0xff, 0x7e, 0x3c, 0x18, 0x18,

    /* U+EC10 "" */
    0xc, 0x1c, 0x39, 0xff, 0xff, 0x39, 0x1c, 0xc,

    /* U+EC11 "" */
    0xbb, 0xde, 0xa9, 0xc3, 0x97, 0x7f, 0xdd,

    /* U+EC12 "" */
    0xbb, 0xfe, 0xe9, 0xc3, 0x95, 0x7b, 0xdd,

    /* U+EC13 "" */
    0xe7, 0x42, 0xff, 0xf9, 0xff, 0x42, 0xe7,

    /* U+EC14 "" */
    0xe7, 0x42, 0xff, 0x9f, 0xff, 0x42, 0xe7,

    /* U+EC15 "" */
    0x22, 0x63, 0xf7, 0xb7, 0xff, 0x7e, 0x3c, 0x3c,

    /* U+EC16 "" */
    0x3c, 0x7e, 0xff, 0xbf, 0xff, 0x7e, 0x3c, 0x3c,

    /* U+EC17 "" */
    0xff, 0x6f, 0xff, 0xf6,

    /* U+EC18 "" */
    0x6f, 0xff, 0xf6, 0xff,

    /* U+EC19 "" */
    0x7b, 0xff, 0xff, 0x7b,

    /* U+EC1A "" */
    0xde, 0xff, 0xff, 0xde,

    /* U+EC1B "" */
    0x43, 0x4, 0x10, 0x71, 0x67, 0xdf,

    /* U+EC1C "" */
    0x30, 0x3c, 0x3f, 0xbf, 0xf7, 0x88, 0x80,

    /* U+EC1D "" */
    0xc, 0x1a, 0xbf, 0xff, 0x9e, 0xc,

    /* U+EC1E "" */
    0x30, 0x3c, 0x3f, 0xa3, 0xff, 0x88, 0x80,

    /* U+EC1F "" */
    0xc, 0x1e, 0xbf, 0xfc, 0x9f, 0xc,

    /* U+EC20 "" */
    0x18, 0x79, 0xf7, 0xff, 0xef, 0x2, 0x1c,

    /* U+EC21 "" */
    0xfc, 0x1c, 0x7f, 0x63, 0x3e,

    /* U+EC22 "" */
    0x38, 0x38, 0xdb, 0xfe, 0x78, 0x3c, 0x3c, 0x3c,
    0x3c,

    /* U+EC23 "" */
    0x38, 0x38, 0x18, 0xff, 0x18, 0x3c, 0x76, 0xe3,
    0xc0,

    /* U+EC24 "" */
    0xc3, 0xe6, 0x7c, 0x3c, 0xfe, 0x8, 0x38, 0x38,

    /* U+EC25 "" */
    0x10, 0x8, 0xb5, 0xdf, 0xcf, 0xe0, 0xb8, 0x4e,
    0x3,

    /* U+EC26 "" */
    0xc4, 0xe4, 0x77, 0x3f, 0x1f, 0x34, 0xe4, 0xc4,

    /* U+EC27 "" */
    0x38, 0x38, 0x18, 0x7e, 0xfe, 0xfc, 0x3e, 0x37,
    0x33,

    /* U+EC28 "" */
    0x38, 0x38, 0xd8, 0xfe, 0x7f, 0x3f, 0x7c, 0xec,
    0xcc,

    /* U+EC29 "" */
    0x38, 0x70, 0x47, 0xf1, 0x7, 0x1f, 0x7f,

    /* U+EC2A "" */
    0x81, 0x61, 0xb9, 0xdf, 0xef, 0xf4, 0xe8, 0xf9,
    0xe7, 0xe0, 0x0,

    /* U+EC2B "" */
    0x7c, 0xea, 0x7c, 0x3c, 0x7a, 0xeb, 0xc0,

    /* U+EC2C "" */
    0x3c, 0xdb, 0xf8,

    /* U+EC2D "" */
    0x3e, 0x3f, 0x3f, 0xdc, 0xe7, 0xf1, 0x31, 0x8d,
    0xc3, 0xc0, 0x0,

    /* U+EC2E "" */
    0x3e, 0x3f, 0xbf, 0xfc, 0xf7, 0xe1, 0x30, 0x98,
    0xcc,

    /* U+EC2F "" */
    0x10, 0x3c, 0x56, 0xff, 0xef, 0x7e, 0x6e, 0xc2,

    /* U+EC30 "" */
    0x8, 0x79, 0xf7, 0xff, 0x6f, 0x9d, 0xa,

    /* U+EC31 "" */
    0x61, 0xf9, 0xbf, 0xcf, 0xe7, 0xf7, 0xf8, 0x8c,
    0x46,

    /* U+EC32 "" */
    0xc3, 0x73, 0xdf, 0x8f, 0xe7, 0xf7, 0xf8, 0x85,
    0xce,

    /* U+EC33 "" */
    0x7f, 0x7f, 0xff, 0x7b, 0xc7, 0x33, 0x10, 0x80,

    /* U+EC34 "" */
    0xc1, 0xfb, 0xff, 0xe3, 0xe1, 0xc1, 0xf3, 0xcf,
    0xc0,

    /* U+EC35 "" */
    0x12, 0x3f, 0x37, 0xcf, 0xc1, 0x20, 0x91, 0xce,

    /* U+EC36 "" */
    0x32, 0x7e, 0xff, 0x7e, 0x36, 0x72, 0x62, 0xe1,

    /* U+EC37 "" */
    0x3e, 0x6e, 0xff, 0xbf, 0xff, 0xff, 0xcf, 0x85,

    /* U+EC38 "" */
    0x1e, 0x6e, 0xff, 0xbf, 0xff, 0xff, 0x77, 0x10,

    /* U+EC39 "" */
    0x3e, 0x3f, 0xb9, 0xfc, 0x3d, 0xde, 0xf, 0xff,
    0xff, 0xd, 0x0,

    /* U+EC3A "" */
    0x3c, 0x3f, 0xb8, 0x7c, 0x3c, 0xde, 0xf, 0xff,
    0xff, 0x1e, 0x0,

    /* U+EC3B "" */
    0x1c, 0x1e, 0x1f, 0x9f, 0xf7, 0xf3, 0xf8, 0x18,

    /* U+EC3C "" */
    0x3c, 0xff, 0xff, 0x18, 0xc, 0x18, 0x30, 0x18,

    /* U+EC3D "" */
    0x3e, 0x3f, 0xbf, 0xff, 0xf1, 0xe0, 0xc0, 0x78,
    0x3c, 0xc, 0x0,

    /* U+EC3E "" */
    0xe0, 0x76, 0x3f, 0x8f, 0xc7, 0xfb, 0xd8, 0xc0,

    /* U+EC3F "" */
    0xff, 0x8d, 0x9d, 0xff, 0xf7, 0xb9, 0x99, 0xff,

    /* U+EC40 "" */
    0xff, 0xe1, 0xf7, 0x9f, 0x9d, 0xbf, 0xe3, 0xff,

    /* U+EC41 "" */
    0xff, 0x99, 0x99, 0xff, 0xff, 0x99, 0x99, 0xff,

    /* U+EC42 "" */
    0xff, 0x81, 0xa5, 0x81, 0x81, 0xa5, 0x81, 0xff,

    /* U+EC43 "" */
    0xe7, 0x81, 0x81, 0x0, 0x0, 0x81, 0x81, 0xe7,

    /* U+EC44 "" */
    0xcb, 0xea, 0x7c, 0x38, 0x8, 0x8, 0x8, 0x8,

    /* U+EC45 "" */
    0xeb, 0xae, 0xba,

    /* U+EC46 "" */
    0xaa, 0xff, 0xaa,

    /* U+EC47 "" */
    0xfe, 0x1f, 0xe1, 0xfe, 0x1f, 0xe1,

    /* U+EC48 "" */
    0xff, 0x55, 0x55, 0x55, 0x55, 0xff,

    /* U+EC49 "" */
    0xe0, 0x7c, 0x2f, 0x90, 0x7f, 0xf8,

    /* U+EC4A "" */
    0x3, 0x87, 0xcf, 0xbc, 0x1f, 0xf8,

    /* U+EC4B "" */
    0xf, 0x9f, 0xde, 0xc, 0xee, 0x76, 0x3b, 0x1,
    0x81, 0xc0, 0x0,

    /* U+EC4C "" */
    0xf0, 0x7f, 0x3, 0xce, 0x65, 0x3b, 0x8c, 0x7,
    0x3, 0x1, 0x80,

    /* U+EC4D "" */
    0xf, 0x9f, 0xde, 0xc, 0xc, 0x76, 0x3, 0x1,
    0x81,

    /* U+EC4E "" */
    0xf8, 0x7f, 0x3, 0xc0, 0x67, 0x98, 0xc, 0x7,
    0x3,

    /* U+EC4F "" */
    0xc0, 0xe0, 0x33, 0x19, 0xce, 0x7b, 0x1, 0xe0,
    0x7f, 0xf, 0x80,

    /* U+EC50 "" */
    0x81, 0x80, 0xc6, 0x67, 0x3e, 0x38, 0x18, 0x3d,
    0xfc, 0xf8, 0x0,

    /* U+EC51 "" */
    0xc0, 0xe0, 0x30, 0x18, 0xe, 0x23, 0x1, 0xe0,
    0x7f, 0xf, 0x80,

    /* U+EC52 "" */
    0x81, 0x80, 0xc0, 0x60, 0x34, 0x38, 0x18, 0x3d,
    0xfc, 0xf8, 0x0,

    /* U+EC53 "" */
    0xc0, 0xe0, 0x30, 0xf8, 0xfe, 0x3b, 0x1, 0xe0,
    0x7f, 0xf, 0x80,

    /* U+EC54 "" */
    0x81, 0x80, 0xf8, 0x7e, 0x3f, 0x37, 0x18, 0x3d,
    0xfc, 0xf8, 0x0,

    /* U+EC55 "" */
    0xc0, 0xe0, 0x31, 0xf9, 0xfe, 0xc3, 0x61, 0xe0,
    0x7f, 0xf, 0x80,

    /* U+EC56 "" */
    0x81, 0x80, 0xfc, 0x7f, 0x31, 0xb8, 0xd8, 0x3d,
    0xfc, 0xf8, 0x0,

    /* U+EC57 "" */
    0x3b, 0xff, 0x8c, 0x43, 0xd7,

    /* U+EC58 "" */
    0xf3, 0xee, 0xc1, 0x4, 0x10, 0x5f, 0x40,

    /* U+EC59 "" */
    0x62, 0xfc, 0xf9, 0xf1, 0xf3, 0xbd, 0xf8,

    /* U+EC5A "" */
    0x6, 0x7f, 0xf7, 0xef, 0xc3, 0x3e, 0x78,

    /* U+EC5B "" */
    0x3, 0x83, 0xc3, 0x87, 0xf7, 0xff, 0xfc, 0xfe,

    /* U+EC5C "" */
    0xe0, 0x78, 0xe, 0x1f, 0xcf, 0xf7, 0xff, 0xf8,

    /* U+EC5D "" */
    0x3, 0xf, 0x3f, 0x3f, 0xff, 0x7f, 0x37, 0x1f,

    /* U+EC5E "" */
    0xe0, 0xf8, 0xbc, 0xfe, 0xfe, 0xfe, 0xff, 0xff,

    /* U+EC5F "" */
    0x4, 0x4e, 0xe4, 0x46, 0x6f, 0x7f, 0x60, 0x3f,

    /* U+EC60 "" */
    0x20, 0x72, 0x27, 0x62, 0xf6, 0xfe, 0x6, 0xfc,

    /* U+EC61 "" */
    0xef, 0x16, 0xdf, 0x41, 0xf3, 0xc7,

    /* U+EC62 "" */
    0xde, 0x3d, 0xbe, 0xb, 0xef, 0x38,

    /* U+EC63 "" */
    0x0, 0x98, 0xde, 0x6f, 0x1e, 0xc7, 0xf8, 0xfc,
    0x3e,

    /* U+EC64 "" */
    0x80, 0xcc, 0xde, 0x9a, 0x3b, 0xfb, 0xfe, 0xfc,

    /* U+EC65 "" */
    0x2, 0xc, 0x38, 0x61, 0xcf, 0xb8, 0x30,

    /* U+EC66 "" */
    0x81, 0x83, 0x83, 0x7, 0xf, 0x83, 0x86,

    /* U+EC67 "" */
    0x78, 0x38, 0x18, 0x1c, 0xc, 0x7, 0x73, 0xfd,
    0xff, 0x11, 0x80,

    /* U+EC68 "" */
    0x1e, 0xe, 0x6, 0x7, 0x3, 0x37, 0x7f, 0xfb,
    0xc0,

    /* U+EC69 "" */
    0x3f, 0x1f, 0x1f, 0xf, 0xf, 0x7f, 0x0, 0xff,

    /* U+EC6A "" */
    0xfc, 0xf8, 0xf8, 0xf0, 0xf0, 0xfe, 0x0, 0xff,

    /* U+EC6B "" */
    0x0, 0x63, 0x8e, 0xf, 0xff, 0xc0,

    /* U+EC6C "" */
    0xc3, 0x87, 0x1c, 0xc3, 0xff, 0xc0,

    /* U+EC6D "" */
    0x2, 0x2, 0x2, 0x2, 0x3f, 0x60, 0xff,

    /* U+EC6E "" */
    0x40, 0x40, 0x40, 0x40, 0xfc, 0x6, 0xff,

    /* U+EC6F "" */
    0xe7, 0xcf, 0x9f, 0xf7, 0xe7, 0xc7, 0x8f,

    /* U+EC70 "" */
    0xcf, 0x9f, 0x3f, 0xff, 0xdf, 0x3c, 0x78,

    /* U+EC71 "" */
    0xf, 0xf, 0xf, 0x18, 0x7f, 0x40, 0x7f, 0xff,

    /* U+EC72 "" */
    0xf0, 0xf0, 0xf0, 0x18, 0xfe, 0x2, 0xfe, 0xff,

    /* U+EC73 "" */
    0xfc, 0x7f, 0x18, 0xce, 0x73, 0x1b, 0x99, 0x9d,
    0xfc, 0xfc, 0x0,

    /* U+EC74 "" */
    0xff, 0x5, 0x7, 0x0, 0x0, 0x7, 0x5, 0xff,

    /* U+EC75 "" */
    0xfc, 0x43, 0xa0, 0xd0, 0x78, 0x1c, 0x1e, 0x1d,
    0xf8,

    /* U+EC76 "" */
    0xc0, 0x70, 0x1f, 0xff, 0xfc, 0x0,

    /* U+EC77 "" */
    0x6, 0x3d, 0xff, 0xfd, 0xdb, 0x9f, 0x0,

    /* U+EC78 "" */
    0x1f, 0x8f, 0xf7, 0x79, 0xfd, 0xfd, 0xb9, 0xfb,

    /* U+EC79 "" */
    0x4c, 0xfb, 0xf8, 0x1c, 0x1f, 0x7, 0x3e, 0xfe,

    /* U+EC7A "" */
    0x7f, 0xff, 0xfe, 0x27, 0x1e, 0xe, 0x7, 0xe3,
    0xf9,

    /* U+EC7B "" */
    0x9e, 0xe0, 0xe7, 0xe6, 0xee, 0xff, 0xff, 0xff,
    0xbf,

    /* U+EC7C "" */
    0xff, 0x6, 0x7, 0xff, 0xff, 0xff, 0xfe, 0xfe,
    0xfc,

    /* U+EC7D "" */
    0xfe, 0xff, 0xff, 0xfe,

    /* U+EC7F "" */
    0x18, 0x0, 0x3c, 0x0, 0x7e, 0x0, 0xff,

    /* U+EC80 "" */
    0x81, 0x42, 0xa5, 0x5a, 0xb5, 0x28, 0x40,

    /* U+EC81 "" */
    0x2, 0x14, 0xad, 0x5a, 0xa5, 0x42, 0x81,

    /* U+EC82 "" */
    0xcb, 0xea, 0x7c, 0x38, 0x8, 0x8, 0x8, 0x8,

    /* U+EC83 "" */
    0x8e, 0x7b, 0xbc, 0xe3, 0xd8, 0xef, 0x80,

    /* U+EC84 "" */
    0xb2, 0xeb, 0xff, 0xe3, 0xcb, 0xa7, 0x8c,

    /* U+EC85 "" */
    0x24, 0x24, 0xe7, 0x24, 0x24,

    /* U+EC86 "" */
    0x21, 0x3e, 0x0, 0x7c, 0x84,

    /* U+EC87 "" */
    0xe4, 0xf4, 0xbc, 0x9f, 0x8c, 0xbc, 0xf4, 0xe0,

    /* U+EC88 "" */
    0x23, 0x27, 0x2f, 0xfd, 0xfd, 0x2f, 0x23, 0x21,

    /* U+EC89 "" */
    0xff, 0xc3, 0xe2, 0x7e, 0x3c, 0x8, 0x8, 0x7f,

    /* U+EC8A "" */
    0x8, 0x7, 0x3, 0xdf, 0x30, 0xb8, 0x78, 0x38,
    0x10,

    /* U+EC8B "" */
    0x8, 0x7, 0xf, 0xdf, 0x7f, 0xb9, 0xf8, 0x38,
    0x10,

    /* U+EC8C "" */
    0x80, 0x60, 0x38, 0x1e, 0xf, 0x87, 0xe3, 0xbd,
    0xdf, 0x81, 0x80,

    /* U+EC8D "" */
    0x7e, 0xff, 0xdf, 0xff, 0xf7, 0xdf, 0xff, 0x7e,

    /* U+EC8E "" */
    0x7e, 0xff, 0x9d, 0xff, 0xbf, 0xe3, 0xff, 0x7e,

    /* U+EC8F "" */
    0x66, 0x7e, 0x42, 0xc3, 0xff, 0x18,

    /* U+EC90 "" */
    0x18, 0xff, 0xc3, 0x42, 0x7e, 0x66,

    /* U+EC91 "" */
    0x18, 0x7e, 0x7e, 0xff, 0xc3, 0x81, 0x81, 0x81,

    /* U+EC92 "" */
    0x1f, 0x78, 0x70, 0xf0, 0xf0, 0x70, 0x78, 0x1f,

    /* U+EC93 "" */
    0x81, 0x81, 0x81, 0xc3, 0xff, 0x7e, 0x7e, 0x18,

    /* U+EC94 "" */
    0xf8, 0x1e, 0xe, 0xf, 0xf, 0xe, 0x1e, 0xf8,

    /* U+EC95 "" */
    0x42, 0x42, 0x66, 0xe7, 0xff, 0xff, 0x7e, 0x3c,

    /* U+EC96 "" */
    0x1c, 0xfe, 0x3f, 0xf, 0xf, 0x3f, 0xfe, 0x1c,

    /* U+EC97 "" */
    0x3c, 0x7e, 0xff, 0xff, 0xe7, 0x66, 0x42, 0x42,

    /* U+EC98 "" */
    0x38, 0x7f, 0xfc, 0xf0, 0xf0, 0xfc, 0x7f, 0x38,

    /* U+EC99 "" */
    0xe1, 0x7b, 0xf, 0x87, 0xc7, 0xf3, 0xfb, 0x87,
    0x83, 0xc0, 0x0,

    /* U+EC9A "" */
    0xbf, 0xa1, 0xad, 0xa5, 0xa5, 0xbd, 0x81, 0xff,

    /* U+EC9B "" */
    0xff, 0x81, 0xbd, 0xa5, 0x85, 0xfd, 0x1, 0xff,

    /* U+EC9C "" */
    0xff, 0x81, 0xbd, 0xa5, 0xa5, 0xb5, 0x85, 0xfd,

    /* U+EC9D "" */
    0xff, 0x80, 0xbf, 0xa1, 0xa5, 0xbd, 0x81, 0xff,

    /* U+EC9E "" */
    0x18, 0x0, 0x3c, 0x0, 0x7e, 0x0, 0xff,

    /* U+EC9F "" */
    0x2, 0x14, 0xad, 0x5a, 0xa5, 0x42, 0x81,

    /* U+ECA0 "" */
    0xff, 0x0, 0x7e, 0x0, 0x3c, 0x0, 0x18,

    /* U+ECA1 "" */
    0x81, 0x42, 0xa5, 0x5a, 0xb5, 0x28, 0x40,

    /* U+ECA2 "" */
    0x38, 0x6c, 0xff, 0x3f, 0xf, 0x3f, 0xfc, 0x38,

    /* U+ECA3 "" */
    0x3c, 0x3c, 0x7e, 0xff, 0xed, 0xef, 0xc6, 0x44,

    /* U+ECA4 "" */
    0x1c, 0x36, 0xff, 0xfc, 0xf0, 0xfc, 0x3f, 0x1e,

    /* U+ECA5 "" */
    0x3c, 0x3c, 0x7e, 0xff, 0xfd, 0xff, 0x7e, 0x3c,

    /* U+ECA6 "" */
    0x1c, 0x36, 0xff, 0xff, 0xff, 0xff, 0x3e, 0x1c,

    /* U+ECA7 "" */
    0x38, 0x6c, 0xff, 0xff, 0xff, 0xff, 0x7c, 0x38,

    /* U+ECA8 "" */
    0x40, 0xff, 0xf, 0xf, 0x7, 0x3,

    /* U+ECA9 "" */
    0xfb, 0xe6, 0x9e, 0x38, 0x20, 0xc2,

    /* U+ECAA "" */
    0x2, 0xff, 0xd8, 0xf8, 0xf0, 0xc0,

    /* U+ECAB "" */
    0x10, 0x70, 0xa1, 0x42, 0x8f, 0xbf, 0xeb,

    /* U+ECAC "" */
    0x3, 0x7, 0x7e, 0xc7, 0x7e, 0x7, 0x3,

    /* U+ECAD "" */
    0xd7, 0xfd, 0xf1, 0x42, 0x85, 0xe, 0x8,

    /* U+ECAE "" */
    0xc0, 0xe0, 0x7e, 0xe3, 0x7e, 0xe0, 0xc0,

    /* U+ECAF "" */
    0xe, 0x3c, 0xe3, 0xf, 0x1e, 0x18, 0x0,

    /* U+ECB0 "" */
    0xd, 0xff, 0xbc, 0x38, 0xe3, 0x8c,

    /* U+ECB1 "" */
    0x1c, 0x37, 0xfe, 0xdf, 0xff, 0x80,

    /* U+ECB2 "" */
    0x18, 0xf8, 0xe0, 0xe0, 0x38, 0x18, 0x1f, 0xf,

    /* U+ECB3 "" */
    0x3c, 0x3c, 0x0, 0x7e, 0xff, 0xff, 0xff, 0xff,

    /* U+ECB4 "" */
    0x7c, 0x99, 0xf1, 0x87, 0xdf, 0xfd, 0xff,

    /* U+ECB5 "" */
    0x3e, 0x3e, 0x0, 0x7e, 0xff, 0xbf, 0xff, 0xe0,

    /* U+ECB6 "" */
    0x3e, 0x73, 0x7e, 0x80, 0x9e, 0xff, 0x1f, 0x1f,

    /* U+ECB7 "" */
    0x3e, 0x7b, 0x7e, 0x3f, 0x1f, 0xff, 0x9e, 0x9e,

    /* U+ECB8 "" */
    0x70, 0xf0, 0x3, 0x8f, 0x1f, 0x3f, 0x80,

    /* U+ECB9 "" */
    0x79, 0x87, 0x8c, 0x7b, 0x7d, 0xf1,

    /* U+ECBA "" */
    0x38, 0x3c, 0x0, 0x39, 0x79, 0xdf, 0xdc,

    /* U+ECBB "" */
    0x1c, 0x78, 0x0, 0xe1, 0xe7, 0xff, 0x80,

    /* U+ECBC "" */
    0x78, 0x67, 0x8c, 0x7b, 0xbe, 0xe3,

    /* U+ECBD "" */
    0x1c, 0x3c, 0x0, 0x9c, 0x9e, 0xfb, 0x3b,

    /* U+ECBE "" */
    0xff, 0xf3, 0xcc, 0x30, 0xc3, 0xc,

    /* U+ECBF "" */
    0xff, 0x3c, 0x3c, 0x3c, 0x3c,

    /* U+ECC0 "" */
    0xff, 0xff, 0xc1, 0x83, 0x6, 0xc, 0x18,

    /* U+ECC1 "" */
    0xff, 0xff, 0xff, 0xff,

    /* U+ECC2 "" */
    0xff, 0xf4, 0x92, 0x49, 0x24, 0xb3,

    /* U+ECC3 "" */
    0x7e, 0x3c, 0x66, 0x66, 0xe7, 0xc3, 0xc3, 0xc3,

    /* U+ECC4 "" */
    0xf8, 0xf8, 0xd9, 0xe3, 0x86, 0x1c, 0x38,

    /* U+ECC5 "" */
    0x7c, 0x3f, 0x1f, 0x3b, 0xf3, 0xc3, 0x80,

    /* U+ECC6 "" */
    0x3e, 0xfb, 0x63, 0xc3, 0x83, 0x7, 0xe,

    /* U+ECC7 "" */
    0x3e, 0xfc, 0xf8, 0xdc, 0xcf, 0xc3, 0x1,

    /* U+ECC8 "" */
    0xff, 0xf4, 0x92, 0x49, 0x24, 0xb6,

    /* U+ECC9 "" */
    0xff, 0xf4, 0x92, 0x49, 0x24, 0x9b,

    /* U+ECCA "" */
    0x18, 0x3c, 0x66, 0x24, 0xe7, 0xbd, 0x99, 0xdb,

    /* U+ECCB "" */
    0xff, 0xa0, 0xaf, 0xa0, 0xff,

    /* U+ECCC "" */
    0xff, 0x41, 0x41, 0x55, 0xff,

    /* U+ECCD "" */
    0xff, 0x40, 0x27, 0xf7, 0xfb, 0x5, 0x82, 0xc1,
    0x60, 0x30, 0x0,

    /* U+ECCE "" */
    0xff, 0x80, 0x7c, 0xbf, 0x11, 0xa8, 0xc4, 0x6a,
    0x31, 0x18, 0x0,

    /* U+ECCF "" */
    0xa0, 0xbf, 0x9f, 0xff, 0x30, 0x30, 0x30, 0x78,

    /* U+ECD0 "" */
    0x18, 0xfc, 0x7c, 0x3f, 0xf0, 0xc0, 0x60, 0x30,
    0x3c,

    /* U+ECD1 "" */
    0x80, 0xaa, 0x80, 0x95, 0x80, 0x8f, 0x80, 0xff,

    /* U+ECD2 "" */
    0x1, 0xa9, 0x1, 0x51, 0x1, 0xe1, 0x1, 0xff,

    /* U+ECD3 "" */
    0x1, 0x3, 0x7, 0xf, 0xff, 0xff, 0xff, 0xff,

    /* U+ECD4 "" */
    0x80, 0xc0, 0xe0, 0xf0, 0xff, 0xff, 0xff, 0xff,

    /* U+ECD5 "" */
    0x1, 0x2, 0xff, 0xc3, 0xc3, 0xff,

    /* U+ECD6 "" */
    0x80, 0x40, 0xff, 0xc3, 0xc3, 0xff,

    /* U+ECD7 "" */
    0xf7, 0xbd, 0xe6, 0x84, 0x6f,

    /* U+ECD8 "" */
    0x7f, 0x3f, 0xbd, 0x9e, 0xcf, 0x67, 0xfb, 0xff,
    0xff, 0xff, 0x80,

    /* U+ECD9 "" */
    0x60, 0x78, 0x36, 0x1f, 0xf3, 0xf0,

    /* U+ECDA "" */
    0x2, 0x7, 0x9, 0xff, 0x7e,

    /* U+ECDB "" */
    0xe7, 0xa5, 0xe7,

    /* U+ECDC "" */
    0x2d, 0xfe, 0xbf, 0xf7, 0x6f, 0x8c, 0x0,

    /* U+ECDD "" */
    0xfe, 0x1f, 0xe1, 0xfe, 0x1f, 0xe1,

    /* U+ECDE "" */
    0xff, 0x55, 0x55, 0x55, 0x55, 0xff,

    /* U+FE81 "ﺁ" */
    0x78, 0x22, 0x22,

    /* U+FE82 "ﺂ" */
    0x71, 0x40, 0x81, 0x3, 0xe0,

    /* U+FE84 "ﺄ" */
    0x61, 0x80, 0x81, 0x3, 0xe0,

    /* U+FE87 "ﺇ" */
    0x49, 0x24, 0x1e,

    /* U+FE8F "ﺏ" */
    0x81, 0x81, 0x7e, 0x0, 0x18,

    /* U+FE90 "ﺐ" */
    0x81, 0x81, 0x7e, 0x0, 0x18,

    /* U+FE91 "ﺑ" */
    0x1, 0x1, 0xfe, 0x0, 0x18,

    /* U+FE92 "ﺒ" */
    0x8, 0x8, 0xf7, 0x0, 0x18,

    /* U+FE93 "ﺓ" */
    0xd8, 0x1e, 0x97, 0x80,

    /* U+FE94 "ﺔ" */
    0xd8, 0x1e, 0x97, 0x80,

    /* U+FE95 "ﺕ" */
    0x36, 0x0, 0x81, 0x81, 0x7e,

    /* U+FE96 "ﺖ" */
    0x36, 0x0, 0x81, 0x81, 0x7e,

    /* U+FE97 "ﺗ" */
    0x36, 0x0, 0x20, 0x4f, 0x0,

    /* U+FE98 "ﺘ" */
    0x36, 0x0, 0x8, 0x8, 0xf7,

    /* U+FE99 "ﺙ" */
    0x18, 0x66, 0x0, 0x81, 0x7e,

    /* U+FE9A "ﺚ" */
    0x18, 0x66, 0x0, 0x81, 0x7e,

    /* U+FE9B "ﺛ" */
    0x18, 0xcc, 0x0, 0x4f, 0x0,

    /* U+FE9C "ﺜ" */
    0x18, 0x66, 0x0, 0x8, 0xf7,

    /* U+FE9E "ﺞ" */
    0x70, 0x27, 0xe0, 0xb1, 0xf0,

    /* U+FE9F "ﺟ" */
    0x1c, 0x2, 0xff, 0x0, 0xc,

    /* U+FEA0 "ﺠ" */
    0x1c, 0x2, 0xff, 0x0, 0xc,

    /* U+FEA1 "ﺡ" */
    0x70, 0x27, 0xe0, 0x81, 0xf0,

    /* U+FEA2 "ﺢ" */
    0x70, 0x27, 0xe0, 0x81, 0xf0,

    /* U+FEA3 "ﺣ" */
    0x1c, 0x2, 0xff,

    /* U+FEA4 "ﺤ" */
    0x1c, 0x2, 0xff,

    /* U+FEA9 "ﺩ" */
    0x20, 0xa3, 0xf0,

    /* U+FEAA "ﺪ" */
    0x18, 0x4, 0x2, 0xfd,

    /* U+FEAB "ﺫ" */
    0xc0, 0x40, 0x91, 0x7c,

    /* U+FEAC "ﺬ" */
    0x60, 0x8, 0x4, 0x2, 0xfd,

    /* U+FEAD "ﺭ" */
    0x4, 0x10, 0xbc,

    /* U+FEAF "ﺯ" */
    0xc, 0x0, 0x41, 0xb, 0xc0,

    /* U+FEB1 "ﺱ" */
    0xab, 0x7e, 0x82, 0x0,

    /* U+FEB2 "ﺲ" */
    0xab, 0x7e, 0x82, 0x0,

    /* U+FEB3 "ﺳ" */
    0x15, 0xff,

    /* U+FEB4 "ﺴ" */
    0x15, 0xff,

    /* U+FEB5 "ﺵ" */
    0x8, 0x28, 0x5, 0x5b, 0xf4, 0x10, 0x0,

    /* U+FEB6 "ﺶ" */
    0x8, 0x28, 0x5, 0x5b, 0xf4, 0x10, 0x0,

    /* U+FEB7 "ﺷ" */
    0x4, 0xa, 0x0, 0x15, 0xff,

    /* U+FEB9 "ﺹ" */
    0xf, 0x66, 0xfd, 0x4, 0x0,

    /* U+FEBA "ﺺ" */
    0xf, 0x66, 0xfd, 0x4, 0x0,

    /* U+FEBB "ﺻ" */
    0x7, 0x29, 0xff,

    /* U+FEBC "ﺼ" */
    0x7, 0x29, 0xff,

    /* U+FEC1 "ﻁ" */
    0x10, 0x10, 0x17, 0x19, 0xff,

    /* U+FEC2 "ﻂ" */
    0x10, 0x10, 0x17, 0x19, 0xff,

    /* U+FEC3 "ﻃ" */
    0x10, 0x10, 0x17, 0x19, 0xff,

    /* U+FEC4 "ﻄ" */
    0x16, 0x10, 0x17, 0x19, 0xff,

    /* U+FEC5 "ﻅ" */
    0x16, 0x10, 0x17, 0x19, 0xff,

    /* U+FEC6 "ﻆ" */
    0x16, 0x10, 0x17, 0x19, 0xff,

    /* U+FEC9 "ﻉ" */
    0x39, 0x1f, 0x8, 0x3c,

    /* U+FECA "ﻊ" */
    0x78, 0x61, 0x7c, 0x7, 0xc0,

    /* U+FECB "ﻋ" */
    0xe, 0x20, 0x47, 0xf0,

    /* U+FECC "ﻌ" */
    0xf, 0x6, 0xfb,

    /* U+FECD "ﻍ" */
    0xc1, 0xc8, 0xf8, 0x41, 0xe0,

    /* U+FECE "ﻎ" */
    0x30, 0x1, 0xe1, 0x85, 0xf0, 0x1f, 0x0,

    /* U+FECF "ﻏ" */
    0x60, 0x1c, 0x40, 0x8f, 0xe0,

    /* U+FED0 "ﻐ" */
    0x6, 0x0, 0xf, 0x6, 0xfb,

    /* U+FED1 "ﻑ" */
    0x6, 0x0, 0x8f, 0x89, 0x7f,

    /* U+FED2 "ﻒ" */
    0x6, 0x0, 0x7, 0x5, 0xff,

    /* U+FED3 "ﻓ" */
    0x6, 0x0, 0x7, 0x5, 0xff,

    /* U+FED4 "ﻔ" */
    0x18, 0x0, 0x1c, 0x14, 0xff,

    /* U+FED5 "ﻕ" */
    0x1b, 0x0, 0xf, 0x89, 0x8f, 0x81, 0x7e,

    /* U+FED6 "ﻖ" */
    0x1b, 0x0, 0xf, 0x9, 0xff,

    /* U+FED7 "ﻗ" */
    0x1b, 0x0, 0xf, 0x9, 0xff,

    /* U+FED8 "ﻘ" */
    0x36, 0x0, 0x1c, 0x14, 0xff,

    /* U+FED9 "ﻙ" */
    0x2, 0x36, 0xcc, 0x17, 0xc0,

    /* U+FEDA "ﻚ" */
    0x2, 0x36, 0xcc, 0x17, 0xc0,

    /* U+FEDB "ﻛ" */
    0x2, 0x36, 0xcc, 0x17, 0xc0,

    /* U+FEDC "ﻜ" */
    0x2, 0x36, 0xcc, 0x17, 0xc0,

    /* U+FEDD "ﻝ" */
    0x1, 0x1, 0x1, 0x1, 0x81, 0x81, 0x7e,

    /* U+FEDF "ﻟ" */
    0x1, 0x1, 0x1, 0x1, 0xfe,

    /* U+FEE0 "ﻠ" */
    0x1, 0x1, 0x1, 0x1, 0xfe,

    /* U+FEE1 "ﻡ" */
    0x8, 0x57, 0x62, 0x82, 0x0,

    /* U+FEE2 "ﻢ" */
    0x8, 0x57, 0x62, 0x82, 0x0,

    /* U+FEE3 "ﻣ" */
    0x2, 0x5, 0xfd, 0x2,

    /* U+FEE5 "ﻥ" */
    0x18, 0x81, 0x81, 0x81, 0x7e,

    /* U+FEE6 "ﻦ" */
    0x18, 0x81, 0x81, 0x81, 0x7e,

    /* U+FEE7 "ﻧ" */
    0xc, 0x0, 0x8, 0x1f, 0xc0,

    /* U+FEE8 "ﻨ" */
    0xc, 0x0, 0x8, 0x8, 0xf7,

    /* U+FEE9 "ﻩ" */
    0xf7, 0x80,

    /* U+FEEB "ﻫ" */
    0xe, 0x1, 0xd, 0xff,

    /* U+FEEC "ﻬ" */
    0xe, 0x1, 0xd, 0xff,

    /* U+FEED "ﻭ" */
    0x8, 0x51, 0xc1, 0xf8,

    /* U+FEEE "ﻮ" */
    0x8, 0x51, 0xc1, 0xf8,

    /* U+FEEF "ﻯ" */
    0x6, 0x12, 0x1c, 0x17, 0xc0,

    /* U+FEF0 "ﻰ" */
    0xe, 0x89, 0x84, 0x7c,

    /* U+FEF1 "ﻱ" */
    0x6, 0x12, 0x1c, 0x17, 0xc0, 0x1b, 0x0,

    /* U+FEF2 "ﻲ" */
    0xe, 0x89, 0x84, 0x7e, 0x36,

    /* U+FEF3 "ﻳ" */
    0x1, 0x1, 0xfe, 0x0, 0x14,

    /* U+FEF4 "ﻴ" */
    0x1, 0x1, 0xfe, 0x0, 0x14,

    /* U+FF01 "！" */
    0xff, 0xcc,

    /* U+FF02 "＂" */
    0xcf, 0x3c, 0xc0,

    /* U+FF03 "＃" */
    0x6c, 0xdb, 0xfb, 0x6f, 0xed, 0x9b, 0x0,

    /* U+FF04 "＄" */
    0x31, 0xfc, 0x1e, 0xf, 0xe3, 0x0,

    /* U+FF05 "％" */
    0xc7, 0x98, 0x61, 0x86, 0x78, 0xc0,

    /* U+FF06 "＆" */
    0x3c, 0x6c, 0x3c, 0x77, 0xdc, 0xcc, 0x72,

    /* U+FF07 "＇" */
    0x6f, 0x0,

    /* U+FF08 "（" */
    0x36, 0xcc, 0xc6, 0x30,

    /* U+FF09 "）" */
    0xc6, 0x33, 0x36, 0xc0,

    /* U+FF0A "＊" */
    0x66, 0x3c, 0xff, 0x3c, 0x66,

    /* U+FF0B "＋" */
    0x30, 0xcf, 0xcc, 0x30,

    /* U+FF0C "，" */
    0x6f, 0x0,

    /* U+FF0D "－" */
    0xfc,

    /* U+FF0E "．" */
    0xf0,

    /* U+FF0F "／" */
    0x3, 0x6, 0xc, 0x18, 0x30, 0x60, 0xc0,

    /* U+FF10 "０" */
    0x7b, 0x3d, 0xff, 0xff, 0x37, 0x80,

    /* U+FF11 "１" */
    0x31, 0xc3, 0xc, 0x30, 0xcf, 0xc0,

    /* U+FF12 "２" */
    0x7b, 0x31, 0x8c, 0x63, 0xf, 0xc0,

    /* U+FF13 "３" */
    0x7b, 0x30, 0xce, 0xf, 0x37, 0x80,

    /* U+FF14 "４" */
    0x1c, 0x79, 0xb6, 0x6f, 0xe1, 0x83, 0x0,

    /* U+FF15 "５" */
    0xff, 0xf, 0x83, 0xf, 0x37, 0x80,

    /* U+FF16 "６" */
    0x39, 0x8c, 0x3e, 0xcf, 0x37, 0x80,

    /* U+FF17 "７" */
    0xfc, 0x30, 0xc6, 0x30, 0xc3, 0x0,

    /* U+FF18 "８" */
    0x7b, 0x3c, 0xde, 0xcf, 0x37, 0x80,

    /* U+FF19 "９" */
    0x7b, 0x3c, 0xdf, 0xc, 0x67, 0x0,

    /* U+FF1A "：" */
    0xf0, 0xf0,

    /* U+FF1B "；" */
    0x6c, 0x6, 0xf0,

    /* U+FF1C "＜" */
    0x19, 0x99, 0x86, 0x18, 0x60,

    /* U+FF1D "＝" */
    0xfc, 0xf, 0xc0,

    /* U+FF1E "＞" */
    0xc3, 0xc, 0x33, 0x33, 0x0,

    /* U+FF1F "？" */
    0x7b, 0x30, 0xc6, 0x30, 0x3, 0x0,

    /* U+FF20 "＠" */
    0x7d, 0x8f, 0x7e, 0xfd, 0xf8, 0x1f, 0x0,

    /* U+FF21 "Ａ" */
    0x31, 0xec, 0xf3, 0xff, 0x3c, 0xc0,

    /* U+FF22 "Ｂ" */
    0xfb, 0x3c, 0xfe, 0xcf, 0x3f, 0x80,

    /* U+FF23 "Ｃ" */
    0x7b, 0x3c, 0x30, 0xc3, 0x37, 0x80,

    /* U+FF24 "Ｄ" */
    0xf3, 0x6c, 0xf3, 0xcf, 0x6f, 0x0,

    /* U+FF25 "Ｅ" */
    0xff, 0xc, 0x3e, 0xc3, 0xf, 0xc0,

    /* U+FF26 "Ｆ" */
    0xff, 0xc, 0x3e, 0xc3, 0xc, 0x0,

    /* U+FF27 "Ｇ" */
    0x7b, 0x3c, 0x37, 0xcf, 0x37, 0xc0,

    /* U+FF28 "Ｈ" */
    0xcf, 0x3c, 0xff, 0xcf, 0x3c, 0xc0,

    /* U+FF29 "Ｉ" */
    0xfc, 0xc3, 0xc, 0x30, 0xcf, 0xc0,

    /* U+FF2A "Ｊ" */
    0xc, 0x30, 0xc3, 0xf, 0x37, 0x80,

    /* U+FF2B "Ｋ" */
    0xc7, 0x9b, 0x67, 0x8d, 0x99, 0xb1, 0x80,

    /* U+FF2C "Ｌ" */
    0xc3, 0xc, 0x30, 0xc3, 0xf, 0xc0,

    /* U+FF2D "Ｍ" */
    0xc7, 0xdf, 0xfe, 0xbc, 0x78, 0xf1, 0x80,

    /* U+FF2E "Ｎ" */
    0xc7, 0xcf, 0xde, 0xfc, 0xf8, 0xf1, 0x80,

    /* U+FF2F "Ｏ" */
    0x7b, 0x3c, 0xf3, 0xcf, 0x37, 0x80,

    /* U+FF30 "Ｐ" */
    0xfb, 0x3c, 0xfe, 0xc3, 0xc, 0x0,

    /* U+FF31 "Ｑ" */
    0x7b, 0x3c, 0xf3, 0xcf, 0x67, 0xc0,

    /* U+FF32 "Ｒ" */
    0xfb, 0x3c, 0xfe, 0xdb, 0x3c, 0xc0,

    /* U+FF33 "Ｓ" */
    0x7b, 0x3c, 0x1e, 0xf, 0x37, 0x80,

    /* U+FF34 "Ｔ" */
    0xfc, 0xc3, 0xc, 0x30, 0xc3, 0x0,

    /* U+FF35 "Ｕ" */
    0xcf, 0x3c, 0xf3, 0xcf, 0x37, 0x80,

    /* U+FF36 "Ｖ" */
    0xcf, 0x3c, 0xf3, 0xcd, 0xe3, 0x0,

    /* U+FF38 "Ｘ" */
    0xc3, 0x66, 0x3c, 0x18, 0x3c, 0x66, 0xc3,

    /* U+FF39 "Ｙ" */
    0xc3, 0x66, 0x3c, 0x18, 0x18, 0x18, 0x18,

    /* U+FF3A "Ｚ" */
    0xfc, 0x31, 0x8c, 0x63, 0xf, 0xc0,

    /* U+FF3B "［" */
    0xfc, 0xcc, 0xcc, 0xf0,

    /* U+FF3C "＼" */
    0xc0, 0x60, 0x30, 0x18, 0xc, 0x6, 0x3,

    /* U+FF3D "］" */
    0xf3, 0x33, 0x33, 0xf0,

    /* U+FF3E "＾" */
    0x10, 0x71, 0xb6, 0x30,

    /* U+FF3F "＿" */
    0xff,

    /* U+FF40 "｀" */
    0xc6, 0x30,

    /* U+FF41 "ａ" */
    0x78, 0x37, 0xf3, 0x7c,

    /* U+FF42 "ｂ" */
    0xc3, 0xf, 0xb3, 0xcf, 0x3f, 0x80,

    /* U+FF43 "ｃ" */
    0x7e, 0x31, 0x87, 0x80,

    /* U+FF44 "ｄ" */
    0xc, 0x37, 0xf3, 0xcf, 0x37, 0xc0,

    /* U+FF45 "ｅ" */
    0x7b, 0x3f, 0xf0, 0x78,

    /* U+FF46 "ｆ" */
    0x3b, 0x3e, 0xc6, 0x31, 0x80,

    /* U+FF47 "ｇ" */
    0x7f, 0x3c, 0xdf, 0xf, 0xe0,

    /* U+FF48 "ｈ" */
    0xc3, 0xf, 0xb3, 0xcf, 0x3c, 0xc0,

    /* U+FF49 "ｉ" */
    0x60, 0x38, 0xc6, 0x31, 0xe0,

    /* U+FF4A "ｊ" */
    0x18, 0x6, 0x31, 0x8c, 0x7e,

    /* U+FF4B "ｋ" */
    0xc3, 0xc, 0xf6, 0xf3, 0x6c, 0xc0,

    /* U+FF4C "ｌ" */
    0xe3, 0x18, 0xc6, 0x31, 0xe0,

    /* U+FF4D "ｍ" */
    0xcd, 0xff, 0x5e, 0xbc, 0x60,

    /* U+FF4E "ｎ" */
    0xfb, 0x3c, 0xf3, 0xcc,

    /* U+FF4F "ｏ" */
    0x7b, 0x3c, 0xf3, 0x78,

    /* U+FF50 "ｐ" */
    0xfb, 0x3c, 0xfe, 0xc3, 0x0,

    /* U+FF51 "ｑ" */
    0x7f, 0x3c, 0xdf, 0xc, 0x30,

    /* U+FF52 "ｒ" */
    0xfb, 0x3c, 0x30, 0xc0,

    /* U+FF53 "ｓ" */
    0x7f, 0x7, 0x83, 0xf8,

    /* U+FF54 "ｔ" */
    0x61, 0x8f, 0xd8, 0x61, 0x83, 0xc0,

    /* U+FF55 "ｕ" */
    0xcf, 0x3c, 0xf3, 0x7c,

    /* U+FF56 "ｖ" */
    0xcf, 0x3c, 0xde, 0x30,

    /* U+FF57 "ｗ" */
    0xc7, 0x8f, 0x5b, 0xe6, 0xc0,

    /* U+FF58 "ｘ" */
    0xc6, 0xd8, 0xe3, 0x6c, 0x60,

    /* U+FF59 "ｙ" */
    0xcf, 0x3c, 0xdf, 0xd, 0xe0,

    /* U+FF5A "ｚ" */
    0xfc, 0x63, 0x18, 0xfc,

    /* U+FF5B "｛" */
    0x1c, 0xc3, 0x38, 0x30, 0xc1, 0xc0,

    /* U+FF5C "｜" */
    0xff, 0xfc,

    /* U+FF5D "｝" */
    0xe0, 0xc3, 0x7, 0x30, 0xce, 0x0,

    /* U+FF5F "｟" */
    0x33, 0x66, 0xcc, 0xcc, 0xcc, 0x66, 0x33,

    /* U+FF60 "｠" */
    0xcc, 0x66, 0x33, 0x33, 0x33, 0x66, 0xcc,

    /* U+FF61 "｡" */
    0x76, 0xdc,

    /* U+FF62 "｢" */
    0xfc, 0xcc,

    /* U+FF63 "｣" */
    0x33, 0x3f,

    /* U+FF64 "､" */
    0xc6, 0x30,

    /* U+FF65 "･" */
    0xf0,

    /* U+FF66 "ｦ" */
    0xfc, 0x3f, 0xc3, 0x18, 0xc6, 0x0,

    /* U+FF67 "ｧ" */
    0xfe, 0xd, 0xb3, 0xc, 0x0,

    /* U+FF68 "ｨ" */
    0x1c, 0xe7, 0xb6, 0x18, 0x60,

    /* U+FF69 "ｩ" */
    0x33, 0xfc, 0xc3, 0x18, 0xc0,

    /* U+FF6A "ｪ" */
    0xfc, 0xc3, 0xc, 0xfc,

    /* U+FF6B "ｫ" */
    0xd, 0xfc, 0xf3, 0x6c, 0xc1, 0x80,

    /* U+FF6C "ｬ" */
    0x61, 0xfd, 0x9b, 0x66, 0xc, 0x0,

    /* U+FF6D "ｭ" */
    0x78, 0x61, 0x86, 0xfc,

    /* U+FF6E "ｮ" */
    0xf8, 0xfe, 0x3f, 0x80,

    /* U+FF6F "ｯ" */
    0xae, 0xb0, 0xc6, 0x30,

    /* U+FF70 "ｰ" */
    0xfc,

    /* U+FF71 "ｱ" */
    0xfc, 0x36, 0xdb, 0x61, 0x8c, 0x0,

    /* U+FF72 "ｲ" */
    0xc, 0x63, 0x9e, 0xd8, 0x61, 0x80,

    /* U+FF73 "ｳ" */
    0x33, 0xfc, 0xf3, 0xc, 0x63, 0x0,

    /* U+FF74 "ｴ" */
    0xfc, 0xc3, 0xc, 0x33, 0xf0,

    /* U+FF75 "ｵ" */
    0xd, 0xfc, 0x71, 0xe6, 0xd9, 0x83, 0x0,

    /* U+FF76 "ｶ" */
    0x31, 0xfc, 0xd9, 0xb3, 0x6c, 0xf1, 0x80,

    /* U+FF77 "ｷ" */
    0x33, 0xf3, 0x3f, 0x30, 0xc3, 0x0,

    /* U+FF78 "ｸ" */
    0x7e, 0xcf, 0x18, 0x30, 0x61, 0x86, 0x0,

    /* U+FF79 "ｹ" */
    0x60, 0xfd, 0xb6, 0x60, 0xc3, 0xc, 0x0,

    /* U+FF7A "ｺ" */
    0xfc, 0x30, 0xc3, 0xf, 0xf0,

    /* U+FF7B "ｻ" */
    0x6d, 0xfd, 0xb3, 0x60, 0xc1, 0x86, 0x0,

    /* U+FF7C "ｼ" */
    0xc0, 0x3c, 0xc3, 0x1b, 0xc0,

    /* U+FF7D "ｽ" */
    0xfc, 0x18, 0x61, 0xc6, 0xd8, 0xc0,

    /* U+FF7E "ｾ" */
    0x61, 0xfd, 0x9b, 0x66, 0xc, 0xf, 0x0,

    /* U+FF7F "ｿ" */
    0xc7, 0x8d, 0x98, 0x30, 0xc3, 0xc, 0x0,

    /* U+FF80 "ﾀ" */
    0x7e, 0xcd, 0xfe, 0x30, 0x61, 0x86, 0x0,

    /* U+FF81 "ﾁ" */
    0xf, 0xe3, 0x3f, 0x30, 0xc6, 0x0,

    /* U+FF82 "ﾂ" */
    0xae, 0xba, 0xc3, 0xc, 0x63, 0x0,

    /* U+FF83 "ﾃ" */
    0x78, 0xf, 0xcc, 0x30, 0xc6, 0x0,

    /* U+FF84 "ﾄ" */
    0xc3, 0xf, 0x36, 0xcf, 0xc, 0x0,

    /* U+FF85 "ﾅ" */
    0x33, 0xf3, 0xc, 0x30, 0xc6, 0x0,

    /* U+FF86 "ﾆ" */
    0x78, 0x0, 0x0, 0x3, 0xf0,

    /* U+FF87 "ﾇ" */
    0xfc, 0x1b, 0xe1, 0xc6, 0xd8, 0xc0,

    /* U+FF88 "ﾈ" */
    0x31, 0xfc, 0x31, 0xef, 0x66, 0xc, 0x0,

    /* U+FF89 "ﾉ" */
    0xc, 0x30, 0xc6, 0x31, 0x8c, 0x0,

    /* U+FF8A "ﾊ" */
    0x18, 0x19, 0x9b, 0x36, 0x6c, 0xf1, 0x80,

    /* U+FF8B "ﾋ" */
    0xc3, 0xf, 0xf0, 0xc3, 0x7, 0xc0,

    /* U+FF8C "ﾌ" */
    0xfc, 0x30, 0xc3, 0x18, 0xc6, 0x0,

    /* U+FF8D "ﾍ" */
    0x30, 0xf3, 0x30, 0x30, 0x60,

    /* U+FF8E "ﾎ" */
    0x33, 0xf3, 0xc, 0xb6, 0xd3, 0x0,

    /* U+FF8F "ﾏ" */
    0xfc, 0x30, 0xf6, 0x70, 0xe0,

    /* U+FF90 "ﾐ" */
    0xf8, 0x7, 0x0, 0x3, 0xe0, 0xc0,

    /* U+FF91 "ﾑ" */
    0x18, 0x61, 0x86, 0xc, 0xd8, 0xff, 0x80,

    /* U+FF92 "ﾒ" */
    0xc, 0x36, 0xce, 0x39, 0xbc, 0x0,

    /* U+FF93 "ﾓ" */
    0x7c, 0xcf, 0xcc, 0x30, 0xc1, 0xc0,

    /* U+FF94 "ﾔ" */
    0x61, 0xfd, 0x9b, 0x36, 0xcc, 0x18, 0x0,

    /* U+FF95 "ﾕ" */
    0x78, 0x61, 0x86, 0x1b, 0xf0,

    /* U+FF96 "ﾖ" */
    0xfc, 0x3f, 0xc3, 0xf, 0xf0,

    /* U+FF97 "ﾗ" */
    0x78, 0xf, 0xc3, 0xc, 0x63, 0x0,

    /* U+FF98 "ﾘ" */
    0xcf, 0x3c, 0xf3, 0xcc, 0x63, 0x0,

    /* U+FF99 "ﾙ" */
    0x19, 0xb3, 0x66, 0xcd, 0xfb, 0xb6, 0x0,

    /* U+FF9A "ﾚ" */
    0xc3, 0xc, 0x33, 0xcf, 0x6f, 0x0,

    /* U+FF9B "ﾛ" */
    0xff, 0x8f, 0x1e, 0x3c, 0x7f, 0xc0,

    /* U+FF9C "ﾜ" */
    0xff, 0x8f, 0x18, 0x30, 0x61, 0x86, 0x0,

    /* U+FF9D "ﾝ" */
    0xc0, 0x0, 0xc3, 0x1b, 0xc0,

    /* U+FF9E "ﾞ" */
    0xcc, 0xcc,

    /* U+FF9F "ﾟ" */
    0x76, 0xdc
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 128, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 13},
    {.bitmap_index = 1, .adv_w = 128, .box_w = 2, .box_h = 7, .ofs_x = 3, .ofs_y = 6},
    {.bitmap_index = 3, .adv_w = 128, .box_w = 6, .box_h = 3, .ofs_x = 1, .ofs_y = 10},
    {.bitmap_index = 6, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 13, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 19, .adv_w = 128, .box_w = 7, .box_h = 6, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 25, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 32, .adv_w = 128, .box_w = 3, .box_h = 3, .ofs_x = 2, .ofs_y = 10},
    {.bitmap_index = 34, .adv_w = 128, .box_w = 4, .box_h = 7, .ofs_x = 2, .ofs_y = 6},
    {.bitmap_index = 38, .adv_w = 128, .box_w = 4, .box_h = 7, .ofs_x = 2, .ofs_y = 6},
    {.bitmap_index = 42, .adv_w = 128, .box_w = 8, .box_h = 5, .ofs_x = 0, .ofs_y = 7},
    {.bitmap_index = 47, .adv_w = 128, .box_w = 6, .box_h = 5, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 51, .adv_w = 128, .box_w = 3, .box_h = 3, .ofs_x = 2, .ofs_y = 5},
    {.bitmap_index = 53, .adv_w = 128, .box_w = 6, .box_h = 1, .ofs_x = 1, .ofs_y = 9},
    {.bitmap_index = 54, .adv_w = 128, .box_w = 2, .box_h = 2, .ofs_x = 3, .ofs_y = 6},
    {.bitmap_index = 55, .adv_w = 128, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 62, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 69, .adv_w = 128, .box_w = 3, .box_h = 7, .ofs_x = 2, .ofs_y = 6},
    {.bitmap_index = 72, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 79, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 85, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 92, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 99, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 105, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 112, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 119, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 125, .adv_w = 128, .box_w = 2, .box_h = 6, .ofs_x = 3, .ofs_y = 6},
    {.bitmap_index = 127, .adv_w = 128, .box_w = 3, .box_h = 7, .ofs_x = 2, .ofs_y = 5},
    {.bitmap_index = 130, .adv_w = 128, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 135, .adv_w = 128, .box_w = 6, .box_h = 3, .ofs_x = 1, .ofs_y = 8},
    {.bitmap_index = 138, .adv_w = 128, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 143, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 149, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 156, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 163, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 170, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 177, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 184, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 191, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 198, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 205, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 212, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 218, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 225, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 232, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 239, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 246, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 253, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 260, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 267, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 274, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 281, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 288, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 295, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 302, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 309, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 316, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 323, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 330, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 336, .adv_w = 128, .box_w = 4, .box_h = 7, .ofs_x = 2, .ofs_y = 6},
    {.bitmap_index = 340, .adv_w = 128, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 347, .adv_w = 128, .box_w = 4, .box_h = 7, .ofs_x = 2, .ofs_y = 6},
    {.bitmap_index = 351, .adv_w = 128, .box_w = 7, .box_h = 4, .ofs_x = 0, .ofs_y = 9},
    {.bitmap_index = 355, .adv_w = 128, .box_w = 8, .box_h = 1, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 356, .adv_w = 128, .box_w = 4, .box_h = 3, .ofs_x = 3, .ofs_y = 10},
    {.bitmap_index = 358, .adv_w = 128, .box_w = 6, .box_h = 5, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 362, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 368, .adv_w = 128, .box_w = 6, .box_h = 5, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 372, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 378, .adv_w = 128, .box_w = 6, .box_h = 5, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 382, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 388, .adv_w = 128, .box_w = 6, .box_h = 6, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 393, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 399, .adv_w = 128, .box_w = 3, .box_h = 6, .ofs_x = 3, .ofs_y = 6},
    {.bitmap_index = 402, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 408, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 414, .adv_w = 128, .box_w = 3, .box_h = 7, .ofs_x = 3, .ofs_y = 6},
    {.bitmap_index = 417, .adv_w = 128, .box_w = 7, .box_h = 5, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 422, .adv_w = 128, .box_w = 6, .box_h = 5, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 426, .adv_w = 128, .box_w = 6, .box_h = 5, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 430, .adv_w = 128, .box_w = 7, .box_h = 6, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 436, .adv_w = 128, .box_w = 6, .box_h = 6, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 441, .adv_w = 128, .box_w = 6, .box_h = 5, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 445, .adv_w = 128, .box_w = 6, .box_h = 5, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 449, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 455, .adv_w = 128, .box_w = 7, .box_h = 5, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 460, .adv_w = 128, .box_w = 7, .box_h = 5, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 465, .adv_w = 128, .box_w = 7, .box_h = 5, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 470, .adv_w = 128, .box_w = 6, .box_h = 5, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 474, .adv_w = 128, .box_w = 7, .box_h = 6, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 480, .adv_w = 128, .box_w = 6, .box_h = 5, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 484, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 490, .adv_w = 128, .box_w = 2, .box_h = 7, .ofs_x = 3, .ofs_y = 6},
    {.bitmap_index = 492, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 498, .adv_w = 128, .box_w = 7, .box_h = 2, .ofs_x = 0, .ofs_y = 11},
    {.bitmap_index = 500, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 507, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 514, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 521, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 528, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 535, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 542, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 549, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 556, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 563, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 570, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 577, .adv_w = 128, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 584, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 592, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 599, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 606, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 613, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 620, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 627, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 634, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 641, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 648, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 655, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 662, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 669, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 676, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 683, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 690, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 697, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 704, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 711, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 718, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 725, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 732, .adv_w = 128, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 13},
    {.bitmap_index = 733, .adv_w = 128, .box_w = 2, .box_h = 7, .ofs_x = 3, .ofs_y = 6},
    {.bitmap_index = 735, .adv_w = 128, .box_w = 7, .box_h = 6, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 741, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 748, .adv_w = 128, .box_w = 6, .box_h = 5, .ofs_x = 1, .ofs_y = 8},
    {.bitmap_index = 752, .adv_w = 128, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 759, .adv_w = 128, .box_w = 2, .box_h = 7, .ofs_x = 3, .ofs_y = 6},
    {.bitmap_index = 761, .adv_w = 128, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 767, .adv_w = 128, .box_w = 6, .box_h = 1, .ofs_x = 1, .ofs_y = 12},
    {.bitmap_index = 768, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 776, .adv_w = 128, .box_w = 6, .box_h = 6, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 781, .adv_w = 128, .box_w = 8, .box_h = 5, .ofs_x = 0, .ofs_y = 7},
    {.bitmap_index = 786, .adv_w = 128, .box_w = 6, .box_h = 3, .ofs_x = 1, .ofs_y = 9},
    {.bitmap_index = 789, .adv_w = 128, .box_w = 4, .box_h = 1, .ofs_x = 2, .ofs_y = 9},
    {.bitmap_index = 790, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 798, .adv_w = 128, .box_w = 6, .box_h = 1, .ofs_x = 1, .ofs_y = 12},
    {.bitmap_index = 799, .adv_w = 128, .box_w = 6, .box_h = 3, .ofs_x = 1, .ofs_y = 10},
    {.bitmap_index = 802, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 808, .adv_w = 128, .box_w = 4, .box_h = 5, .ofs_x = 1, .ofs_y = 8},
    {.bitmap_index = 811, .adv_w = 128, .box_w = 5, .box_h = 5, .ofs_x = 1, .ofs_y = 8},
    {.bitmap_index = 815, .adv_w = 128, .box_w = 4, .box_h = 3, .ofs_x = 2, .ofs_y = 10},
    {.bitmap_index = 817, .adv_w = 128, .box_w = 7, .box_h = 6, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 823, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 829, .adv_w = 128, .box_w = 2, .box_h = 1, .ofs_x = 3, .ofs_y = 9},
    {.bitmap_index = 830, .adv_w = 128, .box_w = 2, .box_h = 2, .ofs_x = 3, .ofs_y = 5},
    {.bitmap_index = 831, .adv_w = 128, .box_w = 3, .box_h = 5, .ofs_x = 1, .ofs_y = 8},
    {.bitmap_index = 833, .adv_w = 128, .box_w = 5, .box_h = 6, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 837, .adv_w = 128, .box_w = 8, .box_h = 5, .ofs_x = 0, .ofs_y = 7},
    {.bitmap_index = 842, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 850, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 858, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 866, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 872, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 878, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 884, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 890, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 897, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 903, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 909, .adv_w = 128, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 916, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 923, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 930, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 937, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 944, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 951, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 957, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 963, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 969, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 975, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 982, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 989, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 996, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 1003, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 1010, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 1017, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 1024, .adv_w = 128, .box_w = 7, .box_h = 5, .ofs_x = 0, .ofs_y = 7},
    {.bitmap_index = 1029, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 1035, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 1042, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 1049, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 1056, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 1063, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 1069, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 1076, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 1082, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 1088, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 1094, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 1101, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 1108, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 1114, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 1121, .adv_w = 128, .box_w = 8, .box_h = 5, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 1126, .adv_w = 128, .box_w = 6, .box_h = 6, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 1131, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 1137, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 1143, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 1149, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 1155, .adv_w = 128, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 1160, .adv_w = 128, .box_w = 5, .box_h = 7, .ofs_x = 2, .ofs_y = 6},
    {.bitmap_index = 1165, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 1171, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 1177, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 1184, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 1191, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 1197, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 1203, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 1209, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 1216, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 1222, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 1228, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 1235, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 1242, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 1249, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 1255, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 1262, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 1269, .adv_w = 128, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 1275, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 1282, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 1288, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 1294, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 1301, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 1308, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 1315, .adv_w = 128, .box_w = 6, .box_h = 6, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 1320, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 1327, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 1333, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 1340, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 1346, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 1353, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 1359, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 1366, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 1372, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 1378, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 1385, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 1392, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 1399, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 1406, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 1412, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 1419, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 1426, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 1433, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 1439, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 1446, .adv_w = 128, .box_w = 6, .box_h = 6, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 1451, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 1458, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 1464, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 1470, .adv_w = 128, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 1476, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 1483, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 1490, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 1496, .adv_w = 128, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 1502, .adv_w = 128, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 1508, .adv_w = 128, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 1514, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 1520, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 1527, .adv_w = 128, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 1534, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 1540, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 1547, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 1554, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 1560, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 1566, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 1573, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 1580, .adv_w = 128, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 1586, .adv_w = 128, .box_w = 4, .box_h = 7, .ofs_x = 3, .ofs_y = 5},
    {.bitmap_index = 1590, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 1596, .adv_w = 128, .box_w = 4, .box_h = 5, .ofs_x = 2, .ofs_y = 6},
    {.bitmap_index = 1599, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 1606, .adv_w = 128, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 1612, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 1619, .adv_w = 128, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 1625, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 1632, .adv_w = 128, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 1638, .adv_w = 128, .box_w = 6, .box_h = 5, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 1642, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 1648, .adv_w = 128, .box_w = 5, .box_h = 7, .ofs_x = 2, .ofs_y = 6},
    {.bitmap_index = 1653, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 1660, .adv_w = 128, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 1665, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 1671, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 1678, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 1684, .adv_w = 128, .box_w = 5, .box_h = 7, .ofs_x = 2, .ofs_y = 6},
    {.bitmap_index = 1689, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 1696, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 1702, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 1709, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 1715, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 1722, .adv_w = 128, .box_w = 6, .box_h = 6, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 1727, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 1734, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 1740, .adv_w = 128, .box_w = 7, .box_h = 5, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 1745, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 1752, .adv_w = 128, .box_w = 6, .box_h = 6, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 1757, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 1764, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 1770, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 1777, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 1784, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 1791, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 1798, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 1805, .adv_w = 128, .box_w = 6, .box_h = 6, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 1810, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 1816, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 1822, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 1829, .adv_w = 128, .box_w = 6, .box_h = 6, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 1834, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 1840, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 1846, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 1853, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 1859, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 1866, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 1872, .adv_w = 128, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 1878, .adv_w = 128, .box_w = 7, .box_h = 6, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 1884, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 1891, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 1897, .adv_w = 128, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 1903, .adv_w = 128, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 1908, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 1914, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 1921, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 1927, .adv_w = 128, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 1932, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 1939, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 1946, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 1953, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 1960, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 1967, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 1974, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 1981, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 1987, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 1994, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 2001, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 2008, .adv_w = 128, .box_w = 7, .box_h = 6, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 2014, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 2021, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 2028, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 2034, .adv_w = 128, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 2040, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 2046, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 2053, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 2059, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 2066, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 2072, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 2078, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 2084, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 2090, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 2097, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 2104, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 2110, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 2116, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 2123, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 2130, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 2136, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 2143, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 2150, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 2157, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 2164, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 2170, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 2176, .adv_w = 128, .box_w = 6, .box_h = 6, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 2181, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 2187, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 2193, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 2199, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 2206, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 2214, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 2221, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 2228, .adv_w = 128, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 2235, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 2241, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 2248, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 2254, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 2260, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 2267, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 2274, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 2281, .adv_w = 128, .box_w = 6, .box_h = 6, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 2286, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 2292, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 2299, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 2305, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 2312, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 2318, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 2324, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 2331, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 2337, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 2344, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 2350, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 2357, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 2364, .adv_w = 128, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 2371, .adv_w = 128, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 2378, .adv_w = 128, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 2385, .adv_w = 128, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 2392, .adv_w = 128, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 2399, .adv_w = 128, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 2406, .adv_w = 128, .box_w = 6, .box_h = 5, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 2410, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 2417, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 2424, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 2431, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 2438, .adv_w = 128, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 2445, .adv_w = 128, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 2452, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 2458, .adv_w = 128, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 2464, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 2471, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 2477, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 2484, .adv_w = 128, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 2490, .adv_w = 128, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 2496, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 2502, .adv_w = 128, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 2508, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 2515, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 2521, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 2527, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 2534, .adv_w = 128, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 2541, .adv_w = 128, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 2548, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 2554, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 2561, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 2568, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 2575, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 2582, .adv_w = 128, .box_w = 7, .box_h = 6, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 2588, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 2595, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 2602, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 2609, .adv_w = 128, .box_w = 7, .box_h = 6, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 2615, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 2622, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 2629, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 2636, .adv_w = 128, .box_w = 7, .box_h = 5, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 2641, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 2648, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 2655, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 2662, .adv_w = 128, .box_w = 7, .box_h = 6, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 2668, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 2675, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 2682, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 2689, .adv_w = 128, .box_w = 7, .box_h = 5, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 2694, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 2701, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 2708, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 2715, .adv_w = 128, .box_w = 7, .box_h = 6, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 2721, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 2728, .adv_w = 128, .box_w = 6, .box_h = 6, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 2733, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 2740, .adv_w = 128, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 2746, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 2752, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 2758, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 2765, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 2772, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 2779, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 2786, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 2793, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 2799, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 2806, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 2813, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 2819, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 2826, .adv_w = 128, .box_w = 6, .box_h = 5, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 2830, .adv_w = 128, .box_w = 6, .box_h = 5, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 2834, .adv_w = 128, .box_w = 7, .box_h = 6, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 2840, .adv_w = 128, .box_w = 6, .box_h = 6, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 2845, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 2851, .adv_w = 128, .box_w = 6, .box_h = 2, .ofs_x = 1, .ofs_y = 11},
    {.bitmap_index = 2853, .adv_w = 128, .box_w = 4, .box_h = 1, .ofs_x = 2, .ofs_y = 12},
    {.bitmap_index = 2854, .adv_w = 128, .box_w = 4, .box_h = 1, .ofs_x = 2, .ofs_y = 5},
    {.bitmap_index = 2855, .adv_w = 128, .box_w = 7, .box_h = 3, .ofs_x = 0, .ofs_y = 10},
    {.bitmap_index = 2858, .adv_w = 128, .box_w = 3, .box_h = 1, .ofs_x = 1, .ofs_y = 12},
    {.bitmap_index = 2859, .adv_w = 128, .box_w = 3, .box_h = 1, .ofs_x = 4, .ofs_y = 12},
    {.bitmap_index = 2860, .adv_w = 128, .box_w = 6, .box_h = 2, .ofs_x = 1, .ofs_y = 11},
    {.bitmap_index = 2862, .adv_w = 128, .box_w = 7, .box_h = 2, .ofs_x = 0, .ofs_y = 11},
    {.bitmap_index = 2864, .adv_w = 128, .box_w = 6, .box_h = 1, .ofs_x = 1, .ofs_y = 12},
    {.bitmap_index = 2865, .adv_w = 128, .box_w = 8, .box_h = 1, .ofs_x = 0, .ofs_y = 12},
    {.bitmap_index = 2866, .adv_w = 128, .box_w = 7, .box_h = 2, .ofs_x = 0, .ofs_y = 11},
    {.bitmap_index = 2868, .adv_w = 128, .box_w = 2, .box_h = 1, .ofs_x = 3, .ofs_y = 12},
    {.bitmap_index = 2869, .adv_w = 128, .box_w = 6, .box_h = 1, .ofs_x = 1, .ofs_y = 12},
    {.bitmap_index = 2870, .adv_w = 128, .box_w = 3, .box_h = 3, .ofs_x = 3, .ofs_y = 10},
    {.bitmap_index = 2872, .adv_w = 128, .box_w = 2, .box_h = 2, .ofs_x = 3, .ofs_y = 11},
    {.bitmap_index = 2873, .adv_w = 128, .box_w = 7, .box_h = 2, .ofs_x = 0, .ofs_y = 11},
    {.bitmap_index = 2875, .adv_w = 128, .box_w = 6, .box_h = 2, .ofs_x = 1, .ofs_y = 11},
    {.bitmap_index = 2877, .adv_w = 128, .box_w = 4, .box_h = 2, .ofs_x = 2, .ofs_y = 11},
    {.bitmap_index = 2878, .adv_w = 128, .box_w = 7, .box_h = 2, .ofs_x = 0, .ofs_y = 11},
    {.bitmap_index = 2880, .adv_w = 128, .box_w = 6, .box_h = 3, .ofs_x = 1, .ofs_y = 10},
    {.bitmap_index = 2883, .adv_w = 128, .box_w = 7, .box_h = 2, .ofs_x = 0, .ofs_y = 11},
    {.bitmap_index = 2885, .adv_w = 128, .box_w = 3, .box_h = 2, .ofs_x = 2, .ofs_y = 11},
    {.bitmap_index = 2886, .adv_w = 128, .box_w = 3, .box_h = 2, .ofs_x = 2, .ofs_y = 11},
    {.bitmap_index = 2887, .adv_w = 128, .box_w = 3, .box_h = 2, .ofs_x = 5, .ofs_y = 11},
    {.bitmap_index = 2888, .adv_w = 128, .box_w = 4, .box_h = 1, .ofs_x = 3, .ofs_y = 5},
    {.bitmap_index = 2889, .adv_w = 128, .box_w = 4, .box_h = 1, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 2890, .adv_w = 128, .box_w = 4, .box_h = 2, .ofs_x = 2, .ofs_y = 5},
    {.bitmap_index = 2891, .adv_w = 128, .box_w = 3, .box_h = 2, .ofs_x = 5, .ofs_y = 11},
    {.bitmap_index = 2892, .adv_w = 128, .box_w = 2, .box_h = 1, .ofs_x = 2, .ofs_y = 5},
    {.bitmap_index = 2893, .adv_w = 128, .box_w = 5, .box_h = 2, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 2895, .adv_w = 128, .box_w = 4, .box_h = 2, .ofs_x = 2, .ofs_y = 5},
    {.bitmap_index = 2896, .adv_w = 128, .box_w = 5, .box_h = 2, .ofs_x = 2, .ofs_y = 5},
    {.bitmap_index = 2898, .adv_w = 128, .box_w = 4, .box_h = 2, .ofs_x = 4, .ofs_y = 5},
    {.bitmap_index = 2899, .adv_w = 128, .box_w = 2, .box_h = 1, .ofs_x = 3, .ofs_y = 5},
    {.bitmap_index = 2900, .adv_w = 128, .box_w = 6, .box_h = 1, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 2901, .adv_w = 128, .box_w = 2, .box_h = 1, .ofs_x = 3, .ofs_y = 5},
    {.bitmap_index = 2902, .adv_w = 128, .box_w = 3, .box_h = 2, .ofs_x = 2, .ofs_y = 5},
    {.bitmap_index = 2903, .adv_w = 128, .box_w = 2, .box_h = 2, .ofs_x = 3, .ofs_y = 5},
    {.bitmap_index = 2904, .adv_w = 128, .box_w = 3, .box_h = 1, .ofs_x = 4, .ofs_y = 5},
    {.bitmap_index = 2905, .adv_w = 128, .box_w = 1, .box_h = 2, .ofs_x = 3, .ofs_y = 5},
    {.bitmap_index = 2906, .adv_w = 128, .box_w = 7, .box_h = 2, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 2908, .adv_w = 128, .box_w = 6, .box_h = 2, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 2910, .adv_w = 128, .box_w = 7, .box_h = 2, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 2912, .adv_w = 128, .box_w = 7, .box_h = 2, .ofs_x = 0, .ofs_y = 8},
    {.bitmap_index = 2914, .adv_w = 128, .box_w = 8, .box_h = 1, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 2915, .adv_w = 128, .box_w = 8, .box_h = 2, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 2917, .adv_w = 128, .box_w = 6, .box_h = 1, .ofs_x = 1, .ofs_y = 9},
    {.bitmap_index = 2918, .adv_w = 128, .box_w = 8, .box_h = 1, .ofs_x = 0, .ofs_y = 9},
    {.bitmap_index = 2919, .adv_w = 128, .box_w = 6, .box_h = 5, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 2923, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 2931, .adv_w = 128, .box_w = 2, .box_h = 1, .ofs_x = 4, .ofs_y = 5},
    {.bitmap_index = 2932, .adv_w = 128, .box_w = 4, .box_h = 2, .ofs_x = 2, .ofs_y = 5},
    {.bitmap_index = 2933, .adv_w = 128, .box_w = 4, .box_h = 2, .ofs_x = 2, .ofs_y = 5},
    {.bitmap_index = 2934, .adv_w = 128, .box_w = 7, .box_h = 2, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 2936, .adv_w = 128, .box_w = 5, .box_h = 3, .ofs_x = 1, .ofs_y = 10},
    {.bitmap_index = 2938, .adv_w = 128, .box_w = 8, .box_h = 2, .ofs_x = 0, .ofs_y = 11},
    {.bitmap_index = 2940, .adv_w = 128, .box_w = 3, .box_h = 1, .ofs_x = 1, .ofs_y = 12},
    {.bitmap_index = 2941, .adv_w = 128, .box_w = 3, .box_h = 1, .ofs_x = 4, .ofs_y = 12},
    {.bitmap_index = 2942, .adv_w = 128, .box_w = 7, .box_h = 2, .ofs_x = 0, .ofs_y = 11},
    {.bitmap_index = 2944, .adv_w = 128, .box_w = 3, .box_h = 2, .ofs_x = 2, .ofs_y = 11},
    {.bitmap_index = 2945, .adv_w = 128, .box_w = 8, .box_h = 2, .ofs_x = 0, .ofs_y = 11},
    {.bitmap_index = 2947, .adv_w = 128, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 13},
    {.bitmap_index = 2948, .adv_w = 128, .box_w = 7, .box_h = 2, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 2950, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 2956, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 2963, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 2969, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 2975, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 2982, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 2988, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 2995, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 3001, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 3007, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 3013, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 3020, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 3026, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 3032, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 3038, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 3045, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 3051, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 3058, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 3065, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 3072, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 3079, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 3086, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 3092, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 3099, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 3105, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 3112, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 3118, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 3124, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 3131, .adv_w = 128, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 3138, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 3145, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 3152, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 3158, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 3164, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 3171, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 3177, .adv_w = 128, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 3183, .adv_w = 128, .box_w = 4, .box_h = 7, .ofs_x = 3, .ofs_y = 6},
    {.bitmap_index = 3187, .adv_w = 128, .box_w = 7, .box_h = 5, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 3192, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 3199, .adv_w = 128, .box_w = 7, .box_h = 6, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 3205, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 3212, .adv_w = 128, .box_w = 6, .box_h = 5, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 3216, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 3223, .adv_w = 128, .box_w = 6, .box_h = 6, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 3228, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 3234, .adv_w = 128, .box_w = 3, .box_h = 5, .ofs_x = 3, .ofs_y = 6},
    {.bitmap_index = 3236, .adv_w = 128, .box_w = 6, .box_h = 5, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 3240, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 3247, .adv_w = 128, .box_w = 7, .box_h = 6, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 3253, .adv_w = 128, .box_w = 6, .box_h = 5, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 3257, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 3264, .adv_w = 128, .box_w = 6, .box_h = 5, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 3268, .adv_w = 128, .box_w = 8, .box_h = 5, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 3273, .adv_w = 128, .box_w = 6, .box_h = 6, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 3278, .adv_w = 128, .box_w = 7, .box_h = 6, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 3284, .adv_w = 128, .box_w = 7, .box_h = 5, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 3289, .adv_w = 128, .box_w = 6, .box_h = 5, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 3293, .adv_w = 128, .box_w = 7, .box_h = 5, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 3298, .adv_w = 128, .box_w = 8, .box_h = 6, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 3304, .adv_w = 128, .box_w = 7, .box_h = 5, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 3309, .adv_w = 128, .box_w = 8, .box_h = 6, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 3315, .adv_w = 128, .box_w = 7, .box_h = 5, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 3320, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 3326, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 3333, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 3339, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 3346, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 3353, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 3360, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 3367, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 3374, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 3380, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 3386, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 3393, .adv_w = 128, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 3400, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 3406, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 3412, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 3418, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 3424, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 3432, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 3438, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 3445, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 3451, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 3458, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 3465, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 3472, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 3479, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 3486, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 3492, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 3498, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 3504, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 3510, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 3516, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 3522, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 3528, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 3535, .adv_w = 128, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 3542, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 3549, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 3556, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 3563, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 3571, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 3578, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 3585, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 3591, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 3598, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 3605, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 3611, .adv_w = 128, .box_w = 6, .box_h = 5, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 3615, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 3621, .adv_w = 128, .box_w = 6, .box_h = 5, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 3625, .adv_w = 128, .box_w = 6, .box_h = 5, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 3629, .adv_w = 128, .box_w = 7, .box_h = 6, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 3635, .adv_w = 128, .box_w = 6, .box_h = 5, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 3639, .adv_w = 128, .box_w = 7, .box_h = 5, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 3644, .adv_w = 128, .box_w = 7, .box_h = 5, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 3649, .adv_w = 128, .box_w = 7, .box_h = 5, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 3654, .adv_w = 128, .box_w = 7, .box_h = 6, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 3660, .adv_w = 128, .box_w = 6, .box_h = 5, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 3664, .adv_w = 128, .box_w = 7, .box_h = 5, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 3669, .adv_w = 128, .box_w = 7, .box_h = 5, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 3674, .adv_w = 128, .box_w = 6, .box_h = 5, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 3678, .adv_w = 128, .box_w = 6, .box_h = 5, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 3682, .adv_w = 128, .box_w = 6, .box_h = 5, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 3686, .adv_w = 128, .box_w = 6, .box_h = 6, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 3691, .adv_w = 128, .box_w = 5, .box_h = 5, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 3695, .adv_w = 128, .box_w = 6, .box_h = 5, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 3699, .adv_w = 128, .box_w = 6, .box_h = 6, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 3704, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 3711, .adv_w = 128, .box_w = 7, .box_h = 5, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 3716, .adv_w = 128, .box_w = 7, .box_h = 6, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 3722, .adv_w = 128, .box_w = 6, .box_h = 5, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 3726, .adv_w = 128, .box_w = 7, .box_h = 5, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 3731, .adv_w = 128, .box_w = 7, .box_h = 6, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 3737, .adv_w = 128, .box_w = 7, .box_h = 5, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 3742, .adv_w = 128, .box_w = 7, .box_h = 5, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 3747, .adv_w = 128, .box_w = 6, .box_h = 5, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 3751, .adv_w = 128, .box_w = 7, .box_h = 5, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 3756, .adv_w = 128, .box_w = 7, .box_h = 5, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 3761, .adv_w = 128, .box_w = 6, .box_h = 5, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 3765, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 3771, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 3777, .adv_w = 128, .box_w = 6, .box_h = 5, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 3781, .adv_w = 128, .box_w = 3, .box_h = 6, .ofs_x = 3, .ofs_y = 6},
    {.bitmap_index = 3784, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 3790, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 3796, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 3803, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 3810, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 3816, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 3822, .adv_w = 128, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 3829, .adv_w = 128, .box_w = 8, .box_h = 5, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 3834, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 3841, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 3848, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 3855, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 3861, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 3868, .adv_w = 128, .box_w = 6, .box_h = 5, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 3872, .adv_w = 128, .box_w = 6, .box_h = 5, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 3876, .adv_w = 128, .box_w = 5, .box_h = 5, .ofs_x = 2, .ofs_y = 7},
    {.bitmap_index = 3880, .adv_w = 128, .box_w = 6, .box_h = 5, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 3884, .adv_w = 128, .box_w = 6, .box_h = 5, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 3888, .adv_w = 128, .box_w = 3, .box_h = 5, .ofs_x = 3, .ofs_y = 7},
    {.bitmap_index = 3890, .adv_w = 128, .box_w = 6, .box_h = 5, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 3894, .adv_w = 128, .box_w = 6, .box_h = 5, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 3898, .adv_w = 128, .box_w = 6, .box_h = 6, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 3903, .adv_w = 128, .box_w = 4, .box_h = 3, .ofs_x = 2, .ofs_y = 9},
    {.bitmap_index = 3905, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 3911, .adv_w = 128, .box_w = 5, .box_h = 5, .ofs_x = 2, .ofs_y = 7},
    {.bitmap_index = 3915, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 3921, .adv_w = 128, .box_w = 7, .box_h = 5, .ofs_x = 0, .ofs_y = 7},
    {.bitmap_index = 3926, .adv_w = 128, .box_w = 6, .box_h = 6, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 3931, .adv_w = 128, .box_w = 3, .box_h = 6, .ofs_x = 3, .ofs_y = 6},
    {.bitmap_index = 3934, .adv_w = 128, .box_w = 4, .box_h = 5, .ofs_x = 2, .ofs_y = 7},
    {.bitmap_index = 3937, .adv_w = 128, .box_w = 6, .box_h = 5, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 3941, .adv_w = 128, .box_w = 7, .box_h = 5, .ofs_x = 0, .ofs_y = 7},
    {.bitmap_index = 3946, .adv_w = 128, .box_w = 6, .box_h = 6, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 3951, .adv_w = 128, .box_w = 6, .box_h = 5, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 3955, .adv_w = 128, .box_w = 5, .box_h = 6, .ofs_x = 2, .ofs_y = 6},
    {.bitmap_index = 3959, .adv_w = 128, .box_w = 6, .box_h = 5, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 3963, .adv_w = 128, .box_w = 5, .box_h = 6, .ofs_x = 2, .ofs_y = 6},
    {.bitmap_index = 3967, .adv_w = 128, .box_w = 5, .box_h = 5, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 3971, .adv_w = 128, .box_w = 7, .box_h = 5, .ofs_x = 0, .ofs_y = 7},
    {.bitmap_index = 3976, .adv_w = 128, .box_w = 7, .box_h = 5, .ofs_x = 0, .ofs_y = 7},
    {.bitmap_index = 3981, .adv_w = 128, .box_w = 3, .box_h = 6, .ofs_x = 2, .ofs_y = 7},
    {.bitmap_index = 3984, .adv_w = 128, .box_w = 1, .box_h = 5, .ofs_x = 4, .ofs_y = 8},
    {.bitmap_index = 3985, .adv_w = 128, .box_w = 8, .box_h = 5, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 3990, .adv_w = 128, .box_w = 5, .box_h = 5, .ofs_x = 3, .ofs_y = 8},
    {.bitmap_index = 3994, .adv_w = 128, .box_w = 8, .box_h = 5, .ofs_x = 0, .ofs_y = 8},
    {.bitmap_index = 3999, .adv_w = 128, .box_w = 8, .box_h = 5, .ofs_x = 0, .ofs_y = 8},
    {.bitmap_index = 4004, .adv_w = 128, .box_w = 6, .box_h = 6, .ofs_x = 2, .ofs_y = 5},
    {.bitmap_index = 4009, .adv_w = 128, .box_w = 6, .box_h = 6, .ofs_x = 2, .ofs_y = 5},
    {.bitmap_index = 4014, .adv_w = 128, .box_w = 5, .box_h = 4, .ofs_x = 3, .ofs_y = 8},
    {.bitmap_index = 4017, .adv_w = 128, .box_w = 6, .box_h = 5, .ofs_x = 2, .ofs_y = 8},
    {.bitmap_index = 4021, .adv_w = 128, .box_w = 6, .box_h = 4, .ofs_x = 2, .ofs_y = 6},
    {.bitmap_index = 4024, .adv_w = 128, .box_w = 6, .box_h = 6, .ofs_x = 2, .ofs_y = 6},
    {.bitmap_index = 4029, .adv_w = 128, .box_w = 7, .box_h = 4, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 4033, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 4040, .adv_w = 128, .box_w = 7, .box_h = 5, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 4045, .adv_w = 128, .box_w = 8, .box_h = 5, .ofs_x = 0, .ofs_y = 8},
    {.bitmap_index = 4050, .adv_w = 128, .box_w = 8, .box_h = 5, .ofs_x = 0, .ofs_y = 8},
    {.bitmap_index = 4055, .adv_w = 128, .box_w = 5, .box_h = 6, .ofs_x = 2, .ofs_y = 6},
    {.bitmap_index = 4059, .adv_w = 128, .box_w = 5, .box_h = 7, .ofs_x = 2, .ofs_y = 6},
    {.bitmap_index = 4064, .adv_w = 128, .box_w = 8, .box_h = 1, .ofs_x = 0, .ofs_y = 8},
    {.bitmap_index = 4065, .adv_w = 128, .box_w = 8, .box_h = 5, .ofs_x = 0, .ofs_y = 8},
    {.bitmap_index = 4070, .adv_w = 128, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 4077, .adv_w = 128, .box_w = 7, .box_h = 5, .ofs_x = 1, .ofs_y = 8},
    {.bitmap_index = 4082, .adv_w = 128, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 4089, .adv_w = 128, .box_w = 6, .box_h = 6, .ofs_x = 2, .ofs_y = 5},
    {.bitmap_index = 4094, .adv_w = 128, .box_w = 8, .box_h = 5, .ofs_x = 0, .ofs_y = 8},
    {.bitmap_index = 4099, .adv_w = 128, .box_w = 3, .box_h = 3, .ofs_x = 3, .ofs_y = 8},
    {.bitmap_index = 4101, .adv_w = 128, .box_w = 6, .box_h = 5, .ofs_x = 2, .ofs_y = 6},
    {.bitmap_index = 4105, .adv_w = 128, .box_w = 7, .box_h = 5, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 4110, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 4117, .adv_w = 128, .box_w = 6, .box_h = 6, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 4122, .adv_w = 128, .box_w = 6, .box_h = 6, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 4127, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 4133, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 4140, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 4146, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 4153, .adv_w = 128, .box_w = 6, .box_h = 6, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 4158, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 4164, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 4171, .adv_w = 128, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 4177, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 4184, .adv_w = 128, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 4190, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 4197, .adv_w = 128, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 4203, .adv_w = 128, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 4209, .adv_w = 128, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 4215, .adv_w = 128, .box_w = 6, .box_h = 6, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 4220, .adv_w = 128, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 4225, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 4232, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 4238, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 4245, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 4252, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 4258, .adv_w = 128, .box_w = 5, .box_h = 7, .ofs_x = 2, .ofs_y = 6},
    {.bitmap_index = 4263, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 4270, .adv_w = 128, .box_w = 5, .box_h = 7, .ofs_x = 2, .ofs_y = 6},
    {.bitmap_index = 4275, .adv_w = 128, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 4281, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 4287, .adv_w = 128, .box_w = 5, .box_h = 7, .ofs_x = 2, .ofs_y = 6},
    {.bitmap_index = 4292, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 4298, .adv_w = 128, .box_w = 4, .box_h = 5, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 4301, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 4307, .adv_w = 128, .box_w = 5, .box_h = 7, .ofs_x = 2, .ofs_y = 6},
    {.bitmap_index = 4312, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 4319, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 4325, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 4331, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 4338, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 4344, .adv_w = 128, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 4350, .adv_w = 128, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 4356, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 4363, .adv_w = 128, .box_w = 4, .box_h = 7, .ofs_x = 2, .ofs_y = 6},
    {.bitmap_index = 4367, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 4373, .adv_w = 128, .box_w = 5, .box_h = 7, .ofs_x = 2, .ofs_y = 6},
    {.bitmap_index = 4378, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 4384, .adv_w = 128, .box_w = 2, .box_h = 7, .ofs_x = 3, .ofs_y = 6},
    {.bitmap_index = 4386, .adv_w = 128, .box_w = 4, .box_h = 7, .ofs_x = 2, .ofs_y = 6},
    {.bitmap_index = 4390, .adv_w = 128, .box_w = 7, .box_h = 4, .ofs_x = 0, .ofs_y = 7},
    {.bitmap_index = 4394, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 4401, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 4407, .adv_w = 128, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 4412, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 4419, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 4425, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 4432, .adv_w = 128, .box_w = 4, .box_h = 7, .ofs_x = 2, .ofs_y = 6},
    {.bitmap_index = 4436, .adv_w = 128, .box_w = 4, .box_h = 7, .ofs_x = 2, .ofs_y = 6},
    {.bitmap_index = 4440, .adv_w = 128, .box_w = 2, .box_h = 4, .ofs_x = 3, .ofs_y = 9},
    {.bitmap_index = 4441, .adv_w = 128, .box_w = 4, .box_h = 4, .ofs_x = 2, .ofs_y = 9},
    {.bitmap_index = 4443, .adv_w = 128, .box_w = 7, .box_h = 4, .ofs_x = 1, .ofs_y = 9},
    {.bitmap_index = 4447, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 4454, .adv_w = 128, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 4459, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 4465, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 4471, .adv_w = 128, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 4477, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 4484, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 4490, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 4497, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 4503, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 4509, .adv_w = 128, .box_w = 4, .box_h = 7, .ofs_x = 2, .ofs_y = 6},
    {.bitmap_index = 4513, .adv_w = 128, .box_w = 5, .box_h = 7, .ofs_x = 2, .ofs_y = 6},
    {.bitmap_index = 4518, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 4524, .adv_w = 128, .box_w = 6, .box_h = 5, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 4528, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 4534, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 4540, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 4546, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 4552, .adv_w = 128, .box_w = 4, .box_h = 5, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 4555, .adv_w = 128, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 4561, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 4568, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 4575, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 4581, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 4588, .adv_w = 128, .box_w = 2, .box_h = 4, .ofs_x = 3, .ofs_y = 6},
    {.bitmap_index = 4589, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 4596, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 4602, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 4609, .adv_w = 128, .box_w = 2, .box_h = 1, .ofs_x = 3, .ofs_y = 9},
    {.bitmap_index = 4610, .adv_w = 128, .box_w = 2, .box_h = 4, .ofs_x = 3, .ofs_y = 7},
    {.bitmap_index = 4611, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 4617, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 4624, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 4631, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 4638, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 4644, .adv_w = 128, .box_w = 4, .box_h = 7, .ofs_x = 2, .ofs_y = 6},
    {.bitmap_index = 4648, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 4655, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 4661, .adv_w = 128, .box_w = 3, .box_h = 7, .ofs_x = 2, .ofs_y = 6},
    {.bitmap_index = 4664, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 4671, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 4677, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 4683, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 4690, .adv_w = 128, .box_w = 6, .box_h = 6, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 4695, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 4701, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 4708, .adv_w = 128, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 4714, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 4721, .adv_w = 128, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 4727, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 4733, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 4740, .adv_w = 128, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 4746, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 4753, .adv_w = 128, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 4759, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 4766, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 4773, .adv_w = 128, .box_w = 7, .box_h = 6, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 4779, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 4786, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 4792, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 4799, .adv_w = 128, .box_w = 6, .box_h = 6, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 4804, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 4811, .adv_w = 128, .box_w = 6, .box_h = 6, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 4816, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 4823, .adv_w = 128, .box_w = 6, .box_h = 6, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 4828, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 4834, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 4840, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 4847, .adv_w = 128, .box_w = 6, .box_h = 6, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 4852, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 4859, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 4866, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 4873, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 4880, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 4887, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 4894, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 4901, .adv_w = 128, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 4908, .adv_w = 128, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 4915, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 4921, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 4927, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 4933, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 4939, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 4945, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 4951, .adv_w = 128, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 4958, .adv_w = 128, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 4965, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 4971, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 4977, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 4983, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 4989, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 4995, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 5001, .adv_w = 128, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 5008, .adv_w = 128, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 5015, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 5022, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 5029, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 5036, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 5043, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 5050, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 5057, .adv_w = 128, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 5064, .adv_w = 128, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 5071, .adv_w = 128, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 5077, .adv_w = 128, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 5083, .adv_w = 128, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 5089, .adv_w = 128, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 5095, .adv_w = 128, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 5101, .adv_w = 128, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 5107, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 5115, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 5123, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 5129, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 5135, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 5141, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 5147, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 5153, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 5159, .adv_w = 128, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 5166, .adv_w = 128, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 5173, .adv_w = 128, .box_w = 4, .box_h = 7, .ofs_x = 2, .ofs_y = 6},
    {.bitmap_index = 5177, .adv_w = 128, .box_w = 4, .box_h = 7, .ofs_x = 2, .ofs_y = 6},
    {.bitmap_index = 5181, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 5187, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 5193, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 5199, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 5205, .adv_w = 128, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 5212, .adv_w = 128, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 5219, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 5225, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 5231, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 5237, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 5243, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 5249, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 5255, .adv_w = 128, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 5262, .adv_w = 128, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 5269, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 5275, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 5281, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 5287, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 5293, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 5299, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 5305, .adv_w = 128, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 5312, .adv_w = 128, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 5319, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 5326, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 5333, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 5340, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 5347, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 5354, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 5361, .adv_w = 128, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 5368, .adv_w = 128, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 5375, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 5382, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 5389, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 5396, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 5403, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 5410, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 5417, .adv_w = 128, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 5424, .adv_w = 128, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 5431, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 5437, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 5443, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 5449, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 5455, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 5461, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 5467, .adv_w = 128, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 5474, .adv_w = 128, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 5481, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 5488, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 5495, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 5502, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 5509, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 5516, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 5523, .adv_w = 128, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 5530, .adv_w = 128, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 5537, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 5544, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 5551, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 5558, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 5565, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 5572, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 5579, .adv_w = 128, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 5586, .adv_w = 128, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 5593, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 5600, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 5607, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 5613, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 5619, .adv_w = 128, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 5625, .adv_w = 128, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 5631, .adv_w = 128, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 5636, .adv_w = 128, .box_w = 4, .box_h = 7, .ofs_x = 3, .ofs_y = 6},
    {.bitmap_index = 5640, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 5646, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 5652, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 5659, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 5666, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 5673, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 5680, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 5687, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 5694, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 5701, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 5708, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 5715, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 5722, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 5730, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 5738, .adv_w = 128, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 5744, .adv_w = 128, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 5750, .adv_w = 128, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 5756, .adv_w = 128, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 5762, .adv_w = 128, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 5768, .adv_w = 128, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 5774, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 5782, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 5790, .adv_w = 128, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 5796, .adv_w = 128, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 5802, .adv_w = 128, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 5808, .adv_w = 128, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 5814, .adv_w = 128, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 5820, .adv_w = 128, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 5826, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 5834, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 5842, .adv_w = 128, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 5848, .adv_w = 128, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 5854, .adv_w = 128, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 5860, .adv_w = 128, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 5866, .adv_w = 128, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 5872, .adv_w = 128, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 5878, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 5886, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 5894, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 5901, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 5908, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 5915, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 5922, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 5929, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 5936, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 5944, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 5952, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 5959, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 5966, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 5973, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 5980, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 5987, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 5994, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 6002, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 6010, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 6017, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 6024, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 6031, .adv_w = 128, .box_w = 7, .box_h = 6, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 6037, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 6044, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 6051, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 6058, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 6064, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 6071, .adv_w = 128, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 6077, .adv_w = 128, .box_w = 6, .box_h = 6, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 6082, .adv_w = 128, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 6088, .adv_w = 128, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 6094, .adv_w = 128, .box_w = 6, .box_h = 6, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 6099, .adv_w = 128, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 6105, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 6112, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 6119, .adv_w = 128, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 6125, .adv_w = 128, .box_w = 6, .box_h = 6, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 6130, .adv_w = 128, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 6136, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 6142, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 6149, .adv_w = 128, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 6154, .adv_w = 128, .box_w = 4, .box_h = 6, .ofs_x = 2, .ofs_y = 5},
    {.bitmap_index = 6157, .adv_w = 128, .box_w = 5, .box_h = 8, .ofs_x = 2, .ofs_y = 5},
    {.bitmap_index = 6162, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 6169, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 6176, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 6182, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 6189, .adv_w = 128, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 6195, .adv_w = 128, .box_w = 6, .box_h = 6, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 6200, .adv_w = 128, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 6206, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 6213, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 6220, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 6227, .adv_w = 128, .box_w = 7, .box_h = 6, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 6233, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 6240, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 6247, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 6253, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 6260, .adv_w = 128, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 6266, .adv_w = 128, .box_w = 6, .box_h = 6, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 6271, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 6278, .adv_w = 128, .box_w = 7, .box_h = 6, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 6284, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 6291, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 6298, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 6305, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 6312, .adv_w = 128, .box_w = 7, .box_h = 6, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 6318, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 6325, .adv_w = 128, .box_w = 4, .box_h = 1, .ofs_x = 2, .ofs_y = 9},
    {.bitmap_index = 6326, .adv_w = 128, .box_w = 4, .box_h = 1, .ofs_x = 2, .ofs_y = 9},
    {.bitmap_index = 6327, .adv_w = 128, .box_w = 5, .box_h = 1, .ofs_x = 1, .ofs_y = 9},
    {.bitmap_index = 6328, .adv_w = 128, .box_w = 7, .box_h = 1, .ofs_x = 0, .ofs_y = 9},
    {.bitmap_index = 6329, .adv_w = 128, .box_w = 8, .box_h = 1, .ofs_x = 0, .ofs_y = 9},
    {.bitmap_index = 6330, .adv_w = 128, .box_w = 7, .box_h = 1, .ofs_x = 0, .ofs_y = 9},
    {.bitmap_index = 6331, .adv_w = 128, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 6336, .adv_w = 128, .box_w = 8, .box_h = 3, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 6339, .adv_w = 128, .box_w = 3, .box_h = 1, .ofs_x = 1, .ofs_y = 12},
    {.bitmap_index = 6340, .adv_w = 128, .box_w = 3, .box_h = 1, .ofs_x = 4, .ofs_y = 12},
    {.bitmap_index = 6341, .adv_w = 128, .box_w = 7, .box_h = 2, .ofs_x = 0, .ofs_y = 11},
    {.bitmap_index = 6343, .adv_w = 128, .box_w = 7, .box_h = 2, .ofs_x = 0, .ofs_y = 11},
    {.bitmap_index = 6345, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 6351, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 6357, .adv_w = 128, .box_w = 4, .box_h = 4, .ofs_x = 2, .ofs_y = 7},
    {.bitmap_index = 6359, .adv_w = 128, .box_w = 2, .box_h = 2, .ofs_x = 3, .ofs_y = 6},
    {.bitmap_index = 6360, .adv_w = 128, .box_w = 6, .box_h = 2, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 6362, .adv_w = 128, .box_w = 7, .box_h = 2, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 6364, .adv_w = 128, .box_w = 8, .box_h = 6, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 6370, .adv_w = 128, .box_w = 8, .box_h = 6, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 6376, .adv_w = 128, .box_w = 4, .box_h = 3, .ofs_x = 2, .ofs_y = 10},
    {.bitmap_index = 6378, .adv_w = 128, .box_w = 7, .box_h = 3, .ofs_x = 0, .ofs_y = 10},
    {.bitmap_index = 6381, .adv_w = 128, .box_w = 7, .box_h = 3, .ofs_x = 0, .ofs_y = 10},
    {.bitmap_index = 6384, .adv_w = 128, .box_w = 4, .box_h = 3, .ofs_x = 2, .ofs_y = 10},
    {.bitmap_index = 6386, .adv_w = 128, .box_w = 7, .box_h = 3, .ofs_x = 1, .ofs_y = 10},
    {.bitmap_index = 6389, .adv_w = 128, .box_w = 7, .box_h = 3, .ofs_x = 1, .ofs_y = 10},
    {.bitmap_index = 6392, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 6398, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 6405, .adv_w = 128, .box_w = 7, .box_h = 6, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 6411, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 6418, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 6425, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 6432, .adv_w = 128, .box_w = 5, .box_h = 5, .ofs_x = 1, .ofs_y = 8},
    {.bitmap_index = 6436, .adv_w = 128, .box_w = 2, .box_h = 5, .ofs_x = 2, .ofs_y = 8},
    {.bitmap_index = 6438, .adv_w = 128, .box_w = 6, .box_h = 5, .ofs_x = 1, .ofs_y = 8},
    {.bitmap_index = 6442, .adv_w = 128, .box_w = 5, .box_h = 5, .ofs_x = 1, .ofs_y = 8},
    {.bitmap_index = 6446, .adv_w = 128, .box_w = 5, .box_h = 5, .ofs_x = 1, .ofs_y = 8},
    {.bitmap_index = 6450, .adv_w = 128, .box_w = 5, .box_h = 5, .ofs_x = 1, .ofs_y = 8},
    {.bitmap_index = 6454, .adv_w = 128, .box_w = 5, .box_h = 5, .ofs_x = 1, .ofs_y = 8},
    {.bitmap_index = 6458, .adv_w = 128, .box_w = 5, .box_h = 5, .ofs_x = 1, .ofs_y = 8},
    {.bitmap_index = 6462, .adv_w = 128, .box_w = 6, .box_h = 5, .ofs_x = 1, .ofs_y = 8},
    {.bitmap_index = 6466, .adv_w = 128, .box_w = 6, .box_h = 2, .ofs_x = 1, .ofs_y = 10},
    {.bitmap_index = 6468, .adv_w = 128, .box_w = 6, .box_h = 5, .ofs_x = 1, .ofs_y = 8},
    {.bitmap_index = 6472, .adv_w = 128, .box_w = 5, .box_h = 4, .ofs_x = 1, .ofs_y = 8},
    {.bitmap_index = 6475, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 6483, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 6490, .adv_w = 128, .box_w = 9, .box_h = 9, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 6501, .adv_w = 128, .box_w = 7, .box_h = 6, .ofs_x = 0, .ofs_y = 7},
    {.bitmap_index = 6507, .adv_w = 128, .box_w = 7, .box_h = 5, .ofs_x = 0, .ofs_y = 8},
    {.bitmap_index = 6512, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 6519, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 6527, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 6535, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 6543, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 6551, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 6559, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 6567, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 6575, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 6583, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 6591, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 6599, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 6607, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 6615, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 6623, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 6631, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 6638, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 6646, .adv_w = 128, .box_w = 7, .box_h = 6, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 6652, .adv_w = 128, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 6658, .adv_w = 128, .box_w = 7, .box_h = 6, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 6664, .adv_w = 128, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 6670, .adv_w = 128, .box_w = 8, .box_h = 6, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 6676, .adv_w = 128, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 6682, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 6689, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 6696, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 6703, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 6710, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 6718, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 6726, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 6733, .adv_w = 128, .box_w = 7, .box_h = 4, .ofs_x = 1, .ofs_y = 8},
    {.bitmap_index = 6737, .adv_w = 128, .box_w = 7, .box_h = 4, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 6741, .adv_w = 128, .box_w = 4, .box_h = 8, .ofs_x = 3, .ofs_y = 5},
    {.bitmap_index = 6745, .adv_w = 128, .box_w = 4, .box_h = 8, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 6749, .adv_w = 128, .box_w = 7, .box_h = 4, .ofs_x = 0, .ofs_y = 8},
    {.bitmap_index = 6753, .adv_w = 128, .box_w = 7, .box_h = 4, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 6757, .adv_w = 128, .box_w = 4, .box_h = 8, .ofs_x = 3, .ofs_y = 5},
    {.bitmap_index = 6761, .adv_w = 128, .box_w = 4, .box_h = 8, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 6765, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 6773, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 6781, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 6789, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 6797, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 6805, .adv_w = 128, .box_w = 6, .box_h = 1, .ofs_x = 1, .ofs_y = 9},
    {.bitmap_index = 6806, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 6812, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 6818, .adv_w = 128, .box_w = 7, .box_h = 6, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 6824, .adv_w = 128, .box_w = 6, .box_h = 4, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 6827, .adv_w = 128, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 6834, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 6842, .adv_w = 128, .box_w = 9, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 6851, .adv_w = 128, .box_w = 8, .box_h = 4, .ofs_x = 0, .ofs_y = 7},
    {.bitmap_index = 6855, .adv_w = 128, .box_w = 7, .box_h = 4, .ofs_x = 0, .ofs_y = 7},
    {.bitmap_index = 6859, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 6865, .adv_w = 128, .box_w = 7, .box_h = 5, .ofs_x = 0, .ofs_y = 7},
    {.bitmap_index = 6870, .adv_w = 128, .box_w = 6, .box_h = 5, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 6874, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 6880, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 6886, .adv_w = 128, .box_w = 2, .box_h = 2, .ofs_x = 3, .ofs_y = 9},
    {.bitmap_index = 6887, .adv_w = 128, .box_w = 9, .box_h = 6, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 6894, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 6901, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 6909, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 6917, .adv_w = 128, .box_w = 5, .box_h = 8, .ofs_x = 3, .ofs_y = 5},
    {.bitmap_index = 6922, .adv_w = 128, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 6927, .adv_w = 128, .box_w = 4, .box_h = 8, .ofs_x = 2, .ofs_y = 5},
    {.bitmap_index = 6931, .adv_w = 128, .box_w = 2, .box_h = 8, .ofs_x = 2, .ofs_y = 5},
    {.bitmap_index = 6933, .adv_w = 128, .box_w = 4, .box_h = 7, .ofs_x = 2, .ofs_y = 6},
    {.bitmap_index = 6937, .adv_w = 128, .box_w = 4, .box_h = 8, .ofs_x = 2, .ofs_y = 5},
    {.bitmap_index = 6941, .adv_w = 128, .box_w = 2, .box_h = 8, .ofs_x = 4, .ofs_y = 5},
    {.bitmap_index = 6943, .adv_w = 128, .box_w = 4, .box_h = 7, .ofs_x = 2, .ofs_y = 6},
    {.bitmap_index = 6947, .adv_w = 128, .box_w = 4, .box_h = 8, .ofs_x = 2, .ofs_y = 5},
    {.bitmap_index = 6951, .adv_w = 128, .box_w = 2, .box_h = 8, .ofs_x = 2, .ofs_y = 5},
    {.bitmap_index = 6953, .adv_w = 128, .box_w = 4, .box_h = 7, .ofs_x = 2, .ofs_y = 6},
    {.bitmap_index = 6957, .adv_w = 128, .box_w = 4, .box_h = 8, .ofs_x = 2, .ofs_y = 5},
    {.bitmap_index = 6961, .adv_w = 128, .box_w = 2, .box_h = 8, .ofs_x = 4, .ofs_y = 5},
    {.bitmap_index = 6963, .adv_w = 128, .box_w = 4, .box_h = 7, .ofs_x = 2, .ofs_y = 6},
    {.bitmap_index = 6967, .adv_w = 128, .box_w = 4, .box_h = 8, .ofs_x = 3, .ofs_y = 5},
    {.bitmap_index = 6971, .adv_w = 128, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 6976, .adv_w = 128, .box_w = 4, .box_h = 7, .ofs_x = 3, .ofs_y = 6},
    {.bitmap_index = 6980, .adv_w = 128, .box_w = 2, .box_h = 8, .ofs_x = 3, .ofs_y = 5},
    {.bitmap_index = 6982, .adv_w = 128, .box_w = 4, .box_h = 8, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 6986, .adv_w = 128, .box_w = 5, .box_h = 8, .ofs_x = 3, .ofs_y = 5},
    {.bitmap_index = 6991, .adv_w = 128, .box_w = 4, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 6995, .adv_w = 128, .box_w = 2, .box_h = 8, .ofs_x = 3, .ofs_y = 5},
    {.bitmap_index = 6997, .adv_w = 128, .box_w = 8, .box_h = 2, .ofs_x = 0, .ofs_y = 8},
    {.bitmap_index = 6999, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 7006, .adv_w = 128, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 7013, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 2, .ofs_y = 6},
    {.bitmap_index = 7019, .adv_w = 128, .box_w = 2, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 7021, .adv_w = 128, .box_w = 2, .box_h = 8, .ofs_x = 6, .ofs_y = 5},
    {.bitmap_index = 7023, .adv_w = 128, .box_w = 8, .box_h = 2, .ofs_x = 0, .ofs_y = 11},
    {.bitmap_index = 7025, .adv_w = 128, .box_w = 8, .box_h = 2, .ofs_x = 0, .ofs_y = 9},
    {.bitmap_index = 7027, .adv_w = 128, .box_w = 8, .box_h = 2, .ofs_x = 0, .ofs_y = 7},
    {.bitmap_index = 7029, .adv_w = 128, .box_w = 8, .box_h = 2, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 7031, .adv_w = 128, .box_w = 2, .box_h = 8, .ofs_x = 3, .ofs_y = 5},
    {.bitmap_index = 7033, .adv_w = 128, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 7040, .adv_w = 128, .box_w = 7, .box_h = 5, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 7045, .adv_w = 128, .box_w = 7, .box_h = 5, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 7050, .adv_w = 128, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 7055, .adv_w = 128, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 7060, .adv_w = 128, .box_w = 8, .box_h = 2, .ofs_x = 0, .ofs_y = 8},
    {.bitmap_index = 7062, .adv_w = 128, .box_w = 8, .box_h = 4, .ofs_x = 0, .ofs_y = 7},
    {.bitmap_index = 7066, .adv_w = 128, .box_w = 2, .box_h = 8, .ofs_x = 3, .ofs_y = 5},
    {.bitmap_index = 7068, .adv_w = 128, .box_w = 4, .box_h = 8, .ofs_x = 2, .ofs_y = 5},
    {.bitmap_index = 7072, .adv_w = 128, .box_w = 8, .box_h = 2, .ofs_x = 0, .ofs_y = 8},
    {.bitmap_index = 7074, .adv_w = 128, .box_w = 8, .box_h = 4, .ofs_x = 0, .ofs_y = 7},
    {.bitmap_index = 7078, .adv_w = 128, .box_w = 2, .box_h = 8, .ofs_x = 3, .ofs_y = 5},
    {.bitmap_index = 7080, .adv_w = 128, .box_w = 4, .box_h = 8, .ofs_x = 2, .ofs_y = 5},
    {.bitmap_index = 7084, .adv_w = 128, .box_w = 7, .box_h = 2, .ofs_x = 0, .ofs_y = 8},
    {.bitmap_index = 7086, .adv_w = 128, .box_w = 7, .box_h = 2, .ofs_x = 0, .ofs_y = 8},
    {.bitmap_index = 7088, .adv_w = 128, .box_w = 2, .box_h = 7, .ofs_x = 3, .ofs_y = 6},
    {.bitmap_index = 7090, .adv_w = 128, .box_w = 4, .box_h = 7, .ofs_x = 2, .ofs_y = 6},
    {.bitmap_index = 7094, .adv_w = 128, .box_w = 5, .box_h = 5, .ofs_x = 3, .ofs_y = 5},
    {.bitmap_index = 7098, .adv_w = 128, .box_w = 5, .box_h = 6, .ofs_x = 3, .ofs_y = 5},
    {.bitmap_index = 7102, .adv_w = 128, .box_w = 6, .box_h = 5, .ofs_x = 2, .ofs_y = 5},
    {.bitmap_index = 7106, .adv_w = 128, .box_w = 6, .box_h = 6, .ofs_x = 2, .ofs_y = 5},
    {.bitmap_index = 7111, .adv_w = 128, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 7115, .adv_w = 128, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 7119, .adv_w = 128, .box_w = 6, .box_h = 5, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 7123, .adv_w = 128, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 7128, .adv_w = 128, .box_w = 5, .box_h = 5, .ofs_x = 3, .ofs_y = 8},
    {.bitmap_index = 7132, .adv_w = 128, .box_w = 5, .box_h = 6, .ofs_x = 3, .ofs_y = 7},
    {.bitmap_index = 7136, .adv_w = 128, .box_w = 6, .box_h = 5, .ofs_x = 2, .ofs_y = 8},
    {.bitmap_index = 7140, .adv_w = 128, .box_w = 6, .box_h = 6, .ofs_x = 2, .ofs_y = 7},
    {.bitmap_index = 7145, .adv_w = 128, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 8},
    {.bitmap_index = 7149, .adv_w = 128, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 7},
    {.bitmap_index = 7153, .adv_w = 128, .box_w = 6, .box_h = 5, .ofs_x = 0, .ofs_y = 8},
    {.bitmap_index = 7157, .adv_w = 128, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = 7},
    {.bitmap_index = 7162, .adv_w = 128, .box_w = 5, .box_h = 8, .ofs_x = 3, .ofs_y = 5},
    {.bitmap_index = 7167, .adv_w = 128, .box_w = 5, .box_h = 8, .ofs_x = 3, .ofs_y = 5},
    {.bitmap_index = 7172, .adv_w = 128, .box_w = 6, .box_h = 8, .ofs_x = 2, .ofs_y = 5},
    {.bitmap_index = 7178, .adv_w = 128, .box_w = 6, .box_h = 8, .ofs_x = 2, .ofs_y = 5},
    {.bitmap_index = 7184, .adv_w = 128, .box_w = 6, .box_h = 8, .ofs_x = 2, .ofs_y = 5},
    {.bitmap_index = 7190, .adv_w = 128, .box_w = 6, .box_h = 8, .ofs_x = 2, .ofs_y = 5},
    {.bitmap_index = 7196, .adv_w = 128, .box_w = 6, .box_h = 8, .ofs_x = 2, .ofs_y = 5},
    {.bitmap_index = 7202, .adv_w = 128, .box_w = 6, .box_h = 8, .ofs_x = 2, .ofs_y = 5},
    {.bitmap_index = 7208, .adv_w = 128, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 7213, .adv_w = 128, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 7218, .adv_w = 128, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 7224, .adv_w = 128, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 7230, .adv_w = 128, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 7236, .adv_w = 128, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 7242, .adv_w = 128, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 7248, .adv_w = 128, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 7254, .adv_w = 128, .box_w = 8, .box_h = 5, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 7259, .adv_w = 128, .box_w = 8, .box_h = 6, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 7265, .adv_w = 128, .box_w = 8, .box_h = 6, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 7271, .adv_w = 128, .box_w = 8, .box_h = 6, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 7277, .adv_w = 128, .box_w = 8, .box_h = 5, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 7282, .adv_w = 128, .box_w = 8, .box_h = 6, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 7288, .adv_w = 128, .box_w = 8, .box_h = 6, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 7294, .adv_w = 128, .box_w = 8, .box_h = 6, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 7300, .adv_w = 128, .box_w = 8, .box_h = 5, .ofs_x = 0, .ofs_y = 8},
    {.bitmap_index = 7305, .adv_w = 128, .box_w = 8, .box_h = 6, .ofs_x = 0, .ofs_y = 7},
    {.bitmap_index = 7311, .adv_w = 128, .box_w = 8, .box_h = 6, .ofs_x = 0, .ofs_y = 7},
    {.bitmap_index = 7317, .adv_w = 128, .box_w = 8, .box_h = 6, .ofs_x = 0, .ofs_y = 7},
    {.bitmap_index = 7323, .adv_w = 128, .box_w = 8, .box_h = 5, .ofs_x = 0, .ofs_y = 8},
    {.bitmap_index = 7328, .adv_w = 128, .box_w = 8, .box_h = 6, .ofs_x = 0, .ofs_y = 7},
    {.bitmap_index = 7334, .adv_w = 128, .box_w = 8, .box_h = 6, .ofs_x = 0, .ofs_y = 7},
    {.bitmap_index = 7340, .adv_w = 128, .box_w = 8, .box_h = 6, .ofs_x = 0, .ofs_y = 7},
    {.bitmap_index = 7346, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 7354, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 7362, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 7370, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 7378, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 7386, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 7394, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 7402, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 7410, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 7418, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 7426, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 7434, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 7442, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 7450, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 7458, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 7466, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 7474, .adv_w = 128, .box_w = 8, .box_h = 2, .ofs_x = 0, .ofs_y = 8},
    {.bitmap_index = 7476, .adv_w = 128, .box_w = 8, .box_h = 4, .ofs_x = 0, .ofs_y = 7},
    {.bitmap_index = 7480, .adv_w = 128, .box_w = 2, .box_h = 8, .ofs_x = 3, .ofs_y = 5},
    {.bitmap_index = 7482, .adv_w = 128, .box_w = 4, .box_h = 8, .ofs_x = 2, .ofs_y = 5},
    {.bitmap_index = 7486, .adv_w = 128, .box_w = 8, .box_h = 3, .ofs_x = 0, .ofs_y = 8},
    {.bitmap_index = 7489, .adv_w = 128, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 7494, .adv_w = 128, .box_w = 5, .box_h = 6, .ofs_x = 3, .ofs_y = 5},
    {.bitmap_index = 7498, .adv_w = 128, .box_w = 7, .box_h = 5, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 7503, .adv_w = 128, .box_w = 7, .box_h = 6, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 7509, .adv_w = 128, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 7513, .adv_w = 128, .box_w = 6, .box_h = 5, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 7517, .adv_w = 128, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 7522, .adv_w = 128, .box_w = 5, .box_h = 5, .ofs_x = 3, .ofs_y = 8},
    {.bitmap_index = 7526, .adv_w = 128, .box_w = 7, .box_h = 5, .ofs_x = 1, .ofs_y = 8},
    {.bitmap_index = 7531, .adv_w = 128, .box_w = 7, .box_h = 5, .ofs_x = 1, .ofs_y = 8},
    {.bitmap_index = 7536, .adv_w = 128, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 8},
    {.bitmap_index = 7540, .adv_w = 128, .box_w = 6, .box_h = 5, .ofs_x = 0, .ofs_y = 8},
    {.bitmap_index = 7544, .adv_w = 128, .box_w = 6, .box_h = 5, .ofs_x = 0, .ofs_y = 8},
    {.bitmap_index = 7548, .adv_w = 128, .box_w = 5, .box_h = 8, .ofs_x = 3, .ofs_y = 5},
    {.bitmap_index = 7553, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 7560, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 7567, .adv_w = 128, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 7572, .adv_w = 128, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 7578, .adv_w = 128, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 7584, .adv_w = 128, .box_w = 8, .box_h = 6, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 7590, .adv_w = 128, .box_w = 8, .box_h = 5, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 7595, .adv_w = 128, .box_w = 8, .box_h = 6, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 7601, .adv_w = 128, .box_w = 8, .box_h = 5, .ofs_x = 0, .ofs_y = 8},
    {.bitmap_index = 7606, .adv_w = 128, .box_w = 8, .box_h = 5, .ofs_x = 0, .ofs_y = 8},
    {.bitmap_index = 7611, .adv_w = 128, .box_w = 8, .box_h = 5, .ofs_x = 0, .ofs_y = 8},
    {.bitmap_index = 7616, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 7624, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 7632, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 7640, .adv_w = 128, .box_w = 5, .box_h = 5, .ofs_x = 3, .ofs_y = 5},
    {.bitmap_index = 7644, .adv_w = 128, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 7648, .adv_w = 128, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 8},
    {.bitmap_index = 7652, .adv_w = 128, .box_w = 5, .box_h = 5, .ofs_x = 3, .ofs_y = 8},
    {.bitmap_index = 7656, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 7664, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 7672, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 7680, .adv_w = 128, .box_w = 4, .box_h = 2, .ofs_x = 0, .ofs_y = 8},
    {.bitmap_index = 7681, .adv_w = 128, .box_w = 2, .box_h = 4, .ofs_x = 3, .ofs_y = 9},
    {.bitmap_index = 7682, .adv_w = 128, .box_w = 4, .box_h = 2, .ofs_x = 4, .ofs_y = 8},
    {.bitmap_index = 7683, .adv_w = 128, .box_w = 2, .box_h = 4, .ofs_x = 3, .ofs_y = 5},
    {.bitmap_index = 7684, .adv_w = 128, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 7},
    {.bitmap_index = 7686, .adv_w = 128, .box_w = 4, .box_h = 4, .ofs_x = 2, .ofs_y = 9},
    {.bitmap_index = 7688, .adv_w = 128, .box_w = 4, .box_h = 4, .ofs_x = 4, .ofs_y = 7},
    {.bitmap_index = 7690, .adv_w = 128, .box_w = 4, .box_h = 4, .ofs_x = 2, .ofs_y = 5},
    {.bitmap_index = 7692, .adv_w = 128, .box_w = 8, .box_h = 4, .ofs_x = 0, .ofs_y = 7},
    {.bitmap_index = 7696, .adv_w = 128, .box_w = 4, .box_h = 8, .ofs_x = 2, .ofs_y = 5},
    {.bitmap_index = 7700, .adv_w = 128, .box_w = 8, .box_h = 4, .ofs_x = 0, .ofs_y = 7},
    {.bitmap_index = 7704, .adv_w = 128, .box_w = 4, .box_h = 8, .ofs_x = 2, .ofs_y = 5},
    {.bitmap_index = 7708, .adv_w = 128, .box_w = 8, .box_h = 4, .ofs_x = 0, .ofs_y = 9},
    {.bitmap_index = 7712, .adv_w = 128, .box_w = 8, .box_h = 1, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 7713, .adv_w = 128, .box_w = 8, .box_h = 2, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 7715, .adv_w = 128, .box_w = 8, .box_h = 3, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 7718, .adv_w = 128, .box_w = 8, .box_h = 4, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 7722, .adv_w = 128, .box_w = 8, .box_h = 5, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 7727, .adv_w = 128, .box_w = 8, .box_h = 6, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 7733, .adv_w = 128, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 7740, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 7748, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 7755, .adv_w = 128, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 7761, .adv_w = 128, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 7766, .adv_w = 128, .box_w = 4, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 7770, .adv_w = 128, .box_w = 3, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 7773, .adv_w = 128, .box_w = 2, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 7775, .adv_w = 128, .box_w = 1, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 7776, .adv_w = 128, .box_w = 4, .box_h = 8, .ofs_x = 4, .ofs_y = 5},
    {.bitmap_index = 7780, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 7787, .adv_w = 128, .box_w = 9, .box_h = 9, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 7798, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 7806, .adv_w = 128, .box_w = 8, .box_h = 1, .ofs_x = 0, .ofs_y = 12},
    {.bitmap_index = 7807, .adv_w = 128, .box_w = 1, .box_h = 8, .ofs_x = 7, .ofs_y = 5},
    {.bitmap_index = 7808, .adv_w = 128, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 7810, .adv_w = 128, .box_w = 4, .box_h = 4, .ofs_x = 4, .ofs_y = 5},
    {.bitmap_index = 7812, .adv_w = 128, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 9},
    {.bitmap_index = 7814, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 7822, .adv_w = 128, .box_w = 9, .box_h = 9, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 7833, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 7841, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 7849, .adv_w = 128, .box_w = 4, .box_h = 4, .ofs_x = 4, .ofs_y = 9},
    {.bitmap_index = 7851, .adv_w = 128, .box_w = 9, .box_h = 9, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 7862, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 7870, .adv_w = 128, .box_w = 6, .box_h = 6, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 7875, .adv_w = 128, .box_w = 6, .box_h = 6, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 7880, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 7887, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 7894, .adv_w = 128, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 7901, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 7908, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 7916, .adv_w = 128, .box_w = 9, .box_h = 9, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 7927, .adv_w = 128, .box_w = 9, .box_h = 9, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 7938, .adv_w = 128, .box_w = 9, .box_h = 9, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 7949, .adv_w = 128, .box_w = 3, .box_h = 3, .ofs_x = 2, .ofs_y = 8},
    {.bitmap_index = 7951, .adv_w = 128, .box_w = 3, .box_h = 3, .ofs_x = 2, .ofs_y = 8},
    {.bitmap_index = 7953, .adv_w = 128, .box_w = 6, .box_h = 3, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 7956, .adv_w = 128, .box_w = 6, .box_h = 3, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 7959, .adv_w = 128, .box_w = 4, .box_h = 7, .ofs_x = 2, .ofs_y = 6},
    {.bitmap_index = 7963, .adv_w = 128, .box_w = 4, .box_h = 7, .ofs_x = 2, .ofs_y = 6},
    {.bitmap_index = 7967, .adv_w = 128, .box_w = 8, .box_h = 3, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 7970, .adv_w = 128, .box_w = 8, .box_h = 3, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 7973, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 7981, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 7989, .adv_w = 128, .box_w = 5, .box_h = 6, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 7993, .adv_w = 128, .box_w = 8, .box_h = 6, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 7999, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 8007, .adv_w = 128, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 8014, .adv_w = 128, .box_w = 6, .box_h = 5, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 8018, .adv_w = 128, .box_w = 7, .box_h = 6, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 8024, .adv_w = 128, .box_w = 8, .box_h = 5, .ofs_x = 0, .ofs_y = 7},
    {.bitmap_index = 8029, .adv_w = 128, .box_w = 8, .box_h = 5, .ofs_x = 0, .ofs_y = 7},
    {.bitmap_index = 8034, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 8042, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 8050, .adv_w = 128, .box_w = 5, .box_h = 6, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 8054, .adv_w = 128, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 8061, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 8069, .adv_w = 128, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 8076, .adv_w = 128, .box_w = 6, .box_h = 5, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 8080, .adv_w = 128, .box_w = 7, .box_h = 6, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 8086, .adv_w = 128, .box_w = 8, .box_h = 5, .ofs_x = 0, .ofs_y = 7},
    {.bitmap_index = 8091, .adv_w = 128, .box_w = 8, .box_h = 5, .ofs_x = 0, .ofs_y = 7},
    {.bitmap_index = 8096, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 8104, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 8112, .adv_w = 128, .box_w = 9, .box_h = 9, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 8123, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 8131, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 8138, .adv_w = 128, .box_w = 6, .box_h = 6, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 8143, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 8150, .adv_w = 128, .box_w = 8, .box_h = 6, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 8156, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 8164, .adv_w = 128, .box_w = 6, .box_h = 6, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 8169, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 8177, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 8185, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 8193, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 8201, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 8209, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 8217, .adv_w = 128, .box_w = 6, .box_h = 6, .ofs_x = 2, .ofs_y = 6},
    {.bitmap_index = 8222, .adv_w = 128, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 8227, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 8235, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 8243, .adv_w = 128, .box_w = 8, .box_h = 4, .ofs_x = 0, .ofs_y = 9},
    {.bitmap_index = 8247, .adv_w = 128, .box_w = 8, .box_h = 4, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 8251, .adv_w = 128, .box_w = 5, .box_h = 4, .ofs_x = 0, .ofs_y = 9},
    {.bitmap_index = 8254, .adv_w = 128, .box_w = 5, .box_h = 4, .ofs_x = 3, .ofs_y = 9},
    {.bitmap_index = 8257, .adv_w = 128, .box_w = 5, .box_h = 4, .ofs_x = 3, .ofs_y = 5},
    {.bitmap_index = 8260, .adv_w = 128, .box_w = 5, .box_h = 4, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 8263, .adv_w = 128, .box_w = 8, .box_h = 4, .ofs_x = 0, .ofs_y = 9},
    {.bitmap_index = 8267, .adv_w = 128, .box_w = 8, .box_h = 4, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 8271, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 8279, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 8287, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 8295, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 8303, .adv_w = 128, .box_w = 5, .box_h = 5, .ofs_x = 2, .ofs_y = 6},
    {.bitmap_index = 8307, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 8315, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 8323, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 8331, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 8339, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 8347, .adv_w = 128, .box_w = 9, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 8356, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 8364, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 8372, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 8380, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 8388, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 8396, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 8404, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 8412, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 8420, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 8428, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 8436, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 8444, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 8452, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 8460, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 8468, .adv_w = 128, .box_w = 4, .box_h = 4, .ofs_x = 2, .ofs_y = 7},
    {.bitmap_index = 8470, .adv_w = 128, .box_w = 4, .box_h = 4, .ofs_x = 2, .ofs_y = 7},
    {.bitmap_index = 8472, .adv_w = 128, .box_w = 6, .box_h = 4, .ofs_x = 2, .ofs_y = 7},
    {.bitmap_index = 8475, .adv_w = 128, .box_w = 6, .box_h = 4, .ofs_x = 2, .ofs_y = 7},
    {.bitmap_index = 8478, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 8486, .adv_w = 128, .box_w = 9, .box_h = 9, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 8497, .adv_w = 128, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 8504, .adv_w = 128, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 8511, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 8518, .adv_w = 128, .box_w = 9, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 8526, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 8533, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 8540, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 8547, .adv_w = 128, .box_w = 9, .box_h = 8, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 8556, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 8563, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 8569, .adv_w = 128, .box_w = 9, .box_h = 6, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 8576, .adv_w = 128, .box_w = 7, .box_h = 5, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 8581, .adv_w = 128, .box_w = 7, .box_h = 5, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 8586, .adv_w = 128, .box_w = 7, .box_h = 5, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 8591, .adv_w = 128, .box_w = 7, .box_h = 5, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 8596, .adv_w = 128, .box_w = 7, .box_h = 5, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 8601, .adv_w = 128, .box_w = 7, .box_h = 5, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 8606, .adv_w = 128, .box_w = 7, .box_h = 5, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 8611, .adv_w = 128, .box_w = 7, .box_h = 5, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 8616, .adv_w = 128, .box_w = 9, .box_h = 9, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 8627, .adv_w = 128, .box_w = 8, .box_h = 9, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 8636, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 8644, .adv_w = 128, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 8650, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 8658, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 8665, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 8672, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 8679, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 8686, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 8693, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 8700, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 8707, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 8714, .adv_w = 128, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 8719, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 8727, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 8735, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 8743, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 8751, .adv_w = 128, .box_w = 7, .box_h = 1, .ofs_x = 0, .ofs_y = 10},
    {.bitmap_index = 8752, .adv_w = 128, .box_w = 7, .box_h = 1, .ofs_x = 0, .ofs_y = 10},
    {.bitmap_index = 8753, .adv_w = 128, .box_w = 7, .box_h = 3, .ofs_x = 0, .ofs_y = 8},
    {.bitmap_index = 8756, .adv_w = 128, .box_w = 7, .box_h = 3, .ofs_x = 0, .ofs_y = 8},
    {.bitmap_index = 8759, .adv_w = 128, .box_w = 7, .box_h = 3, .ofs_x = 0, .ofs_y = 8},
    {.bitmap_index = 8762, .adv_w = 128, .box_w = 7, .box_h = 3, .ofs_x = 0, .ofs_y = 8},
    {.bitmap_index = 8765, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 8772, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 8779, .adv_w = 128, .box_w = 8, .box_h = 6, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 8785, .adv_w = 128, .box_w = 8, .box_h = 6, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 8791, .adv_w = 128, .box_w = 5, .box_h = 5, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 8795, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 8803, .adv_w = 128, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 8810, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 8818, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 8825, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 8833, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 8841, .adv_w = 128, .box_w = 8, .box_h = 6, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 8847, .adv_w = 128, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 12},
    {.bitmap_index = 8848, .adv_w = 128, .box_w = 4, .box_h = 2, .ofs_x = 0, .ofs_y = 11},
    {.bitmap_index = 8849, .adv_w = 128, .box_w = 4, .box_h = 2, .ofs_x = 0, .ofs_y = 9},
    {.bitmap_index = 8850, .adv_w = 128, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 9},
    {.bitmap_index = 8852, .adv_w = 128, .box_w = 4, .box_h = 2, .ofs_x = 0, .ofs_y = 7},
    {.bitmap_index = 8853, .adv_w = 128, .box_w = 4, .box_h = 6, .ofs_x = 0, .ofs_y = 7},
    {.bitmap_index = 8856, .adv_w = 128, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 7},
    {.bitmap_index = 8858, .adv_w = 128, .box_w = 4, .box_h = 6, .ofs_x = 0, .ofs_y = 7},
    {.bitmap_index = 8861, .adv_w = 128, .box_w = 4, .box_h = 2, .ofs_x = 4, .ofs_y = 11},
    {.bitmap_index = 8862, .adv_w = 128, .box_w = 8, .box_h = 2, .ofs_x = 0, .ofs_y = 11},
    {.bitmap_index = 8864, .adv_w = 128, .box_w = 9, .box_h = 5, .ofs_x = 0, .ofs_y = 8},
    {.bitmap_index = 8870, .adv_w = 128, .box_w = 8, .box_h = 4, .ofs_x = 0, .ofs_y = 9},
    {.bitmap_index = 8874, .adv_w = 128, .box_w = 8, .box_h = 6, .ofs_x = 0, .ofs_y = 7},
    {.bitmap_index = 8880, .adv_w = 128, .box_w = 8, .box_h = 6, .ofs_x = 0, .ofs_y = 7},
    {.bitmap_index = 8886, .adv_w = 128, .box_w = 9, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 8894, .adv_w = 128, .box_w = 8, .box_h = 6, .ofs_x = 0, .ofs_y = 7},
    {.bitmap_index = 8900, .adv_w = 128, .box_w = 4, .box_h = 2, .ofs_x = 4, .ofs_y = 9},
    {.bitmap_index = 8901, .adv_w = 128, .box_w = 9, .box_h = 5, .ofs_x = 0, .ofs_y = 8},
    {.bitmap_index = 8907, .adv_w = 128, .box_w = 8, .box_h = 2, .ofs_x = 0, .ofs_y = 9},
    {.bitmap_index = 8909, .adv_w = 128, .box_w = 8, .box_h = 4, .ofs_x = 0, .ofs_y = 9},
    {.bitmap_index = 8913, .adv_w = 128, .box_w = 9, .box_h = 5, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 8919, .adv_w = 128, .box_w = 9, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 8927, .adv_w = 128, .box_w = 8, .box_h = 4, .ofs_x = 0, .ofs_y = 7},
    {.bitmap_index = 8931, .adv_w = 128, .box_w = 8, .box_h = 6, .ofs_x = 0, .ofs_y = 7},
    {.bitmap_index = 8937, .adv_w = 128, .box_w = 4, .box_h = 4, .ofs_x = 4, .ofs_y = 9},
    {.bitmap_index = 8939, .adv_w = 128, .box_w = 8, .box_h = 4, .ofs_x = 0, .ofs_y = 9},
    {.bitmap_index = 8943, .adv_w = 128, .box_w = 8, .box_h = 4, .ofs_x = 0, .ofs_y = 9},
    {.bitmap_index = 8947, .adv_w = 128, .box_w = 8, .box_h = 4, .ofs_x = 0, .ofs_y = 9},
    {.bitmap_index = 8951, .adv_w = 128, .box_w = 9, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 8959, .adv_w = 128, .box_w = 9, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 8967, .adv_w = 128, .box_w = 8, .box_h = 6, .ofs_x = 0, .ofs_y = 7},
    {.bitmap_index = 8973, .adv_w = 128, .box_w = 8, .box_h = 6, .ofs_x = 0, .ofs_y = 7},
    {.bitmap_index = 8979, .adv_w = 128, .box_w = 4, .box_h = 2, .ofs_x = 4, .ofs_y = 7},
    {.bitmap_index = 8980, .adv_w = 128, .box_w = 8, .box_h = 6, .ofs_x = 0, .ofs_y = 7},
    {.bitmap_index = 8986, .adv_w = 128, .box_w = 9, .box_h = 5, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 8992, .adv_w = 128, .box_w = 9, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 9000, .adv_w = 128, .box_w = 8, .box_h = 2, .ofs_x = 0, .ofs_y = 7},
    {.bitmap_index = 9002, .adv_w = 128, .box_w = 8, .box_h = 6, .ofs_x = 0, .ofs_y = 7},
    {.bitmap_index = 9008, .adv_w = 128, .box_w = 8, .box_h = 4, .ofs_x = 0, .ofs_y = 7},
    {.bitmap_index = 9012, .adv_w = 128, .box_w = 8, .box_h = 6, .ofs_x = 0, .ofs_y = 7},
    {.bitmap_index = 9018, .adv_w = 128, .box_w = 4, .box_h = 6, .ofs_x = 4, .ofs_y = 7},
    {.bitmap_index = 9021, .adv_w = 128, .box_w = 8, .box_h = 6, .ofs_x = 0, .ofs_y = 7},
    {.bitmap_index = 9027, .adv_w = 128, .box_w = 9, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 9035, .adv_w = 128, .box_w = 9, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 9043, .adv_w = 128, .box_w = 8, .box_h = 6, .ofs_x = 0, .ofs_y = 7},
    {.bitmap_index = 9049, .adv_w = 128, .box_w = 8, .box_h = 6, .ofs_x = 0, .ofs_y = 7},
    {.bitmap_index = 9055, .adv_w = 128, .box_w = 9, .box_h = 6, .ofs_x = 0, .ofs_y = 7},
    {.bitmap_index = 9062, .adv_w = 128, .box_w = 8, .box_h = 6, .ofs_x = 0, .ofs_y = 7},
    {.bitmap_index = 9068, .adv_w = 128, .box_w = 4, .box_h = 4, .ofs_x = 4, .ofs_y = 7},
    {.bitmap_index = 9070, .adv_w = 128, .box_w = 9, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 9078, .adv_w = 128, .box_w = 8, .box_h = 4, .ofs_x = 0, .ofs_y = 7},
    {.bitmap_index = 9082, .adv_w = 128, .box_w = 8, .box_h = 6, .ofs_x = 0, .ofs_y = 7},
    {.bitmap_index = 9088, .adv_w = 128, .box_w = 8, .box_h = 4, .ofs_x = 0, .ofs_y = 7},
    {.bitmap_index = 9092, .adv_w = 128, .box_w = 9, .box_h = 6, .ofs_x = 0, .ofs_y = 7},
    {.bitmap_index = 9099, .adv_w = 128, .box_w = 8, .box_h = 4, .ofs_x = 0, .ofs_y = 7},
    {.bitmap_index = 9103, .adv_w = 128, .box_w = 8, .box_h = 6, .ofs_x = 0, .ofs_y = 7},
    {.bitmap_index = 9109, .adv_w = 128, .box_w = 4, .box_h = 6, .ofs_x = 4, .ofs_y = 7},
    {.bitmap_index = 9112, .adv_w = 128, .box_w = 8, .box_h = 6, .ofs_x = 0, .ofs_y = 7},
    {.bitmap_index = 9118, .adv_w = 128, .box_w = 8, .box_h = 6, .ofs_x = 0, .ofs_y = 7},
    {.bitmap_index = 9124, .adv_w = 128, .box_w = 8, .box_h = 6, .ofs_x = 0, .ofs_y = 7},
    {.bitmap_index = 9130, .adv_w = 128, .box_w = 8, .box_h = 6, .ofs_x = 0, .ofs_y = 7},
    {.bitmap_index = 9136, .adv_w = 128, .box_w = 8, .box_h = 6, .ofs_x = 0, .ofs_y = 7},
    {.bitmap_index = 9142, .adv_w = 128, .box_w = 8, .box_h = 6, .ofs_x = 0, .ofs_y = 7},
    {.bitmap_index = 9148, .adv_w = 128, .box_w = 8, .box_h = 6, .ofs_x = 0, .ofs_y = 7},
    {.bitmap_index = 9154, .adv_w = 128, .box_w = 4, .box_h = 2, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 9155, .adv_w = 128, .box_w = 4, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 9159, .adv_w = 128, .box_w = 4, .box_h = 6, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 9162, .adv_w = 128, .box_w = 4, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 9166, .adv_w = 128, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 9168, .adv_w = 128, .box_w = 4, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 9172, .adv_w = 128, .box_w = 4, .box_h = 6, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 9175, .adv_w = 128, .box_w = 4, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 9179, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 9187, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 9195, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 9203, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 9211, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 9219, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 9227, .adv_w = 128, .box_w = 9, .box_h = 9, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 9238, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 9246, .adv_w = 128, .box_w = 8, .box_h = 6, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 9252, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 9260, .adv_w = 128, .box_w = 8, .box_h = 6, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 9266, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 9274, .adv_w = 128, .box_w = 9, .box_h = 7, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 9282, .adv_w = 128, .box_w = 9, .box_h = 9, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 9293, .adv_w = 128, .box_w = 8, .box_h = 6, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 9299, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 9307, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 9315, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 9323, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 9331, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 9339, .adv_w = 128, .box_w = 9, .box_h = 9, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 9350, .adv_w = 128, .box_w = 9, .box_h = 9, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 9361, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 9369, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 9377, .adv_w = 128, .box_w = 9, .box_h = 5, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 9383, .adv_w = 128, .box_w = 8, .box_h = 9, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 9392, .adv_w = 128, .box_w = 9, .box_h = 7, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 9400, .adv_w = 128, .box_w = 9, .box_h = 9, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 9411, .adv_w = 128, .box_w = 8, .box_h = 4, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 9415, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 9423, .adv_w = 128, .box_w = 8, .box_h = 6, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 9429, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 9437, .adv_w = 128, .box_w = 9, .box_h = 9, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 9448, .adv_w = 128, .box_w = 8, .box_h = 9, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 9457, .adv_w = 128, .box_w = 9, .box_h = 9, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 9468, .adv_w = 128, .box_w = 9, .box_h = 9, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 9479, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 9487, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 9495, .adv_w = 128, .box_w = 9, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 9504, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 9512, .adv_w = 128, .box_w = 9, .box_h = 7, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 9520, .adv_w = 128, .box_w = 9, .box_h = 9, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 9531, .adv_w = 128, .box_w = 9, .box_h = 7, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 9539, .adv_w = 128, .box_w = 8, .box_h = 9, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 9548, .adv_w = 128, .box_w = 8, .box_h = 6, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 9554, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 9562, .adv_w = 128, .box_w = 8, .box_h = 6, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 9568, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 9576, .adv_w = 128, .box_w = 9, .box_h = 9, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 9587, .adv_w = 128, .box_w = 9, .box_h = 9, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 9598, .adv_w = 128, .box_w = 9, .box_h = 9, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 9609, .adv_w = 128, .box_w = 9, .box_h = 9, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 9620, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 9628, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 9636, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 9644, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 9652, .adv_w = 128, .box_w = 4, .box_h = 2, .ofs_x = 4, .ofs_y = 5},
    {.bitmap_index = 9653, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 9661, .adv_w = 128, .box_w = 8, .box_h = 6, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 9667, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 9675, .adv_w = 128, .box_w = 9, .box_h = 5, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 9681, .adv_w = 128, .box_w = 8, .box_h = 9, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 9690, .adv_w = 128, .box_w = 9, .box_h = 7, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 9698, .adv_w = 128, .box_w = 9, .box_h = 9, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 9709, .adv_w = 128, .box_w = 4, .box_h = 8, .ofs_x = 4, .ofs_y = 5},
    {.bitmap_index = 9713, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 9721, .adv_w = 128, .box_w = 9, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 9730, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 9738, .adv_w = 128, .box_w = 9, .box_h = 9, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 9749, .adv_w = 128, .box_w = 8, .box_h = 9, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 9758, .adv_w = 128, .box_w = 9, .box_h = 9, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 9769, .adv_w = 128, .box_w = 9, .box_h = 9, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 9780, .adv_w = 128, .box_w = 4, .box_h = 6, .ofs_x = 4, .ofs_y = 5},
    {.bitmap_index = 9783, .adv_w = 128, .box_w = 9, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 9792, .adv_w = 128, .box_w = 8, .box_h = 6, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 9798, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 9806, .adv_w = 128, .box_w = 9, .box_h = 7, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 9814, .adv_w = 128, .box_w = 9, .box_h = 9, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 9825, .adv_w = 128, .box_w = 9, .box_h = 7, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 9833, .adv_w = 128, .box_w = 8, .box_h = 9, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 9842, .adv_w = 128, .box_w = 4, .box_h = 8, .ofs_x = 4, .ofs_y = 5},
    {.bitmap_index = 9846, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 9854, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 9862, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 9870, .adv_w = 128, .box_w = 9, .box_h = 9, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 9881, .adv_w = 128, .box_w = 9, .box_h = 9, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 9892, .adv_w = 128, .box_w = 9, .box_h = 9, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 9903, .adv_w = 128, .box_w = 9, .box_h = 9, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 9914, .adv_w = 128, .box_w = 4, .box_h = 4, .ofs_x = 4, .ofs_y = 5},
    {.bitmap_index = 9916, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 9924, .adv_w = 128, .box_w = 9, .box_h = 7, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 9932, .adv_w = 128, .box_w = 9, .box_h = 9, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 9943, .adv_w = 128, .box_w = 8, .box_h = 4, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 9947, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 9955, .adv_w = 128, .box_w = 8, .box_h = 6, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 9961, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 9969, .adv_w = 128, .box_w = 4, .box_h = 8, .ofs_x = 4, .ofs_y = 5},
    {.bitmap_index = 9973, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 9981, .adv_w = 128, .box_w = 9, .box_h = 9, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 9992, .adv_w = 128, .box_w = 9, .box_h = 9, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 10003, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 10011, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 10019, .adv_w = 128, .box_w = 9, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 10028, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 10036, .adv_w = 128, .box_w = 4, .box_h = 6, .ofs_x = 4, .ofs_y = 5},
    {.bitmap_index = 10039, .adv_w = 128, .box_w = 9, .box_h = 9, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 10050, .adv_w = 128, .box_w = 8, .box_h = 6, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 10056, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 10064, .adv_w = 128, .box_w = 8, .box_h = 6, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 10070, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 10078, .adv_w = 128, .box_w = 8, .box_h = 6, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 10084, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 10092, .adv_w = 128, .box_w = 4, .box_h = 8, .ofs_x = 4, .ofs_y = 5},
    {.bitmap_index = 10096, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 10104, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 10112, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 10120, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 10128, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 10136, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 10144, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 10152, .adv_w = 128, .box_w = 8, .box_h = 2, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 10154, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 10162, .adv_w = 128, .box_w = 8, .box_h = 6, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 10168, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 10176, .adv_w = 128, .box_w = 8, .box_h = 4, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 10180, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 10188, .adv_w = 128, .box_w = 8, .box_h = 6, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 10194, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 10202, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 10210, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 10218, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 10226, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 10234, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 10242, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 10250, .adv_w = 128, .box_w = 9, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 10259, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 10267, .adv_w = 128, .box_w = 8, .box_h = 6, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 10273, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 10281, .adv_w = 128, .box_w = 8, .box_h = 6, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 10287, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 10295, .adv_w = 128, .box_w = 9, .box_h = 6, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 10302, .adv_w = 128, .box_w = 9, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 10311, .adv_w = 128, .box_w = 8, .box_h = 6, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 10317, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 10325, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 10333, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 10341, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 10349, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 10357, .adv_w = 128, .box_w = 9, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 10366, .adv_w = 128, .box_w = 9, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 10375, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 10383, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 10391, .adv_w = 128, .box_w = 8, .box_h = 4, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 10395, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 10403, .adv_w = 128, .box_w = 9, .box_h = 6, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 10410, .adv_w = 128, .box_w = 9, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 10419, .adv_w = 128, .box_w = 8, .box_h = 4, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 10423, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 10431, .adv_w = 128, .box_w = 8, .box_h = 6, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 10437, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 10445, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 10453, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 10461, .adv_w = 128, .box_w = 9, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 10470, .adv_w = 128, .box_w = 9, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 10479, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 10487, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 10495, .adv_w = 128, .box_w = 9, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 10504, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 10512, .adv_w = 128, .box_w = 8, .box_h = 6, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 10518, .adv_w = 128, .box_w = 9, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 10527, .adv_w = 128, .box_w = 8, .box_h = 6, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 10533, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 10541, .adv_w = 128, .box_w = 8, .box_h = 6, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 10547, .adv_w = 128, .box_w = 9, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 10556, .adv_w = 128, .box_w = 8, .box_h = 6, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 10562, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 10570, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 10578, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 10586, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 10594, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 10602, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 10610, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 10618, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 10626, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 10634, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 10641, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 10649, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 10657, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 10665, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 10673, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 10681, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 10689, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 10697, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 10705, .adv_w = 128, .box_w = 2, .box_h = 2, .ofs_x = 3, .ofs_y = 8},
    {.bitmap_index = 10706, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 10714, .adv_w = 128, .box_w = 5, .box_h = 6, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 10718, .adv_w = 128, .box_w = 5, .box_h = 6, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 10722, .adv_w = 128, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 10727, .adv_w = 128, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 10733, .adv_w = 128, .box_w = 5, .box_h = 5, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 10737, .adv_w = 128, .box_w = 3, .box_h = 5, .ofs_x = 2, .ofs_y = 7},
    {.bitmap_index = 10739, .adv_w = 128, .box_w = 3, .box_h = 5, .ofs_x = 2, .ofs_y = 7},
    {.bitmap_index = 10741, .adv_w = 128, .box_w = 8, .box_h = 6, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 10747, .adv_w = 128, .box_w = 8, .box_h = 6, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 10753, .adv_w = 128, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 10759, .adv_w = 128, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 10765, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 10773, .adv_w = 128, .box_w = 6, .box_h = 6, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 10778, .adv_w = 128, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 10783, .adv_w = 128, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 10790, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 10797, .adv_w = 128, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 10804, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 10811, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 10818, .adv_w = 128, .box_w = 6, .box_h = 6, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 10823, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 10830, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 10837, .adv_w = 128, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 10844, .adv_w = 128, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 10851, .adv_w = 128, .box_w = 6, .box_h = 6, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 10856, .adv_w = 128, .box_w = 6, .box_h = 6, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 10861, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 10867, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 10874, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 10881, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 10888, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 10895, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 10902, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 10909, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 10916, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 10923, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 10930, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 10937, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 10944, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 10951, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 10958, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 10965, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 10972, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 10979, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 10986, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 10993, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 11000, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 11007, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 11014, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 11021, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 11028, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 11035, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 11042, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 11049, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 11056, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 11063, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 11070, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 11077, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 11084, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 11091, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 11098, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 11105, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 11112, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 11119, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 11126, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 11133, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 11140, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 11147, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 11154, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 11161, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 11168, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 11175, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 11182, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 11189, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 11196, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 11203, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 11210, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 11217, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 11224, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 11231, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 11238, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 11245, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 11252, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 11259, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 11266, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 11273, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 11280, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 11287, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 11294, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 11301, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 11308, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 11315, .adv_w = 128, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 12},
    {.bitmap_index = 11316, .adv_w = 128, .box_w = 4, .box_h = 3, .ofs_x = 0, .ofs_y = 10},
    {.bitmap_index = 11318, .adv_w = 128, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 7},
    {.bitmap_index = 11320, .adv_w = 128, .box_w = 4, .box_h = 6, .ofs_x = 0, .ofs_y = 7},
    {.bitmap_index = 11323, .adv_w = 128, .box_w = 4, .box_h = 3, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 11325, .adv_w = 128, .box_w = 4, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 11329, .adv_w = 128, .box_w = 4, .box_h = 6, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 11332, .adv_w = 128, .box_w = 4, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 11336, .adv_w = 128, .box_w = 4, .box_h = 3, .ofs_x = 4, .ofs_y = 10},
    {.bitmap_index = 11338, .adv_w = 128, .box_w = 8, .box_h = 3, .ofs_x = 0, .ofs_y = 10},
    {.bitmap_index = 11341, .adv_w = 128, .box_w = 8, .box_h = 6, .ofs_x = 0, .ofs_y = 7},
    {.bitmap_index = 11347, .adv_w = 128, .box_w = 8, .box_h = 6, .ofs_x = 0, .ofs_y = 7},
    {.bitmap_index = 11353, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 11361, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 11369, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 11377, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 11385, .adv_w = 128, .box_w = 4, .box_h = 4, .ofs_x = 4, .ofs_y = 7},
    {.bitmap_index = 11387, .adv_w = 128, .box_w = 8, .box_h = 6, .ofs_x = 0, .ofs_y = 7},
    {.bitmap_index = 11393, .adv_w = 128, .box_w = 8, .box_h = 4, .ofs_x = 0, .ofs_y = 7},
    {.bitmap_index = 11397, .adv_w = 128, .box_w = 8, .box_h = 6, .ofs_x = 0, .ofs_y = 7},
    {.bitmap_index = 11403, .adv_w = 128, .box_w = 8, .box_h = 6, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 11409, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 11417, .adv_w = 128, .box_w = 8, .box_h = 6, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 11423, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 11431, .adv_w = 128, .box_w = 4, .box_h = 6, .ofs_x = 4, .ofs_y = 7},
    {.bitmap_index = 11434, .adv_w = 128, .box_w = 8, .box_h = 6, .ofs_x = 0, .ofs_y = 7},
    {.bitmap_index = 11440, .adv_w = 128, .box_w = 8, .box_h = 6, .ofs_x = 0, .ofs_y = 7},
    {.bitmap_index = 11446, .adv_w = 128, .box_w = 8, .box_h = 6, .ofs_x = 0, .ofs_y = 7},
    {.bitmap_index = 11452, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 11460, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 11468, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 11476, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 11484, .adv_w = 128, .box_w = 4, .box_h = 3, .ofs_x = 4, .ofs_y = 5},
    {.bitmap_index = 11486, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 11494, .adv_w = 128, .box_w = 8, .box_h = 6, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 11500, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 11508, .adv_w = 128, .box_w = 8, .box_h = 3, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 11511, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 11519, .adv_w = 128, .box_w = 8, .box_h = 6, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 11525, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 11533, .adv_w = 128, .box_w = 4, .box_h = 8, .ofs_x = 4, .ofs_y = 5},
    {.bitmap_index = 11537, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 11545, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 11553, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 11561, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 11569, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 11577, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 11585, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 11593, .adv_w = 128, .box_w = 4, .box_h = 6, .ofs_x = 4, .ofs_y = 5},
    {.bitmap_index = 11596, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 11604, .adv_w = 128, .box_w = 8, .box_h = 6, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 11610, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 11618, .adv_w = 128, .box_w = 8, .box_h = 6, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 11624, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 11632, .adv_w = 128, .box_w = 8, .box_h = 6, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 11638, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 11646, .adv_w = 128, .box_w = 4, .box_h = 8, .ofs_x = 4, .ofs_y = 5},
    {.bitmap_index = 11650, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 11658, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 11666, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 11674, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 11682, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 11690, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 11698, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 11706, .adv_w = 128, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 12},
    {.bitmap_index = 11707, .adv_w = 128, .box_w = 3, .box_h = 2, .ofs_x = 0, .ofs_y = 11},
    {.bitmap_index = 11708, .adv_w = 128, .box_w = 3, .box_h = 2, .ofs_x = 0, .ofs_y = 8},
    {.bitmap_index = 11709, .adv_w = 128, .box_w = 3, .box_h = 5, .ofs_x = 0, .ofs_y = 8},
    {.bitmap_index = 11711, .adv_w = 128, .box_w = 3, .box_h = 2, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 11712, .adv_w = 128, .box_w = 3, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 11715, .adv_w = 128, .box_w = 3, .box_h = 5, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 11717, .adv_w = 128, .box_w = 3, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 11720, .adv_w = 128, .box_w = 3, .box_h = 2, .ofs_x = 4, .ofs_y = 11},
    {.bitmap_index = 11721, .adv_w = 128, .box_w = 7, .box_h = 2, .ofs_x = 0, .ofs_y = 11},
    {.bitmap_index = 11723, .adv_w = 128, .box_w = 7, .box_h = 5, .ofs_x = 0, .ofs_y = 8},
    {.bitmap_index = 11728, .adv_w = 128, .box_w = 7, .box_h = 5, .ofs_x = 0, .ofs_y = 8},
    {.bitmap_index = 11733, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 11740, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 11747, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 11754, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 11761, .adv_w = 128, .box_w = 3, .box_h = 2, .ofs_x = 4, .ofs_y = 8},
    {.bitmap_index = 11762, .adv_w = 128, .box_w = 7, .box_h = 5, .ofs_x = 0, .ofs_y = 8},
    {.bitmap_index = 11767, .adv_w = 128, .box_w = 7, .box_h = 2, .ofs_x = 0, .ofs_y = 8},
    {.bitmap_index = 11769, .adv_w = 128, .box_w = 7, .box_h = 5, .ofs_x = 0, .ofs_y = 8},
    {.bitmap_index = 11774, .adv_w = 128, .box_w = 7, .box_h = 4, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 11778, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 11785, .adv_w = 128, .box_w = 7, .box_h = 5, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 11790, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 11797, .adv_w = 128, .box_w = 3, .box_h = 5, .ofs_x = 4, .ofs_y = 8},
    {.bitmap_index = 11799, .adv_w = 128, .box_w = 7, .box_h = 5, .ofs_x = 0, .ofs_y = 8},
    {.bitmap_index = 11804, .adv_w = 128, .box_w = 7, .box_h = 5, .ofs_x = 0, .ofs_y = 8},
    {.bitmap_index = 11809, .adv_w = 128, .box_w = 7, .box_h = 5, .ofs_x = 0, .ofs_y = 8},
    {.bitmap_index = 11814, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 11821, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 11828, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 11835, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 11842, .adv_w = 128, .box_w = 3, .box_h = 2, .ofs_x = 4, .ofs_y = 5},
    {.bitmap_index = 11843, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 11850, .adv_w = 128, .box_w = 7, .box_h = 5, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 11855, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 11862, .adv_w = 128, .box_w = 7, .box_h = 3, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 11865, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 11872, .adv_w = 128, .box_w = 7, .box_h = 5, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 11877, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 11884, .adv_w = 128, .box_w = 3, .box_h = 8, .ofs_x = 4, .ofs_y = 5},
    {.bitmap_index = 11887, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 11894, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 11901, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 11908, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 11915, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 11922, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 11929, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 11936, .adv_w = 128, .box_w = 3, .box_h = 5, .ofs_x = 4, .ofs_y = 5},
    {.bitmap_index = 11938, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 11945, .adv_w = 128, .box_w = 7, .box_h = 5, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 11950, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 11957, .adv_w = 128, .box_w = 7, .box_h = 5, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 11962, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 11969, .adv_w = 128, .box_w = 7, .box_h = 5, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 11974, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 11981, .adv_w = 128, .box_w = 3, .box_h = 8, .ofs_x = 4, .ofs_y = 5},
    {.bitmap_index = 11984, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 11991, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 11998, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 12005, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 12012, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 12019, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 12026, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 12033, .adv_w = 128, .box_w = 2, .box_h = 8, .ofs_x = 6, .ofs_y = 5},
    {.bitmap_index = 12035, .adv_w = 128, .box_w = 3, .box_h = 8, .ofs_x = 5, .ofs_y = 5},
    {.bitmap_index = 12038, .adv_w = 128, .box_w = 5, .box_h = 8, .ofs_x = 3, .ofs_y = 5},
    {.bitmap_index = 12043, .adv_w = 128, .box_w = 6, .box_h = 8, .ofs_x = 2, .ofs_y = 5},
    {.bitmap_index = 12049, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 12056, .adv_w = 128, .box_w = 8, .box_h = 2, .ofs_x = 0, .ofs_y = 11},
    {.bitmap_index = 12058, .adv_w = 128, .box_w = 8, .box_h = 3, .ofs_x = 0, .ofs_y = 10},
    {.bitmap_index = 12061, .adv_w = 128, .box_w = 8, .box_h = 5, .ofs_x = 0, .ofs_y = 8},
    {.bitmap_index = 12066, .adv_w = 128, .box_w = 8, .box_h = 6, .ofs_x = 0, .ofs_y = 7},
    {.bitmap_index = 12072, .adv_w = 128, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 12079, .adv_w = 128, .box_w = 9, .box_h = 5, .ofs_x = 0, .ofs_y = 8},
    {.bitmap_index = 12085, .adv_w = 128, .box_w = 9, .box_h = 5, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 12091, .adv_w = 128, .box_w = 5, .box_h = 9, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 12097, .adv_w = 128, .box_w = 5, .box_h = 9, .ofs_x = 4, .ofs_y = 4},
    {.bitmap_index = 12103, .adv_w = 128, .box_w = 9, .box_h = 5, .ofs_x = 0, .ofs_y = 8},
    {.bitmap_index = 12109, .adv_w = 128, .box_w = 9, .box_h = 5, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 12115, .adv_w = 128, .box_w = 5, .box_h = 9, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 12121, .adv_w = 128, .box_w = 5, .box_h = 9, .ofs_x = 4, .ofs_y = 4},
    {.bitmap_index = 12127, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 12135, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 12143, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 12151, .adv_w = 128, .box_w = 9, .box_h = 9, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 12162, .adv_w = 128, .box_w = 7, .box_h = 6, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 12168, .adv_w = 128, .box_w = 7, .box_h = 6, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 12174, .adv_w = 128, .box_w = 7, .box_h = 6, .ofs_x = 0, .ofs_y = 7},
    {.bitmap_index = 12180, .adv_w = 128, .box_w = 7, .box_h = 6, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 12186, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 12194, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 12202, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 12210, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 12218, .adv_w = 128, .box_w = 8, .box_h = 4, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 12222, .adv_w = 128, .box_w = 8, .box_h = 4, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 12226, .adv_w = 128, .box_w = 8, .box_h = 4, .ofs_x = 0, .ofs_y = 9},
    {.bitmap_index = 12230, .adv_w = 128, .box_w = 8, .box_h = 4, .ofs_x = 0, .ofs_y = 9},
    {.bitmap_index = 12234, .adv_w = 128, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 12241, .adv_w = 128, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 12248, .adv_w = 128, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 12255, .adv_w = 128, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 12262, .adv_w = 128, .box_w = 4, .box_h = 8, .ofs_x = 4, .ofs_y = 5},
    {.bitmap_index = 12266, .adv_w = 128, .box_w = 4, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 12270, .adv_w = 128, .box_w = 4, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 12274, .adv_w = 128, .box_w = 4, .box_h = 8, .ofs_x = 4, .ofs_y = 5},
    {.bitmap_index = 12278, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 12286, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 12294, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 12302, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 12310, .adv_w = 128, .box_w = 8, .box_h = 3, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 12313, .adv_w = 128, .box_w = 8, .box_h = 3, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 12316, .adv_w = 128, .box_w = 8, .box_h = 3, .ofs_x = 0, .ofs_y = 10},
    {.bitmap_index = 12319, .adv_w = 128, .box_w = 8, .box_h = 3, .ofs_x = 0, .ofs_y = 10},
    {.bitmap_index = 12322, .adv_w = 128, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 12329, .adv_w = 128, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 12336, .adv_w = 128, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 12343, .adv_w = 128, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 12350, .adv_w = 128, .box_w = 4, .box_h = 6, .ofs_x = 4, .ofs_y = 5},
    {.bitmap_index = 12353, .adv_w = 128, .box_w = 4, .box_h = 6, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 12356, .adv_w = 128, .box_w = 4, .box_h = 6, .ofs_x = 0, .ofs_y = 7},
    {.bitmap_index = 12359, .adv_w = 128, .box_w = 4, .box_h = 6, .ofs_x = 4, .ofs_y = 7},
    {.bitmap_index = 12362, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 12370, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 12378, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 12386, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 12394, .adv_w = 128, .box_w = 4, .box_h = 4, .ofs_x = 4, .ofs_y = 5},
    {.bitmap_index = 12396, .adv_w = 128, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 12398, .adv_w = 128, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 9},
    {.bitmap_index = 12400, .adv_w = 128, .box_w = 4, .box_h = 4, .ofs_x = 4, .ofs_y = 9},
    {.bitmap_index = 12402, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 12410, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 12418, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 12426, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 12434, .adv_w = 128, .box_w = 4, .box_h = 4, .ofs_x = 4, .ofs_y = 5},
    {.bitmap_index = 12436, .adv_w = 128, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 12438, .adv_w = 128, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 9},
    {.bitmap_index = 12440, .adv_w = 128, .box_w = 4, .box_h = 4, .ofs_x = 4, .ofs_y = 9},
    {.bitmap_index = 12442, .adv_w = 128, .box_w = 3, .box_h = 3, .ofs_x = 5, .ofs_y = 5},
    {.bitmap_index = 12444, .adv_w = 128, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 12446, .adv_w = 128, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = 10},
    {.bitmap_index = 12448, .adv_w = 128, .box_w = 3, .box_h = 3, .ofs_x = 5, .ofs_y = 10},
    {.bitmap_index = 12450, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 12458, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 12466, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 12474, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 12482, .adv_w = 128, .box_w = 8, .box_h = 5, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 12487, .adv_w = 128, .box_w = 8, .box_h = 5, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 12492, .adv_w = 128, .box_w = 8, .box_h = 5, .ofs_x = 0, .ofs_y = 8},
    {.bitmap_index = 12497, .adv_w = 128, .box_w = 8, .box_h = 5, .ofs_x = 0, .ofs_y = 8},
    {.bitmap_index = 12502, .adv_w = 128, .box_w = 8, .box_h = 6, .ofs_x = 0, .ofs_y = 7},
    {.bitmap_index = 12508, .adv_w = 128, .box_w = 6, .box_h = 8, .ofs_x = 2, .ofs_y = 5},
    {.bitmap_index = 12514, .adv_w = 128, .box_w = 8, .box_h = 6, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 12520, .adv_w = 128, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 12526, .adv_w = 128, .box_w = 8, .box_h = 4, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 12530, .adv_w = 128, .box_w = 4, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 12534, .adv_w = 128, .box_w = 8, .box_h = 4, .ofs_x = 0, .ofs_y = 9},
    {.bitmap_index = 12538, .adv_w = 128, .box_w = 4, .box_h = 8, .ofs_x = 4, .ofs_y = 5},
    {.bitmap_index = 12542, .adv_w = 128, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 12549, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 12556, .adv_w = 128, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 12563, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 12570, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 12578, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 12586, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 12594, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 12602, .adv_w = 128, .box_w = 8, .box_h = 3, .ofs_x = 0, .ofs_y = 10},
    {.bitmap_index = 12605, .adv_w = 128, .box_w = 3, .box_h = 8, .ofs_x = 5, .ofs_y = 5},
    {.bitmap_index = 12608, .adv_w = 128, .box_w = 8, .box_h = 3, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 12611, .adv_w = 128, .box_w = 3, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 12614, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 12622, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 12630, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 12638, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 12646, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 12654, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 12662, .adv_w = 128, .box_w = 8, .box_h = 2, .ofs_x = 0, .ofs_y = 10},
    {.bitmap_index = 12664, .adv_w = 128, .box_w = 8, .box_h = 2, .ofs_x = 0, .ofs_y = 9},
    {.bitmap_index = 12666, .adv_w = 128, .box_w = 8, .box_h = 2, .ofs_x = 0, .ofs_y = 8},
    {.bitmap_index = 12668, .adv_w = 128, .box_w = 8, .box_h = 2, .ofs_x = 0, .ofs_y = 7},
    {.bitmap_index = 12670, .adv_w = 128, .box_w = 8, .box_h = 2, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 12672, .adv_w = 128, .box_w = 2, .box_h = 8, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 12674, .adv_w = 128, .box_w = 2, .box_h = 8, .ofs_x = 2, .ofs_y = 5},
    {.bitmap_index = 12676, .adv_w = 128, .box_w = 2, .box_h = 8, .ofs_x = 4, .ofs_y = 5},
    {.bitmap_index = 12678, .adv_w = 128, .box_w = 2, .box_h = 8, .ofs_x = 5, .ofs_y = 5},
    {.bitmap_index = 12680, .adv_w = 128, .box_w = 8, .box_h = 4, .ofs_x = 0, .ofs_y = 9},
    {.bitmap_index = 12684, .adv_w = 128, .box_w = 8, .box_h = 5, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 12689, .adv_w = 128, .box_w = 8, .box_h = 5, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 12694, .adv_w = 128, .box_w = 8, .box_h = 4, .ofs_x = 0, .ofs_y = 9},
    {.bitmap_index = 12698, .adv_w = 128, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 12703, .adv_w = 128, .box_w = 5, .box_h = 8, .ofs_x = 3, .ofs_y = 5},
    {.bitmap_index = 12708, .adv_w = 128, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 12713, .adv_w = 128, .box_w = 5, .box_h = 8, .ofs_x = 3, .ofs_y = 5},
    {.bitmap_index = 12718, .adv_w = 128, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 12725, .adv_w = 128, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 12732, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 12740, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 12748, .adv_w = 128, .box_w = 1, .box_h = 1, .ofs_x = 3, .ofs_y = 9},
    {.bitmap_index = 12749, .adv_w = 128, .box_w = 6, .box_h = 6, .ofs_x = 2, .ofs_y = 6},
    {.bitmap_index = 12754, .adv_w = 128, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 12759, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 12766, .adv_w = 128, .box_w = 6, .box_h = 6, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 12771, .adv_w = 128, .box_w = 6, .box_h = 6, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 12776, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 12784, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 12792, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 12800, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 12808, .adv_w = 128, .box_w = 9, .box_h = 9, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 12819, .adv_w = 128, .box_w = 5, .box_h = 5, .ofs_x = 2, .ofs_y = 6},
    {.bitmap_index = 12823, .adv_w = 128, .box_w = 5, .box_h = 7, .ofs_x = 2, .ofs_y = 6},
    {.bitmap_index = 12828, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 12835, .adv_w = 128, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 12842, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 12850, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 12858, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 12866, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 12873, .adv_w = 128, .box_w = 5, .box_h = 5, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 12877, .adv_w = 128, .box_w = 9, .box_h = 9, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 12888, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 12896, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 12904, .adv_w = 128, .box_w = 9, .box_h = 9, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 12915, .adv_w = 128, .box_w = 9, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 12924, .adv_w = 128, .box_w = 9, .box_h = 9, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 12935, .adv_w = 128, .box_w = 8, .box_h = 9, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 12944, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 12952, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 12960, .adv_w = 128, .box_w = 8, .box_h = 2, .ofs_x = 0, .ofs_y = 8},
    {.bitmap_index = 12962, .adv_w = 128, .box_w = 2, .box_h = 8, .ofs_x = 3, .ofs_y = 5},
    {.bitmap_index = 12964, .adv_w = 128, .box_w = 2, .box_h = 8, .ofs_x = 3, .ofs_y = 5},
    {.bitmap_index = 12966, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 12974, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 12982, .adv_w = 128, .box_w = 8, .box_h = 6, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 12988, .adv_w = 128, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 12994, .adv_w = 128, .box_w = 9, .box_h = 9, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 13005, .adv_w = 128, .box_w = 9, .box_h = 9, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 13016, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 13024, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 13032, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 13040, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 13048, .adv_w = 128, .box_w = 8, .box_h = 4, .ofs_x = 0, .ofs_y = 9},
    {.bitmap_index = 13052, .adv_w = 128, .box_w = 4, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 13056, .adv_w = 128, .box_w = 8, .box_h = 4, .ofs_x = 0, .ofs_y = 9},
    {.bitmap_index = 13060, .adv_w = 128, .box_w = 4, .box_h = 8, .ofs_x = 4, .ofs_y = 5},
    {.bitmap_index = 13064, .adv_w = 128, .box_w = 8, .box_h = 4, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 13068, .adv_w = 128, .box_w = 4, .box_h = 8, .ofs_x = 4, .ofs_y = 5},
    {.bitmap_index = 13072, .adv_w = 128, .box_w = 8, .box_h = 4, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 13076, .adv_w = 128, .box_w = 8, .box_h = 5, .ofs_x = 0, .ofs_y = 8},
    {.bitmap_index = 13081, .adv_w = 128, .box_w = 8, .box_h = 5, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 13086, .adv_w = 128, .box_w = 5, .box_h = 8, .ofs_x = 3, .ofs_y = 5},
    {.bitmap_index = 13091, .adv_w = 128, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 13096, .adv_w = 128, .box_w = 8, .box_h = 5, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 13101, .adv_w = 128, .box_w = 8, .box_h = 5, .ofs_x = 0, .ofs_y = 8},
    {.bitmap_index = 13106, .adv_w = 128, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 13111, .adv_w = 128, .box_w = 5, .box_h = 8, .ofs_x = 3, .ofs_y = 5},
    {.bitmap_index = 13116, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 13124, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 13132, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 13140, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 13148, .adv_w = 128, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 8},
    {.bitmap_index = 13152, .adv_w = 128, .box_w = 5, .box_h = 5, .ofs_x = 3, .ofs_y = 8},
    {.bitmap_index = 13156, .adv_w = 128, .box_w = 8, .box_h = 5, .ofs_x = 0, .ofs_y = 8},
    {.bitmap_index = 13161, .adv_w = 128, .box_w = 5, .box_h = 5, .ofs_x = 3, .ofs_y = 5},
    {.bitmap_index = 13165, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 13173, .adv_w = 128, .box_w = 5, .box_h = 8, .ofs_x = 3, .ofs_y = 5},
    {.bitmap_index = 13178, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 13186, .adv_w = 128, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 13190, .adv_w = 128, .box_w = 8, .box_h = 5, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 13195, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 13203, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 13211, .adv_w = 128, .box_w = 5, .box_h = 4, .ofs_x = 0, .ofs_y = 9},
    {.bitmap_index = 13214, .adv_w = 128, .box_w = 5, .box_h = 4, .ofs_x = 3, .ofs_y = 9},
    {.bitmap_index = 13217, .adv_w = 128, .box_w = 8, .box_h = 4, .ofs_x = 0, .ofs_y = 9},
    {.bitmap_index = 13221, .adv_w = 128, .box_w = 4, .box_h = 4, .ofs_x = 4, .ofs_y = 5},
    {.bitmap_index = 13223, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 13231, .adv_w = 128, .box_w = 5, .box_h = 8, .ofs_x = 3, .ofs_y = 5},
    {.bitmap_index = 13236, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 13244, .adv_w = 128, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 13246, .adv_w = 128, .box_w = 8, .box_h = 4, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 13250, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 13258, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 13266, .adv_w = 128, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 13271, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 13279, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 13287, .adv_w = 128, .box_w = 5, .box_h = 5, .ofs_x = 3, .ofs_y = 8},
    {.bitmap_index = 13291, .adv_w = 128, .box_w = 5, .box_h = 8, .ofs_x = 3, .ofs_y = 5},
    {.bitmap_index = 13296, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 13304, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 13312, .adv_w = 128, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 13316, .adv_w = 128, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 8},
    {.bitmap_index = 13320, .adv_w = 128, .box_w = 4, .box_h = 5, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 13323, .adv_w = 128, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 13328, .adv_w = 128, .box_w = 5, .box_h = 8, .ofs_x = 3, .ofs_y = 5},
    {.bitmap_index = 13333, .adv_w = 128, .box_w = 4, .box_h = 5, .ofs_x = 4, .ofs_y = 5},
    {.bitmap_index = 13336, .adv_w = 128, .box_w = 5, .box_h = 5, .ofs_x = 3, .ofs_y = 8},
    {.bitmap_index = 13340, .adv_w = 128, .box_w = 5, .box_h = 8, .ofs_x = 3, .ofs_y = 5},
    {.bitmap_index = 13345, .adv_w = 128, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 13350, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 13358, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 13366, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 13374, .adv_w = 128, .box_w = 9, .box_h = 9, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 13385, .adv_w = 128, .box_w = 8, .box_h = 5, .ofs_x = 0, .ofs_y = 7},
    {.bitmap_index = 13390, .adv_w = 128, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 13395, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 13402, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 13410, .adv_w = 128, .box_w = 9, .box_h = 9, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 13421, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 13429, .adv_w = 128, .box_w = 9, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 13438, .adv_w = 128, .box_w = 9, .box_h = 9, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 13449, .adv_w = 128, .box_w = 9, .box_h = 9, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 13460, .adv_w = 128, .box_w = 9, .box_h = 9, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 13471, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 13478, .adv_w = 128, .box_w = 8, .box_h = 9, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 13487, .adv_w = 128, .box_w = 9, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 13496, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 13504, .adv_w = 128, .box_w = 9, .box_h = 9, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 13515, .adv_w = 128, .box_w = 9, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 13524, .adv_w = 128, .box_w = 4, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 13528, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 13536, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 13543, .adv_w = 128, .box_w = 2, .box_h = 7, .ofs_x = 5, .ofs_y = 6},
    {.bitmap_index = 13545, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 13552, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 13558, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 13565, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 13572, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 13579, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 13585, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 13592, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 13599, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 13607, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 13614, .adv_w = 128, .box_w = 6, .box_h = 9, .ofs_x = 2, .ofs_y = 4},
    {.bitmap_index = 13621, .adv_w = 128, .box_w = 9, .box_h = 9, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 13632, .adv_w = 128, .box_w = 9, .box_h = 9, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 13643, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 13651, .adv_w = 128, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 13660, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 13668, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 13676, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 13684, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 13692, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 13700, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 13708, .adv_w = 128, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 13713, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 13721, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 13729, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 13737, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 13745, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 13753, .adv_w = 128, .box_w = 4, .box_h = 8, .ofs_x = 2, .ofs_y = 5},
    {.bitmap_index = 13757, .adv_w = 128, .box_w = 8, .box_h = 4, .ofs_x = 0, .ofs_y = 7},
    {.bitmap_index = 13761, .adv_w = 128, .box_w = 9, .box_h = 8, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 13770, .adv_w = 128, .box_w = 9, .box_h = 8, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 13779, .adv_w = 128, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 13786, .adv_w = 128, .box_w = 9, .box_h = 5, .ofs_x = 0, .ofs_y = 8},
    {.bitmap_index = 13792, .adv_w = 128, .box_w = 9, .box_h = 5, .ofs_x = 0, .ofs_y = 8},
    {.bitmap_index = 13798, .adv_w = 128, .box_w = 9, .box_h = 9, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 13809, .adv_w = 128, .box_w = 9, .box_h = 9, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 13820, .adv_w = 128, .box_w = 6, .box_h = 6, .ofs_x = 2, .ofs_y = 6},
    {.bitmap_index = 13825, .adv_w = 128, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 13830, .adv_w = 128, .box_w = 8, .box_h = 6, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 13836, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 13844, .adv_w = 128, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 13851, .adv_w = 128, .box_w = 9, .box_h = 9, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 13862, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 13870, .adv_w = 128, .box_w = 9, .box_h = 9, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 13881, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 13888, .adv_w = 128, .box_w = 7, .box_h = 6, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 13894, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 13902, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 13910, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 13918, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 13925, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 13932, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 13940, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 13947, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 13955, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 13963, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 13971, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 13978, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 13985, .adv_w = 128, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 13992, .adv_w = 128, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 13999, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 14007, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 14015, .adv_w = 128, .box_w = 4, .box_h = 8, .ofs_x = 2, .ofs_y = 5},
    {.bitmap_index = 14019, .adv_w = 128, .box_w = 4, .box_h = 8, .ofs_x = 2, .ofs_y = 5},
    {.bitmap_index = 14023, .adv_w = 128, .box_w = 8, .box_h = 4, .ofs_x = 0, .ofs_y = 7},
    {.bitmap_index = 14027, .adv_w = 128, .box_w = 8, .box_h = 4, .ofs_x = 0, .ofs_y = 7},
    {.bitmap_index = 14031, .adv_w = 128, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 14037, .adv_w = 128, .box_w = 9, .box_h = 6, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 14044, .adv_w = 128, .box_w = 8, .box_h = 6, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 14050, .adv_w = 128, .box_w = 9, .box_h = 6, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 14057, .adv_w = 128, .box_w = 8, .box_h = 6, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 14063, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 14070, .adv_w = 128, .box_w = 8, .box_h = 5, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 14075, .adv_w = 128, .box_w = 8, .box_h = 9, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 14084, .adv_w = 128, .box_w = 8, .box_h = 9, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 14093, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 14101, .adv_w = 128, .box_w = 9, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 14110, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 14118, .adv_w = 128, .box_w = 8, .box_h = 9, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 14127, .adv_w = 128, .box_w = 8, .box_h = 9, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 14136, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 14143, .adv_w = 128, .box_w = 9, .box_h = 9, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 14154, .adv_w = 128, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 14161, .adv_w = 128, .box_w = 7, .box_h = 3, .ofs_x = 0, .ofs_y = 8},
    {.bitmap_index = 14164, .adv_w = 128, .box_w = 9, .box_h = 9, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 14175, .adv_w = 128, .box_w = 9, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 14184, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 14192, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 14199, .adv_w = 128, .box_w = 9, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 14208, .adv_w = 128, .box_w = 9, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 14217, .adv_w = 128, .box_w = 9, .box_h = 7, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 14225, .adv_w = 128, .box_w = 9, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 14234, .adv_w = 128, .box_w = 9, .box_h = 7, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 14242, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 14250, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 14258, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 14266, .adv_w = 128, .box_w = 9, .box_h = 9, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 14277, .adv_w = 128, .box_w = 9, .box_h = 9, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 14288, .adv_w = 128, .box_w = 9, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 14296, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 14304, .adv_w = 128, .box_w = 9, .box_h = 9, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 14315, .adv_w = 128, .box_w = 9, .box_h = 7, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 14323, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 14331, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 14339, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 14347, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 14355, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 14363, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 14371, .adv_w = 128, .box_w = 3, .box_h = 8, .ofs_x = 2, .ofs_y = 5},
    {.bitmap_index = 14374, .adv_w = 128, .box_w = 8, .box_h = 3, .ofs_x = 0, .ofs_y = 7},
    {.bitmap_index = 14377, .adv_w = 128, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 14383, .adv_w = 128, .box_w = 8, .box_h = 6, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 14389, .adv_w = 128, .box_w = 9, .box_h = 5, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 14395, .adv_w = 128, .box_w = 9, .box_h = 5, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 14401, .adv_w = 128, .box_w = 9, .box_h = 9, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 14412, .adv_w = 128, .box_w = 9, .box_h = 9, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 14423, .adv_w = 128, .box_w = 9, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 14432, .adv_w = 128, .box_w = 9, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 14441, .adv_w = 128, .box_w = 9, .box_h = 9, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 14452, .adv_w = 128, .box_w = 9, .box_h = 9, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 14463, .adv_w = 128, .box_w = 9, .box_h = 9, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 14474, .adv_w = 128, .box_w = 9, .box_h = 9, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 14485, .adv_w = 128, .box_w = 9, .box_h = 9, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 14496, .adv_w = 128, .box_w = 9, .box_h = 9, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 14507, .adv_w = 128, .box_w = 9, .box_h = 9, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 14518, .adv_w = 128, .box_w = 9, .box_h = 9, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 14529, .adv_w = 128, .box_w = 5, .box_h = 8, .ofs_x = 3, .ofs_y = 5},
    {.bitmap_index = 14534, .adv_w = 128, .box_w = 6, .box_h = 9, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 14541, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 2, .ofs_y = 5},
    {.bitmap_index = 14548, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 14555, .adv_w = 128, .box_w = 9, .box_h = 7, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 14563, .adv_w = 128, .box_w = 9, .box_h = 7, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 14571, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 14579, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 14587, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 14595, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 14603, .adv_w = 128, .box_w = 6, .box_h = 8, .ofs_x = 2, .ofs_y = 5},
    {.bitmap_index = 14609, .adv_w = 128, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 14615, .adv_w = 128, .box_w = 9, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 14624, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 14632, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 14639, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 14646, .adv_w = 128, .box_w = 9, .box_h = 9, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 14657, .adv_w = 128, .box_w = 8, .box_h = 9, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 14666, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 14674, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 14682, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 3, .ofs_y = 5},
    {.bitmap_index = 14688, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 14694, .adv_w = 128, .box_w = 8, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 14701, .adv_w = 128, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 14708, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 14715, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 14722, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 14730, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 14738, .adv_w = 128, .box_w = 9, .box_h = 9, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 14749, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 14757, .adv_w = 128, .box_w = 9, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 14766, .adv_w = 128, .box_w = 9, .box_h = 5, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 14772, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 2, .ofs_y = 5},
    {.bitmap_index = 14779, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 14787, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 14795, .adv_w = 128, .box_w = 9, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 14804, .adv_w = 128, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 14813, .adv_w = 128, .box_w = 8, .box_h = 9, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 14822, .adv_w = 128, .box_w = 8, .box_h = 4, .ofs_x = 0, .ofs_y = 9},
    {.bitmap_index = 14826, .adv_w = 128, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 14833, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 14840, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 14847, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 14855, .adv_w = 128, .box_w = 6, .box_h = 9, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 14862, .adv_w = 128, .box_w = 6, .box_h = 9, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 14869, .adv_w = 128, .box_w = 8, .box_h = 5, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 14874, .adv_w = 128, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 14879, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 14887, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 14895, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 14903, .adv_w = 128, .box_w = 9, .box_h = 8, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 14912, .adv_w = 128, .box_w = 9, .box_h = 8, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 14921, .adv_w = 128, .box_w = 9, .box_h = 9, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 14932, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 14940, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 14948, .adv_w = 128, .box_w = 8, .box_h = 6, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 14954, .adv_w = 128, .box_w = 8, .box_h = 6, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 14960, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 14968, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 14976, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 14984, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 14992, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 15000, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 15008, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 15016, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 15024, .adv_w = 128, .box_w = 9, .box_h = 9, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 15035, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 15043, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 15051, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 15059, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 15067, .adv_w = 128, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 15074, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 15081, .adv_w = 128, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 15088, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 15095, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 15103, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 15111, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 15119, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 15127, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 15135, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 15143, .adv_w = 128, .box_w = 8, .box_h = 6, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 15149, .adv_w = 128, .box_w = 6, .box_h = 8, .ofs_x = 2, .ofs_y = 5},
    {.bitmap_index = 15155, .adv_w = 128, .box_w = 8, .box_h = 6, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 15161, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 15168, .adv_w = 128, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 15175, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 15182, .adv_w = 128, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 15189, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 15196, .adv_w = 128, .box_w = 6, .box_h = 8, .ofs_x = 2, .ofs_y = 5},
    {.bitmap_index = 15202, .adv_w = 128, .box_w = 6, .box_h = 8, .ofs_x = 2, .ofs_y = 5},
    {.bitmap_index = 15208, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 15216, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 15224, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 15231, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 15239, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 15247, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 15255, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 15262, .adv_w = 128, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 15268, .adv_w = 128, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 15275, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 15282, .adv_w = 128, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 15288, .adv_w = 128, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 15295, .adv_w = 128, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 15301, .adv_w = 128, .box_w = 8, .box_h = 5, .ofs_x = 0, .ofs_y = 8},
    {.bitmap_index = 15306, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 15313, .adv_w = 128, .box_w = 4, .box_h = 8, .ofs_x = 2, .ofs_y = 5},
    {.bitmap_index = 15317, .adv_w = 128, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 15323, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 15331, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 15338, .adv_w = 128, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 15345, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 15352, .adv_w = 128, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 15359, .adv_w = 128, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 15365, .adv_w = 128, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 15371, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 15379, .adv_w = 128, .box_w = 8, .box_h = 5, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 15384, .adv_w = 128, .box_w = 8, .box_h = 5, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 15389, .adv_w = 128, .box_w = 9, .box_h = 9, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 15400, .adv_w = 128, .box_w = 9, .box_h = 9, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 15411, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 15419, .adv_w = 128, .box_w = 9, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 15428, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 15436, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 15444, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 15452, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 15460, .adv_w = 128, .box_w = 8, .box_h = 6, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 15466, .adv_w = 128, .box_w = 8, .box_h = 6, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 15472, .adv_w = 128, .box_w = 5, .box_h = 8, .ofs_x = 4, .ofs_y = 5},
    {.bitmap_index = 15477, .adv_w = 128, .box_w = 9, .box_h = 9, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 15488, .adv_w = 128, .box_w = 9, .box_h = 5, .ofs_x = 0, .ofs_y = 7},
    {.bitmap_index = 15494, .adv_w = 128, .box_w = 8, .box_h = 5, .ofs_x = 0, .ofs_y = 7},
    {.bitmap_index = 15499, .adv_w = 128, .box_w = 8, .box_h = 3, .ofs_x = 0, .ofs_y = 8},
    {.bitmap_index = 15502, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 15509, .adv_w = 128, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 15515, .adv_w = 128, .box_w = 8, .box_h = 6, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 15521, .adv_w = 128, .box_w = 4, .box_h = 6, .ofs_x = 2, .ofs_y = 7},
    {.bitmap_index = 15524, .adv_w = 128, .box_w = 7, .box_h = 5, .ofs_x = 1, .ofs_y = 8},
    {.bitmap_index = 15529, .adv_w = 128, .box_w = 7, .box_h = 5, .ofs_x = 1, .ofs_y = 8},
    {.bitmap_index = 15534, .adv_w = 128, .box_w = 3, .box_h = 8, .ofs_x = 2, .ofs_y = 5},
    {.bitmap_index = 15537, .adv_w = 128, .box_w = 8, .box_h = 5, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 15542, .adv_w = 128, .box_w = 8, .box_h = 5, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 15547, .adv_w = 128, .box_w = 8, .box_h = 5, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 15552, .adv_w = 128, .box_w = 8, .box_h = 5, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 15557, .adv_w = 128, .box_w = 5, .box_h = 5, .ofs_x = 3, .ofs_y = 8},
    {.bitmap_index = 15561, .adv_w = 128, .box_w = 5, .box_h = 5, .ofs_x = 3, .ofs_y = 8},
    {.bitmap_index = 15565, .adv_w = 128, .box_w = 8, .box_h = 5, .ofs_x = 0, .ofs_y = 8},
    {.bitmap_index = 15570, .adv_w = 128, .box_w = 8, .box_h = 5, .ofs_x = 0, .ofs_y = 8},
    {.bitmap_index = 15575, .adv_w = 128, .box_w = 7, .box_h = 5, .ofs_x = 0, .ofs_y = 8},
    {.bitmap_index = 15580, .adv_w = 128, .box_w = 8, .box_h = 5, .ofs_x = 0, .ofs_y = 8},
    {.bitmap_index = 15585, .adv_w = 128, .box_w = 8, .box_h = 5, .ofs_x = 0, .ofs_y = 8},
    {.bitmap_index = 15590, .adv_w = 128, .box_w = 8, .box_h = 5, .ofs_x = 0, .ofs_y = 8},
    {.bitmap_index = 15595, .adv_w = 128, .box_w = 7, .box_h = 5, .ofs_x = 0, .ofs_y = 8},
    {.bitmap_index = 15600, .adv_w = 128, .box_w = 8, .box_h = 5, .ofs_x = 0, .ofs_y = 8},
    {.bitmap_index = 15605, .adv_w = 128, .box_w = 6, .box_h = 6, .ofs_x = 2, .ofs_y = 5},
    {.bitmap_index = 15610, .adv_w = 128, .box_w = 8, .box_h = 5, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 15615, .adv_w = 128, .box_w = 8, .box_h = 5, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 15620, .adv_w = 128, .box_w = 6, .box_h = 6, .ofs_x = 2, .ofs_y = 5},
    {.bitmap_index = 15625, .adv_w = 128, .box_w = 6, .box_h = 6, .ofs_x = 2, .ofs_y = 5},
    {.bitmap_index = 15630, .adv_w = 128, .box_w = 8, .box_h = 3, .ofs_x = 0, .ofs_y = 8},
    {.bitmap_index = 15633, .adv_w = 128, .box_w = 8, .box_h = 3, .ofs_x = 0, .ofs_y = 8},
    {.bitmap_index = 15636, .adv_w = 128, .box_w = 5, .box_h = 4, .ofs_x = 3, .ofs_y = 8},
    {.bitmap_index = 15639, .adv_w = 128, .box_w = 8, .box_h = 4, .ofs_x = 0, .ofs_y = 8},
    {.bitmap_index = 15643, .adv_w = 128, .box_w = 6, .box_h = 5, .ofs_x = 2, .ofs_y = 8},
    {.bitmap_index = 15647, .adv_w = 128, .box_w = 8, .box_h = 5, .ofs_x = 0, .ofs_y = 8},
    {.bitmap_index = 15652, .adv_w = 128, .box_w = 6, .box_h = 4, .ofs_x = 2, .ofs_y = 6},
    {.bitmap_index = 15655, .adv_w = 128, .box_w = 6, .box_h = 6, .ofs_x = 2, .ofs_y = 6},
    {.bitmap_index = 15660, .adv_w = 128, .box_w = 7, .box_h = 4, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 15664, .adv_w = 128, .box_w = 7, .box_h = 4, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 15668, .adv_w = 128, .box_w = 8, .box_h = 2, .ofs_x = 0, .ofs_y = 8},
    {.bitmap_index = 15670, .adv_w = 128, .box_w = 8, .box_h = 2, .ofs_x = 0, .ofs_y = 8},
    {.bitmap_index = 15672, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 15679, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 15686, .adv_w = 128, .box_w = 8, .box_h = 5, .ofs_x = 0, .ofs_y = 8},
    {.bitmap_index = 15691, .adv_w = 128, .box_w = 7, .box_h = 5, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 15696, .adv_w = 128, .box_w = 7, .box_h = 5, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 15701, .adv_w = 128, .box_w = 8, .box_h = 3, .ofs_x = 0, .ofs_y = 8},
    {.bitmap_index = 15704, .adv_w = 128, .box_w = 8, .box_h = 3, .ofs_x = 0, .ofs_y = 8},
    {.bitmap_index = 15707, .adv_w = 128, .box_w = 8, .box_h = 5, .ofs_x = 0, .ofs_y = 8},
    {.bitmap_index = 15712, .adv_w = 128, .box_w = 8, .box_h = 5, .ofs_x = 0, .ofs_y = 8},
    {.bitmap_index = 15717, .adv_w = 128, .box_w = 8, .box_h = 5, .ofs_x = 0, .ofs_y = 8},
    {.bitmap_index = 15722, .adv_w = 128, .box_w = 8, .box_h = 5, .ofs_x = 0, .ofs_y = 8},
    {.bitmap_index = 15727, .adv_w = 128, .box_w = 8, .box_h = 5, .ofs_x = 0, .ofs_y = 8},
    {.bitmap_index = 15732, .adv_w = 128, .box_w = 8, .box_h = 5, .ofs_x = 0, .ofs_y = 8},
    {.bitmap_index = 15737, .adv_w = 128, .box_w = 5, .box_h = 6, .ofs_x = 2, .ofs_y = 6},
    {.bitmap_index = 15741, .adv_w = 128, .box_w = 7, .box_h = 5, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 15746, .adv_w = 128, .box_w = 7, .box_h = 4, .ofs_x = 0, .ofs_y = 8},
    {.bitmap_index = 15750, .adv_w = 128, .box_w = 8, .box_h = 3, .ofs_x = 0, .ofs_y = 8},
    {.bitmap_index = 15753, .adv_w = 128, .box_w = 5, .box_h = 7, .ofs_x = 2, .ofs_y = 6},
    {.bitmap_index = 15758, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 15765, .adv_w = 128, .box_w = 7, .box_h = 5, .ofs_x = 0, .ofs_y = 8},
    {.bitmap_index = 15770, .adv_w = 128, .box_w = 8, .box_h = 5, .ofs_x = 0, .ofs_y = 8},
    {.bitmap_index = 15775, .adv_w = 128, .box_w = 8, .box_h = 5, .ofs_x = 0, .ofs_y = 8},
    {.bitmap_index = 15780, .adv_w = 128, .box_w = 8, .box_h = 5, .ofs_x = 0, .ofs_y = 8},
    {.bitmap_index = 15785, .adv_w = 128, .box_w = 8, .box_h = 5, .ofs_x = 0, .ofs_y = 8},
    {.bitmap_index = 15790, .adv_w = 128, .box_w = 8, .box_h = 5, .ofs_x = 0, .ofs_y = 8},
    {.bitmap_index = 15795, .adv_w = 128, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 15802, .adv_w = 128, .box_w = 8, .box_h = 5, .ofs_x = 0, .ofs_y = 8},
    {.bitmap_index = 15807, .adv_w = 128, .box_w = 8, .box_h = 5, .ofs_x = 0, .ofs_y = 8},
    {.bitmap_index = 15812, .adv_w = 128, .box_w = 8, .box_h = 5, .ofs_x = 0, .ofs_y = 8},
    {.bitmap_index = 15817, .adv_w = 128, .box_w = 7, .box_h = 5, .ofs_x = 1, .ofs_y = 8},
    {.bitmap_index = 15822, .adv_w = 128, .box_w = 7, .box_h = 5, .ofs_x = 1, .ofs_y = 8},
    {.bitmap_index = 15827, .adv_w = 128, .box_w = 7, .box_h = 5, .ofs_x = 1, .ofs_y = 8},
    {.bitmap_index = 15832, .adv_w = 128, .box_w = 7, .box_h = 5, .ofs_x = 1, .ofs_y = 8},
    {.bitmap_index = 15837, .adv_w = 128, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 15844, .adv_w = 128, .box_w = 8, .box_h = 5, .ofs_x = 0, .ofs_y = 8},
    {.bitmap_index = 15849, .adv_w = 128, .box_w = 8, .box_h = 5, .ofs_x = 0, .ofs_y = 8},
    {.bitmap_index = 15854, .adv_w = 128, .box_w = 6, .box_h = 6, .ofs_x = 2, .ofs_y = 5},
    {.bitmap_index = 15859, .adv_w = 128, .box_w = 6, .box_h = 6, .ofs_x = 2, .ofs_y = 5},
    {.bitmap_index = 15864, .adv_w = 128, .box_w = 8, .box_h = 4, .ofs_x = 0, .ofs_y = 7},
    {.bitmap_index = 15868, .adv_w = 128, .box_w = 8, .box_h = 5, .ofs_x = 0, .ofs_y = 8},
    {.bitmap_index = 15873, .adv_w = 128, .box_w = 8, .box_h = 5, .ofs_x = 0, .ofs_y = 8},
    {.bitmap_index = 15878, .adv_w = 128, .box_w = 7, .box_h = 5, .ofs_x = 0, .ofs_y = 8},
    {.bitmap_index = 15883, .adv_w = 128, .box_w = 8, .box_h = 5, .ofs_x = 0, .ofs_y = 8},
    {.bitmap_index = 15888, .adv_w = 128, .box_w = 3, .box_h = 3, .ofs_x = 5, .ofs_y = 8},
    {.bitmap_index = 15890, .adv_w = 128, .box_w = 8, .box_h = 4, .ofs_x = 0, .ofs_y = 8},
    {.bitmap_index = 15894, .adv_w = 128, .box_w = 8, .box_h = 4, .ofs_x = 0, .ofs_y = 8},
    {.bitmap_index = 15898, .adv_w = 128, .box_w = 6, .box_h = 5, .ofs_x = 2, .ofs_y = 6},
    {.bitmap_index = 15902, .adv_w = 128, .box_w = 6, .box_h = 5, .ofs_x = 2, .ofs_y = 6},
    {.bitmap_index = 15906, .adv_w = 128, .box_w = 7, .box_h = 5, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 15911, .adv_w = 128, .box_w = 8, .box_h = 4, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 15915, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 15922, .adv_w = 128, .box_w = 8, .box_h = 5, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 15927, .adv_w = 128, .box_w = 8, .box_h = 5, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 15932, .adv_w = 128, .box_w = 8, .box_h = 5, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 15937, .adv_w = 128, .box_w = 2, .box_h = 7, .ofs_x = 3, .ofs_y = 6},
    {.bitmap_index = 15939, .adv_w = 128, .box_w = 6, .box_h = 3, .ofs_x = 1, .ofs_y = 10},
    {.bitmap_index = 15942, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 15949, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 15955, .adv_w = 128, .box_w = 7, .box_h = 6, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 15961, .adv_w = 128, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 15968, .adv_w = 128, .box_w = 3, .box_h = 3, .ofs_x = 2, .ofs_y = 10},
    {.bitmap_index = 15970, .adv_w = 128, .box_w = 4, .box_h = 7, .ofs_x = 2, .ofs_y = 6},
    {.bitmap_index = 15974, .adv_w = 128, .box_w = 4, .box_h = 7, .ofs_x = 2, .ofs_y = 6},
    {.bitmap_index = 15978, .adv_w = 128, .box_w = 8, .box_h = 5, .ofs_x = 0, .ofs_y = 7},
    {.bitmap_index = 15983, .adv_w = 128, .box_w = 6, .box_h = 5, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 15987, .adv_w = 128, .box_w = 3, .box_h = 3, .ofs_x = 2, .ofs_y = 5},
    {.bitmap_index = 15989, .adv_w = 128, .box_w = 6, .box_h = 1, .ofs_x = 1, .ofs_y = 9},
    {.bitmap_index = 15990, .adv_w = 128, .box_w = 2, .box_h = 2, .ofs_x = 3, .ofs_y = 6},
    {.bitmap_index = 15991, .adv_w = 128, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 15998, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 16004, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 16010, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 16016, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 16022, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 16029, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 16035, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 16041, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 16047, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 16053, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 16059, .adv_w = 128, .box_w = 2, .box_h = 6, .ofs_x = 3, .ofs_y = 6},
    {.bitmap_index = 16061, .adv_w = 128, .box_w = 3, .box_h = 7, .ofs_x = 2, .ofs_y = 5},
    {.bitmap_index = 16064, .adv_w = 128, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 16069, .adv_w = 128, .box_w = 6, .box_h = 3, .ofs_x = 1, .ofs_y = 8},
    {.bitmap_index = 16072, .adv_w = 128, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 16077, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 16083, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 16090, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 16096, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 16102, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 16108, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 16114, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 16120, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 16126, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 16132, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 16138, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 16144, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 16150, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 16157, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 16163, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 16170, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 16177, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 16183, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 16189, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 16195, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 16201, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 16207, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 16213, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 16219, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 16225, .adv_w = 128, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 16232, .adv_w = 128, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 16239, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 16245, .adv_w = 128, .box_w = 4, .box_h = 7, .ofs_x = 2, .ofs_y = 6},
    {.bitmap_index = 16249, .adv_w = 128, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 16256, .adv_w = 128, .box_w = 4, .box_h = 7, .ofs_x = 2, .ofs_y = 6},
    {.bitmap_index = 16260, .adv_w = 128, .box_w = 7, .box_h = 4, .ofs_x = 0, .ofs_y = 9},
    {.bitmap_index = 16264, .adv_w = 128, .box_w = 8, .box_h = 1, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 16265, .adv_w = 128, .box_w = 4, .box_h = 3, .ofs_x = 3, .ofs_y = 10},
    {.bitmap_index = 16267, .adv_w = 128, .box_w = 6, .box_h = 5, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 16271, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 16277, .adv_w = 128, .box_w = 5, .box_h = 5, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 16281, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 16287, .adv_w = 128, .box_w = 6, .box_h = 5, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 16291, .adv_w = 128, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 16296, .adv_w = 128, .box_w = 6, .box_h = 6, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 16301, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 16307, .adv_w = 128, .box_w = 5, .box_h = 7, .ofs_x = 2, .ofs_y = 6},
    {.bitmap_index = 16312, .adv_w = 128, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 16317, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 16323, .adv_w = 128, .box_w = 5, .box_h = 7, .ofs_x = 2, .ofs_y = 6},
    {.bitmap_index = 16328, .adv_w = 128, .box_w = 7, .box_h = 5, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 16333, .adv_w = 128, .box_w = 6, .box_h = 5, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 16337, .adv_w = 128, .box_w = 6, .box_h = 5, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 16341, .adv_w = 128, .box_w = 6, .box_h = 6, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 16346, .adv_w = 128, .box_w = 6, .box_h = 6, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 16351, .adv_w = 128, .box_w = 6, .box_h = 5, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 16355, .adv_w = 128, .box_w = 6, .box_h = 5, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 16359, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 16365, .adv_w = 128, .box_w = 6, .box_h = 5, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 16369, .adv_w = 128, .box_w = 6, .box_h = 5, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 16373, .adv_w = 128, .box_w = 7, .box_h = 5, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 16378, .adv_w = 128, .box_w = 7, .box_h = 5, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 16383, .adv_w = 128, .box_w = 6, .box_h = 6, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 16388, .adv_w = 128, .box_w = 6, .box_h = 5, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 16392, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 16398, .adv_w = 128, .box_w = 2, .box_h = 7, .ofs_x = 3, .ofs_y = 6},
    {.bitmap_index = 16400, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 16406, .adv_w = 128, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 16413, .adv_w = 128, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 16420, .adv_w = 128, .box_w = 5, .box_h = 3, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 16422, .adv_w = 128, .box_w = 4, .box_h = 4, .ofs_x = 3, .ofs_y = 9},
    {.bitmap_index = 16424, .adv_w = 128, .box_w = 4, .box_h = 4, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 16426, .adv_w = 128, .box_w = 4, .box_h = 3, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 16428, .adv_w = 128, .box_w = 2, .box_h = 2, .ofs_x = 3, .ofs_y = 8},
    {.bitmap_index = 16429, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 16435, .adv_w = 128, .box_w = 7, .box_h = 5, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 16440, .adv_w = 128, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 16445, .adv_w = 128, .box_w = 6, .box_h = 6, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 16450, .adv_w = 128, .box_w = 6, .box_h = 5, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 16454, .adv_w = 128, .box_w = 7, .box_h = 6, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 16460, .adv_w = 128, .box_w = 7, .box_h = 6, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 16466, .adv_w = 128, .box_w = 6, .box_h = 5, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 16470, .adv_w = 128, .box_w = 5, .box_h = 5, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 16474, .adv_w = 128, .box_w = 6, .box_h = 5, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 16478, .adv_w = 128, .box_w = 6, .box_h = 1, .ofs_x = 1, .ofs_y = 9},
    {.bitmap_index = 16479, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 16485, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 16491, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 16497, .adv_w = 128, .box_w = 6, .box_h = 6, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 16502, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 16509, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 16516, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 16522, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 16529, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 16536, .adv_w = 128, .box_w = 6, .box_h = 6, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 16541, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 16548, .adv_w = 128, .box_w = 6, .box_h = 6, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 16553, .adv_w = 128, .box_w = 7, .box_h = 6, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 16559, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 16566, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 16573, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 16580, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 16586, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 16592, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 16598, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 16604, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 16610, .adv_w = 128, .box_w = 6, .box_h = 6, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 16615, .adv_w = 128, .box_w = 7, .box_h = 6, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 16621, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 16628, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 16634, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 16641, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 16647, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 16653, .adv_w = 128, .box_w = 7, .box_h = 5, .ofs_x = 0, .ofs_y = 7},
    {.bitmap_index = 16658, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 16664, .adv_w = 128, .box_w = 6, .box_h = 6, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 16669, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 16675, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 16682, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 16688, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 16694, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 16701, .adv_w = 128, .box_w = 6, .box_h = 6, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 16706, .adv_w = 128, .box_w = 6, .box_h = 6, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 16711, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 16717, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 16723, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 16730, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 16736, .adv_w = 128, .box_w = 7, .box_h = 6, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 16742, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 16749, .adv_w = 128, .box_w = 6, .box_h = 6, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 16754, .adv_w = 128, .box_w = 7, .box_h = 2, .ofs_x = 0, .ofs_y = 11},
    {.bitmap_index = 16756, .adv_w = 128, .box_w = 5, .box_h = 3, .ofs_x = 1, .ofs_y = 10}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/

static const uint8_t glyph_id_ofs_list_5[] = {
    0, 1, 2, 3, 0, 0, 0, 0,
    4, 5, 6, 0, 0, 0, 7, 8
};

static const uint16_t unicode_list_7[] = {
    0x0, 0x1, 0x4, 0x5, 0x6, 0x7, 0x8, 0x9,
    0xa, 0xb, 0xc, 0xd, 0x32, 0x33, 0x3d, 0x6c,
    0x6e, 0xa0, 0xa3, 0xa7, 0xb6
};

static const uint8_t glyph_id_ofs_list_8[] = {
    0, 1, 2, 3, 4, 5, 6, 7,
    8, 9, 10, 11, 12, 13, 0, 14,
    15, 16, 0, 17, 18, 19, 20, 21,
    22, 0, 0, 23, 24, 0, 0, 25,
    26, 27, 28, 29, 30, 31, 32, 33,
    34, 35, 0, 36, 37, 0, 38, 0,
    39, 0, 40, 41, 0, 42, 43, 44,
    45, 46, 47, 48, 49, 50, 51, 0,
    52, 53, 54, 55, 56
};

static const uint16_t unicode_list_9[] = {
    0x0, 0x13, 0x37, 0x39, 0x3a, 0x3b, 0x3d, 0x3f,
    0x40
};

static const uint8_t glyph_id_ofs_list_13[] = {
    0, 1, 0, 0, 0, 2, 3, 4,
    5, 6
};

static const uint16_t unicode_list_15[] = {
    0x0, 0x1, 0x2, 0x3, 0x7b, 0x7c, 0x7d, 0x7e,
    0x7f, 0x80, 0x81, 0x82, 0x91, 0x92, 0x9c
};

static const uint8_t glyph_id_ofs_list_17[] = {
    0, 0, 0, 0, 1, 2, 3, 4,
    5, 6, 7, 0, 8, 9, 10, 11,
    12, 13, 14, 0, 15, 16, 17, 18,
    0, 0, 0, 0, 0, 19, 20, 21,
    22, 23, 24, 25, 26, 27, 28, 29
};

static const uint16_t unicode_list_18[] = {
    0x0, 0x1, 0x2, 0xeef, 0xef0, 0xef1, 0xef2, 0xef9,
    0xefb, 0xefc, 0xefd, 0xefe, 0xeff, 0xf00, 0xf7b, 0xf7c,
    0xf7e
};

static const uint8_t glyph_id_ofs_list_21[] = {
    0, 1, 2, 0, 3, 4, 5, 6,
    0, 0, 7, 0, 8, 9, 10, 11
};

static const uint8_t glyph_id_ofs_list_23[] = {
    0, 1, 2, 3, 0, 0, 4
};

static const uint8_t glyph_id_ofs_list_26[] = {
    0, 1, 2, 3, 4, 5, 6, 0,
    0, 0, 0, 0, 7, 8, 9, 0,
    10, 11, 0, 0, 12, 13, 14, 0,
    0, 0, 15, 16, 17, 18, 19, 0,
    20, 21, 22, 23, 24, 25, 26, 0,
    0, 0, 27, 28, 29, 30, 0, 0,
    31, 32, 33, 34, 35, 36, 0, 0,
    0, 0, 0, 0, 37, 38, 39, 0,
    40, 41, 0, 0, 42, 43, 44
};

static const uint16_t unicode_list_28[] = {
    0x0, 0x1, 0x4, 0x5, 0x6, 0x8, 0x9, 0xa,
    0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 0x1a, 0x1b,
    0x20, 0x21, 0x28, 0x2b, 0x2c, 0x2d, 0x54, 0x55,
    0x58, 0x59, 0x5a, 0x5b, 0x5c, 0x5d, 0x5e, 0x5f,
    0x60, 0x63, 0x8b, 0x90, 0xfb, 0x104, 0x106, 0x134,
    0x135, 0x136, 0x137, 0x138, 0x139, 0x13a, 0x13b, 0x13c,
    0x13d, 0x13e, 0x13f, 0x140, 0x141, 0x142, 0x143, 0x16d,
    0x174, 0x175, 0x176, 0x177, 0x178, 0x179, 0x17a, 0x17b,
    0x17c, 0x17d, 0x189, 0x18c, 0x196, 0x1a0, 0x1a1, 0x1a2,
    0x1a3, 0x1a4, 0x1a5, 0x1a6, 0x1a7, 0x1ca, 0x1cb, 0x1cc,
    0x1cd, 0x1e9, 0x1f6, 0x1f7, 0x1f8, 0x1f9, 0x1fc, 0x1fe,
    0x1ff, 0x200, 0x202, 0x203, 0x20d, 0x22c, 0x245, 0x248,
    0x249, 0x2a9, 0x2e5, 0x2fc, 0x2fe, 0x2ff, 0x304, 0x305
};

static const uint16_t unicode_list_30[] = {
    0x0, 0x1, 0x5, 0x6, 0x7, 0x8, 0x9, 0xa,
    0xb, 0x1e, 0x28, 0x37, 0x38, 0x39, 0x3a
};

static const uint16_t unicode_list_32[] = {
    0x0, 0x3, 0x4, 0x7, 0xc, 0xe, 0xf, 0x10,
    0x13, 0x23, 0x26, 0x2d, 0x2e, 0x2f, 0x30, 0x31,
    0x32, 0x33, 0x34, 0x35, 0x37, 0x38, 0x39, 0x3e,
    0x40, 0x5e, 0x5f, 0x60, 0x61, 0x62, 0x63, 0x64,
    0x65, 0x67, 0x68, 0x69, 0x6a, 0x81, 0x88, 0x89,
    0x8a, 0x8b, 0x8c, 0x8d, 0x9c, 0x9d, 0xa8, 0xa9,
    0xaa, 0xc6, 0xf3, 0x106, 0x111, 0x132, 0x133, 0x162
};

static const uint16_t unicode_list_34[] = {
    0x0, 0x149, 0x14a, 0x14b, 0x14c, 0x14d, 0x14e, 0x14f,
    0x150, 0x154, 0x15b, 0x15c, 0x15d, 0x15e, 0x15f, 0x160,
    0x161, 0x162, 0x163, 0x164, 0x165, 0x166, 0x18c, 0x18f,
    0x1aa, 0x1d3, 0x1d4, 0x1d5, 0x1d6, 0x1f1, 0x1f7, 0x1fc,
    0x1fd, 0x1fe, 0x1ff, 0x201, 0x202, 0x465
};

static const uint8_t glyph_id_ofs_list_42[] = {
    0, 1, 0, 2, 0, 0, 3, 0,
    0, 0, 0, 0, 0, 0, 4, 5,
    6, 7, 8, 9, 10, 11, 12, 13,
    14, 15, 16, 17, 0, 18, 19, 20,
    21, 22, 23, 24, 0, 0, 0, 0,
    25, 26, 27, 28, 29, 0, 30, 0,
    31, 32, 33, 34, 35, 36, 37, 0,
    38, 39, 40, 41, 0, 0, 0, 0,
    42, 43, 44, 45, 46, 47, 0, 0,
    48, 49, 50, 51, 52, 53, 54, 55,
    56, 57, 58, 59, 60, 61, 62, 63,
    64, 65, 66, 67, 68, 0, 69, 70,
    71, 72, 73, 0, 74, 75, 76, 77,
    78, 0, 79, 80, 81, 82, 83, 84,
    85, 86, 87, 88
};

/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 32, .range_length = 118, .glyph_id_start = 1,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    },
    {
        .range_start = 150, .range_length = 256, .glyph_id_start = 119,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    },
    {
        .range_start = 407, .range_length = 9, .glyph_id_start = 375,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    },
    {
        .range_start = 439, .range_length = 1, .glyph_id_start = 384,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    },
    {
        .range_start = 461, .range_length = 23, .glyph_id_start = 385,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    },
    {
        .range_start = 486, .range_length = 16, .glyph_id_start = 408,
        .unicode_list = NULL, .glyph_id_ofs_list = glyph_id_ofs_list_5, .list_length = 16, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_FULL
    },
    {
        .range_start = 504, .range_length = 36, .glyph_id_start = 417,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    },
    {
        .range_start = 550, .range_length = 183, .glyph_id_start = 453,
        .unicode_list = unicode_list_7, .glyph_id_ofs_list = NULL, .list_length = 21, .type = LV_FONT_FMT_TXT_CMAP_SPARSE_TINY
    },
    {
        .range_start = 768, .range_length = 69, .glyph_id_start = 474,
        .unicode_list = NULL, .glyph_id_ofs_list = glyph_id_ofs_list_8, .list_length = 69, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_FULL
    },
    {
        .range_start = 847, .range_length = 65, .glyph_id_start = 531,
        .unicode_list = unicode_list_9, .glyph_id_ofs_list = NULL, .list_length = 9, .type = LV_FONT_FMT_TXT_CMAP_SPARSE_TINY
    },
    {
        .range_start = 913, .range_length = 17, .glyph_id_start = 540,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    },
    {
        .range_start = 931, .range_length = 13, .glyph_id_start = 557,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    },
    {
        .range_start = 945, .range_length = 30, .glyph_id_start = 570,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    },
    {
        .range_start = 1024, .range_length = 10, .glyph_id_start = 600,
        .unicode_list = NULL, .glyph_id_ofs_list = glyph_id_ofs_list_13, .list_length = 10, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_FULL
    },
    {
        .range_start = 1040, .range_length = 66, .glyph_id_start = 607,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    },
    {
        .range_start = 1109, .range_length = 157, .glyph_id_start = 673,
        .unicode_list = unicode_list_15, .glyph_id_ofs_list = NULL, .list_length = 15, .type = LV_FONT_FMT_TXT_CMAP_SPARSE_TINY
    },
    {
        .range_start = 1488, .range_length = 27, .glyph_id_start = 688,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    },
    {
        .range_start = 1571, .range_length = 40, .glyph_id_start = 715,
        .unicode_list = NULL, .glyph_id_ofs_list = glyph_id_ofs_list_17, .list_length = 40, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_FULL
    },
    {
        .range_start = 1649, .range_length = 3967, .glyph_id_start = 745,
        .unicode_list = unicode_list_18, .glyph_id_ofs_list = NULL, .list_length = 17, .type = LV_FONT_FMT_TXT_CMAP_SPARSE_TINY
    },
    {
        .range_start = 5792, .range_length = 12, .glyph_id_start = 762,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    },
    {
        .range_start = 5809, .range_length = 72, .glyph_id_start = 774,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    },
    {
        .range_start = 7680, .range_length = 16, .glyph_id_start = 846,
        .unicode_list = NULL, .glyph_id_ofs_list = glyph_id_ofs_list_21, .list_length = 16, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_FULL
    },
    {
        .range_start = 7745, .range_length = 11, .glyph_id_start = 858,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    },
    {
        .range_start = 7768, .range_length = 7, .glyph_id_start = 869,
        .unicode_list = NULL, .glyph_id_ofs_list = glyph_id_ofs_list_23, .list_length = 7, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_FULL
    },
    {
        .range_start = 7936, .range_length = 126, .glyph_id_start = 874,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    },
    {
        .range_start = 8064, .range_length = 53, .glyph_id_start = 1000,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    },
    {
        .range_start = 8118, .range_length = 71, .glyph_id_start = 1053,
        .unicode_list = NULL, .glyph_id_ofs_list = glyph_id_ofs_list_26, .list_length = 71, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_FULL
    },
    {
        .range_start = 8208, .range_length = 10, .glyph_id_start = 1098,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    },
    {
        .range_start = 8220, .range_length = 774, .glyph_id_start = 1108,
        .unicode_list = unicode_list_28, .glyph_id_ofs_list = NULL, .list_length = 104, .type = LV_FONT_FMT_TXT_CMAP_SPARSE_TINY
    },
    {
        .range_start = 9115, .range_length = 21, .glyph_id_start = 1212,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    },
    {
        .range_start = 9138, .range_length = 59, .glyph_id_start = 1233,
        .unicode_list = unicode_list_30, .glyph_id_ofs_list = NULL, .list_length = 15, .type = LV_FONT_FMT_TXT_CMAP_SPARSE_TINY
    },
    {
        .range_start = 9472, .range_length = 256, .glyph_id_start = 1248,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    },
    {
        .range_start = 9730, .range_length = 355, .glyph_id_start = 1504,
        .unicode_list = unicode_list_32, .glyph_id_ofs_list = NULL, .list_length = 56, .type = LV_FONT_FMT_TXT_CMAP_SPARSE_TINY
    },
    {
        .range_start = 10240, .range_length = 256, .glyph_id_start = 1560,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    },
    {
        .range_start = 10697, .range_length = 1126, .glyph_id_start = 1816,
        .unicode_list = unicode_list_34, .glyph_id_ofs_list = NULL, .list_length = 38, .type = LV_FONT_FMT_TXT_CMAP_SPARSE_TINY
    },
    {
        .range_start = 19904, .range_length = 64, .glyph_id_start = 1854,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    },
    {
        .range_start = 57472, .range_length = 43, .glyph_id_start = 1918,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    },
    {
        .range_start = 57515, .range_length = 256, .glyph_id_start = 1961,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    },
    {
        .range_start = 59392, .range_length = 126, .glyph_id_start = 2217,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    },
    {
        .range_start = 60416, .range_length = 8, .glyph_id_start = 2343,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    },
    {
        .range_start = 60426, .range_length = 116, .glyph_id_start = 2351,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    },
    {
        .range_start = 60543, .range_length = 96, .glyph_id_start = 2467,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    },
    {
        .range_start = 65153, .range_length = 116, .glyph_id_start = 2563,
        .unicode_list = NULL, .glyph_id_ofs_list = glyph_id_ofs_list_42, .list_length = 116, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_FULL
    },
    {
        .range_start = 65281, .range_length = 54, .glyph_id_start = 2652,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    },
    {
        .range_start = 65336, .range_length = 38, .glyph_id_start = 2706,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    },
    {
        .range_start = 65375, .range_length = 65, .glyph_id_start = 2744,
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
    .cmap_num = 46,
    .bpp = 1,
    .kern_classes = 0,
    .bitmap_format = 0
};


/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
lv_font_t unascii_fantasy_16 = {
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 10,          /*The maximum line height required by the font*/
    .base_line = -4,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
    .dsc = &font_dsc           /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
};

#endif /*#if UNASCII_FANTASY_16*/

