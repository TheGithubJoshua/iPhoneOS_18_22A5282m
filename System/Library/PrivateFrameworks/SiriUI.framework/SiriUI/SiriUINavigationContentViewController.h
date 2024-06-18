@class SiriSharedUIContentPlatterViewController, UIViewController, NSString;

@interface SiriUINavigationContentViewController : UIViewController <SiriSharedUIContentPlatterViewControllerContaining>

@property (retain, nonatomic) UIViewController *contentViewController;
@property (nonatomic, getter=isContentLayoutEnabled) BOOL contentLayoutEnabled;
@property (readonly, nonatomic) SiriSharedUIContentPlatterViewController *contentPlatterViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)loadView;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (BOOL)_canShowWhileLocked;
- (id)title;
- (BOOL)hasContentAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)_navigationContentView;
- (void)contentViewDidUpdateSize;

@end
