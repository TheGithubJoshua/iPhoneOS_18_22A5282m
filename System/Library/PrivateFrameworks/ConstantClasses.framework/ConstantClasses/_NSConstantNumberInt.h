@interface _NSConstantNumberInt : _NSConstantNumber

- (unsigned short)unsignedShortValue;
- (int)intValue;
- (long long)longLongValue;
- (unsigned int)unsignedIntValue;
- (char)charValue;
- (long long)longValue;
- (short)shortValue;
- (unsigned long long)unsignedLongValue;
- (unsigned char)unsignedCharValue;
- (unsigned long long)unsignedLongLongValue;
- (double)doubleValue;
- (const char *)objCType;
- (void)getValue:(void *)a0;
- (float)floatValue;
- (BOOL)boolValue;
- (long long)integerValue;
- (struct { unsigned char x0 : 8; unsigned char x1 : 4; unsigned char x2 : 1; unsigned char x3 : 1; unsigned int x4 : 18; unsigned short x5[8]; })decimalValue;

@end
