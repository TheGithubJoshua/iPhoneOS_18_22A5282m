@interface TIKeyboardInputManager_my : TIKeyboardInputManager

- (id)deleteFromInput:(unsigned long long *)a0;
- (id)externalStringToInternal:(id)a0;
- (id)internalStringToExternal:(id)a0;
- (BOOL)doesComposeText;
- (BOOL)deletesComposedTextByComposedCharacterSequence;

@end
