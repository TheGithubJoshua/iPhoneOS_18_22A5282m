@class NSString, SBUIPoseidonIconView, _UILegibilitySettings;
@protocol SBUIPoseidonContainerViewControllerLockStatusProvider, SBUIPoseidonContainerViewControllerDelegate;

@interface SBUIPoseidonContainerViewController : UIViewController <SBUIPoseidonIconViewDelegate> {
    SBUIPoseidonIconView *_testPoseidonIconView;
}

@property (weak, nonatomic) id<SBUIPoseidonContainerViewControllerDelegate> delegate;
@property (weak, nonatomic) id<SBUIPoseidonContainerViewControllerLockStatusProvider> authenticationInformationProvider;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings;
@property (nonatomic, getter=isAuthenticated) BOOL authenticated;
@property (nonatomic, getter=isBioLockout) BOOL bioLockout;
@property (nonatomic, getter=isScreenOn) BOOL screenOn;
@property (nonatomic) BOOL fingerOffSinceWake;
@property (nonatomic) int unlockSource;
@property (nonatomic) BOOL resignActive;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)loadView;
- (void)_setLocalTransformForOrientation:(long long)a0;
- (void)fillRestToOpenWithDuration:(double)a0;
- (void)viewDidLoad;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (id)initWithAuthenticationInformationProvider:(id)a0;
- (void).cxx_destruct;
- (void)resetRestToOpen;
- (BOOL)_canShowWhileLocked;
- (void)_setCounterTransformForOrientation:(long long)a0;
- (void)_updateRotation;
- (id)_poseidonIconView;
- (id)_testPoseidonIconView;
- (BOOL)coachingActive;
- (void)poseidonIconViewCoachingStateDidChange:(id)a0;
- (void)setTestPoseidonIconView:(id)a0;
- (void)showCoaching:(BOOL)a0;
- (void)startRestToOpenCoaching:(BOOL)a0 withCompletion:(id /* block */)a1;

@end