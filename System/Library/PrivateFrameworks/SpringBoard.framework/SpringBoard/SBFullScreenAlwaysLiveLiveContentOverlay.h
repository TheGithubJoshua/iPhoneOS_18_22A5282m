@class NSString, SBDeviceApplicationSceneHandle, SBDeviceApplicationSceneView, SBOrientationTransformWrapperView, UIView, UIApplicationSceneSettingsDiffInspector;
@protocol SBSwitcherLiveContentOverlayDelegate;

@interface SBFullScreenAlwaysLiveLiveContentOverlay : NSObject <BSInvalidatable, SBDeviceApplicationSceneHandleObserver, SBSceneViewPresentationConfiguring, SBFullScreenSwitcherSceneLiveContentOverlay> {
    SBOrientationTransformWrapperView *_transformWrapperView;
    SBDeviceApplicationSceneHandle *_sceneHandle;
    UIApplicationSceneSettingsDiffInspector *_sceneSettingsInspector;
    SBDeviceApplicationSceneView *_sceneView;
}

@property (nonatomic) long long containerOrientation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<SBSwitcherLiveContentOverlayDelegate> delegate;
@property (readonly, nonatomic) UIView *contentOverlayView;
@property (nonatomic, getter=isInsetForHomeAffordance) BOOL insetForHomeAffordance;
@property (readonly, nonatomic, getter=isAsyncRenderingEnabled) BOOL asyncRenderingEnabled;
@property (nonatomic) BOOL wantsEnhancedWindowingEnabled;
@property (nonatomic) BOOL resizesHostedContext;
@property (readonly, nonatomic) BOOL requiresLegacyRotationSupport;
@property (readonly, nonatomic) long long touchBehavior;
@property (nonatomic, getter=isDisplayLayoutElementActive) BOOL displayLayoutElementActive;

- (void)noteKeyboardFocusDidChangeToSceneID:(id)a0;
- (long long)preferredInterfaceOrientation;
- (BOOL)isContentUpdating;
- (void)setBlurViewIconScale:(double)a0;
- (id)overlaySceneHandle;
- (id)prepareOverlayForContentRotation;
- (id)contentViewController;
- (double)currentStatusBarHeight;
- (long long)trailingStatusBarStyle;
- (long long)leadingStatusBarStyle;
- (void)setAsyncRenderingEnabled:(BOOL)a0 withMinificationFilterEnabled:(BOOL)a1;
- (void)disableAsynchronousRenderingForNextCommit;
- (long long)overlayType;
- (void)setDimmed:(BOOL)a0;
- (void)updateDisplayLayoutElementWithBuilder:(id /* block */)a0;
- (unsigned long long)styleOverridesToSuppress;
- (void)sceneHandle:(id)a0 didUpdateSettingsWithDiff:(id)a1 previousSettings:(id)a2;
- (void)setMatchMovedToScene:(BOOL)a0;
- (long long)sceneViewPresentationPriority:(id)a0;
- (void)setTouchBehavior:(long long)a0;
- (void)invalidate;
- (void).cxx_destruct;
- (id)sceneViewPresentationIdentifier:(id)a0;
- (unsigned long long)supportedInterfaceOrientations;
- (void)configureWithWorkspaceEntity:(id)a0 referenceFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 contentOrientation:(long long)a2 containerOrientation:(long long)a3 layoutRole:(long long)a4 sbsDisplayLayoutRole:(long long)a5 spaceConfiguration:(long long)a6 floatingConfiguration:(long long)a7 hasClassicAppOrientationMismatch:(BOOL)a8 sizingPolicy:(long long)a9;
- (void)setLiveContentBlurEnabled:(BOOL)a0 duration:(double)a1 blurDelay:(double)a2 iconViewScale:(double)a3 began:(id /* block */)a4 completion:(id /* block */)a5;
- (void)setUsesBrightSceneViewBackgroundMaterial:(BOOL)a0;
- (id)liveSceneIdentityToken;
- (void)setStatusBarHidden:(BOOL)a0 nubViewHidden:(BOOL)a1 animator:(id /* block */)a2;
- (id)initWithSceneHandle:(id)a0 referenceSize:(struct CGSize { double x0; double x1; })a1 containerOrientation:(long long)a2;

@end
