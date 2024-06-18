@class NSArray;

@interface NEHasher : NSCoder {
    struct CC_SHA1state_st { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7[16]; int x8; } *_sha1Context;
    NSArray *_classPrefixWhitelist;
}

+ (id)hashObject:(id)a0 withClassPrefixWhitelist:(id)a1;
+ (id)hashObject:(id)a0;

- (BOOL)decodeBoolForKey:(id)a0;
- (void)encodeInt:(int)a0 forKey:(id)a1;
- (int)decodeIntForKey:(id)a0;
- (int)decodeInt32ForKey:(id)a0;
- (id)decodeObjectForKey:(id)a0;
- (BOOL)containsValueForKey:(id)a0;
- (BOOL)allowsKeyedCoding;
- (double)decodeDoubleForKey:(id)a0;
- (long long)decodeInt64ForKey:(id)a0;
- (void)encodeDouble:(double)a0 forKey:(id)a1;
- (void)encodeInteger:(long long)a0 forKey:(id)a1;
- (float)decodeFloatForKey:(id)a0;
- (long long)decodeIntegerForKey:(id)a0;
- (void)encodeFloat:(float)a0 forKey:(id)a1;
- (void)encodeBytes:(const char *)a0 length:(unsigned long long)a1 forKey:(id)a2;
- (void)encodeValueOfObjCType:(const char *)a0 at:(const void *)a1;
- (void)encodeInt32:(int)a0 forKey:(id)a1;
- (void)encodeInt64:(long long)a0 forKey:(id)a1;
- (void)encodeObject:(id)a0 forKey:(id)a1;
- (void)encodeBool:(BOOL)a0 forKey:(id)a1;
- (id)init;
- (void)encodeBytes:(const void *)a0 length:(unsigned long long)a1;
- (void)encodeDataObject:(id)a0;
- (long long)versionForClassName:(id)a0;
- (void).cxx_destruct;
- (id)decodePropertyListForKey:(id)a0;
- (void)encodeConditionalObject:(id)a0 forKey:(id)a1;
- (id)decodeObjectOfClass:(Class)a0 forKey:(id)a1;
- (void)decodeValueOfObjCType:(const char *)a0 at:(void *)a1;
- (id)decodeDataObject;
- (void)dealloc;
- (id)decodeObjectOfClasses:(id)a0 forKey:(id)a1;
- (const char *)decodeBytesForKey:(id)a0 returnedLength:(unsigned long long *)a1;

@end
