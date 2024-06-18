@class NSString;

@interface VSCasePreservingString : NSString {
    NSString *_underlyingString;
}

- (id)initWithString:(id)a0;
- (void)getCharacters:(unsigned short *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)lowercaseString;
- (void).cxx_destruct;
- (id)uppercaseString;
- (unsigned short)characterAtIndex:(unsigned long long)a0;
- (unsigned long long)length;
- (id)capitalizedString;
- (id)capitalizedStringWithLocale:(id)a0;
- (id)localizedCapitalizedString;
- (id)localizedLowercaseString;
- (id)localizedUppercaseString;
- (id)lowercaseStringWithLocale:(id)a0;
- (id)uppercaseStringWithLocale:(id)a0;

@end
