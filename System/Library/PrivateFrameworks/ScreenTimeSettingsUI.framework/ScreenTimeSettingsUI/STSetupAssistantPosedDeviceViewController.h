@class UIImageView;

@interface STSetupAssistantPosedDeviceViewController : UIViewController

@property (readonly) BOOL isiPad;
@property (readonly) long long deviceSize;
@property (retain) UIImageView *deviceWithScreenImageView;

- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (BOOL)_isRTL;
- (id)_deviceWithScreenImage;
- (id)_setupGenericImage;
- (void)_stSetupAssistantPosedDeviceViewControllerCommonInit;

@end
