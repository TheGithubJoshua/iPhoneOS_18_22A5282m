@interface WeatherMaps.SnapshotViewController : UIViewController {
    void /* unknown type, empty encoding */ snapshotConfiguration;
    void /* unknown type, empty encoding */ snapshotView;
    void /* unknown type, empty encoding */ initialLayoutHappened;
    void /* unknown type, empty encoding */ initialTraitCollectionIsAssigned;
    void /* unknown type, empty encoding */ willEnterForegroundObserver;
    void /* unknown type, empty encoding */ weatherMapNetworkReachabilityStateDidChangeObserver;
    void /* unknown type, empty encoding */ snapshotSizeOverride;
}

- (id)initWithCoder:(id)a0;
- (void)viewDidLayoutSubviews;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)didMoveToParentViewController:(id)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)handleVoiceOverStatusDidChangeWithNotification:(id)a0;
- (void).cxx_destruct;
- (void)handleInvertColorsStatusDidChangeWithNotification:(id)a0;
- (void)dealloc;

@end
