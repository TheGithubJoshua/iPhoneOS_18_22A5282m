@class NSString;

@interface TIMathSymbolPunctuationController : NSObject {
    unsigned long long _state;
    long long _location;
    unsigned short _replacementCharacter;
}

@property (copy, nonatomic) NSString *decimalSeparator;
@property (nonatomic) BOOL replaceAfterNumerals;
@property (nonatomic) BOOL enabled;
@property (readonly, nonatomic) BOOL converted;

- (void)setInputString:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (id)mathSymbolPunctuationedStringForInputString:(id)a0;
- (BOOL)updateInputString:(id)a0;

@end
