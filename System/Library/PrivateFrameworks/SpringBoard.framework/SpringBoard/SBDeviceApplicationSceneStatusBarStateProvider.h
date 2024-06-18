@class UIApplicationSceneClientSettingsDiffInspector, NSString, SBDeviceApplicationSceneHandle, SBSUIInCallSceneClientSettingsDiffInspector, UIApplicationSceneSettingsDiffInspector;

@interface SBDeviceApplicationSceneStatusBarStateProvider : SBDeviceApplicationSceneStatusBarStateProvider_Base <SBDeviceApplicationSceneHandleObserver, SBDeviceApplicationSceneStatusBarStateProviderBaseSubclassesMustOverride, BSInvalidatable> {
    UIApplicationSceneClientSettingsDiffInspector *_appClientSettingsDiffInspector;
    UIApplicationSceneSettingsDiffInspector *_appSceneSettingsDiffInspector;
    SBSUIInCallSceneClientSettingsDiffInspector *_inCallSceneClientSettingsDiffInspector;
    BOOL _hasAttemptedInCallSceneClientSettingsDiffInspectorCreation;
    SBDeviceApplicationSceneHandle *_sceneHandle;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)statusBarStyleOverridesToSuppress;
- (id)overlayStatusBarData;
- (id)_initWithSceneHandle:(id)a0;
- (id)breadcrumbProvider;
- (double)_statusBarAlpha;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })statusBarAvoidanceFrame;
- (BOOL)sceneWantsDeviceOrientationEventsEnabled;
- (void)_handleStatusBarStyleOverridesToSuppressUpdate;
- (BOOL)_statusBarAppearsOutsideOfAJailedApp;
- (id)sceneToHandleStatusBarTapIfExists;
- (id)classicApplicationSceneHandleIfExists;
- (void)_performUpdateWith:(id)a0 actions:(id /* block */)a1;
- (long long)_statusBarStyleForPartWithIdentifier:(id)a0 suppressingInherited:(BOOL)a1;
- (long long)_statusBarStyle;
- (void)sceneHandle:(id)a0 didUpdateClientSettingsWithDiff:(id)a1 transitionContext:(id)a2;
- (long long)_fallbackInterfaceOrientation;
- (void)sceneHandle:(id)a0 didUpdateSettingsWithDiff:(id)a1 previousSettings:(id)a2;
- (BOOL)_statusBarAppearsOutsideOfAJailedAppCanChange;
- (long long)_defaultStatusBarStyle;
- (void)invalidate;
- (void).cxx_destruct;
- (long long)_statusBarOrientationGivenFallbackOrientation:(long long)a0;
- (id)statusBarSceneIdentifier;
- (BOOL)_statusBarAppearsOutsideOfAJailedAppInOrientation:(long long)a0;
- (BOOL)_suppressInheritedPartStyles;
- (BOOL)_statusBarHiddenGivenFallbackOrientation:(long long)a0;
- (void)dealloc;
- (BOOL)_anyObserverWants:(SEL)a0;
- (id)_statusBarPartStyles;
- (void)invalidateStatusBarSettings;

@end
