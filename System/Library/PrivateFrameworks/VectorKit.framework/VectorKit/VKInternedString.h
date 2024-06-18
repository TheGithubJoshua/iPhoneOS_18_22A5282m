@class NSString;

@interface VKInternedString : NSString {
    NSString *original;
}

+ (id)stringWithString:(id)a0;
+ (void)initialize;

- (BOOL)isEqualToString:(id)a0;
- (id)initWithString:(id)a0;
- (void)getCharacters:(unsigned short *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (unsigned long long)hash;
- (id)substringToIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)compare:(id)a0 options:(unsigned long long)a1 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 locale:(id)a3;
- (id)substringFromIndex:(unsigned long long)a0;
- (void)dealloc;
- (unsigned short)characterAtIndex:(unsigned long long)a0;
- (unsigned long long)length;
- (id)substringWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;

@end
