@class NSString, NSCharacterSet;

@interface NSConcreteScanner : NSScanner {
    NSString *scanString;
    NSCharacterSet *skipSet;
    NSCharacterSet *invertedSkipSet;
    id locale;
    unsigned long long scanLocation;
    struct { unsigned char caseSensitive : 1; unsigned int  : 31; } flags;
}

- (id)locale;
- (void)setLocale:(id)a0;
- (BOOL)scanLongLong:(long long *)a0;
- (id)initWithString:(id)a0;
- (void)setCharactersToBeSkipped:(id)a0;
- (BOOL)scanInt:(int *)a0;
- (id)_invertedSkipSet;
- (BOOL)caseSensitive;
- (id)string;
- (unsigned long long)scanLocation;
- (id)charactersToBeSkipped;
- (void)dealloc;
- (void)setScanLocation:(unsigned long long)a0;
- (void)setCaseSensitive:(BOOL)a0;

@end
