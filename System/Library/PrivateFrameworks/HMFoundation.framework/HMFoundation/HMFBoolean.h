@interface HMFBoolean : NSNumber

+ (BOOL)supportsSecureCoding;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)numberWithBool:(BOOL)a0;
+ (id)numberWithLong:(long long)a0;
+ (id)numberWithFloat:(float)a0;
+ (id)numberWithInt:(int)a0;
+ (id)numberWithInteger:(long long)a0;
+ (id)numberWithLongLong:(long long)a0;
+ (id)numberWithShort:(short)a0;
+ (id)numberWithUnsignedInt:(unsigned int)a0;
+ (id)numberWithUnsignedInteger:(unsigned long long)a0;
+ (id)numberWithUnsignedLong:(unsigned long long)a0;
+ (id)numberWithUnsignedLongLong:(unsigned long long)a0;
+ (id)numberWithChar:(char)a0;
+ (id)numberWithDouble:(double)a0;
+ (id)numberWithUnsignedChar:(unsigned char)a0;
+ (id)numberWithUnsignedShort:(unsigned short)a0;
+ (id)booleanWithBool:(BOOL)a0;

- (char)charValue;
- (const char *)objCType;
- (void)getValue:(void *)a0;
- (void)getValue:(void *)a0 size:(unsigned long long)a1;
- (long long)compare:(id)a0;
- (BOOL)boolValue;
- (Class)classForCoder;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithBool:(BOOL)a0;

@end
