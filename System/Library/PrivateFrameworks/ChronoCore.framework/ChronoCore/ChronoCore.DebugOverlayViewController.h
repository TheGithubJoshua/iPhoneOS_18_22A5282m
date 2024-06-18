@interface ChronoCore.DebugOverlayViewController : UIViewController {
    void /* unknown type, empty encoding */ debugView;
    void /* unknown type, empty encoding */ debugText;
    void /* unknown type, empty encoding */ animationsPaused;
    void /* unknown type, empty encoding */ isSnapshotting;
}

- (id)initWithCoder:(id)a0;
- (id)init;
- (void)loadView;
- (void)_willEnterAlwaysOn;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (BOOL)_canShowWhileLocked;
- (void)_didExitAlwaysOn;
- (void)viewWillAppear:(BOOL)a0;

@end
