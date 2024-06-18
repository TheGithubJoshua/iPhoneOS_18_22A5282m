@class SiriSharedUICompactResultView, SiriSharedUIContentPlatterViewController;

@interface SiriSharedUICompactResultViewController : UIViewController

@property (readonly, nonatomic) SiriSharedUICompactResultView *compactResultView;
@property (copy, nonatomic) SiriSharedUIContentPlatterViewController *contentPlatterViewController;

- (void)loadView;
- (void).cxx_destruct;
- (BOOL)_canShowWhileLocked;

@end
