@interface NSConstantString : NSSimpleCString

- (BOOL)isEqualToString:(id)a0;
- (BOOL)_tryRetain;
- (id)copy;
- (void)getCharacters:(unsigned short *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (oneway void)release;
- (unsigned long long)hash;
- (const char *)lossyCString;
- (unsigned long long)cStringLength;
- (id)autorelease;
- (const char *)cString;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)retainCount;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)smallestEncoding;
- (id)retain;
- (const char *)_fastCStringContents:(BOOL)a0;
- (void)dealloc;
- (unsigned short)characterAtIndex:(unsigned long long)a0;
- (BOOL)_isDeallocating;
- (unsigned long long)fastestEncoding;
- (unsigned long long)length;
- (BOOL)canBeConvertedToEncoding:(unsigned long long)a0;
- (long long)compare:(id)a0 options:(unsigned long long)a1 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (id)initWithCharactersNoCopy:(unsigned short *)a0 length:(unsigned long long)a1;

@end
