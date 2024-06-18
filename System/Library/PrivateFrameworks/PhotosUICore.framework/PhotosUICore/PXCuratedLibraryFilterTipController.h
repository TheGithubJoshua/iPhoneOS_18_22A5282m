@class NSObject, NSString, TPKContentController, UIViewController, TPKContent, PXCuratedLibraryGuestAssetTracker, UITraitCollection;
@protocol OS_dispatch_queue, PXCuratedLibraryFilterTipControllerDelegate;

@interface PXCuratedLibraryFilterTipController : NSObject <TPKContentControllerDelegate, PXCuratedLibraryGuestAssetTrackerDelegate, UIPopoverPresentationControllerDelegate, PXChangeObserver> {
    TPKContentController *_libraryFilterTipContentController;
    UIViewController *_presentedTipViewController;
    TPKContent *_presentedContent;
    unsigned long long _presentedTipType;
    BOOL _isTipContentDelegate;
    BOOL _hasScheduledSharedLibraryFilterTip;
}

@property (readonly, nonatomic) PXCuratedLibraryGuestAssetTracker *guestAssetTracker;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *tipKitAPIQueue;
@property (weak, nonatomic) id<PXCuratedLibraryFilterTipControllerDelegate> delegate;
@property (nonatomic) BOOL curatedLibraryIsVisible;
@property (copy, nonatomic) UITraitCollection *traitCollection;
@property (readonly, nonatomic) BOOL isPresentingTipView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)presentationControllerDidDismiss:(id)a0;
- (long long)adaptivePresentationStyleForPresentationController:(id)a0 traitCollection:(id)a1;
- (void)_startTimerForSharedLibraryFilterTip;
- (void)_sendTipDismissalAnalytics;
- (void)_sendTipPresentationAnalytics;
- (id)contentController:(id)a0 clientContextMapForKeys:(id)a1;
- (void)didChangeFilterState:(id)a0;
- (long long)adaptivePresentationStyleForPresentationController:(id)a0;
- (void)_dismissTipViewWithCompletion:(id /* block */)a0 clientInitiated:(BOOL)a1;
- (void)prepareForPopoverPresentation:(id)a0;
- (void)didLayoutAnchorView;
- (void)_presentSharedLibraryFilterTipIfPossible;
- (BOOL)_shouldShowFilterTipOfType:(unsigned long long)a0;
- (void)_donateCoreDuetSignalWithIdentifier:(id)a0;
- (id)contentController:(id)a0 contentView:(id)a1 iconForCustomizationID:(long long)a2;
- (id)initWithViewModel:(id)a0 layout:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_anchorViewRect;
- (void)userDidChangeLibraryFilterState;
- (void)guestAssetsTracker:(id)a0 isDisplayingGuestAssets:(BOOL)a1;
- (void)_updateCanReceiveContent:(BOOL)a0;
- (void).cxx_destruct;
- (void)dismissTipViewWithCompletion:(id /* block */)a0;
- (void)_presentTipViewControllerOfType:(unsigned long long)a0 forContent:(id)a1;
- (void)_updateControllerForSyndicatedAssetsTip;
- (void)guestAssetsTracker:(id)a0 canDisplayGuestAssets:(BOOL)a1;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)_cancelTimerForSharedLibraryTip;
- (void)contentController:(id)a0 didFinishWithContent:(id)a1 animated:(BOOL)a2;
- (void)didActivateAnchorView;
- (void)_sendTipActivationAnalytics;
- (void)contentController:(id)a0 contentDidBecomeAvailable:(id)a1 animated:(BOOL)a2;

@end
