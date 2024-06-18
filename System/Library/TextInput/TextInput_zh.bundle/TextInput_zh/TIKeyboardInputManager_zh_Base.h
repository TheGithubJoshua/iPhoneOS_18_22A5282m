@interface TIKeyboardInputManager_zh_Base : TIKeyboardInputManagerChinesePhonetic

- (BOOL)supportsNumberKeySelection;
- (BOOL)acceptInputString:(id)a0;
- (id)keyboardBehaviors;
- (id)inputsToReject;
- (id)keyEventMap;
- (void *)initImplementation;
- (int)inputMethodType;
- (BOOL)_shouldCommitInputDirectly:(id)a0;
- (id)phoneticSortingMethod;
- (BOOL)shouldSearchCompletionForSubstrings;

@end
