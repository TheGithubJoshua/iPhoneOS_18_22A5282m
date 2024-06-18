@class NSDictionary;

@interface TypistKeyboardGreek : TypistKeyboard

@property (retain, nonatomic) NSDictionary *acuteKeys;
@property (retain, nonatomic) NSDictionary *acuteDiacriticKey;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)addAccentKeyAction:(id)a0;
- (id)getPostfixKey:(id)a0;
- (id)init:(id)a0 options:(id)a1;
- (void)preprocessing;
- (id)setupKeyboardInfo:(id)a0 options:(id)a1;
- (void)setupSentenceBoundryStrings;

@end
