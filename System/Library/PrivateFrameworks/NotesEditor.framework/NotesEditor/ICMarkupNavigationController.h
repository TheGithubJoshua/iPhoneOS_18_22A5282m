@protocol ICMarkupDismissalDelegate;

@interface ICMarkupNavigationController : UINavigationController

@property (weak, nonatomic) id<ICMarkupDismissalDelegate> markupDelegate;

- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidLoad;
- (void).cxx_destruct;

@end
