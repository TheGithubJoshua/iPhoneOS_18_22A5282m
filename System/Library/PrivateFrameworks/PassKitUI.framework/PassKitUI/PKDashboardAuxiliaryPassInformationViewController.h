@class PKDashboardViewControllerFooterContainer, NSString, UIButton, UIImageView, PKContactAvatarManager, PKAlignedContentContainerView, NSObject, PKDashboardViewControllerFooterView, PKAnimatedNavigationBarTitleView, PKDashboardDetailHeaderItemPresenter, NSIndexPath;
@protocol OS_dispatch_source;

@interface PKDashboardAuxiliaryPassInformationViewController : PKDashboardViewController {
    PKDashboardViewControllerFooterView *_footer;
    PKDashboardViewControllerFooterContainer *_footerContainer;
    PKAnimatedNavigationBarTitleView *_titleView;
    UIImageView *_titleIconImageView;
    PKDashboardDetailHeaderItemPresenter *_headerPresenter;
    PKContactAvatarManager *_contactAvatarManager;
    BOOL _isHeaderPinned;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _lastContentInset;
    double _headerHeight;
    NSIndexPath *_headerIndexPath;
    double _merchantHeaderAnimationProgress;
    NSString *_titleText;
    BOOL _loadingMapsViewController;
    NSObject<OS_dispatch_source> *_loadingMapsTimer;
    PKAlignedContentContainerView *_detailsButtonContainer;
    PKAlignedContentContainerView *_phoneButtonContainer;
    PKAlignedContentContainerView *_messageButtonContainer;
    UIButton *_detailsButton;
    UIButton *_phoneButton;
    UIButton *_messageButton;
}

- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (void)viewDidLayoutSubviews;
- (void)viewWillLayoutSubviews;
- (void)updateContent;
- (id)_barButtonItems;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)_handleInfoButtonTapped;
- (void)_handleMessageButtonTapped;
- (void)_handlePhoneButtonTapped;
- (BOOL)_shouldBlurButtons;
- (void)_showMapsDetailsViewController;
- (void)_updateButtonConfigurationsDisablingBlur:(BOOL)a0;
- (void)_updateHeaderCellWithAnimationProgress:(id)a0;
- (void)_updateNavigationBarIconForNavigationBarAppeared:(BOOL)a0;
- (id)initWithItem:(id)a0 forPass:(id)a1;
- (struct { BOOL x0; long long x1; })pkui_navigationStatusBarStyleDescriptor;

@end
