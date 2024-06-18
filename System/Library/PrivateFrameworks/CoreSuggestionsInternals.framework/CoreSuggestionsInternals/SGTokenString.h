@interface SGTokenString : NSString {
    unsigned char _isASCII : 1;
    unsigned int _length : 31;
    union { char ascii[0]; unsigned short utf16[0]; } _contents;
}

@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } range;
@property (nonatomic) int confidence;

+ (id)stringWithString:(id)a0;
+ (id)stringWithString:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
+ (id)stringWithString:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 confidence:(int)a2;

- (const unsigned short *)_fastCharacterContents;
- (void)getCharacters:(unsigned short *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (const char *)_fastCStringContents:(BOOL)a0;
- (unsigned short)characterAtIndex:(unsigned long long)a0;
- (const char *)UTF8String;
- (unsigned long long)fastestEncoding;
- (unsigned long long)length;
- (id)stringWithNewContents:(id)a0;

@end
