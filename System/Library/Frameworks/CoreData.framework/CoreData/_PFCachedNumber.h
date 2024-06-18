@interface _PFCachedNumber : NSNumber

+ (id)alloc;
+ (id)new;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)copyWithZone:(struct _NSZone { } *)a0;
+ (id)value:(const void *)a0 withObjCType:(const char *)a1;
+ (id)valueWithBytes:(const void *)a0 objCType:(const char *)a1;

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
- (id)initWithBytes:(const void *)a0 objCType:(const char *)a1;
- (void)getValue:(void *)a0;
- (BOOL)_tryRetain;
- (float)floatValue;
- (id)copy;
- (oneway void)release;
- (BOOL)boolValue;
- (id)descriptionWithLocale:(id)a0;
- (long long)integerValue;
- (id)autorelease;
- (id)stringValue;
- (id)description;
- (unsigned long long)retainCount;
- (id)retain;
- (void)dealloc;
- (BOOL)_isDeallocating;

@end
