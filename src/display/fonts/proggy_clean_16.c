#include "lvgl/lvgl.h"

/*******************************************************************************
 * Size: 16 px
 * Bpp: 1
 * Opts: 
 ******************************************************************************/

#ifndef PROGGY_CLEAN_16
#define PROGGY_CLEAN_16 1
#endif

#if PROGGY_CLEAN_16

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t gylph_bitmap[] = {
    /* U+0 "\u0000" */
    0x0,

    /* U+1 "\u0001" */
    0x0,

    /* U+2 "\u0002" */
    0x0,

    /* U+3 "\u0003" */
    0x0,

    /* U+4 "\u0004" */
    0x0,

    /* U+5 "\u0005" */
    0x0,

    /* U+6 "\u0006" */
    0x0,

    /* U+7 "\u0007" */
    0x0,

    /* U+8 "\b" */
    0x0,

    /* U+9 "\t" */
    0x0,

    /* U+A "\n" */
    0x0,

    /* U+B "\u000b" */
    0x0,

    /* U+C "\f" */
    0x0,

    /* U+D "\r" */
    0x0,

    /* U+E "\u000e" */
    0x0,

    /* U+F "\u000f" */
    0x0,

    /* U+10 "\u0010" */
    0x0,

    /* U+11 "\u0011" */
    0x0,

    /* U+12 "\u0012" */
    0x0,

    /* U+13 "\u0013" */
    0x0,

    /* U+14 "\u0014" */
    0x0,

    /* U+15 "\u0015" */
    0x0,

    /* U+16 "\u0016" */
    0x0,

    /* U+17 "\u0017" */
    0x0,

    /* U+18 "\u0018" */
    0x0,

    /* U+19 "\u0019" */
    0x0,

    /* U+1A "\u001a" */
    0x0,

    /* U+1B "\u001b" */
    0x0,

    /* U+1C "\u001c" */
    0x0,

    /* U+1D "\u001d" */
    0x0,

    /* U+1E "\u001e" */
    0x0,

    /* U+1F "\u001f" */
    0x0,

    /* U+20 " " */
    0x0,

    /* U+21 "!" */
    0xfd,

    /* U+22 "\"" */
    0xb6, 0x80,

    /* U+23 "#" */
    0x14, 0x29, 0xf9, 0x42, 0x9f, 0x94, 0x28,

    /* U+24 "$" */
    0x23, 0xe9, 0x47, 0x14, 0xbe, 0x20,

    /* U+25 "%" */
    0x45, 0x52, 0xa2, 0x81, 0x45, 0x4a, 0xa2,

    /* U+26 "&" */
    0x62, 0x49, 0x19, 0x96, 0x28, 0x9d,

    /* U+27 "'" */
    0xe0,

    /* U+28 "(" */
    0x29, 0x49, 0x24, 0x48, 0x80,

    /* U+29 ")" */
    0x89, 0x12, 0x49, 0x4a, 0x0,

    /* U+2A "*" */
    0x25, 0x5d, 0x52, 0x0,

    /* U+2B "+" */
    0x21, 0x3e, 0x42, 0x0,

    /* U+2C "," */
    0x56,

    /* U+2D "-" */
    0xf8,

    /* U+2E "." */
    0xc0,

    /* U+2F "/" */
    0x8, 0x44, 0x22, 0x11, 0x8, 0x84, 0x0,

    /* U+30 "0" */
    0x74, 0x67, 0x5a, 0xe6, 0x2e,

    /* U+31 "1" */
    0x23, 0x28, 0x42, 0x10, 0x9f,

    /* U+32 "2" */
    0x74, 0x42, 0x22, 0x22, 0x1f,

    /* U+33 "3" */
    0x74, 0x42, 0x60, 0x86, 0x2e,

    /* U+34 "4" */
    0x8, 0x62, 0x92, 0x8b, 0xf0, 0x82,

    /* U+35 "5" */
    0xfc, 0x21, 0xe0, 0x86, 0x2e,

    /* U+36 "6" */
    0x32, 0x21, 0xe8, 0xc6, 0x2e,

    /* U+37 "7" */
    0xf8, 0x44, 0x22, 0x11, 0x8,

    /* U+38 "8" */
    0x74, 0x62, 0xe8, 0xc6, 0x2e,

    /* U+39 "9" */
    0x74, 0x63, 0x17, 0x84, 0x4c,

    /* U+3A ":" */
    0xcc,

    /* U+3B ";" */
    0x50, 0x56,

    /* U+3C "<" */
    0xc, 0xcc, 0xc, 0xc,

    /* U+3D "=" */
    0xfc, 0xf, 0xc0,

    /* U+3E ">" */
    0xc0, 0xc0, 0xcc, 0xc0,

    /* U+3F "?" */
    0x74, 0x42, 0x22, 0x10, 0x4,

    /* U+40 "@" */
    0x38, 0x8a, 0x6d, 0x5a, 0xb3, 0x90, 0x1e,

    /* U+41 "A" */
    0x30, 0xc4, 0x92, 0x7a, 0x18, 0x61,

    /* U+42 "B" */
    0xf2, 0x28, 0xbe, 0x86, 0x18, 0x7e,

    /* U+43 "C" */
    0x39, 0x18, 0x20, 0x82, 0x4, 0x4e,

    /* U+44 "D" */
    0xf2, 0x28, 0x61, 0x86, 0x18, 0xbc,

    /* U+45 "E" */
    0xfc, 0x21, 0xe8, 0x42, 0x1f,

    /* U+46 "F" */
    0xfc, 0x21, 0xe8, 0x42, 0x10,

    /* U+47 "G" */
    0x39, 0x18, 0x20, 0x9e, 0x14, 0x4e,

    /* U+48 "H" */
    0x86, 0x18, 0x7f, 0x86, 0x18, 0x61,

    /* U+49 "I" */
    0xe9, 0x24, 0x97,

    /* U+4A "J" */
    0x71, 0x11, 0x11, 0x1e,

    /* U+4B "K" */
    0x86, 0x29, 0x28, 0xe2, 0x48, 0xa1,

    /* U+4C "L" */
    0x84, 0x21, 0x8, 0x42, 0x1f,

    /* U+4D "M" */
    0xc7, 0x8e, 0xad, 0x59, 0x32, 0x60, 0xc1,

    /* U+4E "N" */
    0xc7, 0x1a, 0x69, 0x96, 0x58, 0xe3,

    /* U+4F "O" */
    0x31, 0x28, 0x61, 0x86, 0x14, 0x8c,

    /* U+50 "P" */
    0xf4, 0x63, 0x1f, 0x42, 0x10,

    /* U+51 "Q" */
    0x31, 0x28, 0x61, 0x86, 0x14, 0x8d, 0x4,

    /* U+52 "R" */
    0xf2, 0x28, 0xa2, 0xf2, 0x48, 0xa1,

    /* U+53 "S" */
    0x7a, 0x18, 0x18, 0x18, 0x18, 0x5e,

    /* U+54 "T" */
    0xfe, 0x20, 0x40, 0x81, 0x2, 0x4, 0x8,

    /* U+55 "U" */
    0x86, 0x18, 0x61, 0x86, 0x18, 0x5e,

    /* U+56 "V" */
    0x83, 0x5, 0x12, 0x22, 0x85, 0x4, 0x8,

    /* U+57 "W" */
    0x83, 0x26, 0x4d, 0x5a, 0xad, 0x91, 0x22,

    /* U+58 "X" */
    0x86, 0x14, 0x8c, 0x31, 0x28, 0x61,

    /* U+59 "Y" */
    0x83, 0x5, 0x11, 0x41, 0x2, 0x4, 0x8,

    /* U+5A "Z" */
    0xfc, 0x10, 0x84, 0x21, 0x8, 0x3f,

    /* U+5B "[" */
    0xf2, 0x49, 0x24, 0x93, 0x80,

    /* U+5C "\\" */
    0x84, 0x10, 0x82, 0x10, 0x42, 0x8, 0x40,

    /* U+5D "]" */
    0xe4, 0x92, 0x49, 0x27, 0x80,

    /* U+5E "^" */
    0x21, 0x14, 0xa8, 0xc4,

    /* U+5F "_" */
    0xfe,

    /* U+60 "`" */
    0x90,

    /* U+61 "a" */
    0x70, 0x5f, 0x18, 0xbc,

    /* U+62 "b" */
    0x84, 0x21, 0xe8, 0xc6, 0x31, 0xf0,

    /* U+63 "c" */
    0x74, 0x61, 0x8, 0xb8,

    /* U+64 "d" */
    0x8, 0x42, 0xf8, 0xc6, 0x31, 0x78,

    /* U+65 "e" */
    0x74, 0x7f, 0x8, 0xb8,

    /* U+66 "f" */
    0x3a, 0x11, 0xe4, 0x21, 0x8, 0x40,

    /* U+67 "g" */
    0x7c, 0x63, 0x18, 0xbc, 0x21, 0x70,

    /* U+68 "h" */
    0x84, 0x21, 0xe8, 0xc6, 0x31, 0x88,

    /* U+69 "i" */
    0x43, 0x55, 0x40,

    /* U+6A "j" */
    0x10, 0x3, 0x11, 0x11, 0x11, 0xe0,

    /* U+6B "k" */
    0x84, 0x21, 0x19, 0x53, 0x92, 0x88,

    /* U+6C "l" */
    0xd5, 0x55, 0x40,

    /* U+6D "m" */
    0xed, 0x26, 0x4c, 0x99, 0x32, 0x40,

    /* U+6E "n" */
    0xf4, 0x63, 0x18, 0xc4,

    /* U+6F "o" */
    0x74, 0x63, 0x18, 0xb8,

    /* U+70 "p" */
    0xf4, 0x63, 0x18, 0xfa, 0x10, 0x80,

    /* U+71 "q" */
    0x7c, 0x63, 0x18, 0xbc, 0x21, 0x8,

    /* U+72 "r" */
    0xb6, 0x61, 0x8, 0x40,

    /* U+73 "s" */
    0x7c, 0x18, 0x20, 0xf8,

    /* U+74 "t" */
    0x88, 0xf8, 0x88, 0x87,

    /* U+75 "u" */
    0x8c, 0x63, 0x18, 0xbc,

    /* U+76 "v" */
    0x8c, 0x54, 0xa2, 0x10,

    /* U+77 "w" */
    0x83, 0x26, 0x4d, 0x56, 0xc8, 0x80,

    /* U+78 "x" */
    0x8a, 0x88, 0x45, 0x44,

    /* U+79 "y" */
    0x8c, 0x63, 0x18, 0xbc, 0x21, 0x70,

    /* U+7A "z" */
    0xf8, 0x44, 0x44, 0x7c,

    /* U+7B "{" */
    0x19, 0x8, 0x42, 0x60, 0x84, 0x21, 0x6,

    /* U+7C "|" */
    0xff, 0xe0,

    /* U+7D "}" */
    0xc1, 0x8, 0x42, 0xc, 0x84, 0x21, 0x30,

    /* U+7E "~" */
    0x73, 0x38,

    /* U+7F "" */
    0x0,

    /* U+81 "" */
    0x0,

    /* U+82 "" */
    0x55, 0x80,

    /* U+83 "" */
    0x1c, 0x47, 0xcc, 0x10, 0x41, 0x4, 0x10, 0x4e,
    0x0,

    /* U+84 "" */
    0xb6, 0xd0,

    /* U+85 "" */
    0xa8,

    /* U+86 "" */
    0x10, 0x4f, 0xcc, 0x10, 0x41, 0x4, 0x10, 0x40,

    /* U+87 "" */
    0x10, 0x4f, 0xcc, 0xfc, 0xc1, 0x4, 0x10, 0x40,

    /* U+88 "" */
    0x22, 0xa2,

    /* U+89 "" */
    0x12, 0x4b, 0x28, 0x61, 0x5d, 0x65, 0x80,

    /* U+8A "" */
    0x68, 0x47, 0xe1, 0x81, 0xc0, 0xe1, 0x85, 0xf0,

    /* U+8B "" */
    0x2a, 0x22,

    /* U+8C "" */
    0xff, 0x90, 0x9e, 0x9e, 0x90, 0x90, 0x90, 0x7f,

    /* U+8D "" */
    0x0,

    /* U+8E "" */
    0x7b, 0xf0, 0x41, 0xc, 0x21, 0x18, 0x83, 0xf0,

    /* U+8F "" */
    0x0,

    /* U+90 "" */
    0x0,

    /* U+91 "" */
    0xa9,

    /* U+92 "" */
    0x56,

    /* U+93 "" */
    0xaa, 0xa5,

    /* U+94 "" */
    0x55, 0x5a,

    /* U+95 "" */
    0x11, 0xef, 0xde, 0x78, 0x40,

    /* U+96 "" */
    0xfc,

    /* U+97 "" */
    0xff,

    /* U+98 "" */
    0x5a,

    /* U+99 "" */
    0x67, 0x67, 0x65, 0x65,

    /* U+9A "" */
    0x68, 0x80, 0xf8, 0x38, 0x21, 0xf8,

    /* U+9B "" */
    0x88, 0xa8,

    /* U+9C "" */
    0xff, 0x3e, 0x7c, 0x89, 0xf, 0xc0,

    /* U+9D "" */
    0x0,

    /* U+9E "" */
    0x28, 0x80, 0x10, 0x84, 0x44, 0xf8,

    /* U+9F "" */
    0x29, 0x6, 0xc, 0x14, 0x47, 0x4, 0x8, 0x10,

    /* U+A0 " " */
    0x0,

    /* U+A1 "¡" */
    0xbf,

    /* U+A2 "¢" */
    0x23, 0xab, 0x4a, 0x55, 0xc4,

    /* U+A3 "£" */
    0x32, 0x11, 0xe4, 0x22, 0x1f,

    /* U+A4 "¤" */
    0x82, 0xf9, 0x12, 0x24, 0x4f, 0xa0, 0x80,

    /* U+A5 "¥" */
    0x83, 0x5, 0x11, 0x41, 0xf, 0x84, 0x8,

    /* U+A6 "¦" */
    0xfb, 0xe0,

    /* U+A7 "§" */
    0x74, 0x60, 0xc5, 0x18, 0x31, 0x70,

    /* U+A8 "¨" */
    0xa0,

    /* U+A9 "©" */
    0x7d, 0x6, 0x6d, 0x1a, 0x33, 0x60, 0xbe,

    /* U+AA "ª" */
    0x61, 0x79, 0x70,

    /* U+AB "«" */
    0x2a, 0xa8, 0xa2, 0x80,

    /* U+AC "¬" */
    0xf1, 0x11,

    /* U+AD "­" */
    0x0,

    /* U+AE "®" */
    0x7d, 0x6, 0xcd, 0x5b, 0x35, 0x60, 0xbe,

    /* U+AF "¯" */
    0xfe,

    /* U+B0 "°" */
    0x69, 0x96,

    /* U+B1 "±" */
    0x21, 0x3e, 0x42, 0x3, 0xe0,

    /* U+B2 "²" */
    0xe1, 0x24, 0xf0,

    /* U+B3 "³" */
    0xe1, 0x61, 0xe0,

    /* U+B4 "´" */
    0x60,

    /* U+B5 "µ" */
    0x44, 0x89, 0x12, 0x26, 0x4b, 0x50, 0x40,

    /* U+B6 "¶" */
    0x7f, 0xae, 0x9a, 0x28, 0xa2, 0x8a, 0x28,

    /* U+B7 "·" */
    0xff, 0x80,

    /* U+B8 "¸" */
    0xd8,

    /* U+B9 "¹" */
    0x59, 0x2e,

    /* U+BA "º" */
    0x69, 0x99, 0x60,

    /* U+BB "»" */
    0xa2, 0x8a, 0xaa, 0x0,

    /* U+BC "¼" */
    0xa, 0x29, 0x24, 0xa0, 0x84, 0x96, 0xbe, 0x20,

    /* U+BD "½" */
    0xa, 0x29, 0x24, 0xa0, 0xe4, 0x52, 0x92, 0x70,

    /* U+BE "¾" */
    0x5, 0x88, 0xa3, 0x43, 0x1a, 0x9, 0x16, 0x5e,
    0x88,

    /* U+BF "¿" */
    0x20, 0x8, 0x44, 0x42, 0x2e,

    /* U+C0 "À" */
    0x20, 0x40, 0xc, 0x49, 0x27, 0xa1, 0x86, 0x10,

    /* U+C1 "Á" */
    0x10, 0x80, 0xc, 0x49, 0x27, 0xa1, 0x86, 0x10,

    /* U+C2 "Â" */
    0x31, 0x20, 0xc, 0x49, 0x27, 0xa1, 0x86, 0x10,

    /* U+C3 "Ã" */
    0x29, 0x40, 0xc, 0x49, 0x27, 0xa1, 0x86, 0x10,

    /* U+C4 "Ä" */
    0x48, 0x3, 0x12, 0x49, 0xe8, 0x61, 0x84,

    /* U+C5 "Å" */
    0x31, 0x24, 0x8c, 0x49, 0x27, 0xa1, 0x86, 0x10,

    /* U+C6 "Æ" */
    0x1e, 0x50, 0xa2, 0x67, 0x91, 0x22, 0x47,

    /* U+C7 "Ç" */
    0x39, 0x18, 0x20, 0x82, 0x4, 0x4e, 0x10, 0x42,
    0x0,

    /* U+C8 "È" */
    0x41, 0x1, 0xf8, 0x43, 0xd0, 0x87, 0xc0,

    /* U+C9 "É" */
    0x11, 0x1, 0xf8, 0x43, 0xd0, 0x87, 0xc0,

    /* U+CA "Ê" */
    0x22, 0x81, 0xf8, 0x43, 0xd0, 0x87, 0xc0,

    /* U+CB "Ë" */
    0x50, 0x3f, 0x8, 0x7a, 0x10, 0xf8,

    /* U+CC "Ì" */
    0x44, 0x74, 0x92, 0x5c,

    /* U+CD "Í" */
    0x28, 0x74, 0x92, 0x5c,

    /* U+CE "Î" */
    0x54, 0x74, 0x92, 0x5c,

    /* U+CF "Ï" */
    0xa3, 0xa4, 0x92, 0xe0,

    /* U+D0 "Ð" */
    0x78, 0x89, 0xf, 0x94, 0x28, 0x9e, 0x0,

    /* U+D1 "Ñ" */
    0x29, 0x40, 0x31, 0xa6, 0x99, 0x65, 0x8e, 0x30,

    /* U+D2 "Ò" */
    0x20, 0x40, 0xc, 0x4a, 0x18, 0x61, 0x48, 0xc0,

    /* U+D3 "Ó" */
    0x10, 0x80, 0xc, 0x4a, 0x18, 0x61, 0x48, 0xc0,

    /* U+D4 "Ô" */
    0x31, 0x20, 0xc, 0x4a, 0x18, 0x61, 0x48, 0xc0,

    /* U+D5 "Õ" */
    0x29, 0x40, 0xc, 0x4a, 0x18, 0x61, 0x48, 0xc0,

    /* U+D6 "Ö" */
    0x48, 0x3, 0x12, 0x86, 0x18, 0x52, 0x30,

    /* U+D7 "×" */
    0x8a, 0x88, 0xa8, 0x80,

    /* U+D8 "Ø" */
    0x35, 0x29, 0x65, 0xa6, 0x94, 0xac,

    /* U+D9 "Ù" */
    0x20, 0x40, 0x21, 0x86, 0x18, 0x61, 0x85, 0xe0,

    /* U+DA "Ú" */
    0x10, 0x80, 0x21, 0x86, 0x18, 0x61, 0x85, 0xe0,

    /* U+DB "Û" */
    0x31, 0x20, 0x21, 0x86, 0x18, 0x61, 0x85, 0xe0,

    /* U+DC "Ü" */
    0x48, 0x8, 0x61, 0x86, 0x18, 0x61, 0x78,

    /* U+DD "Ý" */
    0x8, 0x20, 0x4, 0x18, 0x28, 0x8a, 0x8, 0x10,
    0x20,

    /* U+DE "Þ" */
    0x84, 0x3d, 0x18, 0xfa, 0x10,

    /* U+DF "ß" */
    0x38, 0x89, 0x13, 0xc4, 0x48, 0x50, 0xa1, 0x7d,
    0x0,

    /* U+E0 "à" */
    0x20, 0x80, 0xe0, 0xbe, 0x31, 0x78,

    /* U+E1 "á" */
    0x11, 0x0, 0xe0, 0xbe, 0x31, 0x78,

    /* U+E2 "â" */
    0x22, 0x80, 0xe0, 0xbe, 0x31, 0x78,

    /* U+E3 "ã" */
    0x2a, 0x80, 0xe0, 0xbe, 0x31, 0x78,

    /* U+E4 "ä" */
    0x50, 0x1c, 0x17, 0xc6, 0x2f,

    /* U+E5 "å" */
    0x22, 0x88, 0x7, 0x5, 0xf1, 0x8b, 0xc0,

    /* U+E6 "æ" */
    0x6c, 0x25, 0xfc, 0x89, 0x2f, 0x80,

    /* U+E7 "ç" */
    0x74, 0x61, 0x8, 0xb8, 0x84, 0x40,

    /* U+E8 "è" */
    0x41, 0x0, 0xe8, 0xfe, 0x11, 0x70,

    /* U+E9 "é" */
    0x22, 0x0, 0xe8, 0xfe, 0x11, 0x70,

    /* U+EA "ê" */
    0x22, 0x80, 0xe8, 0xfe, 0x11, 0x70,

    /* U+EB "ë" */
    0x50, 0x1d, 0x1f, 0xc2, 0x2e,

    /* U+EC "ì" */
    0x93, 0x55, 0x40,

    /* U+ED "í" */
    0x63, 0x55, 0x40,

    /* U+EE "î" */
    0x54, 0x64, 0x92, 0x40,

    /* U+EF "ï" */
    0xa0, 0x64, 0x92, 0x40,

    /* U+F0 "ð" */
    0x68, 0x8a, 0x17, 0xc6, 0x31, 0x70,

    /* U+F1 "ñ" */
    0x55, 0x1, 0xe8, 0xc6, 0x31, 0x88,

    /* U+F2 "ò" */
    0x41, 0x0, 0xe8, 0xc6, 0x31, 0x70,

    /* U+F3 "ó" */
    0x11, 0x0, 0xe8, 0xc6, 0x31, 0x70,

    /* U+F4 "ô" */
    0x22, 0x80, 0xe8, 0xc6, 0x31, 0x70,

    /* U+F5 "õ" */
    0x2a, 0x80, 0xe8, 0xc6, 0x31, 0x70,

    /* U+F6 "ö" */
    0x50, 0x1d, 0x18, 0xc6, 0x2e,

    /* U+F7 "÷" */
    0x20, 0x3e, 0x2, 0x0,

    /* U+F8 "ø" */
    0xb, 0xa7, 0x5a, 0xe5, 0xd0,

    /* U+F9 "ù" */
    0x41, 0x1, 0x18, 0xc6, 0x31, 0x78,

    /* U+FA "ú" */
    0x22, 0x1, 0x18, 0xc6, 0x31, 0x78,

    /* U+FB "û" */
    0x22, 0x81, 0x18, 0xc6, 0x31, 0x78,

    /* U+FC "ü" */
    0x50, 0x23, 0x18, 0xc6, 0x2f,

    /* U+FD "ý" */
    0x11, 0x1, 0x18, 0xc6, 0x31, 0x78, 0x42, 0xe0,

    /* U+FE "þ" */
    0x84, 0x3d, 0x18, 0xc6, 0x3e, 0x84, 0x0,

    /* U+FF "ÿ" */
    0x50, 0x23, 0x18, 0xc6, 0x2f, 0x8, 0x5c,

    /* U+20AC "€" */
    0x39, 0x1f, 0x10, 0xf1, 0x13, 0x80
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 112, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 112, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2, .adv_w = 112, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3, .adv_w = 112, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 4, .adv_w = 112, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 5, .adv_w = 112, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 6, .adv_w = 112, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 7, .adv_w = 112, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 8, .adv_w = 112, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 9, .adv_w = 112, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 10, .adv_w = 112, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 11, .adv_w = 112, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 12, .adv_w = 112, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 13, .adv_w = 112, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 14, .adv_w = 112, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 15, .adv_w = 112, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 16, .adv_w = 112, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 17, .adv_w = 112, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 18, .adv_w = 112, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 19, .adv_w = 112, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 20, .adv_w = 112, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 21, .adv_w = 112, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 22, .adv_w = 112, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 23, .adv_w = 112, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 24, .adv_w = 112, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 25, .adv_w = 112, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 26, .adv_w = 112, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 27, .adv_w = 112, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 28, .adv_w = 112, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 29, .adv_w = 112, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 30, .adv_w = 112, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 31, .adv_w = 112, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 32, .adv_w = 112, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 33, .adv_w = 112, .box_w = 1, .box_h = 8, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 34, .adv_w = 112, .box_w = 3, .box_h = 3, .ofs_x = 2, .ofs_y = 6},
    {.bitmap_index = 36, .adv_w = 112, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 43, .adv_w = 112, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 49, .adv_w = 112, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 56, .adv_w = 112, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 62, .adv_w = 112, .box_w = 1, .box_h = 3, .ofs_x = 3, .ofs_y = 6},
    {.bitmap_index = 63, .adv_w = 112, .box_w = 3, .box_h = 11, .ofs_x = 2, .ofs_y = -2},
    {.bitmap_index = 68, .adv_w = 112, .box_w = 3, .box_h = 11, .ofs_x = 2, .ofs_y = -2},
    {.bitmap_index = 73, .adv_w = 112, .box_w = 5, .box_h = 5, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 77, .adv_w = 112, .box_w = 5, .box_h = 5, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 81, .adv_w = 112, .box_w = 2, .box_h = 4, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 82, .adv_w = 112, .box_w = 5, .box_h = 1, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 83, .adv_w = 112, .box_w = 1, .box_h = 2, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 84, .adv_w = 112, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 91, .adv_w = 112, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 96, .adv_w = 112, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 101, .adv_w = 112, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 106, .adv_w = 112, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 111, .adv_w = 112, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 117, .adv_w = 112, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 122, .adv_w = 112, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 127, .adv_w = 112, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 132, .adv_w = 112, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 137, .adv_w = 112, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 142, .adv_w = 112, .box_w = 1, .box_h = 6, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 143, .adv_w = 112, .box_w = 2, .box_h = 8, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 145, .adv_w = 112, .box_w = 6, .box_h = 5, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 149, .adv_w = 112, .box_w = 6, .box_h = 3, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 152, .adv_w = 112, .box_w = 6, .box_h = 5, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 156, .adv_w = 112, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 161, .adv_w = 112, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 168, .adv_w = 112, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 174, .adv_w = 112, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 180, .adv_w = 112, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 186, .adv_w = 112, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 192, .adv_w = 112, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 197, .adv_w = 112, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 202, .adv_w = 112, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 208, .adv_w = 112, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 214, .adv_w = 112, .box_w = 3, .box_h = 8, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 217, .adv_w = 112, .box_w = 4, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 221, .adv_w = 112, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 227, .adv_w = 112, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 232, .adv_w = 112, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 239, .adv_w = 112, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 245, .adv_w = 112, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 251, .adv_w = 112, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 256, .adv_w = 112, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 263, .adv_w = 112, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 269, .adv_w = 112, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 275, .adv_w = 112, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 282, .adv_w = 112, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 288, .adv_w = 112, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 295, .adv_w = 112, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 302, .adv_w = 112, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 308, .adv_w = 112, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 315, .adv_w = 112, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 321, .adv_w = 112, .box_w = 3, .box_h = 11, .ofs_x = 2, .ofs_y = -2},
    {.bitmap_index = 326, .adv_w = 112, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 333, .adv_w = 112, .box_w = 3, .box_h = 11, .ofs_x = 2, .ofs_y = -2},
    {.bitmap_index = 338, .adv_w = 112, .box_w = 5, .box_h = 6, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 342, .adv_w = 112, .box_w = 7, .box_h = 1, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 343, .adv_w = 112, .box_w = 2, .box_h = 2, .ofs_x = 2, .ofs_y = 7},
    {.bitmap_index = 344, .adv_w = 112, .box_w = 5, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 348, .adv_w = 112, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 354, .adv_w = 112, .box_w = 5, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 358, .adv_w = 112, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 364, .adv_w = 112, .box_w = 5, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 368, .adv_w = 112, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 374, .adv_w = 112, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 380, .adv_w = 112, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 386, .adv_w = 112, .box_w = 2, .box_h = 9, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 389, .adv_w = 112, .box_w = 4, .box_h = 11, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 395, .adv_w = 112, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 401, .adv_w = 112, .box_w = 2, .box_h = 9, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 404, .adv_w = 112, .box_w = 7, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 410, .adv_w = 112, .box_w = 5, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 414, .adv_w = 112, .box_w = 5, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 418, .adv_w = 112, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 424, .adv_w = 112, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 430, .adv_w = 112, .box_w = 5, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 434, .adv_w = 112, .box_w = 5, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 438, .adv_w = 112, .box_w = 4, .box_h = 8, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 442, .adv_w = 112, .box_w = 5, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 446, .adv_w = 112, .box_w = 5, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 450, .adv_w = 112, .box_w = 7, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 456, .adv_w = 112, .box_w = 5, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 460, .adv_w = 112, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 466, .adv_w = 112, .box_w = 5, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 470, .adv_w = 112, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 477, .adv_w = 112, .box_w = 1, .box_h = 11, .ofs_x = 3, .ofs_y = -2},
    {.bitmap_index = 479, .adv_w = 112, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 486, .adv_w = 112, .box_w = 7, .box_h = 2, .ofs_x = 0, .ofs_y = 3},
    {.bitmap_index = 488, .adv_w = 112, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 489, .adv_w = 112, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 490, .adv_w = 112, .box_w = 2, .box_h = 5, .ofs_x = 2, .ofs_y = -2},
    {.bitmap_index = 492, .adv_w = 112, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 501, .adv_w = 112, .box_w = 3, .box_h = 4, .ofs_x = 2, .ofs_y = -1},
    {.bitmap_index = 503, .adv_w = 112, .box_w = 5, .box_h = 1, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 504, .adv_w = 112, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 512, .adv_w = 112, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 520, .adv_w = 112, .box_w = 5, .box_h = 3, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 522, .adv_w = 112, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 529, .adv_w = 112, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 537, .adv_w = 112, .box_w = 3, .box_h = 5, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 539, .adv_w = 112, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 547, .adv_w = 112, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 548, .adv_w = 112, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 556, .adv_w = 112, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 557, .adv_w = 112, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 558, .adv_w = 112, .box_w = 2, .box_h = 4, .ofs_x = 3, .ofs_y = 6},
    {.bitmap_index = 559, .adv_w = 112, .box_w = 2, .box_h = 4, .ofs_x = 2, .ofs_y = 6},
    {.bitmap_index = 560, .adv_w = 112, .box_w = 4, .box_h = 4, .ofs_x = 2, .ofs_y = 6},
    {.bitmap_index = 562, .adv_w = 112, .box_w = 4, .box_h = 4, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 564, .adv_w = 112, .box_w = 6, .box_h = 6, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 569, .adv_w = 112, .box_w = 6, .box_h = 1, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 570, .adv_w = 112, .box_w = 8, .box_h = 1, .ofs_x = 0, .ofs_y = 3},
    {.bitmap_index = 571, .adv_w = 112, .box_w = 4, .box_h = 2, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 572, .adv_w = 112, .box_w = 8, .box_h = 4, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 576, .adv_w = 112, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 582, .adv_w = 112, .box_w = 3, .box_h = 5, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 584, .adv_w = 112, .box_w = 7, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 590, .adv_w = 112, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 591, .adv_w = 112, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 597, .adv_w = 112, .box_w = 7, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 605, .adv_w = 112, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 606, .adv_w = 112, .box_w = 1, .box_h = 8, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 607, .adv_w = 112, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 612, .adv_w = 112, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 617, .adv_w = 112, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 624, .adv_w = 112, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 631, .adv_w = 112, .box_w = 1, .box_h = 11, .ofs_x = 3, .ofs_y = -2},
    {.bitmap_index = 633, .adv_w = 112, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 639, .adv_w = 112, .box_w = 3, .box_h = 1, .ofs_x = 2, .ofs_y = 8},
    {.bitmap_index = 640, .adv_w = 112, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 647, .adv_w = 112, .box_w = 4, .box_h = 5, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 650, .adv_w = 112, .box_w = 5, .box_h = 5, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 654, .adv_w = 112, .box_w = 4, .box_h = 4, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 656, .adv_w = 112, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 657, .adv_w = 112, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 664, .adv_w = 112, .box_w = 7, .box_h = 1, .ofs_x = 0, .ofs_y = 9},
    {.bitmap_index = 665, .adv_w = 112, .box_w = 4, .box_h = 4, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 667, .adv_w = 112, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 672, .adv_w = 112, .box_w = 4, .box_h = 5, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 675, .adv_w = 112, .box_w = 4, .box_h = 5, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 678, .adv_w = 112, .box_w = 2, .box_h = 2, .ofs_x = 3, .ofs_y = 7},
    {.bitmap_index = 679, .adv_w = 112, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 686, .adv_w = 112, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 693, .adv_w = 112, .box_w = 3, .box_h = 3, .ofs_x = 2, .ofs_y = 2},
    {.bitmap_index = 695, .adv_w = 112, .box_w = 2, .box_h = 3, .ofs_x = 3, .ofs_y = -3},
    {.bitmap_index = 696, .adv_w = 112, .box_w = 3, .box_h = 5, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 698, .adv_w = 112, .box_w = 4, .box_h = 5, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 701, .adv_w = 112, .box_w = 5, .box_h = 5, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 705, .adv_w = 112, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 713, .adv_w = 112, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 721, .adv_w = 112, .box_w = 7, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 730, .adv_w = 112, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 735, .adv_w = 112, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 743, .adv_w = 112, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 751, .adv_w = 112, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 759, .adv_w = 112, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 767, .adv_w = 112, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 774, .adv_w = 112, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 782, .adv_w = 112, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 789, .adv_w = 112, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 798, .adv_w = 112, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 805, .adv_w = 112, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 812, .adv_w = 112, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 819, .adv_w = 112, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 825, .adv_w = 112, .box_w = 3, .box_h = 10, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 829, .adv_w = 112, .box_w = 3, .box_h = 10, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 833, .adv_w = 112, .box_w = 3, .box_h = 10, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 837, .adv_w = 112, .box_w = 3, .box_h = 9, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 841, .adv_w = 112, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 848, .adv_w = 112, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 856, .adv_w = 112, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 864, .adv_w = 112, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 872, .adv_w = 112, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 880, .adv_w = 112, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 888, .adv_w = 112, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 895, .adv_w = 112, .box_w = 5, .box_h = 5, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 899, .adv_w = 112, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 905, .adv_w = 112, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 913, .adv_w = 112, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 921, .adv_w = 112, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 929, .adv_w = 112, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 936, .adv_w = 112, .box_w = 7, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 945, .adv_w = 112, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 950, .adv_w = 112, .box_w = 7, .box_h = 10, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 959, .adv_w = 112, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 965, .adv_w = 112, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 971, .adv_w = 112, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 977, .adv_w = 112, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 983, .adv_w = 112, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 988, .adv_w = 112, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 995, .adv_w = 112, .box_w = 7, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1001, .adv_w = 112, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1007, .adv_w = 112, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1013, .adv_w = 112, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1019, .adv_w = 112, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1025, .adv_w = 112, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1030, .adv_w = 112, .box_w = 2, .box_h = 9, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1033, .adv_w = 112, .box_w = 2, .box_h = 9, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1036, .adv_w = 112, .box_w = 3, .box_h = 9, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1040, .adv_w = 112, .box_w = 3, .box_h = 9, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1044, .adv_w = 112, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1050, .adv_w = 112, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1056, .adv_w = 112, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1062, .adv_w = 112, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1068, .adv_w = 112, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1074, .adv_w = 112, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1080, .adv_w = 112, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1085, .adv_w = 112, .box_w = 5, .box_h = 5, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 1089, .adv_w = 112, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 1094, .adv_w = 112, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1100, .adv_w = 112, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1106, .adv_w = 112, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1112, .adv_w = 112, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1117, .adv_w = 112, .box_w = 5, .box_h = 12, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1125, .adv_w = 112, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1132, .adv_w = 112, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1139, .adv_w = 112, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/



/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 0, .range_length = 128, .glyph_id_start = 1,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    },
    {
        .range_start = 129, .range_length = 127, .glyph_id_start = 129,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    },
    {
        .range_start = 8364, .range_length = 1, .glyph_id_start = 256,
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
    .cmap_num = 3,
    .bpp = 1,
    .kern_classes = 0,
    .bitmap_format = 0
};


/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
lv_font_t proggy_clean_16 = {
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 13,          /*The maximum line height required by the font*/
    .base_line = 3,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
    .dsc = &font_dsc           /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
};

#endif /*#if PROGGY_CLEAN_16*/

