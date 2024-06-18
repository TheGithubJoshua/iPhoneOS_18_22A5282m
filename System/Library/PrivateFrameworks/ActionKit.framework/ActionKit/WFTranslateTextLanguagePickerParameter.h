@class NSArray;

@interface WFTranslateTextLanguagePickerParameter : WFEnumerationParameter

@property (readonly, nonatomic) NSArray *possibleStates;
@property (readonly, nonatomic) BOOL supportsLanguageDetection;

- (void).cxx_destruct;
- (id)initWithDefinition:(id)a0;
- (id)defaultSerializedRepresentation;
- (id)localizedLabelForPossibleState:(id)a0;
- (void)possibleStatesDidChange;
- (Class)singleStateClass;
- (void)wasAddedToWorkflow;
- (void)getAvailableLanguagesWithCompletionHandler:(id /* block */)a0;

@end
