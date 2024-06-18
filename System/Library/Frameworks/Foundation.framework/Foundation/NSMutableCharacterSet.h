@interface NSMutableCharacterSet : NSCharacterSet <NSCopying, NSMutableCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)lowercaseLetterCharacterSet;
+ (id)uppercaseLetterCharacterSet;
+ (id)capitalizedLetterCharacterSet;
+ (id)alphanumericCharacterSet;
+ (id)punctuationCharacterSet;
+ (id)symbolCharacterSet;
+ (id)decomposableCharacterSet;
+ (id)characterSetWithBitmapRepresentation:(id)a0;
+ (id)controlCharacterSet;
+ (id)nonBaseCharacterSet;
+ (id)newlineCharacterSet;
+ (id)letterCharacterSet;
+ (id)whitespaceCharacterSet;
+ (id)characterSetWithCharactersInString:(id)a0;
+ (id)decimalDigitCharacterSet;
+ (id)characterSetWithContentsOfFile:(id)a0;
+ (id)characterSetWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
+ (id)illegalCharacterSet;
+ (id)whitespaceAndNewlineCharacterSet;

- (id)initWithCoder:(id)a0;
- (id)init;
- (void)invert;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)removeCharactersInString:(id)a0;
- (void)addCharactersInString:(id)a0;
- (void)formIntersectionWithCharacterSet:(id)a0;
- (void)addCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)formUnionWithCharacterSet:(id)a0;
- (BOOL)isMutable;
- (void)removeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
