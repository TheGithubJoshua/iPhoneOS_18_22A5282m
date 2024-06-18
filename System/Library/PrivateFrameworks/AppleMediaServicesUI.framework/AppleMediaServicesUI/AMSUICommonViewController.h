@class AMSUICommonView;

@interface AMSUICommonViewController : UIViewController

@property (nonatomic, getter=isMovingFromParentViewController, setter=setIsMovingFromParentViewController:) BOOL movingFromParentViewController;
@property (nonatomic, getter=isMovingToParentViewController, setter=setIsMovingToParentViewController:) BOOL movingToParentViewController;
@property (retain, nonatomic) AMSUICommonView *view;

- (void)_unregisterNotifications;
- (id)init;
- (void)loadView;
- (void)_registerNotifications;
- (void)dealloc;
- (void)setChildViewController:(id)a0;
- (void)unsetChildViewController:(id)a0;

@end
