@class NSString, NSMutableString;

@interface TIKeyboardInputManagerShapeBased : TIKeyboardInputManagerChinese <TIKeyboardInputManagerChineseCompletion> {
    BOOL _keepRemainingInput;
}

@property (readonly, nonatomic) NSMutableString *searchString;
@property (retain, nonatomic) NSString *remainingInput;
@property (nonatomic) BOOL previousActionWasAutoConfirmation;

- (void)clearInput;
- (BOOL)suppliesCompletions;
- (BOOL)usesAutoDeleteWord;
- (BOOL)usesCandidateSelection;
- (unsigned int)inputIndex;
- (BOOL)acceptInputString:(id)a0;
- (void)loadDictionaries;
- (BOOL)hasCandidates;
- (id)searchStringForMarkedText;
- (id)candidateResultSet;
- (void)acceptInput;
- (id)keyboardBehaviors;
- (void)setInputIndex:(unsigned int)a0;
- (id)deleteFromInput:(unsigned long long *)a0;
- (void).cxx_destruct;
- (unsigned int)inputCount;
- (BOOL)shouldExtendPriorWord;
- (unsigned long long)initialSelectedIndex;
- (id)didAcceptCandidate:(id)a0;
- (void)inputLocationChanged;
- (BOOL)isHardwareKeyboardAutocorrectionEnabled;
- (id)keyboardConfigurationLayoutTag;
- (id)rawInputString;
- (id)sortingMethods;
- (BOOL)supportsLearning;
- (void)cancelCandidatesThread;
- (id)formattedSearchString;
- (id)markedTextWithAutoconvertedCandidates;
- (void)notifyUpdateCandidates:(id)a0 forOperation:(id)a1;
- (BOOL)shouldLookForCompletionCandidates;
- (BOOL)updateCandidatesWithTIWordSearch:(id)a0 predictionEnabled:(BOOL)a1;

@end
