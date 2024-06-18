@class UIViewController;
@protocol VNDocumentCameraViewControllerDelegate;

@interface VNDocumentCameraViewController : UIViewController

@property (class, readonly, nonatomic, getter=isSupported) BOOL supported;

@property (retain, nonatomic, setter=setChildViewController:) UIViewController *childViewController;
@property (weak, nonatomic) id<VNDocumentCameraViewControllerDelegate> delegate;

+ (id)newDefaultViewController;
+ (id)newInProcessViewController;
+ (id)newViewServiceViewController;

- (id)initWithCoder:(id)a0;
- (id)init;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (BOOL)prefersStatusBarHidden;
- (void).cxx_destruct;
- (BOOL)_canShowWhileLocked;
- (id)initWithChildViewController:(id)a0;

@end
