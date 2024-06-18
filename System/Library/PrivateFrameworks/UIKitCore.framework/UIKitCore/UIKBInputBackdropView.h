@class NSArray, UIKBBackdropView, _UIVisualEffectBackdropView, NSLayoutConstraint;

@interface UIKBInputBackdropView : UIView {
    unsigned long long _innerCorners;
    BOOL _isTransitioning;
    double _transitionGap;
    double _transitionLeftOffset;
    double _transitionRightOffset;
    BOOL _hasStartRect;
    BOOL _hasEndRect;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _savedStartRect;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _savedEndRect;
}

@property (retain, nonatomic) UIKBBackdropView *inputBackdropFullView;
@property (retain, nonatomic) UIKBBackdropView *inputBackdropLeftView;
@property (retain, nonatomic) UIKBBackdropView *inputBackdropRightView;
@property (retain, nonatomic) _UIVisualEffectBackdropView *captureView;
@property (retain, nonatomic) NSArray *splitConstraints;
@property (retain, nonatomic) NSArray *fullWidthConstraints;
@property (retain, nonatomic) NSLayoutConstraint *leftWidthConstraint;
@property (retain, nonatomic) NSLayoutConstraint *rightWidthConstraint;
@property (retain, nonatomic) NSLayoutConstraint *heightConstraint;
@property (nonatomic) double leftWidthDiff;
@property (nonatomic) double rightWidthDiff;
@property (nonatomic) double tallHeight;
@property (nonatomic) double heightDiff;
@property (readonly) long long style;

+ (BOOL)requiresConstraintBasedLayout;

- (void)_setRenderConfig:(id)a0;
- (int)textEffectsVisibilityLevel;
- (void)_endSplitTransitionIfNeeded:(BOOL)a0;
- (void)_prepareWithLeftOffset:(double)a0 gapWidth:(double)a1;
- (void)layoutInputBackdropToSplitWithLeftViewRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 andRightViewRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 innerCorners:(unsigned long long)a2;
- (void)_setProgress:(double)a0 withFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)setGestureProgressForSplit:(double)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)restoreFromSnapshotting;
- (void)_setInitialProgressWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)_isTransitioning;
- (void).cxx_destruct;
- (void)setProgress:(double)a0 withFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 innerCorners:(unsigned long long)a2;
- (void)prepareForSnapshotting;
- (void)_beginSplitTransitionIfNeeded:(double)a0 gapWidth:(double)a1;
- (void)layoutInputBackdropToSplitWithHeight:(double)a0 innerCorners:(unsigned long long)a1;
- (void)createSplitBackdropIfNeeded;
- (void)dealloc;
- (void)_updateForLeftOffset:(double)a0 rightOffset:(double)a1;
- (void)layoutInputBackdropToFullWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)transitionToStyle:(long long)a0 isSplit:(BOOL)a1;

@end
