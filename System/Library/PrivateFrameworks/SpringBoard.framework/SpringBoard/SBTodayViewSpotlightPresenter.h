@class UIView, SBSearchPresenter, NSArray, UIScrollView, _SBTodaySpotlightViewController, NSString, SPUISearchBarController, _UILegibilitySettings, SBHHomePullToSearchSettings, UIViewController, SBFFeatherBlurView;
@protocol SBTodayViewSpotlightPresenterDelegate;

@interface SBTodayViewSpotlightPresenter : NSObject <SPUISearchBarDelegate, SBSearchPresenterDelegate, SBSpotlightPresentableViewControllerDelegate, SBLegacyTodayViewSpotlightPresentableViewControllerDelegate, SBHLegibility> {
    SBHHomePullToSearchSettings *_pullToSearchSettings;
}

@property (retain, nonatomic) SBSearchPresenter *presenter;
@property (retain, nonatomic) _SBTodaySpotlightViewController *spotlightMultiplexingViewController;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIScrollView *scrollView;
@property (weak, nonatomic) id<SBTodayViewSpotlightPresenterDelegate> delegate;
@property (retain, nonatomic) SBFFeatherBlurView *featherBlurView;
@property (retain, nonatomic) NSArray *searchBarGradientMaskLayers;
@property (readonly, nonatomic) SPUISearchBarController *searchBarViewController;
@property (readonly, nonatomic) UIViewController *spotlightViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings;

- (void)searchBarDidFocus;
- (id)backgroundViewForSpotlightPresentableViewController:(id)a0;
- (BOOL)wantsHomeAffordanceForSpotlightPresentableViewController:(id)a0;
- (double)searchTopOffsetForSearchPresenter:(id)a0;
- (void)scrollViewWillEndDragging:(id)a0;
- (void)searchPresenterDidPresentSearch:(id)a0;
- (void)searchPresenterWillDismissSearch:(id)a0 animated:(BOOL)a1;
- (id)searchPresentablesForPresenter:(id)a0;
- (void)searchPresenterDidDismissSearch:(id)a0;
- (BOOL)isPresenting;
- (void)spotlightPresentableViewControllerShouldDismiss:(id)a0;
- (BOOL)searchPresenterCanPresent:(id)a0;
- (void)_configureFeatherBlurMatchMoveAnimations;
- (id)searchAffordanceViewForSpotlightPresentableViewController:(id)a0;
- (void)presentSpotlightAnimated:(BOOL)a0;
- (void)dismissSpotlightAnimated:(BOOL)a0;
- (void)_updateFeatherBlurMaskLayers;
- (double)_topOffset;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)containerViewDidMoveToWindow:(id)a0;
- (void)layout;
- (id)backdropViewForLegacyTodayViewSpotlightPresentableViewController:(id)a0;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)a0;
- (id)_newSearchBackdropView;
- (id)initWithSearchBarViewController:(id)a0 containerView:(id)a1 scrollView:(id)a2 delegate:(id)a3;
- (void)_setUpFeatherBlur;
- (void)searchPresenterWillPresentSearch:(id)a0 animated:(BOOL)a1;
- (void)legacyTodayViewSpotlightPresentableViewControllerShouldDismiss:(id)a0;

@end
