@class SiriUIBackgroundBlurView;
@protocol SiriUIBackgroundBlurViewControllerDelegate;

@interface SiriUIBackgroundBlurViewController : UIViewController

@property (retain, nonatomic) SiriUIBackgroundBlurView *backgroundBlurView;
@property (nonatomic) BOOL backgroundBlurIsVisible;
@property (nonatomic) long long backgroundBlurVisibleReason;
@property (weak, nonatomic) id<SiriUIBackgroundBlurViewControllerDelegate> backgroundBlurViewControllerDelegate;

- (id)init;
- (id)initWithDelegate:(id)a0;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (BOOL)_canShowWhileLocked;
- (void)requestBackgroundBlurVisible:(BOOL)a0 forReason:(long long)a1;

@end
