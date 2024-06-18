@interface TIKeyboardFeatureSpecialization_el : TIKeyboardFeatureSpecialization

- (id)sentenceDelimitingCharacters;
- (BOOL)shouldAddModifierSymbolsToWordCharacters;
- (id)sentenceTrailingCharacters;
- (id)externalStringToInternal:(id)a0;
- (id)internalStringToExternal:(id)a0;
- (id)nonstopPunctuationCharacters;
- (BOOL)doesComposeText;
- (id)sentencePrefixingCharacters;
- (void *)createInputManager;

@end
