@class NSNumber;

@interface TIKeyboardInputManager_vi : TIKeyboardInputManager_mul {
    void **m_transliterator;
    BOOL m_useInternalIndex;
    NSNumber *m_lexiconID;
}

@property (readonly, nonatomic) unsigned int lexiconID;

+ (void)cleanupUnikey;
+ (void)setupUnikey;

- (unsigned int)inputIndex;
- (BOOL)inputTypeSupportsDecomposition;
- (id)decomposeTelex:(id)a0;
- (void)acceptInput;
- (id)internalStringToExternal:(id)a0 ignoreCompositionDisabled:(BOOL)a1;
- (id)externalStringToInternal:(id)a0 ignoreCompositionDisabled:(BOOL)a1;
- (void)setInputIndex:(unsigned int)a0;
- (BOOL)shouldDynamicallySwitchComposedTextBetweenInternalAndExternal;
- (id)deleteFromInput:(unsigned long long *)a0;
- (void **)createTransliterator;
- (id)externalStringToInternal:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)deleteLengthForString:(id)a0;
- (id)addInput:(id)a0 flags:(unsigned int)a1 point:(struct CGPoint { double x0; double x1; })a2 firstDelete:(unsigned long long *)a3;
- (id)internalStringToExternal:(id)a0;
- (BOOL)usesRetrocorrection;
- (void)updateUnikeyWithVietnameseType:(int)a0;
- (BOOL)canHandleCharacter:(unsigned short)a0;
- (void)dealloc;
- (BOOL)doesComposeText;
- (void)setInput:(id)a0 withIndex:(unsigned int)a1;
- (void *)initImplementation;
- (id)initWithConfig:(id)a0 keyboardState:(id)a1;
- (int)vietnameseType;

@end
