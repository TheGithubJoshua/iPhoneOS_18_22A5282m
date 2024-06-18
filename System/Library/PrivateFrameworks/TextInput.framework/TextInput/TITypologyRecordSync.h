@class TIKeyboardConfiguration, TIKeyboardState;

@interface TITypologyRecordSync : TITypologyRecord

@property (retain, nonatomic) TIKeyboardState *keyboardState;
@property (retain, nonatomic) TIKeyboardConfiguration *keyboardConfig;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (id)shortDescription;
- (void)applyToStatistic:(id)a0;
- (id)currentKeyboardState;
- (void)removeContextFromKeyboardState;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)replaceDocumentState:(id)a0;
- (id)textSummary;

@end
