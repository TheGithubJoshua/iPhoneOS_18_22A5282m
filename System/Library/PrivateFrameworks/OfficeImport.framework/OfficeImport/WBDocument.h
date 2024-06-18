@interface WBDocument : NSObject

+ (id)readFrom:(id)a0;
+ (void)setTimeStamp:(struct WrdDocumentProperties { void /* function */ **x0; unsigned short x1; struct WrdDOPTypography *x2; struct WrdDrawingObjectGrid *x3; struct WrdAutoSummaryInfo *x4; struct WrdDateTime *x5; struct WrdDateTime *x6; struct WrdDateTime *x7; int x8; int x9; int x10; int x11; int x12; int x13; int x14; int x15; int x16; int x17; int x18; int x19; int x20; int x21; int x22; int x23; short x24; short x25; short x26; unsigned short x27; unsigned short x28; unsigned short x29; unsigned short x30; unsigned short x31; unsigned short x32; unsigned short x33; unsigned char x34 : 1; unsigned char x35 : 1; unsigned char x36 : 1; unsigned char x37 : 1; unsigned char x38 : 1; unsigned char x39 : 1; unsigned char x40 : 1; unsigned char x41 : 1; unsigned char x42 : 1; unsigned char x43 : 1; unsigned char x44 : 1; unsigned char x45 : 1; unsigned char x46 : 1; unsigned char x47 : 1; unsigned char x48 : 1; unsigned char x49 : 1; unsigned char x50 : 1; unsigned char x51 : 1; unsigned char x52 : 1; unsigned char x53 : 1; unsigned char x54 : 1; unsigned char x55 : 1; unsigned char x56 : 1; unsigned char x57 : 1; unsigned char x58 : 1; unsigned char x59 : 1; unsigned char x60 : 1; unsigned char x61 : 1; unsigned char x62 : 1; unsigned char x63 : 1; unsigned char x64 : 1; unsigned char x65 : 1; unsigned char x66 : 1; unsigned char x67 : 1; unsigned char x68 : 1; unsigned char x69 : 1; unsigned char x70 : 1; unsigned char x71 : 1; unsigned char x72 : 1; unsigned char x73 : 1; unsigned char x74 : 1; unsigned char x75 : 1; unsigned char x76 : 1; unsigned char x77 : 1; unsigned char x78 : 1; unsigned char x79 : 1; unsigned char x80 : 1; unsigned char x81 : 1; unsigned char x82 : 1; unsigned char x83 : 1; unsigned char x84 : 1; unsigned char x85 : 1; unsigned char x86 : 1; unsigned char x87 : 1; unsigned char x88 : 1; unsigned char x89 : 1; unsigned char x90 : 1; unsigned char x91 : 1; unsigned char x92 : 1; unsigned char x93 : 1; unsigned char x94 : 1; unsigned char x95 : 1; unsigned char x96 : 1; unsigned char x97 : 1; unsigned char x98 : 1; unsigned char x99 : 1; unsigned char x100 : 1; unsigned char x101 : 1; unsigned char x102 : 1; unsigned char x103 : 1; unsigned char x104 : 1; unsigned char x105 : 1; unsigned char x106 : 1; unsigned char x107 : 1; unsigned char x108 : 1; unsigned char x109 : 1; unsigned char x110 : 1; unsigned char x111 : 1; unsigned char x112 : 1; unsigned char x113 : 1; unsigned char x114 : 1; unsigned char x115 : 1; unsigned char x116 : 1; unsigned char x117 : 1; unsigned char x118 : 1; unsigned char x119 : 1; unsigned char x120 : 1; unsigned char x121 : 1; unsigned char x122 : 1; unsigned char x123 : 1; unsigned char x124 : 1; unsigned char x125 : 1; unsigned char x126 : 1; unsigned char x127 : 1; unsigned char x128 : 1; unsigned char x129 : 1; unsigned char x130 : 1; unsigned char x131 : 1; unsigned char x132 : 1; unsigned char x133 : 1; unsigned char x134 : 1; unsigned char x135 : 1; unsigned char x136 : 1; unsigned char x137 : 1; unsigned char x138 : 1; unsigned char x139 : 1; unsigned char x140 : 1; unsigned char x141 : 1; unsigned char x142 : 1; unsigned char x143 : 1; unsigned char x144 : 1; unsigned char x145 : 1; unsigned char x146 : 1; unsigned char x147 : 1; unsigned char x148 : 1; unsigned char x149 : 1; unsigned char x150 : 1; unsigned char x151 : 1; unsigned char x152 : 1; unsigned char x153 : 1; unsigned char x154 : 1; unsigned char x155 : 1; int x156; int x157; int x158; int x159; int x160; int x161; int x162; int x163; int x164; int x165; int x166; int x167; int x168; short x169; short x170; short x171; unsigned char x172; unsigned char x173; unsigned char x174; char *x175; unsigned int x176; char *x177; unsigned int x178; } *)a0;
+ (void)readNoteSeparatorFrom:(id)a0 type:(int)a1 separator:(id)a2;
+ (void)readProperties:(id)a0 document:(id)a1;
+ (void)readSectionsFrom:(id)a0 document:(id)a1;
+ (void)readTextBoxesFrom:(id)a0;
+ (void)setupZIndices:(id)a0 document:(id)a1 escherType:(int)a2;

- (id)applicationName;
- (id)init;

@end