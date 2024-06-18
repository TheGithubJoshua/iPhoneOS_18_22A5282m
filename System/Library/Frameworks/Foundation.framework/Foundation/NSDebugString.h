@class NSString;

@interface NSDebugString : NSString {
    NSString *string;
}

- (id)initWithString:(id)a0;
- (void)getCharacters:(unsigned short *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (unsigned short)characterAtIndex:(unsigned long long)a0;
- (unsigned long long)length;

@end
