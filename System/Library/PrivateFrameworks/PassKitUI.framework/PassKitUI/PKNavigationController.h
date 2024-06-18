@class NSString, UIImageView, UIVisualEffectView, UIView;

@interface PKNavigationController : UINavigationController <UINavigationControllerDelegate> {
    BOOL _hasExplicitlyDefinedSupportedInterfaceOrientations;
    unsigned long long _explicitlyDefinedSupportedInterfaceOrientations;
    UIView *_backgroundView;
    UIImageView *_wallpaperView;
    UIVisualEffectView *_blurView;
    BOOL _hasStatusBarStyleOverride;
    long long _statusBarStyleOverride;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithCoder:(id)a0;
- (id)init;
- (void)navigationController:(id)a0 willShowViewController:(id)a1 animated:(BOOL)a2;
- (void)viewWillLayoutSubviews;
- (long long)preferredStatusBarStyle;
- (id)initWithNavigationBarClass:(Class)a0 toolbarClass:(Class)a1;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (id)initWithRootViewController:(id)a0;
- (void).cxx_destruct;
- (BOOL)_canShowWhileLocked;
- (unsigned long long)supportedInterfaceOrientations;
- (void)navigationController:(id)a0 didShowViewController:(id)a1 animated:(BOOL)a2;
- (void)dealloc;
- (void)setSupportedInterfaceOrientations:(unsigned long long)a0;
- (void)_updateBarAppearanceForViewController:(id)a0;
- (void)_updateWithWallpaperImage:(id)a0;
- (void)setNeedsNavigationBarUpdate;
- (void)setupBackgroundViewWithBlurEffect:(long long)a0;
- (void)setupWallpaper;

@end
