@interface CMTimeAsValue : NSValue {
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _time;
}

+ (BOOL)supportsSecureCoding;
+ (id)valueWithCMTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;

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
- (id)initWithCoder:(id)a0;
- (BOOL)isEqualToValue:(id)a0;
- (const char *)objCType;
- (void)getValue:(void *)a0;
- (float)floatValue;
- (BOOL)boolValue;
- (Class)classForCoder;
- (unsigned long long)hash;
- (long long)integerValue;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })CMTimeValue;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
