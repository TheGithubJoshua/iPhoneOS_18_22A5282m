@class NSDictionary;

@interface TypistKeyboardSinhala : TypistKeyboard

@property (retain, nonatomic) NSDictionary *joinedVowelForms;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init:(id)a0 options:(id)a1;
- (id)setupKeyboardInfo:(id)a0 options:(id)a1;
- (id)tryAlternateVariationsOfKey:(id)a0;

@end
