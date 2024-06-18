@class SUICProgressEventViewController;

@interface WFInteractionCardProgressViewController : UIViewController

@property (retain, nonatomic) SUICProgressEventViewController *progressEventViewController;

- (void)loadView;
- (void)handleEvent:(unsigned long long)a0;
- (void).cxx_destruct;
- (BOOL)_canShowWhileLocked;

@end
