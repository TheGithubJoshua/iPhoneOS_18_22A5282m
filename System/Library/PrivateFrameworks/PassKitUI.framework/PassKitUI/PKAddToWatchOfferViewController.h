@class UIView, PKHeroCardWatchExplainationHeaderView, PKPaymentPass;

@interface PKAddToWatchOfferViewController : PKExplanationViewController {
    UIView *_interactionDisabledView;
    PKHeroCardWatchExplainationHeaderView *_heroView;
}

@property (readonly, retain, nonatomic) PKPaymentPass *pass;

- (void)loadView;
- (void)viewWillLayoutSubviews;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (unsigned long long)edgesForExtendedLayout;
- (void)_addLater;
- (void)_addToWatch;
- (void)_clearInteractionDisabledView;
- (void)_configureNavigationItem;
- (void)_setIdleTimerDisabled:(BOOL)a0;
- (void)addToWatchOfferViewControllerDidNotRequestToAddToWatch;
- (void)addToWatchOfferViewControllerDidRequestToAddToWatch;
- (id)initWithPass:(id)a0 context:(long long)a1;
- (void)showSpinner:(BOOL)a0;

@end
