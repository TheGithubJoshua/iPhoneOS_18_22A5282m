@interface TSCEStringCellValue : TSCECellValue {
    struct TSCEStringValue { void /* function */ **x0; id x1; struct TSCEFormat { id x0; unsigned int x1; unsigned char x2; struct TSCEDurationFormat { unsigned char x0 : 1; unsigned char x1 : 6; unsigned char x2 : 6; unsigned char x3 : 3; } x3; struct TSCEBaseFormat { unsigned char x0; unsigned char x1; BOOL x2; } x4; struct TSCEFractionFormat { char x0; } x5; struct TSCENumberFormat { unsigned char x0; unsigned char x1 : 3; unsigned char x2 : 1; unsigned char x3 : 1; unsigned short x4; } x6; } x2; unsigned char x3 : 1; unsigned char x4 : 1; unsigned char x5 : 1; } *_stringValue;
}

- (id)displayString;
- (id)format;
- (unsigned long long)hash;
- (id)initWithString:(id)a0 locale:(id)a1;
- (struct TSCEStringValue { void /* function */ **x0; id x1; struct TSCEFormat { id x0; unsigned int x1; unsigned char x2; struct TSCEDurationFormat { unsigned char x0 : 1; unsigned char x1 : 6; unsigned char x2 : 6; unsigned char x3 : 3; } x3; struct TSCEBaseFormat { unsigned char x0; unsigned char x1; BOOL x2; } x4; struct TSCEFractionFormat { char x0; } x5; struct TSCENumberFormat { unsigned char x0; unsigned char x1 : 3; unsigned char x2 : 1; unsigned char x3 : 1; unsigned short x4; } x6; } x2; unsigned char x3 : 1; unsigned char x4 : 1; unsigned char x5 : 1; } *)stringValue;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (void)encodeToArchive:(void *)a0;
- (id)canonicalKeyString;
- (long long)compareToCellValue:(id)a0;
- (id)initWithArchive:(const void *)a0 locale:(id)a1;
- (id)initWithStringValue:(const struct TSCEStringValue { void /* function */ **x0; id x1; struct TSCEFormat { id x0; unsigned int x1; unsigned char x2; struct TSCEDurationFormat { unsigned char x0 : 1; unsigned char x1 : 6; unsigned char x2 : 6; unsigned char x3 : 3; } x3; struct TSCEBaseFormat { unsigned char x0; unsigned char x1; BOOL x2; } x4; struct TSCEFractionFormat { char x0; } x5; struct TSCENumberFormat { unsigned char x0; unsigned char x1 : 3; unsigned char x2 : 1; unsigned char x3 : 1; unsigned short x4; } x6; } x2; unsigned char x3 : 1; unsigned char x4 : 1; unsigned char x5 : 1; } *)a0 locale:(id)a1;
- (BOOL)isEqualToCellValue:(id)a0;
- (void)setPopulatedCustomFormat:(id)a0;
- (struct TSCEValue { union { struct { struct { unsigned long long x0[2]; } x0; unsigned char x1[24]; unsigned short x2; BOOL x3; } x0; unsigned long long x1[9]; } x0; unsigned char x1; })tsceValue;

@end