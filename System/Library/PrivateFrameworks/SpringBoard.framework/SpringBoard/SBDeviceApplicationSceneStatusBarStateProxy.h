@class NSString, SBDeviceApplicationSceneStatusBarStateProvider, SBDeviceApplicationSceneHandle;

@interface SBDeviceApplicationSceneStatusBarStateProxy : SBDeviceApplicationSceneStatusBarStateProvider_Base <SBDeviceApplicationSceneStatusBarStateObserver, SBDeviceApplicationSceneStatusBarStateProviderBaseSubclassesMustOverride, BSInvalidatable> {
    SBDeviceApplicationSceneStatusBarStateProvider *_stateProvider;
    SBDeviceApplicationSceneHandle *_deviceApplicationSceneHandle;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)statusBarStyleOverridesToSuppress;
- (id)overlayStatusBarData;
- (id)breadcrumbProvider;
- (double)_statusBarAlpha;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })statusBarAvoidanceFrame;
- (void)sceneWithIdentifier:(id)a0 didChangeStatusBarAlphaTo:(double)a1;
- (BOOL)sceneWantsDeviceOrientationEventsEnabled;
- (BOOL)_statusBarAppearsOutsideOfAJailedApp;
- (void)sceneWithIdentifier:(id)a0 didChangeStatusBarStyleOverridesToSuppressTo:(unsigned long long)a1;
- (void)didInvalidateStatusBarDescriptionForSceneWithIdentifier:(id)a0;
- (id)sceneToHandleStatusBarTapIfExists;
- (id)classicApplicationSceneHandleIfExists;
- (long long)_statusBarStyleForPartWithIdentifier:(id)a0 suppressingInherited:(BOOL)a1;
- (void)sceneWithIdentifier:(id)a0 didChangeStatusBarOrientationTo:(long long)a1;
- (long long)_statusBarStyle;
- (long long)_fallbackInterfaceOrientation;
- (long long)_defaultStatusBarStyle;
- (void)sceneWithIdentifier:(id)a0 didChangeSceneInterfaceOrientationTo:(long long)a1;
- (void)invalidate;
- (void).cxx_destruct;
- (void)sceneWithIdentifier:(id)a0 didChangeStatusBarStyleTo:(long long)a1;
- (id)initWithDeviceApplicationSceneHandle:(id)a0;
- (long long)_statusBarOrientationGivenFallbackOrientation:(long long)a0;
- (id)statusBarSceneIdentifier;
- (void)sceneWithIdentifier:(id)a0 didChangeStatusBarAvoidanceFrameTo:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (BOOL)_suppressInheritedPartStyles;
- (void)sceneWithIdentifier:(id)a0 didChangeStatusBarStyleTo:(long long)a1 forPartWithIdentifier:(id)a2;
- (BOOL)_statusBarHiddenGivenFallbackOrientation:(long long)a0;
- (void)sceneWithIdentifier:(id)a0 didChangeStatusBarHiddenTo:(BOOL)a1 withAnimation:(long long)a2;
- (BOOL)_anyObserverWants:(SEL)a0;
- (id)_statusBarPartStyles;
- (void)invalidateStatusBarSettings;

@end
