@class _UILegibilitySettings, NSString, SBSearchBar, UIViewController;
@protocol SBUISearchBarControlling;

@interface SBUISpotlightBarNavigationController : UINavigationController <UINavigationControllerDelegate>

@property (readonly) SBSearchBar *navigationBar;
@property (retain, nonatomic) UIViewController<SBUISearchBarControlling> *searchBarViewController;
@property (nonatomic, getter=isPullingToSearch) BOOL pullingToSearch;
@property (getter=isNavigationBarBottomTrailingCornerRounded) BOOL navigationBarBottomTrailingCornerRounded;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidDisappear:(BOOL)a0;
- (id)initWithRootViewController:(id)a0;
- (void).cxx_destruct;
- (BOOL)_canShowWhileLocked;
- (void)viewWillAppear:(BOOL)a0;
- (double)_statusBarHeightAdjustmentForCurrentOrientation;
- (id)initWithRootViewController:(id)a0 searchBarViewController:(id)a1;
- (void)setNavigationBarBlurProgress:(double)a0 animated:(BOOL)a1;

@end
