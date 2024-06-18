@interface TIKeyboardInputManager_zh_hans_Pinyin : TIKeyboardInputManagerPinyin

- (id)locale;
- (BOOL)usesContinuousPath;
- (id)keyEventMap;
- (void *)initImplementation;
- (int)inputMethodType;
- (BOOL)usesComposingInput;
- (id)phoneticSortingMethod;

@end
