@interface __NSCFString : NSMutableString

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (BOOL)isEqualToString:(id)a0;
- (void)replaceCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 withString:(id)a1;
- (void)insertString:(id)a0 atIndex:(unsigned long long)a1;
- (BOOL)_tryRetain;
- (void)appendCharacters:(const unsigned short *)a0 length:(unsigned long long)a1;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (const unsigned short *)_fastCharacterContents;
- (id)copy;
- (void)getCharacters:(unsigned short *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (oneway void)release;
- (Class)classForCoder;
- (unsigned long long)hash;
- (void)appendFormat:(id)a0;
- (unsigned long long)cStringLength;
- (unsigned long long)replaceOccurrencesOfString:(id)a0 withString:(id)a1 options:(unsigned long long)a2 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3;
- (const char *)cString;
- (id)_newSubstringWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 zone:(struct _NSZone { } *)a1;
- (BOOL)isEqual:(id)a0;
- (void)setString:(id)a0;
- (unsigned long long)retainCount;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)hasSuffix:(id)a0;
- (void)deleteCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (BOOL)isNSString__;
- (unsigned long long)smallestEncoding;
- (id)retain;
- (const char *)_fastCStringContents:(BOOL)a0;
- (void)appendString:(id)a0;
- (BOOL)_isCString;
- (unsigned short)characterAtIndex:(unsigned long long)a0;
- (const char *)UTF8String;
- (BOOL)_isDeallocating;
- (unsigned long long)fastestEncoding;
- (unsigned long long)length;
- (id)substringWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (const char *)cStringUsingEncoding:(unsigned long long)a0;
- (BOOL)getCString:(char *)a0 maxLength:(unsigned long long)a1 encoding:(unsigned long long)a2;
- (void)getLineStart:(unsigned long long *)a0 end:(unsigned long long *)a1 contentsEnd:(unsigned long long *)a2 forRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3;
- (BOOL)hasPrefix:(id)a0;

@end
