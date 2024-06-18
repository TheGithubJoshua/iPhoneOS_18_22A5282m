@interface CNKSharedContentViewController : UIViewController <UIScrollViewDelegate, CNKFaceTimePiPSourceProviding, CNKSharedContentSourceInfoProviding, CNKScreenSharingStateObserving> {
    void /* unknown type, empty encoding */ participant;
    void /* unknown type, empty encoding */ scrollView;
    void /* unknown type, empty encoding */ sharedContentView;
    void /* unknown type, empty encoding */ previousViewModel;
    void /* unknown type, empty encoding */ previousScreenSnapshot;
    void /* unknown type, empty encoding */ avatarImageQueue;
}

@property (nonatomic, weak) void /* unknown type, empty encoding */ delegate;
@property (nonatomic) void /* unknown type, empty encoding */ isPipped;

- (void)scrollViewDidEndZooming:(id)a0 withView:(id)a1 atScale:(double)a2;
- (void)scrollViewDidZoom:(id)a0;
- (id)viewForZoomingInScrollView:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForRestoreAnimation;
- (void)getSharedContentSourceAvatarWithImageHandler:(id /* block */)a0;
- (struct CGSize { double x0; double x1; })preferredPiPContentAspectRatio;
- (BOOL)restoreViewControllerHierarchyWhenExitingPiP;
- (void)screenSharingStateMonitorDidUpdateScreenInfoForParticipant:(id)a0;
- (id)sharedContentSourceName;
- (id)viewControllerForPiP;
- (id)initWithCoder:(id)a0;
- (id)init;
- (void)viewDidLayoutSubviews;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void).cxx_destruct;

@end
