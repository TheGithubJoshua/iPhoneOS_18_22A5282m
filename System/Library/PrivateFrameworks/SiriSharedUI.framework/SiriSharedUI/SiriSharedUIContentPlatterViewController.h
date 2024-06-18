@class NSArray, SiriSharedUIContentPlatterView;

@interface SiriSharedUIContentPlatterViewController : UIViewController

@property (retain, nonatomic) NSArray *contentViewControllers;
@property (readonly, nonatomic) SiriSharedUIContentPlatterView *contentPlatterView;

- (void)loadView;
- (void).cxx_destruct;
- (BOOL)_canShowWhileLocked;
- (void)appendSeparatorToViewControllers:(id)a0 forNextViewController:(id)a1;

@end
