@class NSDateComponentsFormatter, MTCCTimer, CADisplayLink, NSString, UILabel, NSMutableArray, MTCCRoundButton;
@protocol MTCCTimerBackgroundViewControllerDelegate;

@interface MTCCTimerBackgroundViewController : UIViewController <_UICursorInteractionDelegate>

@property (retain, nonatomic) MTCCRoundButton *button;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *timeLabel;
@property (retain, nonatomic) CADisplayLink *displayLink;
@property (retain, nonatomic) NSMutableArray *currentConstraints;
@property (retain, nonatomic) NSDateComponentsFormatter *dateComponentsFormatter;
@property (weak, nonatomic) id<MTCCTimerBackgroundViewControllerDelegate> delegate;
@property (copy, nonatomic) MTCCTimer *timer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)displayLinkTick:(id)a0;
- (id)init;
- (void)setupRegularFonts;
- (void)viewWillLayoutSubviews;
- (void)setupConstraints;
- (void)setupFonts;
- (void)buttonTapped:(id)a0;
- (void)viewDidLoad;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)_reloadForCurrentState;
- (id)portraitConstraints;
- (void).cxx_destruct;
- (void)setupAxFonts;
- (id)cursorInteraction:(id)a0 styleForRegion:(id)a1;
- (id)cursorInteraction:(id)a0 regionForRequest:(id)a1 defaultRegion:(id)a2;
- (void)handleContentSizeChange:(id)a0;
- (BOOL)_canShowWhileLocked;
- (id)accessibilityCappedFontForStyle:(id)a0;
- (void)dealloc;
- (void)_updateLabels;
- (id)landscapeConstraints;

@end
