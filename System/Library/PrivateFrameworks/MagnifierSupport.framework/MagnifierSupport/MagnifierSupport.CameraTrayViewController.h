@interface MagnifierSupport.CameraTrayViewController : UIViewController {
    void /* unknown type, empty encoding */ captureDelegate;
    void /* unknown type, empty encoding */ settingsDelegate;
    void /* unknown type, empty encoding */ switchActivityDelegate;
    void /* unknown type, empty encoding */ $__lazy_storage_$_snapshotButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_settingsButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_snapshotModeButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_viewSnapshotsButton;
    void /* unknown type, empty encoding */ freezeFrameModeSubscription;
    void /* unknown type, empty encoding */ freezeFrameReviewSubscription;
    void /* unknown type, empty encoding */ $__lazy_storage_$_successfulMultiShotCaptureCount;
}

- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (BOOL)_canShowWhileLocked;
- (void)viewWillAppear:(BOOL)a0;
- (void)didTapDoneButton:(id)a0;
- (void)didTapSettingsButton:(id)a0;
- (void)didTapSnapshotButton:(id)a0;
- (void)didTapSnapshotModeButton:(id)a0;
- (void)didTapViewSnapshotsButton:(id)a0;

@end
