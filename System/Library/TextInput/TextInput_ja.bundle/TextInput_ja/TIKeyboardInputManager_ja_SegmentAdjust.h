@class NSString, NSArray, TIWordSearch;

@interface TIKeyboardInputManager_ja_SegmentAdjust : TIKeyboardInputManager_zh_ja {
    TIWordSearch *_wordSearch;
}

@property (nonatomic) unsigned long long breaktAt;
@property (readonly, nonatomic) NSString *inputString;
@property (readonly, nonatomic) NSString *composingInputString;
@property (readonly, nonatomic) NSString *contextString;
@property (copy, nonatomic) NSArray *contextSegments;
@property (nonatomic) unsigned long long segmentLength;
@property (copy, nonatomic) id /* block */ candidateGenerationCompletionHandler;
@property (nonatomic) BOOL romajiEnabled;
@property (copy, nonatomic) NSArray *segments;
@property (nonatomic) unsigned long long index;

- (BOOL)delayedCandidateList;
- (BOOL)usesCandidateSelection;
- (id)markedText;
- (unsigned int)inputIndex;
- (void)loadDictionaries;
- (BOOL)usesLiveConversion;
- (id)candidateResultSet;
- (id)keyboardBehaviors;
- (BOOL)commitsAcceptedCandidate;
- (void).cxx_destruct;
- (BOOL)supportsSetPhraseBoundary;
- (id)handleKeyboardInput:(id)a0;
- (BOOL)_adjustPhraseBoundaryInForwardDirection:(BOOL)a0 granularity:(int)a1;
- (BOOL)closeCandidateGenerationContextWithResults:(id)a0;
- (void)commitComposition;
- (void)composeTextWith:(id)a0;
- (void)loadFavoniusTypingModel;
- (void)openCandidateGenerationContextWithCompletionHandler:(id /* block */)a0;
- (void)syncToKeyboardState:(id)a0 from:(id)a1 afterContextChange:(BOOL)a2;
- (id)wordSearch;
- (void)_notifyUpdateCandidates:(id)a0 forOperation:(id)a1;
- (void)generateNewSegments:(unsigned long long)a0;
- (id)initWithConfig:(id)a0 keyboardState:(id)a1 segments:(id)a2 at:(unsigned long long)a3 romajiEnabled:(BOOL)a4 wordSearch:(id)a5;
- (void)updateInputString;

@end
