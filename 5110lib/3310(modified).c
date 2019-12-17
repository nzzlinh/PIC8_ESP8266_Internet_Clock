
char CONST TABLE1 [240] = {  // ASCII table for NOKIA LCD: 96 rows * 5 bytes= 480 bytes
                  0x00,0x00,0x00,0x00,0x00,   // 20 space
                  0x00,0x00,0x5f,0x00,0x00,   // 21 !
                  0x00,0x07,0x00,0x07,0x00,   // 22 "
                  0x14,0x7f,0x14,0x7f,0x14,   // 23 #
                  0x24,0x2a,0x7f,0x2a,0x12,   // 24 $
                  0x23,0x13,0x08,0x64,0x62,   // 25 %
                  0x36,0x49,0x55,0x22,0x50,   // 26 &
                  0x00,0x05,0x03,0x00,0x00,   // 27 '
                  0x00,0x1c,0x22,0x41,0x00,   // 28 (
                  0x00,0x41,0x22,0x1c,0x00,   // 29 )
                  0x14,0x08,0x3e,0x08,0x14,   // 2a *
                  0x08,0x08,0x3e,0x08,0x08,   // 2b +
                  0x00,0x50,0x30,0x00,0x00,   // 2c ,
                  0x08,0x08,0x08,0x08,0x08,   // 2d -
                  0x00,0x60,0x60,0x00,0x00,   // 2e .
                  0x20,0x10,0x08,0x04,0x02,   // 2f /
                  0x3e,0x51,0x49,0x45,0x3e,   // 30 0
                  0x00,0x42,0x7f,0x40,0x00,   // 31 1
                  0x42,0x61,0x51,0x49,0x46,   // 32 2
                  0x21,0x41,0x45,0x4b,0x31,   // 33 3
                  0x18,0x14,0x12,0x7f,0x10,   // 34 4
                  0x27,0x45,0x45,0x45,0x39,   // 35 5
                  0x3c,0x4a,0x49,0x49,0x30,   // 36 6
                  0x01,0x71,0x09,0x05,0x03,   // 37 7
                  0x36,0x49,0x49,0x49,0x36,   // 38 8
                  0x06,0x49,0x49,0x29,0x1e,   // 39 9
                  0x00,0x36,0x36,0x00,0x00,   // 3a :
                  0x00,0x56,0x36,0x00,0x00,   // 3b ;
                  0x08,0x14,0x22,0x41,0x00,   // 3c <
                  0x14,0x14,0x14,0x14,0x14,   // 3d =
                  0x00,0x41,0x22,0x14,0x08,   // 3e >
                  0x02,0x01,0x51,0x09,0x06,   // 3f ?
                  0x32,0x49,0x79,0x41,0x3e,   // 40 @
                  0x7e,0x11,0x11,0x11,0x7e,   // 41 A
                  0x7f,0x49,0x49,0x49,0x36,   // 42 B
                  0x3e,0x41,0x41,0x41,0x22,   // 43 C
                  0x7f,0x41,0x41,0x22,0x1c,   // 44 D
                  0x7f,0x49,0x49,0x49,0x41,   // 45 E
                  0x7f,0x09,0x09,0x09,0x01,   // 46 F
                  0x3e,0x41,0x49,0x49,0x7a,   // 47 G
                  0x7f,0x08,0x08,0x08,0x7f,   // 48 H
                  0x00,0x41,0x7f,0x41,0x00,   // 49 I
                  0x20,0x40,0x41,0x3f,0x01,   // 4a J
                  0x7f,0x08,0x14,0x22,0x41,   // 4b K
                  0x7f,0x40,0x40,0x40,0x40,   // 4c L
                  0x7f,0x02,0x0c,0x02,0x7f,   // 4d M
                  0x7f,0x04,0x08,0x10,0x7f,   // 4e N
                  0x3e,0x41,0x41,0x41,0x3e};   // 4f O

