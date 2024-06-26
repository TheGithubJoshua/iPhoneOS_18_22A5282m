@class NSString, UIWindow, UIAlertController;

@interface MPVolumeSettingsController : UIViewController {
    NSString *_audioCategory;
    UIAlertController *_alertController;
}

@property (weak, nonatomic) UIWindow *hostingWindow;
@property (weak, nonatomic) UIWindow *previousWindow;

- (void)viewDidAppear:(BOOL)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)presentAlertControllerInWindow:(id)a0;
- (void)_flip;
- (void)_keyWindowDidChange:(id)a0;
- (void)dismissAlertController;
- (id)initWithAudioCategory:(id)a0;

@end
