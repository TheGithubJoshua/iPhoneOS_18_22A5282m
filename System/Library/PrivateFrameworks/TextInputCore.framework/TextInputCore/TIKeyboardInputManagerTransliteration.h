@class NSArray, NSMapTable, NSMutableArray, TLTransliterator;

@interface TIKeyboardInputManagerTransliteration : TIKeyboardInputManagerTransliterationBase

@property (retain, nonatomic) TLTransliterator *transliterator;
@property (nonatomic) BOOL prioritizeLatinCandidates;
@property (nonatomic) BOOL hasCandidates;
@property (retain, nonatomic) NSArray *currentCandidates;
@property (retain, nonatomic) NSMapTable *transliteratorCandidateByMecabraCandidatePointerValue;
@property (retain, nonatomic) NSMutableArray *committedCandidates;

- (BOOL)supportsNumberKeySelection;
- (BOOL)usesCandidateSelection;
- (id)keyboardConfiguration;
- (id)candidates;
- (void)suspend;
- (id)keyboardBehaviors;
- (void).cxx_destruct;
- (id)wordCharacters;
- (id)keyEventMap;
- (void *)initImplementation;
- (id)initWithConfig:(id)a0 keyboardState:(id)a1;
- (id)defaultCandidate;
- (id)autocorrectionCandidates;
- (id)candidateContextByVerifyingAgainstDocumentState;
- (id)candidatesForInputString:(id)a0;
- (id)candidatesWithTypedString:(id)a0 autocorrectedString:(id)a1;
- (void)deleteFromInputWithContext:(id)a0;
- (id)dictionaryInputMode;
- (id)groupedCandidatesFromCandidates:(id)a0 usingSortingMethod:(id)a1;
- (id)handleAcceptedCandidate:(id)a0 keyboardState:(id)a1;
- (Class)keyEventMapClass;
- (void)loadFavoniusTypingModel;
- (id)mecabraCandidatePointerValueWithCandidate:(id)a0;
- (id)sortingMethods;
- (void)syncToKeyboardState:(id)a0 from:(id)a1 afterContextChange:(BOOL)a2;
- (id)titleForSortingMethod:(id)a0;

@end
