@interface iCloudQuotaUI.RemoteExtensionHostViewController : UIViewController <_EXHostViewControllerDelegate> {
    void /* unknown type, empty encoding */ host;
    void /* unknown type, empty encoding */ $__lazy_storage_$_hostViewController;
    void /* unknown type, empty encoding */ appExtension;
}

- (id)initWithCoder:(id)a0;
- (void)loadView;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (void)hostViewControllerDidActivate:(id)a0;
- (void)hostViewControllerWillDeactivate:(id)a0 error:(id)a1;

@end
