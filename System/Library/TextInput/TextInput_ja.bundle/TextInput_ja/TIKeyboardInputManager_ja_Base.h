@interface TIKeyboardInputManager_ja_Base : TIKeyboardInputManager_zh_ja

- (BOOL)delayedCandidateList;
- (BOOL)usesCandidateSelection;
- (void)loadDictionaries;
- (id)keyboardBehaviors;
- (BOOL)supportsSetPhraseBoundary;
- (void)loadFavoniusTypingModel;

@end
