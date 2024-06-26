@class UIView, NSString, AVMicaPackage, NSTimer, UIViewPropertyAnimator, UIImageView, UISelectionFeedbackGenerator, AVLayoutItemAttributes;

@interface AVVolumeButtonControl : UIControl <AVExternalGestureRecognizerPreventing, AVPlaybackControlsViewItem>

@property (weak, nonatomic) UIViewPropertyAnimator *highlightAnimator;
@property (readonly, nonatomic) UISelectionFeedbackGenerator *feedbackGenerator;
@property (retain, nonatomic) AVMicaPackage *micaPackage;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UIView *micaPackageContainerView;
@property (nonatomic) struct CGPoint { double x; double y; } initialPreciseLocationOfTouch;
@property (weak, nonatomic) NSTimer *longPressTimer;
@property (nonatomic) long long trackingState;
@property (nonatomic) BOOL showsHighlightedAppearance;
@property (nonatomic) long long volumeControllerType;
@property (retain, nonatomic) NSString *micaPackageStateName;
@property (nonatomic, getter=isLongPressEnabled) BOOL longPressEnabled;
@property (nonatomic) struct NSDirectionalEdgeInsets { double top; double leading; double bottom; double trailing; } hitRectInsets;
@property (nonatomic) struct CGPoint { double x; double y; } translationOfPanFromPreviousTouch;
@property (nonatomic) struct CGPoint { double x; double y; } cumulativeTranslationSincePanningBegan;
@property (nonatomic) struct CGPoint { double x; double y; } locationOfTouchInWindow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) struct CGSize { double width; double height; } extrinsicContentSize;
@property (nonatomic, getter=isRemoved) BOOL removed;
@property (nonatomic, getter=isCollapsed) BOOL collapsed;
@property (nonatomic, getter=isIncluded) BOOL included;
@property (readonly, nonatomic, getter=isCollapsedOrExcluded) BOOL collapsedOrExcluded;
@property (nonatomic) BOOL hasAlternateAppearance;
@property (nonatomic) BOOL hasFullScreenAppearance;
@property (readonly, nonatomic) AVLayoutItemAttributes *layoutAttributes;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })hitRect;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)endTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (BOOL)beginTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (struct CGSize { double x0; double x1; })minimumSize;
- (void)cancelTrackingWithEvent:(id)a0;
- (BOOL)continueTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_updateLayoutItem;
- (id)accessibilityLabel;
- (void)layoutAttributesDidChange;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_updateMicaPackage:(id)a0;
- (void)triggerSelectionChangedFeedback;
- (BOOL)avkit_shouldPreventExternalGestureRecognizerAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)imageNameForMicaPackageState;
- (void)setNeedsUpdateGlyphRenderingMode;

@end
