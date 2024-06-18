@class NSUUID, UIViewController;
@protocol _SBUIPopoverExtensionHostInterface, SBUIPopoverExtension;

@interface SBUIPopoverExtensionRemoteViewController : UIViewController <_SBUIPopoverExtensionRemoteInterface> {
    NSUUID *_instanceIdentifier;
}

@property (retain, nonatomic) id<_SBUIPopoverExtensionHostInterface> hostService;
@property (retain, nonatomic) UIViewController<SBUIPopoverExtension> *extensionViewController;

+ (BOOL)_isSecureForRemoteViewService;
+ (id)_exportedInterface;
+ (id)_remoteViewControllerInterface;

- (void)addChildViewController:(id)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidAppear:(BOOL)a0;
- (void).cxx_destruct;
- (BOOL)_canShowWhileLocked;
- (void)dealloc;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)_willAppearInRemoteViewController:(id)a0;
- (void)beginRequestWithExtensionContext:(id)a0;
- (void)_invalidateSBUIPopoverExtension;
- (void)_setupChildViewController:(id)a0;
- (void)_updateForBundleIdentifier:(id)a0;
- (void)_updateForWidgetConfiguration:(id)a0;
- (id)popoverExtensionContext;

@end
