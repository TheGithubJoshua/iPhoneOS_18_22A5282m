@class NSString, NSExtension;
@protocol NSCopying;

@interface _UNNotificationContentExtensionHostViewController : _UIRemoteViewController

@property (weak, nonatomic) NSExtension *extension;
@property (copy, nonatomic) id<NSCopying> extensionRequestIdentifier;
@property (copy, nonatomic) NSString *notificationRequestIdentifier;

- (void)viewServiceDidTerminateWithError:(id)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidAppear:(BOOL)a0;
- (void)setPreferredContentSize:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (id)description;
- (BOOL)_canShowWhileLocked;
- (void)viewWillAppear:(BOOL)a0;
- (BOOL)__shouldRemoteViewControllerFenceOperations;

@end
