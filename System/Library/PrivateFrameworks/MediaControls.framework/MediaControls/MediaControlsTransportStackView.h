@class MediaControlsTransportButton, NSString, MPCPlayerResponse, MTVisualStylingProvider;
@protocol MediaControlsActionsDelegate;

@interface MediaControlsTransportStackView : UIView <MTVisualStylingProviderObservingPrivate>

@property (retain, nonatomic) MediaControlsTransportButton *tvRemoteButton;
@property (retain, nonatomic) MediaControlsTransportButton *leftButton;
@property (retain, nonatomic) MediaControlsTransportButton *middleButton;
@property (retain, nonatomic) MediaControlsTransportButton *rightButton;
@property (retain, nonatomic) MediaControlsTransportButton *languageOptionsButton;
@property (nonatomic) BOOL shouldShowTVRemoteButton;
@property (nonatomic) long long style;
@property (retain, nonatomic) MPCPlayerResponse *response;
@property (nonatomic, getter=isEmpty) BOOL empty;
@property (retain, nonatomic) MTVisualStylingProvider *visualStylingProvider;
@property (weak, nonatomic) id<MediaControlsActionsDelegate> actionsDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)providedStylesDidChangeForProvider:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)_createTransportButton;
- (void)_resetTransportButton:(id)a0;
- (void)_updateButtonConfiguration;
- (void)_updateButtonLayout;
- (void)_updateButtonVisualStyling:(id)a0;
- (void)_updateVisualStylingForButtons;
- (void)buttonHoldBegan:(id)a0;
- (void)buttonHoldReleased:(id)a0;
- (void)touchUpInsideCaptionsButton:(id)a0;
- (void)touchUpInsideHangdogButton:(id)a0;
- (void)touchUpInsideLeftButton:(id)a0;
- (void)touchUpInsideMiddleButton:(id)a0;
- (void)touchUpInsideRightButton:(id)a0;
- (void)updateOnRouteChange;

@end
