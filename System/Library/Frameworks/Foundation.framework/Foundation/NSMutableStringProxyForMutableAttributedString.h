@class NSMutableAttributedString;

@interface NSMutableStringProxyForMutableAttributedString : NSMutableString {
    NSMutableAttributedString *mutableAttributedString;
}

- (void)replaceCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 withString:(id)a1;
- (void)getCharacters:(unsigned short *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)initWithMutableAttributedString:(id)a0;
- (void)dealloc;
- (unsigned short)characterAtIndex:(unsigned long long)a0;
- (unsigned long long)length;

@end
