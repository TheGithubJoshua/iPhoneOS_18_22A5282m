@protocol MKSystemControllerOpenURLDelegate;

@interface MKSystemController : NSObject

@property (weak, nonatomic) id<MKSystemControllerOpenURLDelegate> openURLDelegate;

+ (id)sharedInstance;

- (BOOL)reduceMotionEnabled;
- (BOOL)isInternalInstall;
- (int)userInterfaceIdiom;
- (double)screenScale;
- (BOOL)isDevicePluggedIn;
- (BOOL)openURL:(id)a0;
- (BOOL)isHiDPI;
- (BOOL)shouldCaptureMapViewGestureAnalytics;
- (BOOL)_isInSpotlight;
- (BOOL)supports3DImagery;
- (void)openUserActivity:(id)a0 withApplicationRecord:(id)a1 requireOptionKeyPromptUnlockDevice:(BOOL)a2 completionHandler:(id /* block */)a3;
- (void)openURL:(id)a0 fromScene:(id)a1 completionHandler:(id /* block */)a2;
- (void).cxx_destruct;
- (BOOL)_shouldUseLaunchServices;
- (BOOL)supportsPitchAPI;
- (BOOL)_isRunningInLockScreen;
- (struct CGSize { double x0; double x1; })screenSize;
- (BOOL)supports3DMaps;
- (id)_defaultOpenURLOptions;
- (BOOL)requiresRTT;
- (BOOL)overrideBlurStyle;
- (BOOL)supportsAlwaysOnCompass;
- (void)placeDialRequest:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)isWifiEnabled;
- (void)openURL:(id)a0 bundleIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)isPhone6PlusOrLarger;
- (void)openURL:(id)a0 completionHandler:(id /* block */)a1;

@end
