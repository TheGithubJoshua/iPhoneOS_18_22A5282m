@class UIView, NSString, UIImage, CCUICAPackageView, CCUICAPackageDescription, UIImageView, NSArray, UILongPressGestureRecognizer, MTVisualStylingProvider, UIColor;

@interface CCUIRoundButton : UIControl <UIGestureRecognizerDelegate, UIPointerInteractionDelegate, MTVisualStylingRequiring> {
    MTVisualStylingProvider *_visualStylingProvider;
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
    BOOL _isStateValid;
}

@property (copy, nonatomic) UIColor *highlightColor;
@property (copy, nonatomic) UIColor *highlightTintColor;
@property (retain, nonatomic) UIView *normalStateBackgroundView;
@property (retain, nonatomic) UIView *selectedStateBackgroundView;
@property (retain, nonatomic) UIView *alternateSelectedStateBackgroundView;
@property (retain, nonatomic) UIImageView *glyphImageView;
@property (retain, nonatomic) UIImageView *selectedGlyphView;
@property (retain, nonatomic) UIView *glyphPackageContainerView;
@property (retain, nonatomic) CCUICAPackageView *glyphPackageView;
@property (retain, nonatomic) CCUICAPackageDescription *glyphPackageDescription;
@property (retain, nonatomic) UIImage *glyphImage;
@property (copy, nonatomic) NSString *glyphState;
@property (nonatomic) BOOL useAlternateBackground;
@property (nonatomic, getter=isDynamicLayoutEnabled) BOOL dynamicLayoutEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSArray *requiredVisualStyleCategories;

- (id)initWithGlyphImage:(id)a0 highlightColor:(id)a1 highlightTintColor:(id)a2 useLightStyle:(BOOL)a3;
- (void)_visualStylingProvider:(id)a0 didChangeWithOutgoingVisualStylingProvider:(id)a1;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)_setCornerRadius:(double)a0;
- (id)initWithGlyphImage:(id)a0 highlightColor:(id)a1 useLightStyle:(BOOL)a2;
- (id)initWithGlyphPackageDescription:(id)a0 highlightColor:(id)a1 useLightStyle:(BOOL)a2;
- (id)pointerInteraction:(id)a0 regionForRequest:(id)a1 defaultRegion:(id)a2;
- (void)_updateForStateChange;
- (id)initWithGlyphPackageDescription:(id)a0 highlightColor:(id)a1;
- (double)_cornerRadius;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (id)initWithGlyphImage:(id)a0 highlightColor:(id)a1 highlightTintColor:(id)a2;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)initWithGlyphImage:(id)a0 highlightColor:(id)a1;
- (void)_updateVisualStylingOfView:(id)a0 style:(long long)a1 visualStylingProvider:(id)a2 outgoingProvider:(id)a3;
- (void)_setNeedsStateChangeUpdate;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)_primaryActionPerformed:(id)a0;
- (void)didMoveToWindow;
- (void)setVisualStylingProvider:(id)a0 forCategory:(long long)a1;
- (id)_initWithHighlightColor:(id)a0 useLightStyle:(BOOL)a1;
- (void)_deactivateReachability:(id)a0;
- (void)dealloc;
- (id)visualStylingProviderForCategory:(long long)a0;
- (void)layoutSubviews;
- (void)_updateForStateChangeIfNecessary;
- (id)pointerInteraction:(id)a0 styleForRegion:(id)a1;

@end
