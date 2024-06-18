@class CSMagSafeAccessoryTrayView;

@interface CSMagSafeAccessoryTrayViewController : CSMagSafeAccessoryViewController

@property (retain, nonatomic) CSMagSafeAccessoryTrayView *trayView;
@property (nonatomic) BOOL isAnimatingPresentation;

- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void).cxx_destruct;
- (id)accessoryView;
- (id)initWithAccessory:(id)a0;
- (id)_trayColorForAccessory:(id)a0;
- (double)animationDurationBeforeDismissal;

@end
