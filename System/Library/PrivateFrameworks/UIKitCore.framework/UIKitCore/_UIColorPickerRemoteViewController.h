@class NSString;
@protocol _UIColorPickerRemoteViewControllerHost;

@interface _UIColorPickerRemoteViewController : _UIRemoteViewController <_UIColorPickerRemoteViewControllerHost>

@property (weak, nonatomic) id<_UIColorPickerRemoteViewControllerHost> _delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)exportedInterface;
+ (BOOL)__shouldHostedWindowMoveBetweenSecureAndInsecureMainScreen;
+ (id)serviceViewControllerInterface;

- (void)viewServiceDidTerminateWithError:(id)a0;
- (void).cxx_destruct;
- (BOOL)_canShowWhileLocked;
- (void)_colorPickerDidFinish;
- (void)_colorPickerViewServiceDidTerminateWithError:(id)a0;
- (void)_pickerDidDismissEyedropper;
- (void)_pickerDidFloatEyedropper;
- (void)_pickerDidSelectColor:(id)a0 colorspace:(id)a1 isVolatile:(BOOL)a2;
- (void)_pickerDidShowEyedropper;

@end
