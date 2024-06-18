@interface TIKeyboardFeatureSpecialization_fr : TIKeyboardQuickTypeSpecialization

- (id)allAccentKeyStrings;
- (id)externalStringToInternal:(id)a0;
- (id)internalStringToExternal:(id)a0;
- (id)nonstopPunctuationCharacters;
- (id)terminatorsDeletingAutospace;
- (id)accentKeyStringForKeyboardState:(id)a0;
- (void *)createInputManager;
- (id)accentKeyStringForInputPrefix:(id)a0;

@end
