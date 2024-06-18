@interface TIKeyboardHandwritingSpecialization : TIKeyboardFeatureSpecialization

- (id)replacementForDoubleSpace;
- (BOOL)canHandleKeyHitTest;
- (id)keyboardBehaviors;
- (id)nonstopPunctuationCharacters;
- (BOOL)shouldExtendPriorWord;
- (id)wordSeparator;
- (BOOL)supportsLearning;

@end
