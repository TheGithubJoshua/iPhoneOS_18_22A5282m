@class NSString, SBDeviceApplicationSceneHandle, _UIStatusBarData, SBDeviceApplicationSceneStatusBarBreadcrumbProvider, FBScene, NSMutableArray;

@interface SBDeviceApplicationSceneStatusBarStateProvider_Base : NSObject <SBApplicationSceneStatusBarDescribingInternal, SBDeviceApplicationSceneStatusBarStateProviderBaseSubclassesMustOverride, SBApplicationSceneStatusBarDescribing> {
    NSMutableArray *_observers;
}

@property (readonly, nonatomic) long long statusBarStyle;
@property (readonly, nonatomic) long long defaultStatusBarStyle;
@property (readonly, nonatomic) BOOL statusBarHidden;
@property (readonly, nonatomic) double statusBarAlpha;
@property (readonly, nonatomic) long long statusBarOrientation;
@property (readonly, nonatomic) unsigned long long statusBarStyleOverridesToSuppress;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } statusBarAvoidanceFrame;
@property (readonly, nonatomic) BOOL sceneWantsDeviceOrientationEventsEnabled;
@property (readonly, nonatomic) NSString *statusBarSceneIdentifier;
@property (readonly, nonatomic) _UIStatusBarData *overlayStatusBarData;
@property (readonly, nonatomic) SBDeviceApplicationSceneStatusBarBreadcrumbProvider *breadcrumbProvider;
@property (readonly, nonatomic) SBDeviceApplicationSceneHandle *classicApplicationSceneHandleIfExists;
@property (readonly, nonatomic) FBScene *sceneToHandleStatusBarTapIfExists;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)statusBarPartStyles;
- (id)_observerRecords;
- (double)_statusBarAlpha;
- (void)enumerateObserversWithBlock:(id /* block */)a0;
- (id)init;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (BOOL)_statusBarAppearsOutsideOfAJailedApp;
- (long long)_statusBarStyleForPartWithIdentifier:(id)a0 suppressingInherited:(BOOL)a1;
- (id)_allObservers;
- (long long)_statusBarStyle;
- (id)succinctDescription;
- (void)removeStatusBarObserver:(id)a0;
- (long long)_fallbackInterfaceOrientation;
- (void)addStatusBarObserver:(id)a0;
- (long long)_defaultStatusBarStyle;
- (void).cxx_destruct;
- (id)succinctDescriptionBuilder;
- (long long)statusBarStyleForPartWithIdentifier:(id)a0;
- (long long)_statusBarOrientationGivenFallbackOrientation:(long long)a0;
- (BOOL)SB_conformsToSBApplicationSceneStatusBarDescribing;
- (BOOL)_suppressInheritedPartStyles;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (BOOL)_statusBarHiddenGivenFallbackOrientation:(long long)a0;
- (id)_statusBarPartStyles;

@end
