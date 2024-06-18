@class CHRecognizer, NSArray, TIHandwritingStrokes;

@interface TIKeyboardInputManager_intl_HWR : TIKeyboardInputManager

@property (readonly, nonatomic) CHRecognizer *recognizer;
@property (retain, nonatomic) TIHandwritingStrokes *userDrawing;
@property (retain, nonatomic) NSArray *candidates;

- (void)clearInput;
- (BOOL)suppliesCompletions;
- (BOOL)usesAutoDeleteWord;
- (BOOL)usesCandidateSelection;
- (BOOL)canHandleKeyHitTest;
- (void)loadDictionaries;
- (id)candidateResultSet;
- (id)keyboardBehaviors;
- (void).cxx_destruct;
- (unsigned int)inputCount;
- (id)handleKeyboardInput:(id)a0;
- (BOOL)shouldExtendPriorWord;
- (id)defaultCandidate;
- (unsigned long long)initialSelectedIndex;
- (void)addInput:(id)a0 withContext:(id)a1;
- (void)deleteFromInputWithContext:(id)a0;
- (void)inputLocationChanged;
- (BOOL)supportsLearning;
- (void)syncMarkedTextForKeyboardState:(id)a0 afterContextChange:(BOOL)a1;
- (BOOL)isDummyCandidate:(id)a0;
- (void)updateCandidates;
- (id)addInputObject:(id)a0 withContext:(id)a1;
- (id)recognitionResultsForStrokes:(id)a0 context:(id)a1;

@end
