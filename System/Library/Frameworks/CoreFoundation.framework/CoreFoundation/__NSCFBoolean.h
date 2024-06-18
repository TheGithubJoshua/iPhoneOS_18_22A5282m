@interface __NSCFBoolean : NSNumber

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

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
- (void)getValue:(void *)a0;
- (BOOL)_tryRetain;
- (float)floatValue;
- (unsigned long long)_cfTypeID;
- (oneway void)release;
- (long long)compare:(id)a0;
- (BOOL)boolValue;
- (id)descriptionWithLocale:(id)a0;
- (unsigned long long)hash;
- (long long)integerValue;
- (id)stringValue;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (unsigned long long)retainCount;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)retain;
- (BOOL)_isDeallocating;
- (BOOL)isEqualToNumber:(id)a0;
- (long long)_cfNumberType;
- (unsigned char)_getValue:(void *)a0 forType:(long long)a1;
- (long long)_reverseCompare:(id)a0;

@end