char CONST TABLE2 [240] = {
                  0x7f,0x09,0x09,0x09,0x06,   // 50 P
                  0x3e,0x41,0x51,0x21,0x5e,   // 51 Q
                  0x7f,0x09,0x19,0x29,0x46,   // 52 R
                  0x46,0x49,0x49,0x49,0x31,   // 53 S
                  0x01,0x01,0x7f,0x01,0x01,   // 54 T
                  0x3f,0x40,0x40,0x40,0x3f,   // 55 U
                  0x1f,0x20,0x40,0x20,0x1f,   // 56 V
                  0x3f,0x40,0x38,0x40,0x3f,   // 57 W
                  0x63,0x14,0x08,0x14,0x63,   // 58 X
                  0x07,0x08,0x70,0x08,0x07,   // 59 Y
                  0x61,0x51,0x49,0x45,0x43,   // 5a Z
                  0x00,0x7f,0x41,0x41,0x00,   // 5b [
                  0x02,0x04,0x08,0x10,0x20,   // 5c \
                  0x00,0x41,0x41,0x7f,0x00,   // 5d �
                  0x04,0x02,0x01,0x02,0x04,   // 5e ^
                  0x40,0x40,0x40,0x40,0x40,   // 5f _
                  0x00,0x01,0x02,0x04,0x00,   // 60 `
                  0x20,0x54,0x54,0x54,0x78,   // 61 a
                  0x7f,0x48,0x44,0x44,0x38,   // 62 b
                  0x38,0x44,0x44,0x44,0x20,   // 63 c
                  0x38,0x44,0x44,0x48,0x7f,   // 64 d
                  0x38,0x54,0x54,0x54,0x18,   // 65 e
                  0x08,0x7e,0x09,0x01,0x02,   // 66 f
                  0x0c,0x52,0x52,0x52,0x3e,   // 67 g
                  0x7f,0x08,0x04,0x04,0x78,   // 68 h
                  0x00,0x44,0x7d,0x40,0x00,   // 69 i
                  0x20,0x40,0x44,0x3d,0x00,   // 6a j
                  0x7f,0x10,0x28,0x44,0x00,   // 6b k
                  0x00,0x41,0x7f,0x40,0x00,   // 6c l
                  0x7c,0x04,0x18,0x04,0x78,   // 6d m
                  0x7c,0x08,0x04,0x04,0x78,   // 6e n
                  0x38,0x44,0x44,0x44,0x38,   // 6f o
                  0x7c,0x14,0x14,0x14,0x08,   // 70 p
                  0x08,0x14,0x14,0x18,0x7c,   // 71 q
                  0x7c,0x08,0x04,0x04,0x08,   // 72 r
                  0x48,0x54,0x54,0x54,0x20,   // 73 s
                  0x04,0x3f,0x44,0x40,0x20,   // 74 t
                  0x3c,0x40,0x40,0x20,0x7c,   // 75 u
                  0x1c,0x20,0x40,0x20,0x1c,   // 76 v
                  0x3c,0x40,0x30,0x40,0x3c,   // 77 w
                  0x44,0x28,0x10,0x28,0x44,   // 78 x
                  0x0c,0x50,0x50,0x50,0x3c,   // 79 y
                  0x44,0x64,0x54,0x4c,0x44,   // 7a z
                  0x00,0x08,0x36,0x41,0x00,   // 7b {
                  0x00,0x00,0x7f,0x00,0x00,   // 7c |
                  0x00,0x41,0x36,0x08,0x00,   // 7d }
                  0x10,0x08,0x08,0x10,0x08,   // 7e ~
                  0x78,0x46,0x41,0x46,0x78};   // 7f �

