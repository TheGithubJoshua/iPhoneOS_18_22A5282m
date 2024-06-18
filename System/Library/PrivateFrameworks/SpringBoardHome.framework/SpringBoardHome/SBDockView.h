@class UIColor, NSString, SBHighlightView, SBDockIconListView, UIView, UIImageView, _UILegibilitySettings;
@protocol SBDockViewDelegate;

@interface SBDockView : UIView <SBUICoronaAnimationControllerParticipant> {
    SBHighlightView *_highlightView;
    UIImageView *_backgroundImageView;
    UIView *_accessibilityBackgroundView;
    BOOL _forSnapshot;
}

@property (readonly, nonatomic) UIColor *accessibilityBackgroundColor;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings;
@property (retain, nonatomic) UIView *backgroundView;
@property (nonatomic) unsigned long long dockEdge;
@property (readonly, nonatomic) double dockHeight;
@property (readonly, nonatomic) double dockHeightPadding;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } dockListViewFrame;
@property (readonly, nonatomic) SBDockIconListView *dockListView;
@property (nonatomic) double dockListOffset;
@property (weak, nonatomic) id<SBDockViewDelegate> delegate;
@property (readonly, nonatomic, getter=isDockInset) BOOL dockInset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)_minimumHomeScreenScale;
- (void)coronaAnimationController:(id)a0 willAnimateCoronaTransitionWithAnimator:(id)a1;
- (void)minimumHomeScreenScaleDidChange;
- (double)_layoutScale;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_dockOverhangInsets;
- (void)traitCollectionDidChange:(id)a0;
- (void)updateAccessibilityTintColor;
- (void).cxx_destruct;
- (void)didMoveToWindow;
- (id)initWithDockListView:(id)a0 forSnapshot:(BOOL)a1;
- (void)setBackgroundAlpha:(double)a0;
- (id)_visualConfiguration;
- (void)dealloc;
- (void)_updateCornerRadii;
- (void)layoutSubviews;
- (void)willMoveToWindow:(id)a0;
- (id)_listLayout;
- (void)_backgroundContrastDidChange:(id)a0;
- (id)traitCollection;
- (void)getDockViewMetrics:(struct { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x1; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x2; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x3; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x4; } *)a0;

@end
