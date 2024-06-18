@interface TIKeyboardInputManager_zh_hant_Pinyin : TIKeyboardInputManagerPinyin

- (id)locale;
- (BOOL)usesContinuousPath;
- (id)keyEventMap;
- (void *)initImplementation;
- (int)inputMethodType;
- (BOOL)usesComposingInput;
- (id)phoneticSortingMethod;

@end