const char digits[260] = {
0xF0, 0xFC, 0x0E, 0x03, 0x83, 0xC3, 0xC3, 0x67, 0xFE, 0xF8, 0x0F, 0x7F, 0x76, 0xC3, 0xC3, 0xC1, 0xC0, 0x60, 0x3F, 0x1F, 
0x0C, 0x06, 0x06, 0x03, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0xC0, 0xC0, 0xC0, 0xC0, 0xFF, 0xFF, 0xFF, 0xC0, 0xC0, 0xC0, 
0x06, 0x06, 0x03, 0x03, 0x03, 0x03, 0xC7, 0xFE, 0x7C, 0x00, 0xE0, 0xF0, 0xF8, 0xDC, 0xCE, 0xC7, 0xC3, 0xC1, 0xC0, 0xC0, 
0x03, 0x03, 0x83, 0x83, 0x83, 0x83, 0xC3, 0xFF, 0x7E, 0x38, 0xC0, 0xC0, 0xC1, 0xC1, 0xC1, 0xC1, 0xC1, 0xE3, 0x7F, 0x3E, 
0x00, 0x80, 0xE0, 0x70, 0x3C, 0x1E, 0x07, 0xFF, 0xFF, 0x00, 0x0F, 0x0F, 0x0D, 0x0C, 0x0C, 0x0C, 0x0C, 0xFF, 0xFF, 0x0C, 
0xFF, 0xFF, 0xC3, 0xC3, 0xC3, 0xC3, 0xC3, 0x83, 0x03, 0x03, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xE0, 0x61, 0x7F, 0x3F, 0x00, 
0xFC, 0xFE, 0xCF, 0xC7, 0xC3, 0xC3, 0xC3, 0xC3, 0x83, 0x00, 0x3F, 0x7F, 0xE1, 0xC0, 0xC0, 0xC0, 0xC0, 0xE1, 0x7F, 0x3F, 
0x03, 0x03, 0x03, 0x03, 0x03, 0x83, 0xE3, 0xFB, 0x3F, 0x0F, 0x00, 0xC0, 0xF0, 0x78, 0x3E, 0x0F, 0x03, 0x00, 0x00, 0x00,
0x3C, 0x7E, 0xE7, 0xC3, 0xC3, 0xC3, 0xC3, 0xE7, 0x7E, 0x3C, 0x3E, 0x7F, 0xE3, 0xC1, 0xC1, 0xC1, 0xC1, 0xE3, 0x7F, 0x3E, 
0xFC, 0xFE, 0x87, 0x03, 0x03, 0x03, 0x03, 0x87, 0xFE, 0xFC, 0x00, 0xC1, 0xC3, 0xC3, 0xC3, 0xC3, 0xE3, 0x73, 0x3F, 0x1F, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE0, 0xF0, 0xF0, 0xE0, 0x00, 0x00, 0x00, //cham
0x00, 0x00, 0x00, 0x30, 0x70, 0x70, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0xE0, 0xE0, 0xE0, 0x00, 0x00, 0x00 //hai cham
};
const unsigned char cloudy[] = { 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xc0, 0xe0, 0xf0, 0x70, 0x38, 0x38, 0x1c, 0x0c, 0x0e, 0x0e, 0x06, 0x07, 0x07, 0x07, 0x07, 0x03, 0x03, 0x07, 0x07, 0x07, 0x07, 0x06, 0x06, 0x0e, 0x0e, 0x1c, 0x1c, 0x38, 0x78, 0x70, 0xe0, 0xc0, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xe0, 0xf8, 0xf8, 0x1c, 0x0e, 0x0e, 0x07, 0x07, 0x07, 0x03, 0x03, 0x07, 0x07, 0x07, 0x0e, 0x0e, 0x1e, 0x0f, 0x07, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x07, 0x1f, 0xfe, 0xf8, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x80, 0xc0, 0xe0, 0xf0, 0x38, 0x38, 0x1c, 0x0c, 0x0e, 0x0e, 0x07, 0x07, 0x07, 0x07, 0x07, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7b, 0xff, 0xff, 0xc4, 0xc0, 0xc0, 0xc0, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0xf8, 0xff, 0xff, 0x07, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x03, 0x07, 0x0f, 0x3e, 0xfc, 0xf0, 0xc0, 0x00, 0x00, 
  0x01, 0x1f, 0x3f, 0x7c, 0xf0, 0xc0, 0xc0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xc0, 0xf0, 0xff, 0x3f, 0x0f, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x03, 0x07, 0x07, 0x0e, 0x0e, 0x0e, 0x0c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x0c, 0x0e, 0x0e, 0x07, 0x03, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00
};
const unsigned char rainy[]= {
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xc0, 0xc0, 0xe0, 0xe0, 0xe0, 0x70, 0x70, 0x70, 0x70, 0x70, 0x70, 0x70, 0x70, 0x70, 0x70, 0x70, 0xe0, 0xe0, 0xe0, 0xc0, 0xc0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xf8, 0xfc, 0xfe, 0x1f, 0x0f, 0x07, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x03, 0x03, 0x0f, 0x1f, 0x3e, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x3c, 0x38, 0x78, 0xf0, 0xf0, 0xe0, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0xf0, 0xf8, 0x7c, 0x1e, 0x0f, 0x0f, 0x07, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x07, 0x07, 0x07, 0x0f, 0x0e, 0x1e, 0x7c, 0xf8, 0xf0, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x1f, 0x3f, 0x7f, 0xf8, 0xf0, 0xe0, 0xc0, 0xc0, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0xc0, 0xc0, 0xe0, 0xf0, 0xfc, 0x7f, 0x3f, 0x0f, 0x13, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x03, 0x03, 0x03, 0x03, 0xf3, 0xfb, 0xfb, 0xf3, 0x03, 0x03, 0x03, 0x03, 0x83, 0xc3, 0x83, 0x03, 0x03, 0x03, 0x03, 0xf3, 0xfb, 0xfb, 0xf3, 0x03, 0x03, 0x03, 0x03, 0x83, 0xc3, 0x83, 0x03, 0x03, 0x03, 0x03, 0xf3, 0xfb, 0xfb, 0xf3, 0x03, 0x03, 0x03, 0x03, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x0f, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x0f, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};
const unsigned char thunder[]={
 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x40, 0x40, 0x40, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x40, 0x20, 0x20, 0x10, 0x10, 0x08, 0x08, 0x08, 0x08, 0x00, 0x04, 0x04, 0x04, 0x04, 0x04, 0x00, 0x08, 0x08, 0x08, 0x08, 0x10, 0x10, 0x20, 0x60, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0xc0, 0x80, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x40, 0x40, 0x20, 0x3c, 0x2e, 0x21, 0x21, 0x20, 0x20, 0x20, 0x60, 0x30, 0x18, 0x08, 0x08, 0x0c, 0x04, 0x04, 0x04, 0x04, 0x04, 0x08, 0x08, 0x18, 0x10, 0x30, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x40, 0x40, 0xc0, 0x80, 0x80, 0x80, 0xc0, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0xc0, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x01, 0x03, 0x02, 0x3c, 0x38, 0x60, 0x40, 0xc0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0x30, 0x10, 0x1f, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x10, 0x19, 0x1f, 0x10, 0x30, 0xe0, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x03, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x04, 0x04, 0x0f, 0xfe, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x06, 0x04, 0x04, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x88, 0xc8, 0x68, 0x38, 0x18, 0x08, 0x08, 0x08, 0x08, 0x48, 0x68, 0x78, 0x58, 0x58, 0xd8, 0xf8, 0x68, 0x48, 0x48, 0x48, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x84, 0x84, 0x86, 0x83, 0x81, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x81, 0x40, 0x40, 0x61, 0x23, 0x3e, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x81, 0xf1, 0xb9, 0xcf, 0x63, 0x30, 0x18, 0x0c, 0x06, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x0c, 0x0e, 0x0b, 0x09, 0x08, 0x08, 0x88, 0xf8, 0x38, 0x8a, 0x82, 0x43, 0x32, 0x32, 0x0a, 0x06, 0x06, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x07, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0x1e, 0x0f, 0x06, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};
