@interface NSTaggedPointerString : NSString

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;
+ (void)_setAsTaggedStringClass;

- (BOOL)isEqualToString:(id)a0;
- (const unsigned short *)_fastCharacterContents;
- (void)getCharacters:(unsigned short *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (oneway void)release;
- (unsigned long long)hash;
- (id)autorelease;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)retainCount;
- (BOOL)getBytes:(void *)a0 maxLength:(unsigned long long)a1 usedLength:(unsigned long long *)a2 encoding:(unsigned long long)a3 options:(unsigned long long)a4 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a5 remainingRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a6;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)compare:(id)a0 options:(unsigned long long)a1 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 locale:(id)a3;
- (BOOL)isNSString__;
- (unsigned long long)smallestEncoding;
- (id)retain;
- (const char *)_fastCStringContents:(BOOL)a0;
- (BOOL)_isCString;
- (unsigned short)characterAtIndex:(unsigned long long)a0;
- (const char *)UTF8String;
- (unsigned long long)fastestEncoding;
- (unsigned long long)length;
- (id)substringWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (const char *)cStringUsingEncoding:(unsigned long long)a0;
- (BOOL)_getCString:(char *)a0 maxLength:(unsigned long long)a1 encoding:(unsigned int)a2;
- (id)lowercaseStringWithLocale:(id)a0;
- (id)uppercaseStringWithLocale:(id)a0;

@end
