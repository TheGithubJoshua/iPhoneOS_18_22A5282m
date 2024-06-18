@class SBBestAppSuggestion, UILongPressGestureRecognizer, SBSwitcherAppSuggestionBannerView, NSMutableSet, NSObject, UITapGestureRecognizer;
@protocol SBSwitcherAppSuggestionViewControllerDelegate, OS_dispatch_queue;

@interface SBSwitcherAppSuggestionViewController : UIViewController {
    SBSwitcherAppSuggestionBannerView *_bannerView;
    UITapGestureRecognizer *_tapGestureRecognizer;
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
    BOOL _presentingOrDismissingBanner;
    NSObject<OS_dispatch_queue> *_setSuggestionQueue;
    NSMutableSet *_pauseSuggestionUpdateReasons;
}

@property (nonatomic, getter=_isSuggestionQueueSuspended, setter=_setSuggestionQueueSuspended:) BOOL suggestionQueueSuspended;
@property (retain, nonatomic) SBBestAppSuggestion *bestAppSuggestion;
@property (nonatomic) BOOL showSuggestions;
@property (weak, nonatomic) id<SBSwitcherAppSuggestionViewControllerDelegate> delegate;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_offscreenRectForBottomBanner;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_idleOnscreenRectForBottomBanner;
- (void)loadView;
- (void)viewWillLayoutSubviews;
- (void)_updateBottomBannerWithCompletion:(id /* block */)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)_animateOutAndRemoveCurrentBottomBannerWithCompletion:(id /* block */)a0;
- (void)beginPausingSuggestionUpdatesForReason:(id)a0;
- (void)viewDidLoad;
- (void)_handleLongPress:(id)a0;
- (void)_handleBannerTap:(id)a0;
- (void)_evaluateSuggestionQueueSuspension;
- (void).cxx_destruct;
- (void)_activateCurrentSuggestion;
- (void)_setBestAppSuggestion:(id)a0 animationCompletion:(id /* block */)a1;
- (void)_activateBestAppSuggestion;
- (unsigned long long)_bannerStyle;
- (void)dealloc;
- (void)willMoveToParentViewController:(id)a0;
- (BOOL)_hasSuggestionBannerView;
- (void)_insertAndAnimateInBottomBannerForSuggestion:(id)a0 completion:(id /* block */)a1;
- (void)endPausingSuggestionUpdatesForReason:(id)a0;

@end