const unsigned char sunny[]={
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x80, 0x00, 0x40, 0x40, 0x80, 0x80, 0x80, 0x08, 0x00, 0x10, 0x20, 0x20, 0x40, 0x00, 0x00, 0x80, 0xc0, 0x60, 0x21, 0x34, 0x10, 0x10, 0x10, 0x10, 0x20, 0x20, 0x40, 0x86, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0x08, 0x06, 0x02, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x02, 0x04, 0x18, 0x08, 0x08, 0x0e, 0x09, 0x10, 0x10, 0x10, 0x20, 0x60, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe7, 0x18, 0x00, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x60, 0x18, 0x0c, 0x04, 0x02, 0x02, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x02, 0x02, 0x04, 0x0d, 0x10, 0x62, 0x80, 0x04, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xe0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x60, 0x1f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x03, 0x06, 0x04, 0x04, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x04, 0x04, 0x02, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

//function prototypes
void    lcd_init();
void    lcd_command(char command);
void    lcd_data(char data);
void    lcd_spi(char spi_data);
void    lcd_gotoxy(char x, char y);
void    lcd_contrast (byte contrast);
void    lcd_putc(char cvar);
void    lcd_putcInv(char cvar);
void    lcd_clear();
void    table_to_lcd();
void    table_to_lcd_inverted();
void    lcd_dot (char x, char y);
void    lcd_print_digit(char digit, char x, char y);
void    lcd_date(unsigned char date, char x, char y);

char char_row,charsel,charpos,chardata;
int16 ddram;

void lcd_init() {
   output_high(lcd_dc);          
   output_high(lcd_cs);   
   delay_us(200);

   output_low(lcd_res);
   delay_ms(50);
   output_high(lcd_res);

   lcd_command(0x21); 
   lcd_command(0xc8); 
   lcd_command(0x12); 
   lcd_command(0x20); 
                            
   lcd_command(0x09); 

   delay_ms(50);

   lcd_clear();       

   delay_ms(10);

   lcd_command(0x08); 
   delay_ms(10);

   lcd_command(0x0c); // mod control normal change
}

void lcd_clear() {
   lcd_gotoxy(0,0);         // 84*6=504      clear
   for (ddram=504; ddram>0; ddram--)
      lcd_data(0x00);
}

void lcd_command(char command)
{
   output_low(lcd_dc);   // byte is a command it is read with the eight SCLK pulse
   #ifdef LCD_CS
   output_low(lcd_cs);
   #endif
   spi_xfer(LCD_STREAM, command);
   #ifdef LCD_CS
   output_high(lcd_cs);
   #endif
}

void lcd_data(char data)
{
   output_high(lcd_dc);
   #ifdef LCD_CS
   output_low(lcd_cs);
   #endif
   delay_us(2);
   spi_xfer(LCD_STREAM, data);
   #ifdef LCD_CS
   output_high(lcd_cs);
   #endif
}

//!void lcd_spi(char spi_data) {      // serial write data or command subroutine
//!   char caa;
//!   for (caa=8;caa>0;caa--)
//!   {
//!      output_low(lcd_sclk);
//!      delay_us(2);
//!      output_bit(lcd_sda,(spi_data&0x80));
//!      output_high(lcd_sclk);
//!      delay_us(2);
//!      spi_data = spi_data << 1;
//!   }
//!   spi_write(spi_data);
//!}

void lcd_gotoxy(char x, char y) {   // Nokia LCD 3310 Position cursor
   lcd_command(0x40|(y&0x07));     // Y axe initialisation: 0100 0yyy
   lcd_command(0x80|(x&0x7f));     // X axe initialisation: 1xxx xxxx
}

void lcd_contrast (char contrast) {
    lcd_command(0x21);                  // LCD Extended Commands.
    lcd_command(0x80 | contrast);       // Set LCD Vop (Contrast).
    lcd_command(0x20);                  // LCD Standard Commands, horizontal addressing mode.
}

void lcd_putc(char cvar) {               // Write 1 character to LCD
   charsel=cvar;
   table_to_lcd();
}
void lcd_putcInv(char cvar) {               // Write 1 character to LCD
   charsel=cvar;
   table_to_lcd_inverted();
}
void table_to_lcd() {                      // extract ascii from tables & write to LCD
   if (charsel<0x20) return;
   if (charsel>0x7f) return;

   for (char_row=0;char_row<5;char_row++)
      {
         if (charsel<0x50){charpos=(((charsel&0xff)-0x20)*5);chardata=TABLE1[(charpos+char_row)];}   // use TABLE1
         if (charsel>0x4f){charpos=(((charsel&0xff)-0x50)*5);chardata=TABLE2[(charpos+char_row)];}   // use TABLE2

         lcd_data(chardata);  // send data to nokia
      }
         lcd_data(0x00);      // 1 byte (always blank)
}
void table_to_lcd_inverted() {                      // extract ascii from tables & write to LCD
   if (charsel<0x20) return;
   if (charsel>0x7f) return;

   for (char_row=0;char_row<5;char_row++)
      {
         if (charsel<0x50){charpos=(((charsel&0xff)-0x20)*5);chardata=TABLE1[(charpos+char_row)];}   // use TABLE1
         if (charsel>0x4f){charpos=(((charsel&0xff)-0x50)*5);chardata=TABLE2[(charpos+char_row)];}   // use TABLE2

         lcd_data(~chardata);  // send data to nokia
      }
         lcd_data(0xff);      // 1 byte (always blank)
}
void lcd_dot (char x, char y) {
    char offset;
    byte  data;

    if (x > 84) return;
    if (y > 48) return;

    offset = y % 8;
    data = (0x01<<offset);
        
    lcd_gotoxy(x, (y/8));
    lcd_data(data);
}

void lcd_print_digit(char digit, char x, char y){
   int temp;
   for (char row = 0; row <= 1; row++){
      lcd_gotoxy(x, y+row);
      for(char col = 0; col < 10; col++){
         temp = (digit*20)+(10*row)+col;
         if (digit == 12) {
         lcd_data(0x00);
         continue;}
         lcd_data(digits[temp]);
      }
   }
}
void lcd_date(unsigned char date, char x, char y){
   lcd_gotoxy(x, y);
   if (date > 6) return;
   switch (date) {
      case 0:{
         lcd_putc("CHU NHAT");
         break;
      }
      case 1:{
         lcd_putc("THU HAI");
         break;
      }
      case 2:{
         lcd_putc("THU BA");
         break;
      }
      case 3:{
         lcd_putc("THU TU");
         break;
      }
      case 4:{
         lcd_putc("THU NAM");
         break;
      }
      case 5:{
         lcd_putc("THU SAU");
         break;
      }
      case 6:{
         lcd_putc("THU BAY");
         break;
      }
   }
}

//!void lcd_menu(char index, char x, char y){
//!     lcd_gotoxy(x,y);
//!     switch (index) {
//!      case 0:{
//!            lcd_data(0x60);
//!            lcd_data(0x60);
//!            lcd_data(0x00);
//!            lcd_data(0x80);
//!            lcd_data(0x80);
//!            lcd_data(0x00);
//!            lcd_data(0x80);
//!            lcd_data(0x80);
//!            lcd_data(0x00);
//!            lcd_data(0x80);
//!            lcd_data(0x80);
//!         break;
//!      }
//!      case 1:{
//!            lcd_data(0x80);
//!            lcd_data(0x80);
//!            lcd_data(0x00);
//!            lcd_data(0x60);
//!            lcd_data(0x60);
//!            lcd_data(0x00);
//!            lcd_data(0x80);
//!            lcd_data(0x80);
//!            lcd_data(0x00);
//!            lcd_data(0x80);
//!            lcd_data(0x80);
//!         break;
//!      }
//!      case 2:{
//!            lcd_data(0x80);
//!            lcd_data(0x80);
//!            lcd_data(0x00);
//!            lcd_data(0x80);
//!            lcd_data(0x80);
//!            lcd_data(0x00);
//!            lcd_data(0x60);
//!            lcd_data(0x60);
//!            lcd_data(0x00);
//!            lcd_data(0x80);
//!            lcd_data(0x80);
//!         break;
//!      }
//!      case 3:{
//!            lcd_data(0x80);
//!            lcd_data(0x80);
//!            lcd_data(0x00);
//!            lcd_data(0x80);
//!            lcd_data(0x80);
//!            lcd_data(0x00);
//!            lcd_data(0x80);
//!            lcd_data(0x80);
//!            lcd_data(0x00);
//!            lcd_data(0x60);
//!            lcd_data(0x60);
//!         break;
//!      }
//!    }
//!}
