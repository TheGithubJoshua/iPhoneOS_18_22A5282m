@class NSMutableDictionary;

@interface UIKBAutoFillTestExpectedResult : NSObject <NSCoding> {
    NSMutableDictionary *_textFieldTagToTextFieldType;
}

@property (nonatomic) long long formType;

- (id)initWithCoder:(id)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)setType:(long long)a0 forTextFieldWithTag:(long long)a1;
- (long long)typeForTextFieldWithTag:(long long)a0;

@end
