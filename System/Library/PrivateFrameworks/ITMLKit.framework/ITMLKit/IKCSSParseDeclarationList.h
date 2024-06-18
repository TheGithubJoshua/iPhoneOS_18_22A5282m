@interface IKCSSParseDeclarationList : IKCSSParseBlock {
    struct _NSRange { unsigned long long location; unsigned long long length; } __range;
}

- (id)init;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
- (void)setRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)description;

@end
