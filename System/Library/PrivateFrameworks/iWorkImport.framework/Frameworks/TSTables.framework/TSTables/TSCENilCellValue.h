@interface TSCENilCellValue : TSCECellValue

- (id)initWithLocale:(id)a0;
- (id)init;
- (id)displayString;
- (id)format;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)canonicalKeyString;
- (long long)compareToCellValue:(id)a0;
- (BOOL)isEqualToCellValue:(id)a0;
- (struct TSCEValue { union { struct { struct { unsigned long long x0[2]; } x0; unsigned char x1[24]; unsigned short x2; BOOL x3; } x0; unsigned long long x1[9]; } x0; unsigned char x1; })tsceValue;

@end
