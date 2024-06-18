@class NSTimer, UIView, NSArray, NSString, MediaControlsHapticPlayer, MediaControlsExpandableButtonOption, MTVisualStylingProvider, NSMutableArray, UILabel, MRUVisualStylingProvider;

@interface MediaControlsExpandableButton : UIControl <MRUVisualStylingProviderObserver, UIPointerInteractionDelegate>

@property (retain, nonatomic) NSMutableArray *buttons;
@property (retain, nonatomic) MediaControlsHapticPlayer *hapticPlayer;
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
@property (nonatomic) BOOL isControlCenter;
@property (retain, nonatomic) MTVisualStylingProvider *visualStylingProvider;
@property (retain, nonatomic) NSArray *options;
@property (readonly, nonatomic) MediaControlsExpandableButtonOption *selectedOption;
@property (nonatomic) long long selectedOptionIndex;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *disabledSubtitle;
@property (nonatomic) long long axis;
@property (nonatomic, getter=isExpanded) BOOL expanded;
@property (nonatomic) struct CGSize { double width; double height; } maximumExpandedSize;
@property (nonatomic) struct CGSize { double width; double height; } buttonImageSize;
@property (retain, nonatomic) MRUVisualStylingProvider *stylingProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)collapsedHeightWithImageHeight:(double)a0 maximumHeight:(double)a1;

- (void)pointerInteraction:(id)a0 willExitRegion:(id)a1 animator:(id)a2;
- (void)setContentVerticalAlignment:(long long)a0;
- (void)setHighlighted:(BOOL)a0;
- (void)updateSubtitle;
- (void)playFailedValueChangedEventHaptic;
- (void)showMessage:(id)a0;
- (id)pointerInteraction:(id)a0 regionForRequest:(id)a1 defaultRegion:(id)a2;
- (void)_layoutLabels;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)endTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (void)didTapButton:(id)a0;
- (void)playFailedValueChangedEventHapticWithMessage:(id)a0;
- (void)updateVisualStyling;
- (BOOL)beginTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (void)_updateButtonsVisiblity;
- (void)cancelTrackingWithEvent:(id)a0;
- (void)playValueChangedEventHaptic;
- (BOOL)continueTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)pointerInteraction:(id)a0 willEnterRegion:(id)a1 animator:(id)a2;
- (void)updateContentSizeCategory;
- (void)_updateSelectionVisiblity;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (long long)_buttonLayoutAxis;
- (id)initForControlCenter;
- (void)_layoutSelectionView;
- (void)visualStylingProviderDidChange:(id)a0;
- (void)updateGlyphSelectionState;
- (void)setEnabled:(BOOL)a0;
- (void)_resetSelectionView;
- (void)layoutSubviews;
- (id)pointerInteraction:(id)a0 styleForRegion:(id)a1;

@end
