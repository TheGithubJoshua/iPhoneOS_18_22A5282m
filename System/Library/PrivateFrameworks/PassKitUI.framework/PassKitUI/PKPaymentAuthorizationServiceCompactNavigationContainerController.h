@class LAUIPhysicalButtonView, LAUIHorizontalArrowView;

@interface PKPaymentAuthorizationServiceCompactNavigationContainerController : PKCompactNavigationContainerController {
    unsigned char _rotationCount;
    BOOL _attemptedSecondaryViewCreation;
    BOOL _cameraOrientationSupported;
    LAUIHorizontalArrowView *_cameraArrowView;
    LAUIPhysicalButtonView *_physicalButtonView;
}

@property (readonly, nonatomic) LAUIPhysicalButtonView *physicalButtonView;
@property (nonatomic) BOOL showPhysicalButtonIndicator;
@property (nonatomic) BOOL showCameraIndicator;

- (void)loadView;
- (void)viewWillLayoutSubviews;
- (int)_preferredStatusBarVisibility;
- (struct CGSize { double x0; double x1; })sizeForChildContentContainer:(id)a0 withParentContainerSize:(struct CGSize { double x0; double x1; })a1;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void).cxx_destruct;
- (BOOL)_canShowWhileLocked;
- (void)_createSecondaryViewsIfNecessary;
- (BOOL)_effectiveShowCameraIndicator;
- (BOOL)_effectiveShowPhysicalButtonIndicator;

@end
