@interface TIKeyboardInputManager_pa : TIKeyboardInputManager

@property (nonatomic) BOOL isPhoneticLayout;

- (id)deleteFromInput:(unsigned long long *)a0;
- (void *)initImplementation;
- (BOOL)deletesComposedTextByComposedCharacterSequence;
- (void)syncToLayoutState:(id)a0;

@end
