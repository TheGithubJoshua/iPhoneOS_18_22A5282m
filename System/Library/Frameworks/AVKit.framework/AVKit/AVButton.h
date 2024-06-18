@class UIFont, NSString, NSTimer, AVMicaPackage, UIViewPropertyAnimator, AVUserInteractionObserverGestureRecognizer, AVLayoutItemAttributes, UIVisualEffectView, NSNumber;

@interface AVButton : UIButton <AVPlaybackControlsViewItem> {
    NSString *_accessibilityLabelOverride;
}

@property (weak, nonatomic) UIViewPropertyAnimator *highlightAnimator;
@property (nonatomic) double trackingStartTime;
@property (nonatomic) BOOL wasLongPressed;
@property (nonatomic) BOOL wasForcePressTriggered;
@property (nonatomic) double horizontalTranslationOfLongPress;
@property (retain, nonatomic) NSNumber *previousHorizontalPositionOfLongPress;
@property (nonatomic) double force;
@property (nonatomic) double maximumForceSinceTrackingBegan;
@property (weak, nonatomic) NSTimer *longPressTimer;
@property (retain, nonatomic) AVUserInteractionObserverGestureRecognizer *userInteractionGestureRecognizer;
@property (retain, nonatomic) UIVisualEffectView *backgroundEffectView;
@property (retain, nonatomic) UIFont *activeFont;
@property (nonatomic, getter=isSecondGeneration) BOOL secondGeneration;
@property (nonatomic) BOOL treatsForcePressAsLongPress;
@property (nonatomic) long long tintEffectStyle;
@property (nonatomic) BOOL usesBackgroundEffectViewForTextOnlyButtons;
@property (nonatomic) double forceThreshold;
@property (nonatomic) BOOL multipleTouchesEndsTracking;
@property (copy, nonatomic) NSString *activeImageName;
@property (copy, nonatomic) NSString *imageName;
@property (copy, nonatomic) NSString *alternateImageName;
@property (nonatomic) double alternateImagePadding;
@property (nonatomic) double fullscreenAlternateImagePadding;
@property (nonatomic) BOOL appliesTransformToImageViewWhenHighlighted;
@property (retain, nonatomic) UIFont *inlineFont;
@property (retain, nonatomic) UIFont *fullScreenFont;
@property (retain, nonatomic) UIFont *alternateFullScreenFont;
@property (retain, nonatomic) AVMicaPackage *micaPackage;
@property (nonatomic) double micaSnapshotAlpha;
@property (nonatomic) BOOL disablesHighlightWhenLongPressed;
@property (nonatomic) struct NSDirectionalEdgeInsets { double top; double leading; double bottom; double trailing; } hitRectInsets;
@property (nonatomic) BOOL clampsHitRectInsetsWhenContainedInScrollableView;
@property (nonatomic) struct CGSize { double width; double height; } extrinsicContentSize;
@property (nonatomic, getter=isRemoved) BOOL removed;
@property (nonatomic, getter=isCollapsed) BOOL collapsed;
@property (nonatomic, getter=isIncluded) BOOL included;
@property (readonly, nonatomic, getter=isCollapsedOrExcluded) BOOL collapsedOrExcluded;
@property (nonatomic) BOOL hasAlternateAppearance;
@property (nonatomic) BOOL hasFullScreenAppearance;
@property (readonly, nonatomic) AVLayoutItemAttributes *layoutAttributes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)buttonWithAccessibilityIdentifier:(id)a0 isSecondGeneration:(BOOL)a1;
+ (id)buttonWithAccessibilityIdentifier:(id)a0 accessibilityLabel:(id)a1 isSecondGeneration:(BOOL)a2;

- (void)_updateEdgeInsets;
- (id)_preferredFont;
- (void)_updateTintColorIfNeeded;
- (void)_updateBackgroundEffectViewIsHidden;
- (id)_preferredImageName;
- (void)setTitle:(id)a0 forState:(unsigned long long)a1;
- (struct CGSize { double x0; double x1; })_preferredLayoutSize;
- (void)_resetTrackedState;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })hitRect;
- (void)_handleUserInteractionGestureRecognizer:(id)a0;
- (void)_updateImageIfNeeded;
- (void)setHighlighted:(BOOL)a0;
- (void)setImage:(id)a0 forState:(unsigned long long)a1;
- (double)_imageViewAlpha;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)endTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (BOOL)beginTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (struct CGSize { double x0; double x1; })minimumSize;
- (void)cancelTrackingWithEvent:(id)a0;
- (BOOL)continueTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (void)_updateLayoutItem;
- (id)accessibilityLabel;
- (void)layoutAttributesDidChange;
- (void).cxx_destruct;
- (void)setEnabled:(BOOL)a0;
- (void)layoutSubviews;
- (void)willMoveToWindow:(id)a0;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
