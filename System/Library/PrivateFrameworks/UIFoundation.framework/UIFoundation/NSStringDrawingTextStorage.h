@class NSString, CUIStyleEffectConfiguration, CUICatalog, NSTextContainer, NSConcreteNotifyingMutableAttributedString, NSLayoutManager;

@interface NSStringDrawingTextStorage : NSTextStorage <NSLayoutManagerDelegate> {
    NSConcreteNotifyingMutableAttributedString *_contents;
    NSLayoutManager *_layoutManager;
    NSTextContainer *_textContainer;
    double _baselineDelta;
    struct { unsigned char _typesetterBehavior : 4; unsigned char _needToFlushCache : 1; unsigned char _baselineMode : 1; unsigned char _forceWordWrapping : 1; unsigned char _usesSimpleTextEffects : 1; unsigned char _applicationFrameworkContext : 3; unsigned char _wrappedByCluster : 1; unsigned int _reserved : 20; } _sdflags;
}

@property (retain, nonatomic) CUICatalog *cuiCatalog;
@property (retain, nonatomic) CUIStyleEffectConfiguration *cuiStyleEffects;
@property (nonatomic, getter=_usesSimpleTextEffects, setter=_setUsesSimpleTextEffects:) BOOL usesSimpleTextEffects;
@property double defaultTighteningFactor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (void)_setHasCustomSettings:(BOOL)a0;
+ (BOOL)_hasCustomSettings;
+ (void)performLayoutOperation:(id /* block */)a0;
+ (id)stringDrawingTextStorage;

- (BOOL)_shouldSetOriginalFontAttribute;
- (id)textContainer;
- (void)setAttributes:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)addAttribute:(id)a0 value:(id)a1 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (id)attribute:(id)a0 atIndex:(unsigned long long)a1 effectiveRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a2;
- (void)replaceCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 withString:(id)a1;
- (id)init;
- (void)replaceCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 withAttributedString:(id)a1;
- (id)attributesAtIndex:(unsigned long long)a0 effectiveRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1;
- (id)attribute:(id)a0 atIndex:(unsigned long long)a1 longestEffectiveRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a2 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3;
- (id)layoutManager;
- (void)_setBaselineDelta:(double)a0;
- (BOOL)_wrappedByCluster;
- (void)_setWrappedByCluster:(BOOL)a0;
- (long long)typesetterBehavior;
- (double)_baselineDelta;
- (BOOL)_isStringDrawingTextStorage;
- (id)string;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })usedRectForTextContainer:(id)a0;
- (void)processEditing;
- (void)_setForceWordWrapping:(BOOL)a0;
- (void)dealloc;
- (BOOL)_baselineMode;
- (unsigned long long)length;
- (BOOL)_forceWordWrapping;
- (long long)_applicationFrameworkContext;
- (void)_setApplicationFrameworkContext:(long long)a0;
- (void)_setBaselineMode:(BOOL)a0;
- (struct CGPoint { double x0; double x1; })defaultTextContainerOriginForRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawTextContainer:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 graphicsContext:(struct CGContext { } *)a3 baselineMode:(BOOL)a4 scrollable:(BOOL)a5 padding:(double)a6;
- (void)drawTextContainer:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 graphicsContext:(struct CGContext { } *)a2 baselineMode:(BOOL)a3 scrollable:(BOOL)a4 padding:(double)a5;
- (void)fontSetChanged;
- (void)setGraphicsContext:(id)a0;
- (id)textContainerForAttributedString:(id)a0;
- (id)textContainerForAttributedString:(id)a0 containerSize:(struct CGSize { double x0; double x1; })a1 lineFragmentPadding:(double)a2;

@end
