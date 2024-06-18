@class NSDictionary, NSMutableString;

@interface __NSLocalizedString : NSMutableString <NSSecureCoding> {
    NSMutableString *original;
    NSDictionary *config;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (BOOL)isEqualToString:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)replaceCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 withString:(id)a1;
- (id)formatConfiguration;
- (void)insertString:(id)a0 atIndex:(unsigned long long)a1;
- (BOOL)_allowsDirectEncoding;
- (void)appendCharacters:(const unsigned short *)a0 length:(unsigned long long)a1;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (const unsigned short *)_fastCharacterContents;
- (void)getCharacters:(unsigned short *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (Class)classForCoder;
- (id)substringToIndex:(unsigned long long)a0;
- (void)appendFormat:(id)a0;
- (unsigned long long)replaceOccurrencesOfString:(id)a0 withString:(id)a1 options:(unsigned long long)a2 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3;
- (void)encodeWithCoder:(id)a0;
- (void)setString:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)compare:(id)a0 options:(unsigned long long)a1 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 locale:(id)a3;
- (void)deleteCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)substringFromIndex:(unsigned long long)a0;
- (const char *)_fastCStringContents:(BOOL)a0;
- (void)dealloc;
- (void)appendString:(id)a0;
- (id)initWithString:(id)a0 withFormatConfiguration:(id)a1;
- (unsigned short)characterAtIndex:(unsigned long long)a0;
- (unsigned long long)fastestEncoding;
- (unsigned long long)length;
- (id)baseString;
- (id)substringWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;

@end
