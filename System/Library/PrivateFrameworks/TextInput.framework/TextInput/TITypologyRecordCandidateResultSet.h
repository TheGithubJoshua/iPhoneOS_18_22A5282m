@class TIKeyboardCandidateResultSet, TIKeyboardState;

@interface TITypologyRecordCandidateResultSet : TITypologyRecord

@property (retain, nonatomic) TIKeyboardState *keyboardState;
@property (retain, nonatomic) TIKeyboardCandidateResultSet *resultSet;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (id)shortDescription;
- (void)applyToStatistic:(id)a0;
- (id)currentKeyboardState;
- (void)removeContextFromKeyboardState;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)replaceDocumentState:(id)a0;

@end
