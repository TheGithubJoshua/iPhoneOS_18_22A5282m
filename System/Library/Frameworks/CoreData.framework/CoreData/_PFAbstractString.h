@interface _PFAbstractString : NSString

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (BOOL)accessInstanceVariablesDirectly;
+ (Class)classForKeyedUnarchiver;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (const unsigned short *)_fastCharacterContents;
- (Class)classForCoder;
- (const char *)cString;
- (id)description;
- (unsigned long long)smallestEncoding;
- (const char *)_fastCStringContents:(BOOL)a0;
- (void)dealloc;
- (unsigned long long)fastestEncoding;
- (const char *)cStringUsingEncoding:(unsigned long long)a0;

@end
