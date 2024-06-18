@class UIColor, NSAttributedString, _UIRefreshControlContentView;
@protocol _UIRefreshControlHosting;

@interface UIRefreshControl : UIControl {
    long long _style;
    _UIRefreshControlContentView *_contentView;
    double _refreshControlHeight;
    double _visibleHeight;
    double _snappingHeight;
    double _additionalTopInset;
    BOOL _insetsApplied;
    BOOL _adjustingInsets;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _appliedInsets;
    id<_UIRefreshControlHosting> _host;
}

@property (readonly, nonatomic) long long refreshControlState;
@property (readonly, nonatomic) long long style;
@property (readonly, nonatomic) double _refreshControlHeight;
@property (readonly, nonatomic) double _snappingHeight;
@property (readonly, nonatomic) double _visibleHeight;
@property (readonly, nonatomic) BOOL _hostAdjustsContentOffset;
@property (readonly, nonatomic) BOOL _areInsetsBeingApplied;
@property (readonly, nonatomic, getter=_appliedInsets) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } appliedInsets;
@property (weak, nonatomic, getter=_host, setter=_setHost:) id<_UIRefreshControlHosting> _host;
@property (readonly, nonatomic, getter=isRefreshing) BOOL refreshing;
@property (retain, nonatomic) UIColor *tintColor;
@property (retain, nonatomic) NSAttributedString *attributedTitle;

+ (id)_defaultColor;
+ (Class)_contentViewClassForStyle:(long long)a0;
+ (void)_setAllowsUnsupportedMacIdiomBehavior:(BOOL)a0;
+ (BOOL)_allowsUnsupportedMacIdiomBehavior;

- (id)initWithCoder:(id)a0;
- (void)_setTintColor:(id)a0;
- (id)init;
- (id)initWithStyle:(long long)a0;
- (double)_visibleHeightForContentOffset:(struct CGPoint { double x0; double x1; })a0 origin:(struct CGPoint { double x0; double x1; })a1;
- (void)didMoveToSuperview;
- (void)_didScroll;
- (BOOL)_isApplyingInsets;
- (BOOL)_canTransitionFromState:(long long)a0 toState:(long long)a1;
- (void)_removeInsets;
- (id)_tintColor;
- (void)endRefreshing;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)_scrollViewHeight;
- (void)_addInsets;
- (void)_removeInsetHeight:(double)a0;
- (void)_addInsetHeight:(double)a0;
- (struct CGPoint { double x0; double x1; })_originForContentOffset:(struct CGPoint { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)sizeToFit;
- (void)_updateSnappingHeight;
- (void)_endRefreshingAnimated:(BOOL)a0;
- (void)_resizeToFitContents;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (unsigned long long)_controlEventsForActionTriggered;
- (void)_populateArchivedSubviews:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)_attributedTitle;
- (id)_contentView;
- (double)_impactIntensityForVelocity:(double)a0;
- (void)_updateHiddenStateIfNeeded;
- (void).cxx_destruct;
- (void)setBackgroundColor:(id)a0;
- (void)setRefreshControlState:(long long)a0;
- (void)_setVisibleHeight:(double)a0;
- (double)revealedFraction;
- (id)_scrollView;
- (void)beginRefreshing;
- (long long)_recomputeNewState;
- (void)_setAttributedTitle:(id)a0;
- (void)dealloc;
- (void)_setRefreshControlState:(long long)a0 notify:(BOOL)a1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)_stiffnessForVelocity:(double)a0;
- (void)_updateConcealingMask;
- (void)_update;

@end
