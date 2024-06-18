@interface NSConstantFloatNumber : NSNumber {
    float _value;
}

+ (id)new;
+ (id)allocWithZone:(struct _NSZone { } *)a0;

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
- (unsigned long long)unsignedIntegerValue;
- (double)doubleValue;
- (const char *)objCType;
- (id)init;
- (void)getValue:(void *)a0;
- (void)getValue:(void *)a0 size:(unsigned long long)a1;
- (BOOL)_tryRetain;
- (float)floatValue;
- (id)copy;
- (oneway void)release;
- (BOOL)boolValue;
- (long long)integerValue;
- (id)autorelease;
- (struct { unsigned char x0 : 8; unsigned char x1 : 4; unsigned char x2 : 1; unsigned char x3 : 1; unsigned int x4 : 18; unsigned short x5[8]; })decimalValue;
- (unsigned long long)retainCount;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)retain;
- (void)dealloc;
- (BOOL)_isDeallocating;

@end
