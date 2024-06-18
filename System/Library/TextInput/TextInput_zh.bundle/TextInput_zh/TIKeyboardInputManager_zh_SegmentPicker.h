@class TIWordSearch, NSString, NSArray, NSMutableArray;

@interface TIKeyboardInputManager_zh_SegmentPicker : TIKeyboardInputManager_zh_ja {
    NSMutableArray *_segments;
}

@property (copy, nonatomic) TIWordSearch *kbws;
@property (copy, nonatomic) NSString *rawInputString;
@property (copy, nonatomic) NSString *inputString;
@property (copy, nonatomic) NSString *autoCommitString;
@property (nonatomic) unsigned int inputIndex;
@property (copy, nonatomic) NSString *remainingInput;
@property (copy, nonatomic) NSMutableArray *originalSegments;
@property (retain, nonatomic) NSString *alternateDisplayString;
@property (nonatomic) BOOL shouldShowCandidateWindow;
@property (readonly, nonatomic) unsigned long long index;
@property (readonly, nonatomic) NSArray *segments;

- (BOOL)supportsNumberKeySelection;
- (BOOL)delayedCandidateList;
- (unsigned long long)phraseBoundary;
- (BOOL)usesCandidateSelection;
- (id)markedText;
- (void)loadDictionaries;
- (id)searchStringForMarkedText;
- (BOOL)usesLiveConversion;
- (id)candidateResultSet;
- (id)keyboardBehaviors;
- (BOOL)commitsAcceptedCandidate;
- (void).cxx_destruct;
- (BOOL)supportsSetPhraseBoundary;
- (id)wordCharacters;
- (id)keyEventMap;
- (id)handleKeyboardInput:(id)a0;
- (BOOL)_adjustPhraseBoundaryInForwardDirection:(BOOL)a0 granularity:(int)a1;
- (BOOL)closeCandidateGenerationContextWithResults:(id)a0;
- (id)didAcceptCandidate:(id)a0;
- (void)loadFavoniusTypingModel;
- (void)openCandidateGenerationContextWithCompletionHandler:(id /* block */)a0;
- (void)setPhraseBoundary:(unsigned long long)a0;
- (void)syncToKeyboardState:(id)a0 from:(id)a1 afterContextChange:(BOOL)a2;
- (void)updateMarkedText;
- (id)convertString;
- (id)initWithConfig:(id)a0 keyboardState:(id)a1 segments:(id)a2 at:(unsigned long long)a3 wordSearch:(id)a4;
- (void)selectCandidate:(id)a0;

@end
