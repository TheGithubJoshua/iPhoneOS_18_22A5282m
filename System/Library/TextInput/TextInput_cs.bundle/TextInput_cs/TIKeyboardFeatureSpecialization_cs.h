@interface TIKeyboardFeatureSpecialization_cs : TIKeyboardFeatureSpecialization

- (id)allAccentKeyStrings;
- (BOOL)shouldAddModifierSymbolsToWordCharacters;
- (id)externalStringToInternal:(id)a0;
- (id)internalStringToExternal:(id)a0;
- (id)nonstopPunctuationCharacters;
- (BOOL)doesComposeText;
- (id)accentKeyStringForKeyboardState:(id)a0;

@end
