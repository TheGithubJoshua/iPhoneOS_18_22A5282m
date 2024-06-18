@interface PKProgressContentViewController : UIViewController

@property (nonatomic) double progress;

- (void)loadView;
- (void)viewDidLayoutSubviews;
- (id)_contentView;
- (BOOL)_canShowWhileLocked;

@end
