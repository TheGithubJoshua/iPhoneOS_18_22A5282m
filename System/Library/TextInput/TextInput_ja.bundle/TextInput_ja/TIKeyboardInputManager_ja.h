@class TIWordSearch, TICandidateSorter, NSString, NSOperationQueue, TISmartPunctuationController, NSMutableArray;

@interface TIKeyboardInputManager_ja : TIKeyboardInputManager_zh_ja {
    TIWordSearch *_kbws;
    unsigned long long _remainingInputLength;
    BOOL _shouldLearnAcceptedCandidate;
    BOOL _isPhraseBoundarySet;
    BOOL _isCandidateSelectionSuppressed;
}

@property (readonly) TICandidateSorter *candidateSorter;
@property (readonly) NSOperationQueue *operationQueue;
@property (readonly, nonatomic) NSMutableArray *recentlyCommittedCandidatesForReanalysis;
@property (readonly, nonatomic) TISmartPunctuationController *smartPunctuationController;
@property (nonatomic) BOOL isKanaPlane;
@property (nonatomic) BOOL flickUsed;
@property (nonatomic) BOOL isEmojiFacemarkMode;
@property (nonatomic) BOOL filterCandidatesUsingInputIndex;
@property (copy, nonatomic) NSString *alternateDisplayString;
@property (nonatomic) BOOL selectFirstCandidate;
@property (nonatomic) BOOL liveConversionForceEnabled;
@property (nonatomic) BOOL liveConversionForceDisabled;

+ (Class)wordSearchClass;
+ (BOOL)alwaysShowExtensionCandidatesForSortingMethod:(id)a0;
+ (void)addFullwidthAnnotationToResultSet:(id)a0;
+ (unsigned long long)sortFromSortTitle:(id)a0;
+ (id)sortTitleFromSort:(unsigned long long)a0;

- (void)clearInput;
- (BOOL)liveConversionEnabled;
- (BOOL)suppliesCompletions;
- (unsigned long long)phraseBoundary;
- (BOOL)usesAutoDeleteWord;
- (BOOL)usesCandidateSelection;
- (unsigned int)inputIndex;
- (BOOL)newInputAcceptsUserSelectedCandidate;
- (id)searchStringForMarkedText;
- (BOOL)usesLiveConversion;
- (BOOL)suppressCompletionsForFieldEditor;
- (void)suspend;
- (unsigned long long)autoquoteType;
- (id)candidateResultSet;
- (void)setInput:(id)a0;
- (id)keyboardBehaviors;
- (BOOL)shouldAddModifierSymbolsToWordCharacters;
- (id)deleteFromInput:(unsigned long long *)a0;
- (id)inputString;
- (void).cxx_destruct;
- (id)addInput:(id)a0 flags:(unsigned int)a1 point:(struct CGPoint { double x0; double x1; })a2 firstDelete:(unsigned long long *)a3;
- (BOOL)supportsSetPhraseBoundary;
- (BOOL)shouldOutputFullwidthSpace;
- (id)wordCharacters;
- (void)dealloc;
- (unsigned int)inputCount;
- (id)keyEventMap;
- (id)handleKeyboardInput:(id)a0;
- (BOOL)shouldExtendPriorWord;
- (BOOL)ignoresDeadKeys;
- (void *)initImplementation;
- (id)initWithConfig:(id)a0 keyboardState:(id)a1;
- (id)defaultCandidate;
- (void)generateCandidatesWithKeyboardState:(id)a0 candidateRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 completionHandler:(id /* block */)a2;
- (unsigned long long)initialSelectedIndex;
- (void)lastAcceptedCandidateCorrected;
- (id)_inputString;
- (void)adjustPhraseBoundaryInForwardDirection:(BOOL)a0 granularity:(int)a1;
- (BOOL)alwaysShowExtensionCandidatesForSortingMethod:(id)a0;
- (id)candidateResultSetFromCandidates:(id)a0 proactiveTriggers:(id)a1;
- (id)candidateResultSetFromWordSearchCandidateResultSet:(id)a0;
- (void)clearDynamicDictionary;
- (void)commitComposition;
- (id)dictionaryInputMode;
- (id)didAcceptCandidate:(id)a0;
- (id)geometryModelData;
- (id)groupedCandidatesFromCandidates:(id)a0 usingSortingMethod:(id)a1;
- (void)groupedCandidatesFromCandidates:(id)a0 usingSortingMethod:(id)a1 completion:(id /* block */)a2;
- (id)handleAcceptedCandidate:(id)a0 keyboardState:(id)a1;
- (id)indexTitlesForGroupTitles:(id)a0 sortingMethod:(id)a1;
- (void)inputLocationChanged;
- (void)loadFavoniusTypingModel;
- (id)rawInputString;
- (id)remainingInput;
- (void)setAutoCorrects:(BOOL)a0;
- (void)setLearnsCorrection:(BOOL)a0;
- (void)setPhraseBoundary:(unsigned long long)a0;
- (id)sortingMethods;
- (BOOL)supportsCandidateGeneration;
- (BOOL)supportsLearning;
- (BOOL)supportsPerRecipientLearning;
- (void)syncToKeyboardState:(id)a0 from:(id)a1 afterContextChange:(BOOL)a2;
- (void)syncToLayoutState:(id)a0;
- (id)titleForSortingMethod:(id)a0;
- (id)wordSearch;
- (void)preferencesDidChange:(id)a0;
- (void)loadAddressBook;
- (id)groupedCandidatesFromCandidates:(id)a0 usingSortingMethod:(id)a1 inputString:(id)a2;
- (void)_addInput:(id)a0;
- (void)_cancelCandidatesThread;
- (id)_convertString;
- (id)_convertStringWithBoundary:(unsigned long long)a0;
- (void)_deleteFromInput;
- (void)_notifyUpdateCandidates:(id)a0 forOperation:(id)a1;
- (unsigned long long)actualInputIndex;
- (void)addRecentlyCommittedCandidatesForReanalysis:(void *)a0;
- (BOOL)hasGroupedCandidatesFromCandidates:(id)a0 usingSortingMethod:(id)a1 inputString:(id)a2;
- (BOOL)isLiveConversion;
- (id)liveConversionTextInputManager;
- (BOOL)makeCandidatesWithWordSearch:(id)a0 predictionEnabled:(BOOL)a1 reanalysisMode:(BOOL)a2;
- (void)mecabraLearningValidator:(id)a0;
- (unsigned long long)remainingInputLengthOfCandidate:(id)a0;
- (unsigned long long)remainingInputLengthOfString:(id)a0 index:(unsigned long long)a1 candidate:(id)a2;
- (BOOL)shouldInvokeLiveConversion:(id)a0;
- (BOOL)shouldOutputFullwidthSpaceForKanaABC123;
- (id)stringByConvertingPunctuationForInput:(id)a0 isLockedInput:(BOOL)a1;

@end