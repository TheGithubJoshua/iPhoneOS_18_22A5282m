@class NSTimer, NSString, NSArray, UIView, NSMutableArray, AXCCVisualStylingProvider, UILabel, AXCCExpandableButtonOption;

@interface AXCCExpandableButton : UIControl <AXCCVisualStylingProviderObserver, UIPointerInteractionDelegate>

@property (retain, nonatomic) NSMutableArray *buttons;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIView *overlaySelectionView;
@property (retain, nonatomic) UIView *selectionView;
@property (retain, nonatomic) UIView *clippingView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) UILabel *messageLabel;
@property (retain, nonatomic) NSTimer *messageTimer;
@property (nonatomic) BOOL toggleEnabled;
@property (nonatomic) BOOL displayMessage;
@property (nonatomic) BOOL resetTracking;
@property (nonatomic) BOOL isControlCenter;
@property (retain, nonatomic) NSArray *options;
@property (readonly, nonatomic) AXCCExpandableButtonOption *selectedOption;
@property (nonatomic) long long selectedOptionIndex;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) long long axis;
@property (nonatomic, getter=isExpanded) BOOL expanded;
@property (nonatomic, getter=isAnimating) BOOL animating;
@property (nonatomic) struct CGSize { double width; double height; } maximumExpandedSize;
@property (nonatomic) struct CGSize { double width; double height; } buttonImageSize;
@property (retain, nonatomic) AXCCVisualStylingProvider *stylingProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)collapsedHeightWithImageHeight:(double)a0 maximumHeight:(double)a1;

- (void)pointerInteraction:(id)a0 willExitRegion:(id)a1 animator:(id)a2;
- (void)setContentVerticalAlignment:(long long)a0;
- (void)setHighlighted:(BOOL)a0;
- (void)showMessage:(id)a0;
- (id)pointerInteraction:(id)a0 regionForRequest:(id)a1 defaultRegion:(id)a2;
- (void)_layoutLabels;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)endTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (void)didTapButton:(id)a0;
- (void)updateVisualStyling;
- (BOOL)beginTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (void)_updateButtonsVisiblity;
- (void)cancelTrackingWithEvent:(id)a0;
- (BOOL)continueTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)pointerInteraction:(id)a0 willEnterRegion:(id)a1 animator:(id)a2;
- (void)_springAnimate:(id /* block */)a0;
- (void)updateContentSizeCategory;
- (void)_updateSelectionVisiblity;
- (BOOL)isAccessibilityElement;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)accessibilityLabel;
- (void).cxx_destruct;
- (long long)_buttonLayoutAxis;
- (id)initForControlCenter;
- (void)_layoutSelectionView;
- (void)visualStylingProviderDidChange:(id)a0;
- (unsigned long long)accessibilityTraits;
- (void)setEnabled:(BOOL)a0;
- (void)_resetSelectionView;
- (void)layoutSubviews;
- (id)pointerInteraction:(id)a0 styleForRegion:(id)a1;
- (BOOL)accessibilityRespondsToUserInteraction;
- (id)accessibilityValue;
- (void)_animateGlyphStateSelected:(BOOL)a0;

@end
