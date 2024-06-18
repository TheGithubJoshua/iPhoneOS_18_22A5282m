@class MRUTransportControls, NSTimer, MRUTransportButton, MRUVisualStylingProvider;
@protocol MRUNowPlayingTransportControlsViewDelegate;

@interface MRUNowPlayingTransportControlsView : UIView

@property (retain, nonatomic) MRUTransportButton *leadingButton;
@property (copy, nonatomic) id /* block */ leadingButtonHandler;
@property (retain, nonatomic) MRUTransportButton *leftButton;
@property (retain, nonatomic) MRUTransportButton *centerButton;
@property (retain, nonatomic) MRUTransportButton *rightButton;
@property (nonatomic) unsigned long long leftButtonState;
@property (retain, nonatomic) NSTimer *leftButtonAnimationTimer;
@property (nonatomic) unsigned long long rightButtonState;
@property (retain, nonatomic) NSTimer *rightButtonAnimationTimer;
@property (weak, nonatomic) id<MRUNowPlayingTransportControlsViewDelegate> delegate;
@property (retain, nonatomic) MRUTransportControls *transportControls;
@property (readonly, nonatomic) MRUTransportButton *routingButton;
@property (retain, nonatomic) MRUVisualStylingProvider *stylingProvider;
@property (nonatomic) long long layout;
@property (nonatomic) BOOL showTVRemoteButton;
@property (nonatomic) BOOL showRoutingButton;
@property (nonatomic, getter=isDimmed) BOOL dimmed;

- (void)updateVisibility;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)didSelectRightButton:(id)a0;
- (void)releasedHoldLeftButton:(id)a0;
- (void)releasedHoldRightButton:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)configureLeadingButton;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (BOOL)showLeadingButton;
- (void)didSelectRoutingButton:(id)a0;
- (void)beganHoldRightButton:(id)a0;
- (void)didSelectLeftButton:(id)a0;
- (void).cxx_destruct;
- (void)beganHoldLeftButton:(id)a0;
- (void)didSelectLeadingButton:(id)a0;
- (void)didSelectCenterButton:(id)a0;
- (void)layoutSubviews;
- (void)updateImageConfiguration;

@end
