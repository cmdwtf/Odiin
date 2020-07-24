#include "lvgl/lvgl.h"

/*******************************************************************************
 * Size: 8 px
 * Bpp: 1
 * Opts: 
 ******************************************************************************/

#ifndef PRESS_START_2P_8
#define PRESS_START_2P_8 1
#endif

#if PRESS_START_2P_8

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t gylph_bitmap[] = {
    /* U+20 " " */
    0x0,

    /* U+21 "!" */
    0xff, 0xec, 0x30,

    /* U+22 "\"" */
    0xde, 0xf6,

    /* U+23 "#" */
    0x6d, 0xfd, 0xb3, 0x66, 0xdf, 0xdb, 0x0,

    /* U+24 "$" */
    0x10, 0xfb, 0x43, 0xe1, 0x7f, 0x84, 0x0,

    /* U+25 "%" */
    0x63, 0x4b, 0x20, 0x82, 0x69, 0x63, 0x0,

    /* U+26 "&" */
    0x71, 0xb3, 0x63, 0x8d, 0xb9, 0x9f, 0x80,

    /* U+27 "'" */
    0xfc,

    /* U+28 "(" */
    0x36, 0xcc, 0xc6, 0x30,

    /* U+29 ")" */
    0xc6, 0x33, 0x36, 0xc0,

    /* U+2A "*" */
    0x6c, 0x73, 0xf9, 0xc6, 0xc0,

    /* U+2B "+" */
    0x30, 0xcf, 0xcc, 0x30,

    /* U+2C "," */
    0x6f, 0x0,

    /* U+2D "-" */
    0xfc,

    /* U+2E "." */
    0xf0,

    /* U+2F "/" */
    0x2, 0x8, 0x20, 0x82, 0x8, 0x20, 0x0,

    /* U+30 "0" */
    0x38, 0x9b, 0x1e, 0x3c, 0x6c, 0x8e, 0x0,

    /* U+31 "1" */
    0x31, 0xc3, 0xc, 0x30, 0xcf, 0xc0,

    /* U+32 "2" */
    0x7d, 0x8c, 0x39, 0xe7, 0x9c, 0x3f, 0x80,

    /* U+33 "3" */
    0x7e, 0x18, 0x61, 0xe0, 0x78, 0xdf, 0x0,

    /* U+34 "4" */
    0x1c, 0x79, 0xb6, 0x6f, 0xe1, 0x83, 0x0,

    /* U+35 "5" */
    0xfd, 0x83, 0xf0, 0x30, 0x78, 0xdf, 0x0,

    /* U+36 "6" */
    0x3c, 0xc3, 0x7, 0xec, 0x78, 0xdf, 0x0,

    /* U+37 "7" */
    0xff, 0x8c, 0x30, 0xc3, 0x6, 0xc, 0x0,

    /* U+38 "8" */
    0x79, 0x8b, 0x93, 0xc9, 0xf0, 0xdf, 0x0,

    /* U+39 "9" */
    0x7d, 0x8f, 0x1b, 0xf0, 0x61, 0x9e, 0x0,

    /* U+3A ":" */
    0xf3, 0xc0,

    /* U+3B ";" */
    0x6c, 0x37, 0x80,

    /* U+3C "<" */
    0x19, 0x99, 0x86, 0x18, 0x60,

    /* U+3D "=" */
    0xfe, 0x3, 0xf8,

    /* U+3E ">" */
    0xc3, 0xc, 0x33, 0x33, 0x0,

    /* U+3F "?" */
    0x7d, 0xff, 0x18, 0x63, 0x80, 0xe, 0x0,

    /* U+40 "@" */
    0x7d, 0x6, 0xed, 0x5b, 0xf0, 0x1f, 0x0,

    /* U+41 "A" */
    0x38, 0xdb, 0x1e, 0x3f, 0xf8, 0xf1, 0x80,

    /* U+42 "B" */
    0xfd, 0x8f, 0x1f, 0xec, 0x78, 0xff, 0x0,

    /* U+43 "C" */
    0x3c, 0xcf, 0x6, 0xc, 0xc, 0xcf, 0x0,

    /* U+44 "D" */
    0xf9, 0x9b, 0x1e, 0x3c, 0x79, 0xbe, 0x0,

    /* U+45 "E" */
    0xff, 0x83, 0x7, 0xec, 0x18, 0x3f, 0x80,

    /* U+46 "F" */
    0xff, 0x83, 0x7, 0xec, 0x18, 0x30, 0x0,

    /* U+47 "G" */
    0x3e, 0xc3, 0x6, 0x7c, 0x6c, 0xcf, 0x80,

    /* U+48 "H" */
    0xc7, 0x8f, 0x1f, 0xfc, 0x78, 0xf1, 0x80,

    /* U+49 "I" */
    0xfc, 0xc3, 0xc, 0x30, 0xcf, 0xc0,

    /* U+4A "J" */
    0x6, 0xc, 0x18, 0x30, 0x78, 0xdf, 0x0,

    /* U+4B "K" */
    0xc7, 0x9b, 0x67, 0x8f, 0x9b, 0xb3, 0x80,

    /* U+4C "L" */
    0xc3, 0xc, 0x30, 0xc3, 0xf, 0xc0,

    /* U+4D "M" */
    0xc7, 0xdf, 0xff, 0xfd, 0x78, 0xf1, 0x80,

    /* U+4E "N" */
    0xc7, 0xcf, 0xdf, 0xfd, 0xf9, 0xf1, 0x80,

    /* U+4F "O" */
    0x7d, 0x8f, 0x1e, 0x3c, 0x78, 0xdf, 0x0,

    /* U+50 "P" */
    0xfd, 0x8f, 0x1e, 0x3f, 0xd8, 0x30, 0x0,

    /* U+51 "Q" */
    0x7d, 0x8f, 0x1e, 0x3d, 0xf9, 0x9e, 0x80,

    /* U+52 "R" */
    0xfd, 0x8f, 0x1e, 0x7f, 0x9b, 0xb3, 0x80,

    /* U+53 "S" */
    0x79, 0x9b, 0x3, 0xe0, 0x78, 0xdf, 0x0,

    /* U+54 "T" */
    0xfc, 0xc3, 0xc, 0x30, 0xc3, 0x0,

    /* U+55 "U" */
    0xc7, 0x8f, 0x1e, 0x3c, 0x78, 0xdf, 0x0,

    /* U+56 "V" */
    0xc7, 0x8f, 0x1f, 0x77, 0xc7, 0x4, 0x0,

    /* U+57 "W" */
    0xc7, 0x8f, 0x5f, 0xff, 0xfd, 0xf1, 0x80,

    /* U+58 "X" */
    0xc7, 0xdd, 0xf1, 0xc7, 0xdd, 0xf1, 0x80,

    /* U+59 "Y" */
    0xcf, 0x3c, 0xde, 0x30, 0xc3, 0x0,

    /* U+5A "Z" */
    0xfe, 0x1c, 0x71, 0xc7, 0x1c, 0x3f, 0x80,

    /* U+5B "[" */
    0xfc, 0xcc, 0xcc, 0xf0,

    /* U+5C "\\" */
    0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,

    /* U+5D "]" */
    0xf3, 0x33, 0x33, 0xf0,

    /* U+5E "^" */
    0x76, 0xc0,

    /* U+5F "_" */
    0xfe,

    /* U+60 "`" */
    0x90,

    /* U+61 "a" */
    0x7c, 0xd, 0xfe, 0x37, 0xe0,

    /* U+62 "b" */
    0xc1, 0x83, 0xf6, 0x3c, 0x78, 0xdf, 0x0,

    /* U+63 "c" */
    0x7f, 0x83, 0x6, 0x7, 0xe0,

    /* U+64 "d" */
    0x6, 0xd, 0xfe, 0x3c, 0x78, 0xdf, 0x80,

    /* U+65 "e" */
    0x7d, 0x8f, 0xfe, 0x7, 0xc0,

    /* U+66 "f" */
    0x1c, 0xcf, 0xcc, 0x30, 0xc3, 0x0,

    /* U+67 "g" */
    0x7f, 0x8f, 0x1b, 0xf0, 0x6f, 0x80,

    /* U+68 "h" */
    0xc1, 0x83, 0xf6, 0x3c, 0x78, 0xf1, 0x80,

    /* U+69 "i" */
    0x30, 0x7, 0xc, 0x30, 0xcf, 0xc0,

    /* U+6A "j" */
    0x18, 0xe, 0x31, 0x8c, 0x7e,

    /* U+6B "k" */
    0xc1, 0x83, 0x3f, 0xef, 0x9b, 0xb3, 0x80,

    /* U+6C "l" */
    0x70, 0xc3, 0xc, 0x30, 0xcf, 0xc0,

    /* U+6D "m" */
    0xfd, 0x6e, 0xdd, 0xbb, 0x60,

    /* U+6E "n" */
    0xfd, 0x8f, 0x1e, 0x3c, 0x60,

    /* U+6F "o" */
    0x7d, 0x8f, 0x1e, 0x37, 0xc0,

    /* U+70 "p" */
    0xfd, 0x8f, 0x1f, 0xec, 0x18, 0x0,

    /* U+71 "q" */
    0x7f, 0x8f, 0x1b, 0xf0, 0x60, 0xc0,

    /* U+72 "r" */
    0xdf, 0x8c, 0x30, 0xc0,

    /* U+73 "s" */
    0x7d, 0x81, 0xf0, 0x3f, 0xc0,

    /* U+74 "t" */
    0x30, 0xcf, 0xcc, 0x30, 0xc3, 0x0,

    /* U+75 "u" */
    0xc7, 0x8f, 0x1e, 0x37, 0xe0,

    /* U+76 "v" */
    0xcf, 0x3c, 0xde, 0x30,

    /* U+77 "w" */
    0xb7, 0x6e, 0xdd, 0xb7, 0xe0,

    /* U+78 "x" */
    0xc7, 0xfc, 0xe7, 0xfc, 0x60,

    /* U+79 "y" */
    0xc7, 0x8f, 0x1b, 0xf0, 0x6f, 0x80,

    /* U+7A "z" */
    0xfe, 0x38, 0xe3, 0x8f, 0xe0,

    /* U+7B "{" */
    0x36, 0x6c, 0x66, 0x30,

    /* U+7C "|" */
    0xff, 0xfc,

    /* U+7D "}" */
    0xc6, 0x63, 0x66, 0xc0,

    /* U+7E "~" */
    0x71, 0x74, 0x70,

    /* U+7F "" */
    0xde, 0xc0,

    /* U+A0 " " */
    0x0,

    /* U+A1 "¡" */
    0x61, 0xbf, 0xf8,

    /* U+A2 "¢" */
    0x10, 0xfb, 0x5e, 0x8d, 0x6f, 0x84, 0x0,

    /* U+A3 "£" */
    0x3c, 0xcd, 0x87, 0xe6, 0xc, 0x3f, 0x80,

    /* U+A4 "¤" */
    0xb5, 0x24, 0x92, 0xb4,

    /* U+A5 "¥" */
    0xcf, 0x37, 0xbf, 0x33, 0xf3, 0x0,

    /* U+A6 "¦" */
    0xfc, 0xfc,

    /* U+A7 "§" */
    0x7b, 0x3f, 0x12, 0x3f, 0x37, 0x80,

    /* U+A8 "¨" */
    0xd8,

    /* U+A9 "©" */
    0x3c, 0x42, 0x99, 0xa1, 0xa1, 0x99, 0x42, 0x3c,

    /* U+AA "ª" */
    0xf3, 0xf6, 0xf0,

    /* U+AB "«" */
    0x36, 0xdb, 0x63, 0x63, 0x60,

    /* U+AC "¬" */
    0xfc, 0x30, 0xc0,

    /* U+AD "­" */
    0xfc,

    /* U+AE "®" */
    0x3c, 0x42, 0xb9, 0xa5, 0xb9, 0xa5, 0x42, 0x3c,

    /* U+AF "¯" */
    0xf8,

    /* U+B0 "°" */
    0x55, 0x0,

    /* U+B1 "±" */
    0x30, 0xcf, 0xcc, 0x30, 0xf, 0xc0,

    /* U+B2 "²" */
    0xe3, 0x6f,

    /* U+B3 "³" */
    0xf6, 0x3e,

    /* U+B4 "´" */
    0x60,

    /* U+B5 "µ" */
    0xcd, 0x9b, 0x36, 0x6f, 0x78, 0x0,

    /* U+B6 "¶" */
    0x7f, 0x59, 0x75, 0x7c, 0x51, 0x40,

    /* U+B7 "·" */
    0xf0,

    /* U+B8 "¸" */
    0x38,

    /* U+B9 "¹" */
    0x6e, 0x6f,

    /* U+BA "º" */
    0x76, 0xf6, 0xe0,

    /* U+BB "»" */
    0xd8, 0xd8, 0xdb, 0x6d, 0x80,

    /* U+BC "¼" */
    0x43, 0x89, 0x22, 0x92, 0x69, 0xe0, 0x80,

    /* U+BD "½" */
    0x43, 0x89, 0x22, 0xb2, 0x28, 0xa3, 0x80,

    /* U+BE "¾" */
    0xe2, 0x88, 0xa6, 0x92, 0x69, 0xe0, 0x80,

    /* U+BF "¿" */
    0x38, 0x0, 0xe3, 0xc, 0x7f, 0xdf, 0x0,

    /* U+C0 "À" */
    0x20, 0x20, 0xe3, 0x6c, 0x7f, 0xf1, 0x80,

    /* U+C1 "Á" */
    0x8, 0x20, 0xe3, 0x6c, 0x7f, 0xf1, 0x80,

    /* U+C2 "Â" */
    0x38, 0xd8, 0xe3, 0x6c, 0x7f, 0xf1, 0x80,

    /* U+C3 "Ã" */
    0x34, 0xb0, 0xe3, 0x6c, 0x7f, 0xf1, 0x80,

    /* U+C4 "Ä" */
    0x6c, 0x0, 0xe3, 0x6c, 0x7f, 0xf1, 0x80,

    /* U+C5 "Å" */
    0x10, 0x50, 0xe3, 0x6c, 0x7f, 0xf1, 0x80,

    /* U+C6 "Æ" */
    0x3e, 0xf3, 0x66, 0xff, 0x9b, 0x37, 0x80,

    /* U+C7 "Ç" */
    0x3c, 0xcf, 0x6, 0x6, 0x67, 0x82, 0x18,

    /* U+C8 "È" */
    0x20, 0x23, 0xfe, 0xf, 0xd8, 0x3f, 0x80,

    /* U+C9 "É" */
    0x8, 0x23, 0xfe, 0xf, 0xd8, 0x3f, 0x80,

    /* U+CA "Ê" */
    0x38, 0xdb, 0xfe, 0xf, 0xd8, 0x3f, 0x80,

    /* U+CB "Ë" */
    0x6c, 0x3, 0xfe, 0xf, 0xd8, 0x3f, 0x80,

    /* U+CC "Ì" */
    0x20, 0x4f, 0xcc, 0x30, 0xcf, 0xc0,

    /* U+CD "Í" */
    0x10, 0x8f, 0xcc, 0x30, 0xcf, 0xc0,

    /* U+CE "Î" */
    0x31, 0xef, 0xcc, 0x30, 0xcf, 0xc0,

    /* U+CF "Ï" */
    0xcc, 0xf, 0xcc, 0x30, 0xcf, 0xc0,

    /* U+D0 "Ð" */
    0x78, 0xd9, 0x9f, 0xb6, 0x6d, 0x9e, 0x0,

    /* U+D1 "Ñ" */
    0x34, 0xb3, 0x9f, 0xbf, 0xfb, 0xf3, 0x80,

    /* U+D2 "Ò" */
    0x20, 0x21, 0xf6, 0x3c, 0x78, 0xdf, 0x0,

    /* U+D3 "Ó" */
    0x8, 0x21, 0xf6, 0x3c, 0x78, 0xdf, 0x0,

    /* U+D4 "Ô" */
    0x38, 0xd9, 0xf6, 0x3c, 0x78, 0xdf, 0x0,

    /* U+D5 "Õ" */
    0x34, 0xb1, 0xf6, 0x3c, 0x78, 0xdf, 0x0,

    /* U+D6 "Ö" */
    0x6c, 0x1, 0xf6, 0x3c, 0x78, 0xdf, 0x0,

    /* U+D7 "×" */
    0x8a, 0x88, 0xa8, 0x80,

    /* U+D8 "Ø" */
    0x7d, 0x8f, 0x3e, 0xbe, 0x78, 0xdf, 0x0,

    /* U+D9 "Ù" */
    0x20, 0x23, 0x1e, 0x3c, 0x78, 0xdf, 0x0,

    /* U+DA "Ú" */
    0x8, 0x23, 0x1e, 0x3c, 0x78, 0xdf, 0x0,

    /* U+DB "Û" */
    0x38, 0xd8, 0x6, 0x3c, 0x78, 0xdf, 0x0,

    /* U+DC "Ü" */
    0x6c, 0x3, 0x1e, 0x3c, 0x78, 0xdf, 0x0,

    /* U+DD "Ý" */
    0x10, 0x8c, 0xf3, 0x78, 0xc3, 0x0,

    /* U+DE "Þ" */
    0xc1, 0xfb, 0x1e, 0x3c, 0x7f, 0xb0, 0x0,

    /* U+DF "ß" */
    0x7b, 0x3c, 0xf6, 0xcf, 0xbd, 0x80,

    /* U+E0 "à" */
    0x20, 0x21, 0xf0, 0x37, 0xf8, 0xdf, 0x80,

    /* U+E1 "á" */
    0x8, 0x21, 0xf0, 0x37, 0xf8, 0xdf, 0x80,

    /* U+E2 "â" */
    0x38, 0xd9, 0xf0, 0x37, 0xf8, 0xdf, 0x80,

    /* U+E3 "ã" */
    0x34, 0xb1, 0xf0, 0x37, 0xf8, 0xdf, 0x80,

    /* U+E4 "ä" */
    0x6c, 0x1, 0xf0, 0x37, 0xf8, 0xdf, 0x80,

    /* U+E5 "å" */
    0x10, 0x51, 0xf0, 0x37, 0xf8, 0xdf, 0x80,

    /* U+E6 "æ" */
    0x7c, 0x2d, 0xfe, 0x87, 0xc0,

    /* U+E7 "ç" */
    0x7f, 0x83, 0x3, 0xf0, 0x86, 0x0,

    /* U+E8 "è" */
    0x20, 0x21, 0xf6, 0x3f, 0xf8, 0x1f, 0x0,

    /* U+E9 "é" */
    0x8, 0x21, 0xf6, 0x3f, 0xf8, 0x1f, 0x0,

    /* U+EA "ê" */
    0x38, 0xd9, 0xf6, 0x3f, 0xf8, 0x1f, 0x0,

    /* U+EB "ë" */
    0x6c, 0x1, 0xf6, 0x3f, 0xf8, 0x1f, 0x0,

    /* U+EC "ì" */
    0x40, 0x80, 0x1c, 0x30, 0xcf, 0xc0,

    /* U+ED "í" */
    0x10, 0x80, 0x1c, 0x30, 0xcf, 0xc0,

    /* U+EE "î" */
    0x73, 0x60, 0x1c, 0x30, 0xcf, 0xc0,

    /* U+EF "ï" */
    0xd8, 0x7, 0xc, 0x30, 0xcf, 0xc0,

    /* U+F0 "ð" */
    0x64, 0xf2, 0x63, 0xec, 0x78, 0xdf, 0x0,

    /* U+F1 "ñ" */
    0x34, 0xb3, 0xf6, 0x3c, 0x78, 0xf1, 0x80,

    /* U+F2 "ò" */
    0x20, 0x21, 0xf6, 0x3c, 0x78, 0xdf, 0x0,

    /* U+F3 "ó" */
    0x8, 0x21, 0xf6, 0x3c, 0x78, 0xdf, 0x0,

    /* U+F4 "ô" */
    0x38, 0xd9, 0xf6, 0x3c, 0x78, 0xdf, 0x0,

    /* U+F5 "õ" */
    0x34, 0xb1, 0xf6, 0x3c, 0x78, 0xdf, 0x0,

    /* U+F6 "ö" */
    0x6c, 0x1, 0xf6, 0x3c, 0x78, 0xdf, 0x0,

    /* U+F7 "÷" */
    0x30, 0xf, 0xc0, 0x30,

    /* U+F8 "ø" */
    0x7d, 0x9f, 0x5f, 0x37, 0xc0,

    /* U+F9 "ù" */
    0x20, 0x23, 0x1e, 0x3c, 0x78, 0xdf, 0x80,

    /* U+FA "ú" */
    0x8, 0x23, 0x1e, 0x3c, 0x78, 0xdf, 0x80,

    /* U+FB "û" */
    0x38, 0xd8, 0x6, 0x3c, 0x78, 0xdf, 0x80,

    /* U+FC "ü" */
    0x6c, 0x3, 0x1e, 0x3c, 0x78, 0xdf, 0x80,

    /* U+FD "ý" */
    0x8, 0x23, 0x1e, 0x3c, 0x6f, 0xc1, 0xbe,

    /* U+FE "þ" */
    0xc1, 0x83, 0xf6, 0x3c, 0x7f, 0xb0, 0x60,

    /* U+FF "ÿ" */
    0x6c, 0x3, 0x1e, 0x3c, 0x6f, 0xc1, 0xbe,

    /* U+100 "Ā" */
    0x7c, 0x0, 0xe3, 0x6c, 0x7f, 0xf1, 0x80,

    /* U+101 "ā" */
    0x7c, 0x1, 0xf0, 0x37, 0xf8, 0xdf, 0x80,

    /* U+102 "Ă" */
    0x44, 0x70, 0xe3, 0x6c, 0x7f, 0xf1, 0x80,

    /* U+103 "ă" */
    0x44, 0x71, 0xf0, 0x37, 0xf8, 0xdf, 0x80,

    /* U+104 "Ą" */
    0x38, 0xdb, 0x1f, 0xfc, 0x60, 0x82, 0x3,

    /* U+105 "ą" */
    0x7c, 0xd, 0xfe, 0x37, 0xe2, 0x8, 0xc,

    /* U+106 "Ć" */
    0x8, 0x20, 0xf3, 0x3c, 0xc, 0xcf, 0x0,

    /* U+107 "ć" */
    0x8, 0x21, 0xfe, 0xc, 0x18, 0x1f, 0x80,

    /* U+108 "Ĉ" */
    0x38, 0xd8, 0xf3, 0x3c, 0xc, 0xcf, 0x0,

    /* U+109 "ĉ" */
    0x38, 0xd9, 0xfe, 0xc, 0x18, 0x1f, 0x80,

    /* U+10A "Ċ" */
    0x18, 0x0, 0xf3, 0x3c, 0xc, 0xcf, 0x0,

    /* U+10B "ċ" */
    0x18, 0x1, 0xfe, 0xc, 0x18, 0x1f, 0x80,

    /* U+10C "Č" */
    0x66, 0x78, 0xf3, 0x3c, 0xc, 0xcf, 0x0,

    /* U+10D "č" */
    0x6c, 0x71, 0xfe, 0xc, 0x18, 0x1f, 0x80,

    /* U+10E "Ď" */
    0x6c, 0x73, 0xe6, 0x6c, 0x79, 0xbe, 0x0,

    /* U+10F "ď" */
    0x1b, 0x1b, 0x7a, 0xd8, 0xd8, 0xd8, 0x78,

    /* U+110 "Đ" */
    0x78, 0xd9, 0x9f, 0xb6, 0x6d, 0x9e, 0x0,

    /* U+111 "đ" */
    0xc, 0x3d, 0xf6, 0x6c, 0xd9, 0x9f, 0x0,

    /* U+112 "Ē" */
    0x7c, 0x3, 0xfe, 0xf, 0xd8, 0x3f, 0x80,

    /* U+113 "ē" */
    0x7c, 0x1, 0xf6, 0x3f, 0xf8, 0x1f, 0x0,

    /* U+114 "Ĕ" */
    0x44, 0x73, 0xfe, 0xf, 0xd8, 0x3f, 0x80,

    /* U+115 "ĕ" */
    0x44, 0x71, 0xf6, 0x3f, 0xf8, 0x1f, 0x0,

    /* U+116 "Ė" */
    0x18, 0x3, 0xfe, 0xf, 0xd8, 0x3f, 0x80,

    /* U+117 "ė" */
    0x18, 0x1, 0xf6, 0x3f, 0xf8, 0x1f, 0x0,

    /* U+118 "Ę" */
    0xff, 0x83, 0xf6, 0xf, 0xe2, 0x8, 0xc,

    /* U+119 "ę" */
    0x7d, 0x8f, 0xfe, 0x7, 0xc2, 0x8, 0xc,

    /* U+11A "Ě" */
    0x6c, 0x73, 0xfe, 0xf, 0xd8, 0x3f, 0x80,

    /* U+11B "ě" */
    0x6c, 0x71, 0xf6, 0x3f, 0xf8, 0x1f, 0x0,

    /* U+11C "Ĝ" */
    0x38, 0xd9, 0xfe, 0xc, 0xf8, 0xdf, 0x80,

    /* U+11D "ĝ" */
    0x38, 0xd9, 0xfe, 0x3c, 0x6f, 0xc1, 0xbe,

    /* U+11E "Ğ" */
    0x44, 0x71, 0xfe, 0xc, 0xf8, 0xdf, 0x80,

    /* U+11F "ğ" */
    0x44, 0x71, 0xfe, 0x3c, 0x6f, 0xc1, 0xbe,

    /* U+120 "Ġ" */
    0x18, 0x1, 0xfe, 0xc, 0xf8, 0xdf, 0x80,

    /* U+121 "ġ" */
    0x18, 0x1, 0xfe, 0x3c, 0x6f, 0xc1, 0xbe,

    /* U+122 "Ģ" */
    0x3e, 0xc3, 0x6, 0x76, 0x67, 0xc6, 0x18,

    /* U+123 "ģ" */
    0x18, 0x61, 0xfe, 0x3c, 0x6f, 0xc1, 0xbe,

    /* U+124 "Ĥ" */
    0x39, 0xdf, 0x1e, 0x3f, 0xf8, 0xf1, 0x80,

    /* U+125 "ĥ" */
    0x39, 0xdb, 0x7, 0xec, 0x78, 0xf1, 0x80,

    /* U+126 "Ħ" */
    0xc7, 0xff, 0x1f, 0xfc, 0x78, 0xf1, 0x80,

    /* U+127 "ħ" */
    0x61, 0xe1, 0xf3, 0x36, 0x6c, 0xd9, 0x80,

    /* U+128 "Ĩ" */
    0x66, 0x6f, 0xcc, 0x30, 0xcf, 0xc0,

    /* U+129 "ĩ" */
    0x66, 0x60, 0x1c, 0x30, 0xcf, 0xc0,

    /* U+12A "Ī" */
    0xfc, 0xf, 0xcc, 0x30, 0xcf, 0xc0,

    /* U+12B "ī" */
    0xf8, 0x7, 0xc, 0x30, 0xcf, 0xc0,

    /* U+12C "Ĭ" */
    0x48, 0xcf, 0xcc, 0x30, 0xcf, 0xc0,

    /* U+12D "ĭ" */
    0x89, 0xc7, 0xc, 0x30, 0xcf, 0xc0,

    /* U+12E "Į" */
    0xfc, 0xc3, 0xc, 0xfc, 0x84, 0xc,

    /* U+12F "į" */
    0x30, 0x7, 0xc, 0xfc, 0x84, 0xc,

    /* U+130 "İ" */
    0x30, 0xf, 0xcc, 0x30, 0xcf, 0xc0,

    /* U+131 "ı" */
    0x70, 0xc3, 0xc, 0xfc,

    /* U+132 "Ĳ" */
    0xf6, 0xcd, 0x9b, 0x3f, 0x60, 0xdf, 0x0,

    /* U+133 "ĳ" */
    0x66, 0x3, 0xbb, 0x36, 0x6c, 0xc1, 0x9e,

    /* U+134 "Ĵ" */
    0x1c, 0x6c, 0x18, 0x30, 0x78, 0xdf, 0x0,

    /* U+135 "ĵ" */
    0x39, 0xb0, 0xe, 0x18, 0x61, 0xbc,

    /* U+136 "Ķ" */
    0xcd, 0xb3, 0xc7, 0xcd, 0xd9, 0xcc, 0x30,

    /* U+137 "ķ" */
    0xc1, 0x9f, 0xf7, 0xcd, 0xd9, 0xcc, 0x30,

    /* U+138 "ĸ" */
    0xc7, 0x9b, 0xe6, 0x6c, 0x60,

    /* U+139 "Ĺ" */
    0x13, 0x8c, 0x30, 0xc3, 0xf, 0xc0,

    /* U+13A "ĺ" */
    0x10, 0x87, 0xc, 0x30, 0xcf, 0xc0,

    /* U+13B "Ļ" */
    0xc3, 0xc, 0x30, 0xc3, 0xf3, 0x18,

    /* U+13C "ļ" */
    0x70, 0xc3, 0xc, 0x33, 0xf3, 0x18,

    /* U+13D "Ľ" */
    0xcf, 0x3c, 0xb0, 0xc3, 0xf, 0xc0,

    /* U+13E "ľ" */
    0x76, 0x6c, 0xd1, 0x83, 0x6, 0x3f, 0x0,

    /* U+13F "Ŀ" */
    0xc3, 0xd, 0xb6, 0xc3, 0xf, 0xc0,

    /* U+140 "ŀ" */
    0x70, 0x60, 0xd9, 0xb3, 0x6, 0x3f, 0x0,

    /* U+141 "Ł" */
    0x60, 0xc1, 0xc7, 0x6, 0xc, 0x1f, 0x80,

    /* U+142 "ł" */
    0x70, 0xc3, 0x9c, 0x30, 0xcf, 0xc0,

    /* U+143 "Ń" */
    0x8, 0x23, 0x9f, 0xbf, 0xfb, 0xf3, 0x80,

    /* U+144 "ń" */
    0x8, 0x23, 0xf6, 0x3c, 0x78, 0xf1, 0x80,

    /* U+145 "Ņ" */
    0xe7, 0xef, 0xfe, 0xfc, 0xf8, 0xc6, 0x18,

    /* U+146 "ņ" */
    0xfd, 0x8f, 0x1e, 0x3c, 0x63, 0xc, 0x0,

    /* U+147 "Ň" */
    0x6c, 0x73, 0x9f, 0xbf, 0xfb, 0xf3, 0x80,

    /* U+148 "ň" */
    0x6c, 0x73, 0xf6, 0x3c, 0x78, 0xf1, 0x80,

    /* U+149 "ŉ" */
    0xc1, 0x82, 0xf1, 0xb3, 0x66, 0xcd, 0x80,

    /* U+14A "Ŋ" */
    0xe7, 0xef, 0xfe, 0xfc, 0xf8, 0xc1, 0x9e,

    /* U+14B "ŋ" */
    0xfd, 0x8f, 0x1e, 0x3c, 0x60, 0xcf, 0x0,

    /* U+14C "Ō" */
    0x7c, 0x1, 0xf6, 0x3c, 0x78, 0xdf, 0x0,

    /* U+14D "ō" */
    0x7c, 0x1, 0xf6, 0x3c, 0x78, 0xdf, 0x0,

    /* U+14E "Ŏ" */
    0x44, 0x71, 0xf6, 0x3c, 0x78, 0xdf, 0x0,

    /* U+14F "ŏ" */
    0x44, 0x71, 0xf6, 0x3c, 0x78, 0xdf, 0x0,

    /* U+150 "Ő" */
    0x24, 0x91, 0xf6, 0x3c, 0x78, 0xdf, 0x0,

    /* U+151 "ő" */
    0x24, 0x91, 0xf6, 0x3c, 0x78, 0xdf, 0x0,

    /* U+152 "Œ" */
    0x7f, 0xb3, 0x66, 0xfd, 0x9b, 0x1f, 0x80,

    /* U+153 "œ" */
    0x7d, 0xaf, 0x7e, 0x87, 0xc0,

    /* U+154 "Ŕ" */
    0x8, 0x23, 0xf6, 0x7f, 0x9b, 0xb3, 0x80,

    /* U+155 "ŕ" */
    0x10, 0x8d, 0xf8, 0xc3, 0xc, 0x0,

    /* U+156 "Ŗ" */
    0xfd, 0x8f, 0x3f, 0xcd, 0xd9, 0xc6, 0x18,

    /* U+157 "ŗ" */
    0xdf, 0x8c, 0x30, 0xc1, 0x8c, 0x0,

    /* U+158 "Ř" */
    0x28, 0x23, 0xf6, 0x7f, 0x9b, 0xb3, 0x80,

    /* U+159 "ř" */
    0x6c, 0xed, 0xf8, 0xc3, 0xc, 0x0,

    /* U+15A "Ś" */
    0x8, 0x21, 0xf6, 0x7, 0xc0, 0xff, 0x0,

    /* U+15B "ś" */
    0x8, 0x21, 0xf6, 0x7, 0xc0, 0xff, 0x0,

    /* U+15C "Ŝ" */
    0x38, 0xd9, 0xf6, 0x7, 0xc0, 0xff, 0x0,

    /* U+15D "ŝ" */
    0x38, 0xd9, 0xf6, 0x7, 0xc0, 0xff, 0x0,

    /* U+15E "Ş" */
    0x7d, 0x81, 0xf0, 0x3c, 0x6f, 0x82, 0x18,

    /* U+15F "ş" */
    0x7d, 0x81, 0xf0, 0x3f, 0xc1, 0xc, 0x0,

    /* U+160 "Š" */
    0x6c, 0x71, 0xf6, 0x7, 0xc0, 0xff, 0x0,

    /* U+161 "š" */
    0x6c, 0x71, 0xf6, 0x7, 0xc0, 0xff, 0x0,

    /* U+162 "Ţ" */
    0xfc, 0xc3, 0xc, 0x30, 0xc1, 0x18,

    /* U+163 "ţ" */
    0x30, 0xcf, 0xcc, 0x30, 0xc1, 0x18,

    /* U+164 "Ť" */
    0x48, 0xcf, 0xcc, 0x30, 0xc3, 0x0,

    /* U+165 "ť" */
    0x48, 0xc3, 0x3f, 0x30, 0xc3, 0x0,

    /* U+166 "Ŧ" */
    0xfc, 0xc3, 0xe, 0x70, 0xc3, 0x0,

    /* U+167 "ŧ" */
    0x30, 0xcf, 0xcc, 0x39, 0xc3, 0x0,

    /* U+168 "Ũ" */
    0x34, 0xb3, 0x1e, 0x3c, 0x78, 0xdf, 0x0,

    /* U+169 "ũ" */
    0x34, 0xb3, 0x1e, 0x3c, 0x78, 0xdf, 0x80,

    /* U+16A "Ū" */
    0x7c, 0x3, 0x1e, 0x3c, 0x78, 0xdf, 0x0,

    /* U+16B "ū" */
    0x7c, 0x3, 0x1e, 0x3c, 0x78, 0xdf, 0x80,

    /* U+16C "Ŭ" */
    0x44, 0x73, 0x1e, 0x3c, 0x78, 0xdf, 0x0,

    /* U+16D "ŭ" */
    0x44, 0x73, 0x1e, 0x3c, 0x78, 0xdf, 0x80,

    /* U+16E "Ů" */
    0x38, 0xda, 0xee, 0x3c, 0x78, 0xdf, 0x0,

    /* U+16F "ů" */
    0x38, 0xda, 0xee, 0x3c, 0x78, 0xdf, 0x80,

    /* U+170 "Ű" */
    0x24, 0x93, 0x1e, 0x3c, 0x78, 0xdf, 0x0,

    /* U+171 "ű" */
    0x24, 0x93, 0x1e, 0x3c, 0x78, 0xdf, 0x80,

    /* U+172 "Ų" */
    0xc7, 0x8f, 0x1e, 0x37, 0xc2, 0x8, 0xc,

    /* U+173 "ų" */
    0xc7, 0x8f, 0x1e, 0x37, 0xe2, 0x8, 0xc,

    /* U+174 "Ŵ" */
    0x38, 0xdb, 0x1e, 0xbf, 0xff, 0xfb, 0x80,

    /* U+175 "ŵ" */
    0x38, 0xda, 0xdd, 0xbb, 0x76, 0xdf, 0x80,

    /* U+176 "Ŷ" */
    0x31, 0x2c, 0xf3, 0x78, 0xc3, 0x0,

    /* U+177 "ŷ" */
    0x38, 0xdb, 0x1e, 0x3c, 0x6f, 0xc1, 0xbe,

    /* U+178 "Ÿ" */
    0xcc, 0xc, 0xf3, 0x78, 0xc3, 0x0,

    /* U+179 "Ź" */
    0x8, 0x23, 0xf8, 0xe3, 0x8e, 0x3f, 0x80,

    /* U+17A "ź" */
    0x8, 0x23, 0xf8, 0xe3, 0x8e, 0x3f, 0x80,

    /* U+17B "Ż" */
    0x18, 0x3, 0xf8, 0xe3, 0x8e, 0x3f, 0x80,

    /* U+17C "ż" */
    0x18, 0x3, 0xf8, 0xe3, 0x8e, 0x3f, 0x80,

    /* U+17D "Ž" */
    0x6c, 0x73, 0xf8, 0xe3, 0x8e, 0x3f, 0x80,

    /* U+17E "ž" */
    0x6c, 0x73, 0xf8, 0xe3, 0x8e, 0x3f, 0x80,

    /* U+17F "ſ" */
    0x7c, 0xcc, 0xcc, 0xc0,

    /* U+192 "ƒ" */
    0x1c, 0xcf, 0xcc, 0x30, 0xce, 0x0,

    /* U+2C6 "ˆ" */
    0x76, 0xc0,

    /* U+2C7 "ˇ" */
    0xdb, 0x80,

    /* U+2C9 "ˉ" */
    0xf8,

    /* U+2CA "ˊ" */
    0x60,

    /* U+2CB "ˋ" */
    0x90,

    /* U+2D7 "˗" */
    0xf8,

    /* U+2D8 "˘" */
    0x8b, 0x80,

    /* U+2D9 "˙" */
    0xc0,

    /* U+2DA "˚" */
    0x76, 0xdc,

    /* U+2DB "˛" */
    0x51, 0x80,

    /* U+2DC "˜" */
    0x6d, 0x80,

    /* U+2DD "˝" */
    0x4c, 0x80,

    /* U+37A "ͺ" */
    0x8c,

    /* U+37E ";" */
    0x6c, 0x37, 0x80,

    /* U+384 "΄" */
    0x60,

    /* U+385 "΅" */
    0x94, 0x80,

    /* U+386 "Ά" */
    0x59, 0x79, 0x9b, 0x37, 0xec, 0xd9, 0x80,

    /* U+387 "·" */
    0xf0,

    /* U+388 "Έ" */
    0x7f, 0xb0, 0x30, 0x3c, 0x30, 0x30, 0x3f,

    /* U+389 "Ή" */
    0x73, 0xb3, 0x33, 0x3f, 0x33, 0x33, 0x33,

    /* U+38A "Ί" */
    0x5f, 0x18, 0x30, 0x60, 0xc1, 0x87, 0x80,

    /* U+38C "Ό" */
    0x5e, 0xb3, 0x33, 0x33, 0x33, 0x33, 0x1e,

    /* U+38E "Ύ" */
    0x73, 0xb3, 0x33, 0x1e, 0xc, 0xc, 0xc,

    /* U+38F "Ώ" */
    0x5c, 0xb6, 0x63, 0x63, 0x63, 0x36, 0x77,

    /* U+390 "ΐ" */
    0x94, 0x87, 0xc, 0x30, 0xc1, 0xc0,

    /* U+391 "Α" */
    0x38, 0xdb, 0x1e, 0x3f, 0xf8, 0xf1, 0x80,

    /* U+392 "Β" */
    0xfd, 0x8f, 0x1f, 0xec, 0x78, 0xff, 0x0,

    /* U+393 "Γ" */
    0xff, 0xc, 0x30, 0xc3, 0xc, 0x0,

    /* U+394 "Δ" */
    0x38, 0xdb, 0x1e, 0x3c, 0x78, 0xff, 0x80,

    /* U+395 "Ε" */
    0xff, 0x83, 0x7, 0xec, 0x18, 0x3f, 0x80,

    /* U+396 "Ζ" */
    0xfe, 0x1c, 0x71, 0xc7, 0x1c, 0x3f, 0x80,

    /* U+397 "Η" */
    0xc7, 0x8f, 0x1f, 0xfc, 0x78, 0xf1, 0x80,

    /* U+398 "Θ" */
    0x7d, 0x8f, 0x1f, 0xfc, 0x78, 0xdf, 0x0,

    /* U+399 "Ι" */
    0xfc, 0xc3, 0xc, 0x30, 0xcf, 0xc0,

    /* U+39A "Κ" */
    0xc7, 0x9b, 0x67, 0x8f, 0x9b, 0xb3, 0x80,

    /* U+39B "Λ" */
    0x38, 0xdb, 0x1e, 0x3c, 0x78, 0xf1, 0x80,

    /* U+39C "Μ" */
    0xc7, 0xdf, 0xff, 0xfd, 0x78, 0xf1, 0x80,

    /* U+39D "Ν" */
    0xc7, 0xcf, 0xdf, 0xfd, 0xf9, 0xf1, 0x80,

    /* U+39E "Ξ" */
    0xfe, 0x0, 0x3, 0xe0, 0x0, 0x3f, 0x80,

    /* U+39F "Ο" */
    0x7d, 0x8f, 0x1e, 0x3c, 0x78, 0xdf, 0x0,

    /* U+3A0 "Π" */
    0xff, 0x8f, 0x1e, 0x3c, 0x78, 0xf1, 0x80,

    /* U+3A1 "Ρ" */
    0xfd, 0x8f, 0x1e, 0x3f, 0xd8, 0x30, 0x0,

    /* U+3A3 "Σ" */
    0xfe, 0xcc, 0xc0, 0xe3, 0xc, 0xff, 0x80,

    /* U+3A4 "Τ" */
    0xfc, 0xc3, 0xc, 0x30, 0xc3, 0x0,

    /* U+3A5 "Υ" */
    0xcf, 0x3c, 0xde, 0x30, 0xc3, 0x0,

    /* U+3A6 "Φ" */
    0x10, 0xfb, 0x5e, 0xbd, 0x6f, 0x84, 0x0,

    /* U+3A7 "Χ" */
    0xc7, 0xdd, 0xf1, 0xc7, 0xdd, 0xf1, 0x80,

    /* U+3A8 "Ψ" */
    0xdb, 0xdb, 0xdb, 0x7e, 0x18, 0x18, 0x3c,

    /* U+3A9 "Ω" */
    0x38, 0xdb, 0x1e, 0x3c, 0x6d, 0xbb, 0x80,

    /* U+3AA "Ϊ" */
    0xcc, 0xf, 0xcc, 0x30, 0xcf, 0xc0,

    /* U+3AB "Ϋ" */
    0xcc, 0xc, 0xf3, 0x78, 0xc3, 0x0,

    /* U+3AC "ά" */
    0x8, 0x21, 0xfe, 0x3c, 0x78, 0xdf, 0x80,

    /* U+3AD "έ" */
    0x8, 0x21, 0xfe, 0x7, 0xd8, 0x1f, 0x80,

    /* U+3AE "ή" */
    0x8, 0x23, 0x73, 0x36, 0x6c, 0xd9, 0x83,

    /* U+3AF "ί" */
    0x22, 0x38, 0xc6, 0x30, 0xe0,

    /* U+3B0 "ΰ" */
    0x94, 0x43, 0x33, 0x36, 0x6c, 0xcf, 0x0,

    /* U+3B1 "α" */
    0x7f, 0x8f, 0x1e, 0x37, 0xe0,

    /* U+3B2 "β" */
    0x7d, 0x8f, 0x1f, 0xec, 0x78, 0xff, 0x60,

    /* U+3B3 "γ" */
    0xc6, 0xcd, 0x99, 0xe1, 0x83, 0x0,

    /* U+3B4 "δ" */
    0xe, 0x30, 0x33, 0xfc, 0x78, 0xdf, 0x0,

    /* U+3B5 "ε" */
    0x7f, 0x81, 0xf6, 0x7, 0xe0,

    /* U+3B6 "ζ" */
    0x7c, 0x61, 0x86, 0xc, 0xf, 0x81, 0x86,

    /* U+3B7 "η" */
    0xdc, 0xcd, 0x9b, 0x36, 0x60, 0xc0,

    /* U+3B8 "θ" */
    0x38, 0xdb, 0x1f, 0xfc, 0x6d, 0x8e, 0x0,

    /* U+3B9 "ι" */
    0xe3, 0x18, 0xc3, 0x80,

    /* U+3BA "κ" */
    0xc7, 0x9b, 0xe6, 0x6c, 0x60,

    /* U+3BB "λ" */
    0xc0, 0xc0, 0xc1, 0xc6, 0xd8, 0xf1, 0x80,

    /* U+3BC "μ" */
    0xcd, 0x9b, 0x36, 0x6f, 0x78, 0x0,

    /* U+3BD "ν" */
    0xc6, 0xcd, 0x99, 0xe1, 0x80,

    /* U+3BE "ξ" */
    0xfd, 0x83, 0x98, 0xc1, 0xe0, 0xc6,

    /* U+3BF "ο" */
    0x7d, 0x8f, 0x1e, 0x37, 0xc0,

    /* U+3C0 "π" */
    0xfe, 0xd9, 0xb3, 0x6e, 0x60,

    /* U+3C1 "ρ" */
    0x7d, 0x8f, 0x1f, 0xec, 0x18, 0x0,

    /* U+3C2 "ς" */
    0x7d, 0x83, 0x3, 0xe0, 0x6f, 0x80,

    /* U+3C3 "σ" */
    0x7f, 0xb3, 0x36, 0x67, 0x80,

    /* U+3C4 "τ" */
    0xfc, 0xc3, 0xc, 0x1c,

    /* U+3C5 "υ" */
    0xcc, 0xcd, 0x9b, 0x33, 0xc0,

    /* U+3C6 "φ" */
    0x4d, 0xaf, 0x5e, 0xb7, 0xc2, 0x0,

    /* U+3C7 "χ" */
    0xc6, 0xd8, 0xe3, 0x6c, 0x78, 0xc0,

    /* U+3C8 "ψ" */
    0x18, 0xdb, 0xdb, 0xdb, 0xdb, 0x7e, 0x18,

    /* U+3C9 "ω" */
    0x45, 0xaf, 0x5e, 0xb6, 0xc0,

    /* U+3CA "ϊ" */
    0xd8, 0x7, 0xc, 0x30, 0xc1, 0xc0,

    /* U+3CB "ϋ" */
    0x6c, 0x3, 0x33, 0x36, 0x6c, 0xcf, 0x0,

    /* U+3CC "ό" */
    0x8, 0x21, 0xf6, 0x3c, 0x78, 0xdf, 0x0,

    /* U+3CD "ύ" */
    0x8, 0x23, 0x33, 0x36, 0x6c, 0xcf, 0x0,

    /* U+3CE "ώ" */
    0x8, 0x21, 0x16, 0xbd, 0x7a, 0xdb, 0x0,

    /* U+400 "Ѐ" */
    0x20, 0x23, 0xfe, 0xf, 0xd8, 0x3f, 0x80,

    /* U+401 "Ё" */
    0x6c, 0x3, 0xfe, 0xf, 0xd8, 0x3f, 0x80,

    /* U+402 "Ђ" */
    0xf8, 0xc1, 0xf3, 0x36, 0x6c, 0xd9, 0x86,

    /* U+403 "Ѓ" */
    0x10, 0x8f, 0xf0, 0xc3, 0xc, 0x0,

    /* U+404 "Є" */
    0x3c, 0xcf, 0x7, 0xec, 0xc, 0xcf, 0x0,

    /* U+405 "Ѕ" */
    0x79, 0x9b, 0x3, 0xe0, 0x78, 0xdf, 0x0,

    /* U+406 "І" */
    0xfc, 0xc3, 0xc, 0x30, 0xcf, 0xc0,

    /* U+407 "Ї" */
    0xcc, 0xf, 0xcc, 0x30, 0xcf, 0xc0,

    /* U+408 "Ј" */
    0x6, 0xc, 0x18, 0x30, 0x78, 0xdf, 0x0,

    /* U+409 "Љ" */
    0x30, 0xe3, 0x76, 0xbd, 0x7a, 0xf7, 0x0,

    /* U+40A "Њ" */
    0xd1, 0xa3, 0x77, 0xbd, 0x7a, 0xf7, 0x0,

    /* U+40B "Ћ" */
    0xf8, 0xc1, 0xf3, 0x36, 0x6c, 0xd9, 0x80,

    /* U+40C "Ќ" */
    0x8, 0x23, 0x1e, 0x6f, 0x99, 0xb1, 0x80,

    /* U+40D "Ѝ" */
    0x20, 0x23, 0x3e, 0xff, 0xfe, 0xf9, 0x80,

    /* U+40E "Ў" */
    0x44, 0x73, 0x1e, 0x37, 0xe0, 0xff, 0x0,

    /* U+40F "Џ" */
    0xc7, 0x8f, 0x1e, 0x3c, 0x78, 0xff, 0x88,

    /* U+410 "А" */
    0x38, 0xdb, 0x1e, 0x3f, 0xf8, 0xf1, 0x80,

    /* U+411 "Б" */
    0xfd, 0x83, 0x7, 0xec, 0x78, 0xff, 0x0,

    /* U+412 "В" */
    0xfd, 0x8f, 0x1f, 0xec, 0x78, 0xff, 0x0,

    /* U+413 "Г" */
    0xff, 0xc, 0x30, 0xc3, 0xc, 0x0,

    /* U+414 "Д" */
    0x1e, 0x36, 0x36, 0x66, 0x66, 0x66, 0xfe, 0xc3,

    /* U+415 "Е" */
    0xff, 0x83, 0x7, 0xec, 0x18, 0x3f, 0x80,

    /* U+416 "Ж" */
    0xd7, 0xad, 0xf1, 0xc7, 0xda, 0xf5, 0x80,

    /* U+417 "З" */
    0x7d, 0x8c, 0x19, 0xe0, 0x78, 0xdf, 0x0,

    /* U+418 "И" */
    0xc7, 0x9f, 0x7f, 0xff, 0x7c, 0xf1, 0x80,

    /* U+419 "Й" */
    0x44, 0x73, 0x3e, 0xff, 0xfe, 0xf9, 0x80,

    /* U+41A "К" */
    0xc7, 0x9b, 0x67, 0x8f, 0x9b, 0xb3, 0x80,

    /* U+41B "Л" */
    0x1e, 0x6d, 0x9b, 0x3c, 0x78, 0xf1, 0x80,

    /* U+41C "М" */
    0xc7, 0xdf, 0xff, 0xfd, 0x78, 0xf1, 0x80,

    /* U+41D "Н" */
    0xc7, 0x8f, 0x1f, 0xfc, 0x78, 0xf1, 0x80,

    /* U+41E "О" */
    0x7d, 0x8f, 0x1e, 0x3c, 0x78, 0xdf, 0x0,

    /* U+41F "П" */
    0xff, 0x8f, 0x1e, 0x3c, 0x78, 0xf1, 0x80,

    /* U+420 "Р" */
    0xfd, 0x8f, 0x1e, 0x3f, 0xd8, 0x30, 0x0,

    /* U+421 "С" */
    0x3c, 0xcf, 0x6, 0xc, 0xc, 0xcf, 0x0,

    /* U+422 "Т" */
    0xfc, 0xc3, 0xc, 0x30, 0xc3, 0x0,

    /* U+423 "У" */
    0xc7, 0x8f, 0x1b, 0xf0, 0x78, 0xdf, 0x0,

    /* U+424 "Ф" */
    0x10, 0xfb, 0x5e, 0xbd, 0x6f, 0x84, 0x0,

    /* U+425 "Х" */
    0xc7, 0xdd, 0xf1, 0xc7, 0xdd, 0xf1, 0x80,

    /* U+426 "Ц" */
    0xcd, 0x9b, 0x36, 0x6c, 0xd9, 0xbf, 0x83,

    /* U+427 "Ч" */
    0xc7, 0x8f, 0x1b, 0xf0, 0x60, 0xc1, 0x80,

    /* U+428 "Ш" */
    0xd7, 0xaf, 0x5e, 0xbd, 0x7a, 0xff, 0x80,

    /* U+429 "Щ" */
    0xd6, 0xd6, 0xd6, 0xd6, 0xd6, 0xd6, 0xff, 0x3,

    /* U+42A "Ъ" */
    0xe0, 0xc1, 0xf3, 0x36, 0x6c, 0xdf, 0x0,

    /* U+42B "Ы" */
    0xc7, 0x8f, 0xde, 0xfd, 0xfb, 0xfd, 0x80,

    /* U+42C "Ь" */
    0xc1, 0x83, 0xf6, 0x3c, 0x78, 0xff, 0x0,

    /* U+42D "Э" */
    0x79, 0x98, 0x1b, 0xf0, 0x79, 0x9e, 0x0,

    /* U+42E "Ю" */
    0xce, 0xdb, 0xdb, 0xfb, 0xdb, 0xdb, 0xce,

    /* U+42F "Я" */
    0x7f, 0x8f, 0x1f, 0x33, 0xee, 0xf9, 0x80,

    /* U+430 "а" */
    0x7c, 0xd, 0xfe, 0x37, 0xe0,

    /* U+431 "б" */
    0x7f, 0x83, 0x77, 0x3c, 0x78, 0xdf, 0x0,

    /* U+432 "в" */
    0xfd, 0x8f, 0xf6, 0x3f, 0xc0,

    /* U+433 "г" */
    0xff, 0xc, 0x30, 0xc0,

    /* U+434 "д" */
    0x7f, 0x8f, 0x1b, 0xf0, 0x6f, 0x80,

    /* U+435 "е" */
    0x7d, 0x8f, 0xfe, 0x7, 0xc0,

    /* U+436 "ж" */
    0xd7, 0xad, 0xf6, 0xbd, 0x60,

    /* U+437 "з" */
    0xfc, 0xd, 0xf0, 0x3f, 0xc0,

    /* U+438 "и" */
    0xc7, 0x9f, 0x5f, 0x3c, 0x60,

    /* U+439 "й" */
    0x44, 0x73, 0x1e, 0x7d, 0x7c, 0xf1, 0x80,

    /* U+43A "к" */
    0xc7, 0x9b, 0xe6, 0x6c, 0x60,

    /* U+43B "л" */
    0x3e, 0xcd, 0x9e, 0x3c, 0x60,

    /* U+43C "м" */
    0xc7, 0xdf, 0x5e, 0xbc, 0x60,

    /* U+43D "н" */
    0xc7, 0x8f, 0xfe, 0x3c, 0x60,

    /* U+43E "о" */
    0x7d, 0x8f, 0x1e, 0x37, 0xc0,

    /* U+43F "п" */
    0xff, 0x8f, 0x1e, 0x3c, 0x60,

    /* U+440 "р" */
    0xfd, 0x8f, 0x1f, 0xec, 0x18, 0x0,

    /* U+441 "с" */
    0x7f, 0x83, 0x6, 0x7, 0xe0,

    /* U+442 "т" */
    0xfc, 0xc3, 0xc, 0x30,

    /* U+443 "у" */
    0xc7, 0x8f, 0x1b, 0xf0, 0x6f, 0x80,

    /* U+444 "ф" */
    0x10, 0xfb, 0x5e, 0xbd, 0x6f, 0x84, 0x0,

    /* U+445 "х" */
    0xc7, 0xfc, 0xe7, 0xfc, 0x60,

    /* U+446 "ц" */
    0xcd, 0x9b, 0x36, 0x6f, 0xe0, 0xc0,

    /* U+447 "ч" */
    0xc7, 0x8d, 0xf8, 0x30, 0x60,

    /* U+448 "ш" */
    0xd7, 0xaf, 0x5e, 0xbf, 0xe0,

    /* U+449 "щ" */
    0xd6, 0xd6, 0xd6, 0xd6, 0xff, 0x3,

    /* U+44A "ъ" */
    0xe0, 0xc1, 0xf3, 0x37, 0xc0,

    /* U+44B "ы" */
    0xc7, 0x8f, 0xde, 0xff, 0x60,

    /* U+44C "ь" */
    0xc1, 0x83, 0xf6, 0x3f, 0xc0,

    /* U+44D "э" */
    0x7d, 0x8c, 0x7e, 0x37, 0xc0,

    /* U+44E "ю" */
    0xce, 0xdb, 0xfb, 0xdb, 0xce,

    /* U+44F "я" */
    0x7f, 0x8d, 0xfe, 0x3c, 0x60,

    /* U+450 "ѐ" */
    0x20, 0x21, 0xf6, 0x3f, 0xf8, 0x1f, 0x0,

    /* U+451 "ё" */
    0x6c, 0x1, 0xf6, 0x3f, 0xf8, 0x1f, 0x0,

    /* U+452 "ђ" */
    0x61, 0xf1, 0x83, 0xe6, 0x6c, 0xd9, 0x86,

    /* U+453 "ѓ" */
    0x10, 0x8f, 0xf0, 0xc3, 0xc, 0x0,

    /* U+454 "є" */
    0x7d, 0x8f, 0xc6, 0x37, 0xc0,

    /* U+455 "ѕ" */
    0x7d, 0x81, 0xf0, 0x3f, 0xc0,

    /* U+456 "і" */
    0x30, 0x7, 0xc, 0x30, 0xcf, 0xc0,

    /* U+457 "ї" */
    0xd8, 0x7, 0xc, 0x30, 0xcf, 0xc0,

    /* U+458 "ј" */
    0x18, 0xe, 0x31, 0x8c, 0x7e,

    /* U+459 "љ" */
    0x30, 0xfb, 0x5e, 0xbd, 0xc0,

    /* U+45A "њ" */
    0xd1, 0xbb, 0xde, 0xbd, 0xc0,

    /* U+45B "ћ" */
    0x61, 0xf1, 0x83, 0xe6, 0x6c, 0xd9, 0x80,

    /* U+45C "ќ" */
    0x8, 0x23, 0x1e, 0x6f, 0x99, 0xb1, 0x80,

    /* U+45D "ѝ" */
    0x20, 0x23, 0x1e, 0x7d, 0x7c, 0xf1, 0x80,

    /* U+45E "ў" */
    0x44, 0x73, 0x1e, 0x3c, 0x6f, 0xc1, 0xbe,

    /* U+45F "џ" */
    0xc7, 0x8f, 0x1e, 0x3f, 0xe2, 0x0,

    /* U+2013 "–" */
    0xfe,

    /* U+2014 "—" */
    0xff,

    /* U+2015 "―" */
    0xfe,

    /* U+2018 "‘" */
    0x7b, 0x0,

    /* U+2019 "’" */
    0x6f, 0x0,

    /* U+201A "‚" */
    0x6f, 0x0,

    /* U+201C "“" */
    0x6f, 0x6d, 0x80,

    /* U+201D "”" */
    0x6d, 0xbd, 0x80,

    /* U+201E "„" */
    0x6d, 0xbd, 0x80,

    /* U+2020 "†" */
    0x30, 0xcf, 0xcc, 0x30, 0xc3, 0x0,

    /* U+2021 "‡" */
    0x30, 0xcf, 0xcc, 0xfc, 0xc3, 0x0,

    /* U+2022 "•" */
    0x6f, 0xf6,

    /* U+2026 "…" */
    0x93, 0x24,

    /* U+2030 "‰" */
    0x62, 0xa4, 0xc8, 0x10, 0x2f, 0x55, 0x9e,

    /* U+2039 "‹" */
    0x36, 0xc6, 0x30,

    /* U+203A "›" */
    0xc6, 0x36, 0xc0,

    /* U+2044 "⁄" */
    0x2, 0x8, 0x20, 0x82, 0x8, 0x20, 0x0,

    /* U+20AC "€" */
    0x1c, 0x6f, 0xe3, 0xf, 0x86, 0xc7, 0x0,

    /* U+20AF "₯" */
    0x61, 0x22, 0x54, 0xd9, 0xb3, 0x7b, 0x4,

    /* U+2116 "№" */
    0xc5, 0x56, 0xad, 0x5a, 0x54, 0x2b, 0x80,

    /* U+2122 "™" */
    0xfd, 0x75, 0x55,

    /* U+2190 "←" */
    0x10, 0x30, 0x7f, 0xff, 0x7f, 0x30, 0x10,

    /* U+2191 "↑" */
    0x10, 0x71, 0xf7, 0xf3, 0x87, 0xe, 0x1c,

    /* U+2192 "→" */
    0x8, 0xc, 0xfe, 0xff, 0xfe, 0xc, 0x8,

    /* U+2193 "↓" */
    0x38, 0x70, 0xe1, 0xcf, 0xef, 0x8e, 0x8,

    /* U+2202 "∂" */
    0x79, 0x98, 0x1b, 0xfc, 0x78, 0xdf, 0x0,

    /* U+2206 "∆" */
    0x38, 0xdb, 0x1e, 0x3c, 0x78, 0xff, 0x80,

    /* U+220F "∏" */
    0xff, 0x8f, 0x1e, 0x3c, 0x78, 0xf1, 0x80,

    /* U+2211 "∑" */
    0xfe, 0xcc, 0xc0, 0xe3, 0xc, 0xff, 0x80,

    /* U+221A "√" */
    0x1e, 0x30, 0x60, 0xcd, 0x8f, 0xe, 0x0,

    /* U+221E "∞" */
    0x6d, 0x26, 0x4b, 0x60,

    /* U+222B "∫" */
    0x18, 0xd3, 0xc, 0x30, 0xcb, 0x18,

    /* U+2248 "≈" */
    0x66, 0x60, 0x19, 0x98,

    /* U+2260 "≠" */
    0x2, 0xb, 0xf8, 0x8f, 0xe8, 0x20, 0x0,

    /* U+2264 "≤" */
    0x36, 0xc6, 0x30, 0xf0,

    /* U+2265 "≥" */
    0xc6, 0x36, 0xc0, 0xf0,

    /* U+25B2 "▲" */
    0x10, 0x20, 0xe1, 0xc7, 0xcf, 0xbf, 0x80,

    /* U+25B6 "▶" */
    0x81, 0xc3, 0xe7, 0xff, 0x9c, 0x20, 0x0,

    /* U+25BC "▼" */
    0xfe, 0xf9, 0xf1, 0xc3, 0x82, 0x4, 0x0,

    /* U+25C0 "◀" */
    0x2, 0x1c, 0xff, 0xf3, 0xe1, 0xc0, 0x80,

    /* U+25CA "◊" */
    0x10, 0x51, 0x14, 0x14, 0x45, 0x4, 0x0,

    /* U+2605 "★" */
    0x10, 0x23, 0xfb, 0xe3, 0x8d, 0x91, 0x0,

    /* U+2606 "☆" */
    0x10, 0x23, 0xba, 0x22, 0x8f, 0x91, 0x0,

    /* U+2660 "♠" */
    0x10, 0x71, 0xf7, 0xff, 0xe7, 0x1f, 0x0,

    /* U+2663 "♣" */
    0x30, 0xcc, 0xf3, 0x30, 0xc7, 0x80,

    /* U+2665 "♥" */
    0x6d, 0xff, 0xff, 0xf7, 0xc7, 0x4, 0x0,

    /* U+2666 "♦" */
    0x10, 0x71, 0xf7, 0xf7, 0xc7, 0x4, 0x0,

    /* U+266A "♪" */
    0x10, 0x30, 0x50, 0x97, 0x5e, 0x18, 0x0,

    /* U+F100 "" */
    0xfe, 0x1f, 0x71, 0xff, 0x7f, 0xc0,

    /* U+F101 "" */
    0x3f, 0xc0,

    /* U+F8FF "" */
    0x8, 0x76, 0xfd, 0xfd, 0xfb, 0x7e, 0x2c,

    /* U+FB01 "ﬁ" */
    0x38, 0xc3, 0xfb, 0x36, 0x6c, 0xd9, 0x80,

    /* U+FB02 "ﬂ" */
    0x3e, 0xcf, 0xfb, 0x36, 0x6c, 0xd9, 0x80
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 128, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 128, .box_w = 3, .box_h = 7, .ofs_x = 2, .ofs_y = 1},
    {.bitmap_index = 4, .adv_w = 128, .box_w = 5, .box_h = 3, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 6, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 13, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 20, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 27, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 34, .adv_w = 128, .box_w = 2, .box_h = 3, .ofs_x = 2, .ofs_y = 5},
    {.bitmap_index = 35, .adv_w = 128, .box_w = 4, .box_h = 7, .ofs_x = 2, .ofs_y = 1},
    {.bitmap_index = 39, .adv_w = 128, .box_w = 4, .box_h = 7, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 43, .adv_w = 128, .box_w = 7, .box_h = 5, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 48, .adv_w = 128, .box_w = 6, .box_h = 5, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 52, .adv_w = 128, .box_w = 3, .box_h = 3, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 54, .adv_w = 128, .box_w = 6, .box_h = 1, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 55, .adv_w = 128, .box_w = 2, .box_h = 2, .ofs_x = 2, .ofs_y = 1},
    {.bitmap_index = 56, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 63, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 70, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 76, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 83, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 90, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 97, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 104, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 111, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 118, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 125, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 132, .adv_w = 128, .box_w = 2, .box_h = 5, .ofs_x = 2, .ofs_y = 2},
    {.bitmap_index = 134, .adv_w = 128, .box_w = 3, .box_h = 6, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 137, .adv_w = 128, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 142, .adv_w = 128, .box_w = 7, .box_h = 3, .ofs_x = 0, .ofs_y = 3},
    {.bitmap_index = 145, .adv_w = 128, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 150, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 157, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 164, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 171, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 178, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 185, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 192, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 199, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 206, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 213, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 220, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 226, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 233, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 240, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 246, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 253, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 260, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 267, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 274, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 281, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 288, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 295, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 301, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 308, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 315, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 322, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 329, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 335, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 342, .adv_w = 128, .box_w = 4, .box_h = 7, .ofs_x = 2, .ofs_y = 1},
    {.bitmap_index = 346, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 353, .adv_w = 128, .box_w = 4, .box_h = 7, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 357, .adv_w = 128, .box_w = 5, .box_h = 2, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 359, .adv_w = 128, .box_w = 7, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 360, .adv_w = 128, .box_w = 2, .box_h = 2, .ofs_x = 3, .ofs_y = 6},
    {.bitmap_index = 361, .adv_w = 128, .box_w = 7, .box_h = 5, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 366, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 373, .adv_w = 128, .box_w = 7, .box_h = 5, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 378, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 385, .adv_w = 128, .box_w = 7, .box_h = 5, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 390, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 396, .adv_w = 128, .box_w = 7, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 402, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 409, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 415, .adv_w = 128, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 420, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 427, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 433, .adv_w = 128, .box_w = 7, .box_h = 5, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 438, .adv_w = 128, .box_w = 7, .box_h = 5, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 443, .adv_w = 128, .box_w = 7, .box_h = 5, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 448, .adv_w = 128, .box_w = 7, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 454, .adv_w = 128, .box_w = 7, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 460, .adv_w = 128, .box_w = 6, .box_h = 5, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 464, .adv_w = 128, .box_w = 7, .box_h = 5, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 469, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 475, .adv_w = 128, .box_w = 7, .box_h = 5, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 480, .adv_w = 128, .box_w = 6, .box_h = 5, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 484, .adv_w = 128, .box_w = 7, .box_h = 5, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 489, .adv_w = 128, .box_w = 7, .box_h = 5, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 494, .adv_w = 128, .box_w = 7, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 500, .adv_w = 128, .box_w = 7, .box_h = 5, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 505, .adv_w = 128, .box_w = 4, .box_h = 7, .ofs_x = 2, .ofs_y = 1},
    {.bitmap_index = 509, .adv_w = 128, .box_w = 2, .box_h = 7, .ofs_x = 3, .ofs_y = 1},
    {.bitmap_index = 511, .adv_w = 128, .box_w = 4, .box_h = 7, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 515, .adv_w = 128, .box_w = 7, .box_h = 3, .ofs_x = 0, .ofs_y = 3},
    {.bitmap_index = 518, .adv_w = 128, .box_w = 5, .box_h = 2, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 520, .adv_w = 128, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 521, .adv_w = 128, .box_w = 3, .box_h = 7, .ofs_x = 2, .ofs_y = 1},
    {.bitmap_index = 524, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 531, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 538, .adv_w = 128, .box_w = 6, .box_h = 5, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 542, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 548, .adv_w = 128, .box_w = 2, .box_h = 7, .ofs_x = 3, .ofs_y = 1},
    {.bitmap_index = 550, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 556, .adv_w = 128, .box_w = 5, .box_h = 1, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 557, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 565, .adv_w = 128, .box_w = 5, .box_h = 4, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 568, .adv_w = 128, .box_w = 7, .box_h = 5, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 573, .adv_w = 128, .box_w = 6, .box_h = 3, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 576, .adv_w = 128, .box_w = 6, .box_h = 1, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 577, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 585, .adv_w = 128, .box_w = 5, .box_h = 1, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 586, .adv_w = 128, .box_w = 3, .box_h = 3, .ofs_x = 2, .ofs_y = 5},
    {.bitmap_index = 588, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 594, .adv_w = 128, .box_w = 4, .box_h = 4, .ofs_x = 2, .ofs_y = 4},
    {.bitmap_index = 596, .adv_w = 128, .box_w = 4, .box_h = 4, .ofs_x = 2, .ofs_y = 4},
    {.bitmap_index = 598, .adv_w = 128, .box_w = 2, .box_h = 2, .ofs_x = 3, .ofs_y = 6},
    {.bitmap_index = 599, .adv_w = 128, .box_w = 7, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 605, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 611, .adv_w = 128, .box_w = 2, .box_h = 2, .ofs_x = 2, .ofs_y = 3},
    {.bitmap_index = 612, .adv_w = 128, .box_w = 3, .box_h = 2, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 613, .adv_w = 128, .box_w = 4, .box_h = 4, .ofs_x = 2, .ofs_y = 4},
    {.bitmap_index = 615, .adv_w = 128, .box_w = 5, .box_h = 4, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 618, .adv_w = 128, .box_w = 7, .box_h = 5, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 623, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 630, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 637, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 644, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 651, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 658, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 665, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 672, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 679, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 686, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 693, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 700, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 707, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 714, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 721, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 728, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 735, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 741, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 747, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 753, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 759, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 766, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 773, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 780, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 787, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 794, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 801, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 808, .adv_w = 128, .box_w = 5, .box_h = 5, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 812, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 819, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 826, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 833, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 840, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 847, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 853, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 860, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 866, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 873, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 880, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 887, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 894, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 901, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 908, .adv_w = 128, .box_w = 7, .box_h = 5, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 913, .adv_w = 128, .box_w = 7, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 919, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 926, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 933, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 940, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 947, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 953, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 959, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 965, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 971, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 978, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 985, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 992, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 999, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 1006, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 1013, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 1020, .adv_w = 128, .box_w = 6, .box_h = 5, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 1024, .adv_w = 128, .box_w = 7, .box_h = 5, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 1029, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 1036, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 1043, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 1050, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 1057, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1064, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1071, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1078, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 1085, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 1092, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 1099, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 1106, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1113, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1120, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 1127, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 1134, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 1141, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 1148, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 1155, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 1162, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 1169, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 1176, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 1183, .adv_w = 128, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 1190, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 1197, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 1204, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 1211, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 1218, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 1225, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 1232, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 1239, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 1246, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1253, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1260, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 1267, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 1274, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 1281, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1288, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 1295, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1302, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 1309, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1316, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1323, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1330, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 1337, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 1344, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 1351, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 1358, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 1364, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 1370, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 1376, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 1382, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 1388, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 1394, .adv_w = 128, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1400, .adv_w = 128, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1406, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 1412, .adv_w = 128, .box_w = 6, .box_h = 5, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 1416, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 1423, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1430, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 1437, .adv_w = 128, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1443, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1450, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1457, .adv_w = 128, .box_w = 7, .box_h = 5, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 1462, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 1468, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 1474, .adv_w = 128, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1480, .adv_w = 128, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1486, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 1492, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 1499, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 1505, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 1512, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 1519, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 1525, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 1532, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 1539, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1546, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1553, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 1560, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 1567, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 1574, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1581, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1588, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 1595, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 1602, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 1609, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 1616, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 1623, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 1630, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 1637, .adv_w = 128, .box_w = 7, .box_h = 5, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 1642, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 1649, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 1655, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1662, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1668, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 1675, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 1681, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 1688, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 1695, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 1702, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 1709, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1716, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1723, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 1730, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 1737, .adv_w = 128, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1743, .adv_w = 128, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1749, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 1755, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 1761, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 1767, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 1773, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 1780, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 1787, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 1794, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 1801, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 1808, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 1815, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 1822, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 1829, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 1836, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 1843, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1850, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1857, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 1864, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 1871, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 1877, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1884, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 1890, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 1897, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 1904, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 1911, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 1918, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 1925, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 1932, .adv_w = 128, .box_w = 4, .box_h = 7, .ofs_x = 3, .ofs_y = 1},
    {.bitmap_index = 1936, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 1942, .adv_w = 128, .box_w = 5, .box_h = 2, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 1944, .adv_w = 128, .box_w = 5, .box_h = 2, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 1946, .adv_w = 128, .box_w = 5, .box_h = 1, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 1947, .adv_w = 128, .box_w = 2, .box_h = 2, .ofs_x = 3, .ofs_y = 6},
    {.bitmap_index = 1948, .adv_w = 128, .box_w = 2, .box_h = 2, .ofs_x = 3, .ofs_y = 6},
    {.bitmap_index = 1949, .adv_w = 128, .box_w = 5, .box_h = 1, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 1950, .adv_w = 128, .box_w = 5, .box_h = 2, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 1952, .adv_w = 128, .box_w = 2, .box_h = 1, .ofs_x = 3, .ofs_y = 7},
    {.bitmap_index = 1953, .adv_w = 128, .box_w = 5, .box_h = 3, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 1955, .adv_w = 128, .box_w = 3, .box_h = 3, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1957, .adv_w = 128, .box_w = 5, .box_h = 2, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 1959, .adv_w = 128, .box_w = 5, .box_h = 2, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 1961, .adv_w = 128, .box_w = 3, .box_h = 2, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 1962, .adv_w = 128, .box_w = 3, .box_h = 6, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 1965, .adv_w = 128, .box_w = 2, .box_h = 2, .ofs_x = 3, .ofs_y = 6},
    {.bitmap_index = 1966, .adv_w = 128, .box_w = 6, .box_h = 2, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 1968, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 1975, .adv_w = 128, .box_w = 2, .box_h = 2, .ofs_x = 2, .ofs_y = 3},
    {.bitmap_index = 1976, .adv_w = 128, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 1983, .adv_w = 128, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 1990, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 1997, .adv_w = 128, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 2004, .adv_w = 128, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 2011, .adv_w = 128, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 2018, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 2024, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 2031, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 2038, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 2044, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 2051, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 2058, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 2065, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 2072, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 2079, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 2085, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 2092, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 2099, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 2106, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 2113, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 2120, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 2127, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 2134, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 2141, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 2148, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 2154, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 2160, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 2167, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 2174, .adv_w = 128, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 2181, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 2188, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 2194, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 2200, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 2207, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 2214, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2221, .adv_w = 128, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 2226, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 2233, .adv_w = 128, .box_w = 7, .box_h = 5, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 2238, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2245, .adv_w = 128, .box_w = 7, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2251, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 2258, .adv_w = 128, .box_w = 7, .box_h = 5, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 2263, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2270, .adv_w = 128, .box_w = 7, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2276, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 2283, .adv_w = 128, .box_w = 5, .box_h = 5, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 2287, .adv_w = 128, .box_w = 7, .box_h = 5, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 2292, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 2299, .adv_w = 128, .box_w = 7, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2305, .adv_w = 128, .box_w = 7, .box_h = 5, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 2310, .adv_w = 128, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2316, .adv_w = 128, .box_w = 7, .box_h = 5, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 2321, .adv_w = 128, .box_w = 7, .box_h = 5, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 2326, .adv_w = 128, .box_w = 7, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2332, .adv_w = 128, .box_w = 7, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2338, .adv_w = 128, .box_w = 7, .box_h = 5, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 2343, .adv_w = 128, .box_w = 6, .box_h = 5, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 2347, .adv_w = 128, .box_w = 7, .box_h = 5, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 2352, .adv_w = 128, .box_w = 7, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2358, .adv_w = 128, .box_w = 7, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2364, .adv_w = 128, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2371, .adv_w = 128, .box_w = 7, .box_h = 5, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 2376, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 2382, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 2389, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 2396, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 2403, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 2410, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 2417, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 2424, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2431, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 2437, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 2444, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 2451, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 2457, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 2463, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 2470, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 2477, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 2484, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 2491, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 2498, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 2505, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 2512, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2519, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 2526, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 2533, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 2540, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 2546, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2554, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 2561, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 2568, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 2575, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 2582, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 2589, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 2596, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 2603, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 2610, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 2617, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 2624, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 2631, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 2638, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 2645, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 2651, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 2658, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 2665, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 2672, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2679, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 2686, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 2693, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2701, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 2708, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 2715, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 2722, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 2729, .adv_w = 128, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 2736, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 2743, .adv_w = 128, .box_w = 7, .box_h = 5, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 2748, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 2755, .adv_w = 128, .box_w = 7, .box_h = 5, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 2760, .adv_w = 128, .box_w = 6, .box_h = 5, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 2764, .adv_w = 128, .box_w = 7, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2770, .adv_w = 128, .box_w = 7, .box_h = 5, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 2775, .adv_w = 128, .box_w = 7, .box_h = 5, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 2780, .adv_w = 128, .box_w = 7, .box_h = 5, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 2785, .adv_w = 128, .box_w = 7, .box_h = 5, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 2790, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 2797, .adv_w = 128, .box_w = 7, .box_h = 5, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 2802, .adv_w = 128, .box_w = 7, .box_h = 5, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 2807, .adv_w = 128, .box_w = 7, .box_h = 5, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 2812, .adv_w = 128, .box_w = 7, .box_h = 5, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 2817, .adv_w = 128, .box_w = 7, .box_h = 5, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 2822, .adv_w = 128, .box_w = 7, .box_h = 5, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 2827, .adv_w = 128, .box_w = 7, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2833, .adv_w = 128, .box_w = 7, .box_h = 5, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 2838, .adv_w = 128, .box_w = 6, .box_h = 5, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 2842, .adv_w = 128, .box_w = 7, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2848, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2855, .adv_w = 128, .box_w = 7, .box_h = 5, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 2860, .adv_w = 128, .box_w = 7, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2866, .adv_w = 128, .box_w = 7, .box_h = 5, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 2871, .adv_w = 128, .box_w = 7, .box_h = 5, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 2876, .adv_w = 128, .box_w = 8, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2882, .adv_w = 128, .box_w = 7, .box_h = 5, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 2887, .adv_w = 128, .box_w = 7, .box_h = 5, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 2892, .adv_w = 128, .box_w = 7, .box_h = 5, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 2897, .adv_w = 128, .box_w = 7, .box_h = 5, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 2902, .adv_w = 128, .box_w = 8, .box_h = 5, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 2907, .adv_w = 128, .box_w = 7, .box_h = 5, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 2912, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 2919, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 2926, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2933, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 2939, .adv_w = 128, .box_w = 7, .box_h = 5, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 2944, .adv_w = 128, .box_w = 7, .box_h = 5, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 2949, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 2955, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 2961, .adv_w = 128, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2966, .adv_w = 128, .box_w = 7, .box_h = 5, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 2971, .adv_w = 128, .box_w = 7, .box_h = 5, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 2976, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 2983, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 2990, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 2997, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3004, .adv_w = 128, .box_w = 7, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3010, .adv_w = 128, .box_w = 7, .box_h = 1, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 3011, .adv_w = 128, .box_w = 8, .box_h = 1, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 3012, .adv_w = 128, .box_w = 7, .box_h = 1, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 3013, .adv_w = 128, .box_w = 3, .box_h = 3, .ofs_x = 2, .ofs_y = 5},
    {.bitmap_index = 3015, .adv_w = 128, .box_w = 3, .box_h = 3, .ofs_x = 2, .ofs_y = 5},
    {.bitmap_index = 3017, .adv_w = 128, .box_w = 3, .box_h = 3, .ofs_x = 2, .ofs_y = 1},
    {.bitmap_index = 3019, .adv_w = 128, .box_w = 6, .box_h = 3, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 3022, .adv_w = 128, .box_w = 6, .box_h = 3, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 3025, .adv_w = 128, .box_w = 6, .box_h = 3, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 3028, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 3034, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 3040, .adv_w = 128, .box_w = 4, .box_h = 4, .ofs_x = 2, .ofs_y = 2},
    {.bitmap_index = 3042, .adv_w = 128, .box_w = 7, .box_h = 2, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 3044, .adv_w = 128, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 3051, .adv_w = 128, .box_w = 4, .box_h = 5, .ofs_x = 2, .ofs_y = 2},
    {.bitmap_index = 3054, .adv_w = 128, .box_w = 4, .box_h = 5, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 3057, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 3064, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 3071, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3078, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 3085, .adv_w = 128, .box_w = 6, .box_h = 4, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 3088, .adv_w = 128, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 3095, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3102, .adv_w = 128, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 3109, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3116, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 3123, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 3130, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 3137, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 3144, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 3151, .adv_w = 128, .box_w = 7, .box_h = 4, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 3155, .adv_w = 128, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3161, .adv_w = 128, .box_w = 6, .box_h = 5, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 3165, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 3172, .adv_w = 128, .box_w = 4, .box_h = 7, .ofs_x = 2, .ofs_y = 1},
    {.bitmap_index = 3176, .adv_w = 128, .box_w = 4, .box_h = 7, .ofs_x = 2, .ofs_y = 1},
    {.bitmap_index = 3180, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 3187, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 3194, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 3201, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 3208, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 3215, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 3222, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 3229, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 3236, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 3242, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 3249, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 3256, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 3263, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 3269, .adv_w = 128, .box_w = 5, .box_h = 2, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 3271, .adv_w = 128, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 3278, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 3285, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/

static const uint16_t unicode_list_2[] = {
    0x0, 0x134, 0x135, 0x137, 0x138, 0x139, 0x145, 0x146,
    0x147, 0x148, 0x149, 0x14a, 0x14b, 0x1e8, 0x1ec, 0x1f2,
    0x1f3, 0x1f4, 0x1f5, 0x1f6, 0x1f7, 0x1f8, 0x1fa
};

static const uint16_t unicode_list_6[] = {
    0x0, 0x1, 0x2, 0x5, 0x6, 0x7, 0x9, 0xa,
    0xb, 0xd, 0xe, 0xf, 0x13, 0x1d, 0x26, 0x27,
    0x31, 0x99, 0x9c, 0x103, 0x10f, 0x17d, 0x17e, 0x17f,
    0x180, 0x1ef, 0x1f3, 0x1fc, 0x1fe, 0x207, 0x20b, 0x218,
    0x235, 0x24d, 0x251, 0x252, 0x59f, 0x5a3, 0x5a9, 0x5ad,
    0x5b7, 0x5f2, 0x5f3, 0x64d, 0x650, 0x652, 0x653, 0x657,
    0xd0ed, 0xd0ee, 0xd8ec, 0xdaee, 0xdaef
};

/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 32, .range_length = 96, .glyph_id_start = 1,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    },
    {
        .range_start = 160, .range_length = 224, .glyph_id_start = 97,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    },
    {
        .range_start = 402, .range_length = 507, .glyph_id_start = 321,
        .unicode_list = unicode_list_2, .glyph_id_ofs_list = NULL, .list_length = 23, .type = LV_FONT_FMT_TXT_CMAP_SPARSE_TINY
    },
    {
        .range_start = 910, .range_length = 20, .glyph_id_start = 344,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    },
    {
        .range_start = 931, .range_length = 44, .glyph_id_start = 364,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    },
    {
        .range_start = 1024, .range_length = 96, .glyph_id_start = 408,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    },
    {
        .range_start = 8211, .range_length = 56048, .glyph_id_start = 504,
        .unicode_list = unicode_list_6, .glyph_id_ofs_list = NULL, .list_length = 53, .type = LV_FONT_FMT_TXT_CMAP_SPARSE_TINY
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
    .cmap_num = 7,
    .bpp = 1,
    .kern_classes = 0,
    .bitmap_format = 0
};


/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
lv_font_t press_start_2p_8 = {
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 8,          /*The maximum line height required by the font*/
    .base_line = 0,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
    .dsc = &font_dsc           /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
};

#endif /*#if PRESS_START_2P_8*/

