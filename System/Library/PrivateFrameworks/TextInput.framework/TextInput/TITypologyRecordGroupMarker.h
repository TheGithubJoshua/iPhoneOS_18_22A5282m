@class NSString, TIKeyboardState;

@interface TITypologyRecordGroupMarker : TITypologyRecord

@property (retain, nonatomic) TIKeyboardState *keyboardState;
@property (copy, nonatomic) NSString *textChange;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (id)shortDescription;
- (id)currentKeyboardState;
- (void)removeContextFromKeyboardState;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)replaceDocumentState:(id)a0;

@end
