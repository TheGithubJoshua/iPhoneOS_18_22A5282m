@class GKNotificationBannerViewController, NSObject;
@protocol OS_dispatch_semaphore;

@interface GKNotificationBannerWindow : UIWindow

@property (retain, nonatomic) GKNotificationBannerViewController *currentBannerViewController;
@property (readonly, nonatomic) NSObject<OS_dispatch_semaphore> *bannerSemaphore;

+ (id)queue;
+ (id)bannerWindow;
+ (void)enqueBanner:(id)a0;

- (void)handlePan:(id)a0;
- (id)init;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)handleSingleTap:(id)a0;
- (BOOL)_canAffectStatusBarAppearance;
- (void).cxx_destruct;
- (BOOL)_canBecomeKeyWindow;
- (void)dealloc;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (BOOL)_includeInDefaultImageSnapshot;
- (void)_hideBanner:(id)a0 quickly:(BOOL)a1;
- (void)_showBanner:(id)a0;

@end
