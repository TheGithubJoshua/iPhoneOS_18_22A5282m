@class UIColor, UIActionSheet, UIPopoverController, UIView, UIPopoverBackgroundView, UIImageView;

@interface _UIPopoverView : UIView {
    UIView *_contentView;
    UIPopoverBackgroundView *_backgroundView;
    Class _backgroundViewClass;
    UIImageView *_toolbarShine;
}

@property (nonatomic) BOOL showsBackgroundComponentHighlights;
@property (nonatomic) BOOL showsBackgroundViewHighlight;
@property (nonatomic) BOOL showsContentViewHighlight;
@property (readonly, nonatomic) BOOL contentExtendsOverArrow;
@property (nonatomic) double arrowOffset;
@property (nonatomic) unsigned long long arrowDirection;
@property (nonatomic) long long backgroundStyle;
@property (copy, nonatomic) UIColor *popoverBackgroundColor;
@property (copy, nonatomic) UIColor *arrowBackgroundColor;
@property (nonatomic) BOOL chromeHidden;
@property (nonatomic) BOOL chromeHiddenForSizeTransition;
@property (retain, nonatomic) UIActionSheet *presentedActionSheet;
@property (nonatomic) UIPopoverController *popoverController;

+ (id)popoverViewContainingView:(id)a0;

- (void)_setCornerRadius:(double)a0;
- (void)setUseToolbarShine:(BOOL)a0;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (int)_style;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 backgroundViewClass:(Class)a1;
- (id)_traitCollectionForChildEnvironment:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)standardChromeView;
- (void)traitCollectionDidChange:(id)a0;
- (id)backgroundView;
- (id)_normalInheritedTintColor;
- (id)toolbarShine;
- (void).cxx_destruct;
- (BOOL)_allowsCustomizationOfContent;
- (void)_setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 arrowOffset:(double)a1;
- (id)contentView;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)_layoutToolbarShine;
- (BOOL)_definesTintColor;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_snapshotBounds;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 backgroundViewClass:(Class)a1 embeddedInView:(BOOL)a2 contentExtendsOverArrow:(BOOL)a3;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })safeAreaInsetsForContentView;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)_showArrow;
- (BOOL)_needsLayoutOnAnimatedFrameChangeForNewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_hideArrow;
- (void)layoutSubviews;
- (void)_setPopoverContentView:(id)a0;
- (void)willMoveToWindow:(id)a0;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)_performBlockCheckingDefinesTintColor:(id /* block */)a0;
- (void)_updateAlphaForChromeHidden;

@end
