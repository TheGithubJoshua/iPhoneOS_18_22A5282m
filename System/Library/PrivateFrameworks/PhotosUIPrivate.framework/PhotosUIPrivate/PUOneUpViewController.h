@class PUAssetDisplayDescriptorNavigationRequest, TPKContent, CEKBadgeTextView, UIScrollView, PUOneUpVisualImageAnalyzingController, NSUserActivity, NSMutableSet, PUInteractiveSwipeDismissalController, PULoadingIndicatorController, PUInteractivePinchDismissalController, PUOneUpBarsController, PUBrowsingSession, PUBrowsingBackgroundTileViewController, PUAccessoryVisibilityInteractionController, PUAggregateDictionaryTracer, UIViewController, PUReviewScreenTopBarTileViewController, PUOneUpSuggestionsController, PXFloatingCardPresentationController, PUOneUpGestureRecognizerCoordinator, TPKContentController, PUParallaxComputer, PUOverOneUpPresentationSession, NSArray, PUReviewScreenBarsModel, PUReviewScreenScrubberBarTileViewController, PUBrowsingOneUpVisibilityHelper, PUDisplayLocationProvider, PUMenuActionController, NSString, NSObject, PUOneUpViewControllerSpec, PXUserEventTracker, PUTilingView, PUDoubleTapZoomController, NSTimer, PUReviewScreenControlBarTileViewController, PUOneUpAccessoryViewControllersManager;
@protocol OS_dispatch_queue, PUOneUpEventTracker, PUAccessoryContentViewController;

@interface PUOneUpViewController : UIViewController <PUViewControllerSpecChangeObserver, PUBrowsingViewModelChangeObserver, PUTilingViewTileSource, PUTilingViewTileTransitionDelegate, PUTilingViewScrollDelegate, UIScrollViewDelegate, PUOneUpTilingLayoutDelegate, PUInteractiveDismissalControllerDelegate, PUBarsControllerDelegate, PUOneUpBarsControllerDelegate, PUUserTransformTileViewControllerDelegate, PUPlayButtonTileViewControllerDelegate, PUBadgeTileViewControllerDelegate, PUDoubleTapZoomControllerDelegate, PUAccessoryVisibilityInteractionControllerDelegate, PHAirPlayControllerContentProvider, PUTilingViewTileUseDelegate, PUAccessoryTileViewControllerDelegate, PUOneUpAccessoryViewControllersManagerDelegate, PUOverOneUpPresentationSessionDelegate, PUOverOneUpPresentationSessionViewController, PUOneUpGestureRecognizerCoordinatorDelegate, PUOneUpAssetTransitionViewController, PUSyndicationAttributionTileViewControllerDelegate, PUAssetDisplayDescriptorNavigator, PXSettingsKeyObserver, PXDiagnosticsEnvironment, PUIrisImageTileViewControllerDelegate, PXPurgeableController, PXContextualNotificationDelegate, PUOneUpSuggestionsControllerDelegate, PUMenuActionControllerDelegate, PUAssetActionPerformerDelegate, PXForcedDismissableViewController, PULivePhotoVideoOverlayTileViewControllerDelegate, TPKContentControllerDelegate, PUPeopleTileDelegate, PXFloatingCardContainer, PXFloatingCardPresentationControllerDelegate, PXPreferencesObserver, PUImageTileViewControllerPresentingDelegate, PXContentPrivacyAuthenticationContext, PXLoadingStatusManagerObserver, PUTilingViewControllerTransitionEndPoint> {
    struct { BOOL suggestionController; } _needsUpdateFlags;
    NSString *_scrubbingIdentifier;
    unsigned long long _actionTypeToPerformInViewDidAppear;
}

@property (readonly, nonatomic) unsigned long long _options;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *tipKitQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *preheatAssetsQueue;
@property (nonatomic, setter=_setNeedsUpdateSpec:) BOOL _needsUpdateSpec;
@property (nonatomic, setter=_setNeedsUpdateBarsController:) BOOL _needsUpdateBarsController;
@property (nonatomic, setter=_setNeedsUpdatePreloadInsets:) BOOL _needsUpdatePreloadInsets;
@property (nonatomic, setter=_setNeedsUpdateLayout:) BOOL _needsUpdateLayout;
@property (nonatomic, setter=_setNeedsUpdateEditMode:) BOOL _needsUpdateEditMode;
@property (nonatomic, setter=_setNeedsUpdatePreferredContentSize:) BOOL _needsUpdatePreferredContentSize;
@property (nonatomic, setter=_setNeedsUpdateVideoPlayer:) BOOL _needsUpdateVideoPlayer;
@property (nonatomic, setter=_setNeedsUpdateUserActivity:) BOOL _needsUpdateUserActivity;
@property (nonatomic, setter=_setNeedsUpdateAccessoryView:) BOOL _needsUpdateAccessoryView;
@property (nonatomic, setter=_setNeedsUpdateTipPopovers:) BOOL _needsUpdateTipsPopover;
@property (nonatomic, setter=_setHasShownRelevantTip:) BOOL _hasShownRelevantTip;
@property (nonatomic, setter=_setShouldShowInfoButtonTip:) BOOL _shouldShowInfoButtonTip;
@property (nonatomic, setter=_setShouldShowLivePhotoEffectTip:) BOOL _shouldShowLivePhotoEffectTip;
@property (nonatomic, setter=_setShouldShowSyndicatedPhotoTip:) BOOL _shouldShowSydicatedPhotoTip;
@property (nonatomic, setter=_setShouldShowActionsMenuPhotoTip:) BOOL _shouldShowActionsMenuPhotoTip;
@property (readonly, nonatomic) PUOneUpViewControllerSpec *_spec;
@property (nonatomic, setter=_setLayoutReferenceSize:) struct CGSize { double width; double height; } _layoutReferenceSize;
@property (nonatomic, setter=_setLayoutSafeAreaInsets:) struct UIEdgeInsets { double top; double left; double bottom; double right; } _layoutSafeAreaInsets;
@property (nonatomic) int appearState;
@property (retain, nonatomic, setter=_setTilingView:) PUTilingView *_tilingView;
@property (readonly, nonatomic) PUOneUpBarsController *_barsController;
@property (readonly, nonatomic) PUInteractiveSwipeDismissalController *_interactiveSwipeDismissalController;
@property (readonly, nonatomic) PUInteractivePinchDismissalController *_interactivePinchDismissalController;
@property (readonly, nonatomic) PUDoubleTapZoomController *_doubleTapZoomController;
@property (readonly, nonatomic) PUOneUpGestureRecognizerCoordinator *_gestureRecognizerCoordinator;
@property (retain, nonatomic, setter=_setBackgroundTileViewController:) PUBrowsingBackgroundTileViewController *_backgroundTileViewController;
@property (retain, nonatomic, setter=_setReviewScreenScrubberBarTileViewController:) PUReviewScreenScrubberBarTileViewController *_reviewScreenScrubberBarTileViewController;
@property (retain, nonatomic, setter=_setReviewScreenControlBarTileViewController:) PUReviewScreenControlBarTileViewController *_reviewScreenControlBarTileViewController;
@property (retain, nonatomic, setter=_setReviewScreenTopBarTileViewController:) PUReviewScreenTopBarTileViewController *_reviewScreenTopBarTileViewController;
@property (retain, nonatomic, setter=_setReviewScreenBarsModel:) PUReviewScreenBarsModel *_reviewScreenBarsModel;
@property (nonatomic, setter=_setWindowInterfaceOrientation:) long long _windowInterfaceOrientation;
@property (retain, nonatomic, setter=_setSecondScreenBrowser:) PUOneUpViewController *_secondScreenBrowser;
@property (weak, nonatomic, setter=_setMainOneUpForSecondScreenBrowser:) PUOneUpViewController *_mainOneUpForSecondScreenBrowser;
@property (readonly, nonatomic) BOOL _isPresentedForSecondScreen;
@property (readonly, nonatomic) BOOL _prefersCompactLayoutForSplitScreen;
@property (retain, nonatomic, setter=_setChromeAutoHideTimer:) NSTimer *_chromeAutoHideTimer;
@property (retain, nonatomic, setter=_setHiddenTilesController:) NSArray *_hiddenTilesController;
@property (retain, nonatomic, setter=_setTileKindsToHide:) NSArray *_tileKindsToHide;
@property (retain, nonatomic, setter=_setOverOneUpPresentationSession:) PUOverOneUpPresentationSession *_overOneUpPresentationSession;
@property (nonatomic, setter=_setInitialActivity:) unsigned long long _initialActivity;
@property (retain, nonatomic, setter=_setCurrentNavigationRequest:) PUAssetDisplayDescriptorNavigationRequest *_currentNavigationRequest;
@property (nonatomic, setter=_setPendingViewTransitionSize:) struct CGSize { double width; double height; } _pendingViewTransitionSize;
@property (nonatomic, setter=_setPreloadInsetsBasedOffViewWidth:) double _preloadInsetsBasedOffViewWidth;
@property (nonatomic, setter=_setIrisPlaying:) BOOL _isIrisPlaying;
@property (nonatomic, setter=_setShouldDisableTransitionsUntilAppeared:) BOOL _shouldDisableTransitionsUntilAppeared;
@property (readonly, nonatomic) PUParallaxComputer *_parallaxComputer;
@property (nonatomic, setter=_setSuppressBackdropColorSettings:) BOOL _suppressColorSettings;
@property (readonly, nonatomic) PUOneUpAccessoryViewControllersManager *_accessoryViewControllersManager;
@property (readonly, nonatomic) PUAccessoryVisibilityInteractionController *_accessoryVisibilityInteractionController;
@property (nonatomic, setter=_setShouldShowAccessoryAfterUnlock:) BOOL _shouldShowAccessoryAfterUnlock;
@property (readonly, nonatomic) PULoadingIndicatorController *loadingIndicatorController;
@property (readonly, nonatomic) PUAggregateDictionaryTracer *aggregateDictionaryTracer;
@property (readonly, nonatomic) PXUserEventTracker *userEventTracker;
@property (readonly, nonatomic) id<PUOneUpEventTracker> eventTracker;
@property (readonly, nonatomic) PUOneUpSuggestionsController *suggestionController;
@property (nonatomic, setter=_setDidPlayCurrentLivePhoto:) BOOL _didPlayCurrentLivePhoto;
@property (retain, nonatomic) NSUserActivity *siriActionActivity;
@property (retain, nonatomic) CEKBadgeTextView *originalBadgeView;
@property (nonatomic, setter=_setPrefersHomeIndicatorHidden:) BOOL _prefersHomeIndicatorHidden;
@property (retain, nonatomic) PUBrowsingOneUpVisibilityHelper *browsingOneUpVisibilityHelper;
@property (readonly, nonatomic) NSMutableSet *activeVideoTileControllers;
@property (readonly, nonatomic) BOOL videoTilesCanPlayVideo;
@property (retain, nonatomic) TPKContentController *tipContentController;
@property (retain, nonatomic) TPKContent *tipContent;
@property (nonatomic) long long detailsBecameVisibleSignPost;
@property (readonly, nonatomic) PUOneUpVisualImageAnalyzingController *visualImageAnalyzingController;
@property (readonly, nonatomic) BOOL isFloatingInfoPanelPresented;
@property (weak, nonatomic) UIViewController<PUAccessoryContentViewController> *currentFloatingInfoPanelAccessoryViewController;
@property (retain, nonatomic) NSString *uuidOfAssetPresentedInFloatingInfoPanel;
@property (nonatomic) unsigned long long touchingGestureRecognizerStateBeginID;
@property (retain, nonatomic) PUDisplayLocationProvider *lastLivePhotoGestureLocationProvider;
@property (nonatomic, setter=setPresentedForPreview:) BOOL isPresentedForPreview;
@property (nonatomic) BOOL appearanceTransitionAnimationsDisabled;
@property (nonatomic, setter=setAllowsPreviewActions:) BOOL allowsPreviewActions;
@property (readonly, nonatomic) long long presentationOrigin;
@property (readonly, nonatomic) UIScrollView *ppt_mainScrollView;
@property (readonly, nonatomic) PUOneUpBarsController *ppt_barsController;
@property (readonly, nonatomic) PUOverOneUpPresentationSession *ppt_overOneUpPresentationSession;
@property (readonly, nonatomic) PUMenuActionController *menuActionController;
@property (readonly, nonatomic) UIViewController *ppt_currentAccessoryViewController;
@property (copy, nonatomic) NSArray *textsToHighlight;
@property (copy, nonatomic) NSArray *assetUUIDsAllowedToHighlightText;
@property (readonly, nonatomic) BOOL wantsDocumentMenu;
@property (readonly, nonatomic) BOOL wantsActionsMenu;
@property (readonly, nonatomic) PUBrowsingSession *browsingSession;
@property (copy, nonatomic) id /* block */ unlockDeviceStatus;
@property (copy, nonatomic) id /* block */ unlockDeviceHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) PXFloatingCardPresentationController *cardPresentationController;
@property (readonly, nonatomic) NSString *authenticationTitle;
@property (readonly, nonatomic) NSString *passcodeAuthenticationReason;
@property (readonly, nonatomic) NSString *authenticationContextIdentifier;

- (id)initWithCoder:(id)a0;
- (long long)preferredStatusBarUpdateAnimation;
- (void)_updateLayoutIfNeeded;
- (unsigned long long)routingOptionsForDestination:(id)a0;
- (void)_contentSizeCategoryDidChange:(id)a0;
- (void)viewModel:(id)a0 didChange:(id)a1;
- (BOOL)prefersHomeIndicatorAutoHidden;
- (void)navigateToDestination:(id)a0 options:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (void)_updateIfNeeded;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (BOOL)_needsUpdate;
- (void)validateCommand:(id)a0;
- (void)copy:(id)a0;
- (void)preferencesDidChange;
- (void)_setNeedsUpdate;
- (void)loadView;
- (void)_updateContentUnavailableConfigurationUsingState:(id)a0;
- (id)tilingView:(id)a0 tileControllerWithIndexPath:(id)a1 kind:(id)a2 dataSource:(id)a3;
- (BOOL)wantsSpotlightStyling;
- (id)contentController:(id)a0 clientContextMapForKeys:(id)a1;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)viewWillLayoutSubviews;
- (void)_invalidateVideoPlayer;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;
- (void)_invalidateAccessoryView;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (BOOL)prefersStatusBarHidden;
- (void)_setAccessoryVisible:(BOOL)a0;
- (void)_keyboardWillShow:(id)a0;
- (id)contentScrollView;
- (BOOL)prepareForDismissingForced:(BOOL)a0;
- (id)contentController:(id)a0 contentView:(id)a1 iconForCustomizationID:(long long)a2;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)_updateVideoPlayerIfNeeded;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (id)tilingViewControllerTransitionTilingViewHostView:(id)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (id)px_diagnosticsItemProvidersForPoint:(struct CGPoint { double x0; double x1; })a0 inCoordinateSpace:(id)a1;
- (void)traitCollectionDidChange:(id)a0;
- (BOOL)assetActionPerformer:(id)a0 presentViewController:(id)a1;
- (void)_didEndTransition;
- (void).cxx_destruct;
- (id)undoManagerForAssetActionPerformer:(id)a0;
- (void)tilingViewControllerTransition:(id)a0 adoptTilingView:(id)a1 fromEndPoint:(id)a2 isCancelingTransition:(BOOL)a3 animationSetupCompletionHandler:(id /* block */)a4;
- (struct CGPoint { double x0; double x1; })tilingView:(id)a0 targetVisibleOriginForProposedVisibleOrigin:(struct CGPoint { double x0; double x1; })a1 withLayout:(id)a2;
- (void)loadingStatusManager:(id)a0 didUpdateLoadingStatus:(id)a1 forItem:(id)a2;
- (void)togglePlayback:(id)a0;
- (void)_updateLayout:(id)a0;
- (struct CGPoint { double x0; double x1; })tilingView:(id)a0 initialVisibleOriginWithLayout:(id)a1;
- (id)tilingViewControllerTransition:(id)a0 tilingViewToTransferToEndPoint:(id)a1;
- (void)viewDidMoveToWindow:(id)a0 shouldAppearOrDisappear:(BOOL)a1;
- (void)scrollViewDidScroll:(id)a0;
- (void)_invalidateLayout;
- (id)_currentAssetViewModel;
- (BOOL)assetActionPerformer:(id)a0 dismissViewController:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)_canShowWhileLocked;
- (void)_updateAccessoryViewIfNeeded;
- (id)tilingView:(id)a0 tileTransitionCoordinatorForTransitionFromLayout:(id)a1 toLayout:(id)a2 withContext:(id)a3;
- (BOOL)canPerformAction:(SEL)a0 withSender:(id)a1;
- (void)settings:(id)a0 changedValueForKey:(id)a1;
- (void)viewSafeAreaInsetsDidChange;
- (void)contentController:(id)a0 didFinishWithContent:(id)a1 animated:(BOOL)a2;
- (id)tilingView:(id)a0 tileTransitionCoordinatorForChangeFromFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 toFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 duration:(double)a3;
- (void)dealloc;
- (void)tilingViewControllerTransition:(id)a0 abandonTilingView:(id)a1 toEndPoint:(id)a2;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)_willBeginTransition;
- (BOOL)canBecomeFirstResponder;
- (id)tilingView:(id)a0 tileTransitionCoordinatorForReattachedTileControllers:(id)a1 context:(id)a2;
- (id)keyCommands;
- (id)tilingView:(id)a0 dataSourceConverterForTransitionFromLayout:(id)a1 toLayout:(id)a2;
- (void)contentController:(id)a0 contentDidBecomeAvailable:(id)a1 animated:(BOOL)a2;
- (double)layout:(id)a0 aspectRatioForItemAtIndexPath:(id)a1;
- (id)tilingView:(id)a0 tileTransitionCoordinatorForLayoutInvalidationContext:(id)a1;
- (void)_setContentUnavailableConfiguration:(id)a0;
- (void)_updatePreferredContentSizeIfNeeded;
- (void)deleteAssets:(id)a0;
- (void)_invalidateUserActivity;
- (void)purgeIfPossible;
- (void)trashAssetsWithoutConfirmation:(id)a0;
- (void)_invalidateSpec;
- (void)favoriteAssets:(id)a0;
- (void)_updateSpecIfNeeded;
- (void)addAssetsToAlbum:(id)a0;
- (void)addAssetsToLastUsedAlbum:(id)a0;
- (void)autoEnhanceAssets:(id)a0;
- (BOOL)canPerformAuthentication;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })contextualNotification:(id)a0 containingFrameInCoordinateSpace:(id)a1;
- (BOOL)contextualNotification:(id)a0 shouldPassthroughPoint:(struct CGPoint { double x0; double x1; })a1 inCoordinateSpace:(id)a2;
- (void)contextualNotificationWasTapped:(id)a0;
- (void)copyAdjustments:(id)a0;
- (void)duplicateAssets:(id)a0;
- (void)hideAssets:(id)a0;
- (void)pasteAdjustments:(id)a0;
- (long long)preferredAnimationForContextualNotification:(id)a0;
- (id)preferredContainerViewForContextualNotification:(id)a0;
- (void)presentationController:(id)a0 dismissTappedForViewController:(id)a1;
- (void)printAssets:(id)a0;
- (id)pu_debugCurrentPrivacyController;
- (BOOL)pu_shouldOptOutFromChromelessBars;
- (double)px_HDRFocus;
- (BOOL)px_determinesPreferredStatusBarHidden;
- (double)px_imageModulationIntensity;
- (void)rotateAssetsClockwise:(id)a0;
- (void)rotateAssetsCounterclockwise:(id)a0;
- (void)shareAssets:(id)a0;
- (void)toggleEditor:(id)a0;
- (void)toggleInspector:(id)a0;
- (void)toggleViewer:(id)a0;
- (void)trashAssets:(id)a0;
- (id)_currentAccessoryViewController;
- (id)_newOneUpLayout;
- (id)_videoPlayerAtIndexPath:(id)a0 layout:(id)a1;
- (BOOL)playButtonTileViewControllerShouldShowPlayButtonWhileActivated:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_currentFrameForTileController:(id)a0;
- (void)_invalidatePreferredContentSize;
- (void)_invalidateSuggestionController;
- (BOOL)_isLocationFromProviderOverInteractableItemExcludeImageSubject:(id)a0;
- (void)_preheatInfoPanelDynamicLinking;
- (void)_unhideOverlays;
- (void)oneUpBarsControllerDidTapTitle:(id)a0;
- (void)_abandonTileController:(id)a0;
- (long long)_accessoryContentKindForAsset:(id)a0;
- (long long)_accessoryContentKindForCurrentAsset;
- (BOOL)_allowsShowingVisualIntelligenceForAsset:(id)a0;
- (void)_arrowKey:(id)a0;
- (id)_assetDisplayDescriptorForAsset:(id)a0;
- (id)_assetReferenceAtIndexPath:(id)a0 layout:(id)a1;
- (id)_assetViewModelAtIndexPath:(id)a0 layout:(id)a1;
- (id)_assetsToPrefetch;
- (id)_assetsToPrefetchUsingDataSource:(id)a0 startingAt:(id)a1 count:(long long)a2 reverseDirection:(BOOL)a3;
- (void)_beginVKSubjectAnalyzingWithGestureRecognizer:(id)a0 beginID:(unsigned long long)a1;
- (void)_browsingVideoPlayerDidPlayToEndTime:(id)a0;
- (BOOL)_canAdvertiseKeyCommands;
- (BOOL)_canAttemptNavigationToAssetDisplayDescriptor:(id)a0;
- (void)_cancelTimedChromeAutoHide;
- (void)_chromeAutoHideTimerFired:(id)a0;
- (void)_configureAdoptedTileController:(id)a0;
- (id)_contentTileControllerForAssetReference:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_currentAssetRect;
- (id)_currentContentTileController;
- (id)_currentPlaceholderSnapshotViewForTileController:(id)a0;
- (void)_dimFloatingInfoPanelAnimated:(BOOL)a0;
- (void)_dismissFloatingInfoPanelAnimated:(BOOL)a0;
- (void)_dismissTipPopoverAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)_dynamicallyLinkInfoPanel;
- (void)_editAdjust:(id)a0;
- (void)_editCrop:(id)a0;
- (void)_editFilter:(id)a0;
- (void)_fixAssetViewModelTileTransformIfNecessary:(id)a0;
- (void)_handleTipSuggestedActionCompletedWithIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)_handleTouchGesture:(id)a0;
- (void)_hideChromeOnPlayButtonTapWithItemIsNowPlaying:(BOOL)a0 buttonIsOverlayed:(BOOL)a1;
- (void)_hideOverlays;
- (void)_informVKCOverlayToKickOffSubjectAnalyzing;
- (void)_invalidateBarsControllers;
- (void)_invalidateEditMode;
- (void)_invalidateInfoPanelLayoutAnimated:(BOOL)a0;
- (void)_invalidatePreloadInsets;
- (void)_invalidateTipPopovers;
- (BOOL)_isAccessoryAvailableForCurrentAsset;
- (BOOL)_isAccessoryVisible;
- (BOOL)_isAssetEligibleForTip:(id)a0;
- (BOOL)_isCameraDetailsAccessory;
- (BOOL)_isCurrentAssetAndInEditModeForAssetReference:(id)a0;
- (BOOL)_isCurrentAssetHasVisualSearchResults;
- (BOOL)_isDrivingScrubbing;
- (BOOL)_isLayoutAffectedBySpecChange:(id)a0;
- (BOOL)_isLocationFromProvider:(id)a0 overTileOfKind:(id)a1;
- (BOOL)_isLocationFromProviderInAccessoryArea:(id)a0;
- (BOOL)_isLocationFromProviderOverActionInfoItem:(id)a0;
- (BOOL)_isLocationFromProviderOverControl:(id)a0;
- (BOOL)_isLocationFromProviderOverImageSubject:(id)a0;
- (BOOL)_isLocationFromProviderOverInteractableItem:(id)a0;
- (BOOL)_isLocationFromProviderOverSyndicationAttributionPill:(id)a0;
- (BOOL)_isLocationFromProviderOverVisualSearch:(id)a0;
- (BOOL)_isSecondScreenBrowserVisible;
- (BOOL)_isTipPopoverVisible;
- (id)_leadingContentTileController;
- (void)_notifyTileIsReadyWithTimeOut:(double)a0 completionHandler:(id /* block */)a1;
- (BOOL)_performActionForType:(unsigned long long)a0 validateOnly:(BOOL)a1;
- (void)_performNavigationToAssetDisplayDescriptor:(id)a0 beforeDate:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)_prefersFloatingiPadInfoPanel;
- (void)_preheatAdjacentAssetsForPhotosDetailsContext;
- (void)_presentAlertForUnplayableAssetReference:(id)a0;
- (void)_presentDetailsIndicator;
- (void)_presentFloatingInfoPanelAnimated:(BOOL)a0;
- (void)_presentPopOverFromOneUpPresentationSession:(id)a0 animated:(BOOL)a1;
- (void)_presentTipPopovers:(id)a0 content:(id)a1 animated:(BOOL)a2;
- (BOOL)_requireUnlockedDeviceForAccessoryView;
- (void)_scheduleTimedChromeAutoHide;
- (void)_sendBMDiscoverabilitySignalForEvent:(id)a0;
- (void)_setAccessoryVisible:(BOOL)a0 changeReason:(long long)a1;
- (void)_setNeedsVisualImageAnalsis:(BOOL)a0 forAssetViewModel:(id)a1;
- (BOOL)_shouldMakeChromeVisibleWhenVideoPlayerPlaysToEndTime:(id)a0;
- (BOOL)_shouldUseGlobalAccessoryViewVisibility;
- (id)_syndicationPillView;
- (void)_toggleAccessoryVisibility;
- (void)_toggleCommentsVisibility;
- (void)_toggleDetailsVisibility;
- (id)_trailingContentTileController;
- (void)_updateActiveVideoTilesCanDisplayVideo;
- (void)_updateBackgroundTileViewController;
- (void)_updateBarsControllerIfNeeded;
- (void)_updateEditModeIfNeeded;
- (void)_updateFloatingInfoPanel;
- (void)_updateFloatingInfoPanelIfNeeded;
- (void)_updateLayoutReferenceSize;
- (void)_updatePrefersHomeIndicatorHidden;
- (void)_updatePreloadInsetsIfNeeded;
- (void)_updateReviewScreenBars;
- (void)_updateSuggestionControllerIfNeeded;
- (void)_updateTipPopoversIfNeeded;
- (void)_updateUserActivityIfNeeded;
- (void)_updateViewModelWithCurrentScrollPosition;
- (void)_updateVitalityControllerEnabled;
- (void)_updateWindowInterfaceOrientation;
- (id)_userTransformTileViewControllerForCurrentAsset;
- (BOOL)_visualImageHasActiveTextSelectionFromProvider:(id)a0;
- (BOOL)_vkImageOverlayAllowsVKCToHandleLongPressGestureFromProvider:(id)a0;
- (id)accessoryTileViewControllerAccessoryViewController:(id)a0;
- (id)accessoryTileViewControllerHostViewController:(id)a0;
- (BOOL)accessoryTileViewControllerShouldUseSquareImageWhenShowingAccessoryView:(id)a0;
- (id)accessoryTileViewControllerViewHostingGestureRecognizers:(id)a0;
- (BOOL)accessoryTileViewControllerWillHideNavigationBarWhenShowingAccessoryView:(id)a0;
- (BOOL)accessoryTileViewControllerWillHideToolbarWhenShowingAccessoryView:(id)a0;
- (BOOL)accessoryVisibilityInteractionController:(id)a0 canBeginAtLocationFromProvider:(id)a1;
- (BOOL)accessoryVisibilityInteractionController:(id)a0 isLocationFromProviderInAccessoryContent:(id)a1;
- (void)accessoryVisibilityInteractionController:(id)a0 setAccessoryVisible:(BOOL)a1 changeReason:(long long)a2;
- (void)accessoryVisibilityInteractionControllerDidEnd:(id)a0;
- (id)accessoryVisibilityInteractionControllerViewHostingGestureRecognizers:(id)a0;
- (id)additionalContextMenuActionsForAttributionTileViewController:(id)a0;
- (void)airPlayControllerScreenAvailabilityChanged:(id)a0;
- (double)alphaForReviewScreenBarsInLayout:(id)a0;
- (id)backItemTitleForOneUpBarsController:(id)a0;
- (void)badgeVisibilityDidChange:(id)a0;
- (id)barsController:(id)a0 delegateForGestureRecognizer:(id)a1;
- (void)barsControllerContentGuideInsetsDidChange:(id)a0;
- (id)barsControllerViewController:(id)a0;
- (id)barsControllerViewHostingGestureRecognizers:(id)a0;
- (long long)contentAccessoryViewForCurrentAsset;
- (id)contentViewControllerForAirPlayController:(id)a0;
- (id)createAssetTransitionInfo;
- (void)createMenuActionControllerForManagerIfNeeded:(id)a0 withPresentingViewController:(id)a1 regionOfInterestProvider:(id)a2;
- (void)dismissPresentedViewController:(id)a0 presentMenuWithCompletion:(id /* block */)a1;
- (BOOL)doubleTapZoomController:(id)a0 canDoubleTapBeginAtLocationFromProvider:(id)a1;
- (id)doubleTapZoomController:(id)a0 delegateForGestureRecognizer:(id)a1;
- (id)doubleTapZoomControllerTilingView:(id)a0;
- (id)doubleTapZoomControllerViewHostingGestureRecognizers:(id)a0;
- (id)imageTileViewControllerPresentingViewController:(id)a0;
- (BOOL)imageTileViewControllerShouldShowVisualIntelligenceOverlay:(id)a0;
- (id)initWithBrowsingSession:(id)a0;
- (id)initWithBrowsingSession:(id)a0 options:(unsigned long long)a1;
- (id)initWithBrowsingSession:(id)a0 options:(unsigned long long)a1 initialActivity:(unsigned long long)a2;
- (id)initWithBrowsingSession:(id)a0 options:(unsigned long long)a1 initialActivity:(unsigned long long)a2 presentationOrigin:(long long)a3;
- (BOOL)interactiveDismissalController:(id)a0 canBeginDismissalAtLocationFromProvider:(id)a1;
- (void)interactiveDismissalControllerChangedIsHandlingDismissalInteraction:(id)a0;
- (id)interactiveDismissalControllerDesignatedTileController:(id)a0;
- (id)interactiveDismissalControllerTilingView:(id)a0;
- (id)interactiveDismissalControllerViewController:(id)a0;
- (id)interactiveDismissalControllerViewHostingGestureRecognizers:(id)a0;
- (id)irisImageTileViewController:(id)a0 delegateForGestureRecognizer:(id)a1;
- (void)irisImageTileViewControllerDidBeginHinting:(id)a0;
- (void)irisImageTileViewControllerDidBeginPlaying:(id)a0;
- (void)irisImageTileViewControllerDidEndPlaying:(id)a0;
- (void)irisImageTileViewControllerDidEndVitality:(id)a0;
- (id)irisImageTileViewControllerViewHostingGestureRecognizers:(id)a0;
- (struct CGPoint { double x0; double x1; })layout:(id)a0 accessoryOffsetForItemAtIndexPath:(id)a1;
- (struct CGSize { double x0; double x1; })layout:(id)a0 assetExplorerReviewScreenBadgeSizeForItemAtIndexPath:(id)a1;
- (struct CGSize { double x0; double x1; })layout:(id)a0 badgeSizeForItemAtIndexPath:(id)a1 contentWidth:(double)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })layout:(id)a0 bestSquareRectForItemAtIndexPath:(id)a1;
- (struct CGPoint { double x0; double x1; })layout:(id)a0 contentOffsetForItemAtIndexPath:(id)a1;
- (BOOL)layout:(id)a0 disableInitialZoomToFillForItemAtIndexPath:(id)a1;
- (BOOL)layout:(id)a0 isShowingInfoPanelForItemAtIndexPath:(id)a1;
- (double)layout:(id)a0 leadingBadgesWidthForItemAtIndexPath:(id)a1 contentWidth:(double)a2;
- (struct CGSize { double x0; double x1; })layout:(id)a0 loadingIndicatorSizeForItemAtIndexPath:(id)a1;
- (double)layout:(id)a0 minimumItemHeightNeededInAccessoryForItemAtIndexPath:(id)a1;
- (double)layout:(id)a0 minimumVisibleAccessoryHeightForItemAtIndexPath:(id)a1;
- (double)layout:(id)a0 minimumVisibleContentHeightForItemAtIndexPath:(id)a1;
- (id)layout:(id)a0 modelTileTransformForItemAtIndexPath:(id)a1;
- (BOOL)layout:(id)a0 shouldMovePeopleRowForItemAtIndexPath:(id)a1;
- (BOOL)layout:(id)a0 shouldMoveProgressIndicatorForItemAtIndexPath:(id)a1;
- (BOOL)layout:(id)a0 shouldScaleToFitSafeInsetsForItemAtIndexPath:(id)a1;
- (BOOL)layout:(id)a0 shouldShowAccessoryForItemAtIndexPath:(id)a1;
- (BOOL)layout:(id)a0 shouldShowAttributionViewForItemAtIndexPath:(id)a1;
- (BOOL)layout:(id)a0 shouldShowBufferingIndicatorForItemAtIndexPath:(id)a1;
- (BOOL)layout:(id)a0 shouldShowPeopleRowForItemAtIndexPath:(id)a1;
- (BOOL)layout:(id)a0 shouldShowPlayButtonForItemAtIndexPath:(id)a1;
- (BOOL)layout:(id)a0 shouldShowVideoPlaceholderForItemAtIndexPath:(id)a1;
- (BOOL)layout:(id)a0 shouldUseSquareImageInAccessoryForItemAtIndexPath:(id)a1;
- (BOOL)layoutShouldShowReviewScreenScrubberBar:(id)a0;
- (BOOL)livePhotoVideoPlaybackTileViewControllerCanBeginPlaying:(id)a0 locationProvider:(id)a1;
- (struct CGImage { } *)livePhotoVideoPlaybackTileViewControllerCurrentGainMapImage:(id)a0 outGainMapAvailable:(BOOL *)a1 outGainMapValue:(float *)a2;
- (id)livePhotoVideoPlaybackTileViewControllerCurrentImage:(id)a0;
- (void)livePhotoVideoPlaybackTileViewControllerDidEndPlaying:(id)a0;
- (id)livePhotoVideoPlaybackTileViewControllerDisplayTileTransform:(id)a0;
- (double)livePhotoVideoPlaybackTileViewControllerExtraMinimumTouchDuration:(id)a0 locationProvider:(id)a1;
- (void)livePhotoVideoPlaybackTileViewControllerWillBeginPlaying:(id)a0;
- (BOOL)menuActionControllerPreventRevealInMomentAction:(id)a0;
- (void)navigateToAssetDisplayDescriptor:(id)a0 beforeDate:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)oneUpAccessoryViewControllersManager:(id)a0 preventRevealInMomentActionForAssetReference:(id)a1;
- (void)oneUpAccessoryViewControllersManagerInvalidateAccessoryLayout:(id)a0;
- (BOOL)oneUpAccessoryViewControllersManagerRequestAccessoryDismissal:(id)a0;
- (void)oneUpAssetTransition:(id)a0 animateTransitionWithContext:(id)a1 duration:(double)a2 completion:(id /* block */)a3;
- (void)oneUpAssetTransition:(id)a0 requestTransitionContextWithCompletion:(id /* block */)a1;
- (void)oneUpAssetTransition:(id)a0 requestTransitionContextWithCompletion:(id /* block */)a1 options:(unsigned long long)a2;
- (void)oneUpAssetTransitionDidEnd:(id)a0;
- (void)oneUpAssetTransitionWillBegin:(id)a0;
- (BOOL)oneUpBarsController:(id)a0 canShowCommentsForAsset:(id)a1;
- (id)oneUpBarsController:(id)a0 createMenuActionControllerForManagerIfNeeded:(id)a1;
- (void)oneUpBarsController:(id)a0 didTapPlayPauseButton:(BOOL)a1;
- (BOOL)oneUpBarsController:(id)a0 isDetailsAccessoryAvailableForAssetReference:(id)a1;
- (BOOL)oneUpBarsController:(id)a0 shouldHideNavigationBarWhenShowingAccessoryViewForAssetReference:(id)a1;
- (BOOL)oneUpBarsController:(id)a0 shouldHideStatusBarWhenShowingAccessoryViewForAssetReference:(id)a1;
- (BOOL)oneUpBarsController:(id)a0 shouldHideToolbarWhenShowingAccessoryViewForAssetReference:(id)a1;
- (BOOL)oneUpBarsController:(id)a0 shouldTapBeginAtLocationFromProvider:(id)a1;
- (void)oneUpBarsController:(id)a0 willExecuteActionPerformer:(id)a1;
- (void)oneUpBarsControllerDidChangeShowingPlayPauseButton:(id)a0;
- (BOOL)oneUpBarsControllerDismissPresentedViewController:(id)a0;
- (BOOL)oneUpBarsControllerShouldAnimateViewControllerPresentation:(id)a0;
- (void)oneUpBarsControllerToggleCommentsVisibility:(id)a0;
- (void)oneUpBarsControllerToggleDetailsVisibility:(id)a0;
- (BOOL)oneUpBarsControllerWantsActionsMenu:(id)a0;
- (BOOL)oneUpBarsControllerWantsDocumentMenu:(id)a0;
- (void)oneUpBarsControllerWillPresentActionsMenu:(id)a0;
- (BOOL)oneUpGestureRecgonizerCoordinator:(id)a0 shouldAllowIrisGestureAtLocationFromProvider:(id)a1;
- (id)oneUpGestureRecognizerCoordinatorViewHostingTouchingGesture:(id)a0;
- (BOOL)oneUpSuggestionsController:(id)a0 canShowSuggestionForAssetReference:(id)a1;
- (void)overOneUpPresentationSession:(id)a0 didPresent:(id)a1;
- (id)overOneUpPresentationSessionBrowserViewModel:(id)a0;
- (id)overOneUpPresentationSessionCreateIfNeeded:(BOOL)a0;
- (id)overOneUpPresentationSessionCurrentTileController:(id)a0;
- (void)overOneUpPresentationSessionDidFinish:(id)a0;
- (BOOL)overOneUpPresentationSessionPresentingViewControllerIsReady:(id)a0;
- (id)overOneUpPresentationSessionTilingView:(id)a0;
- (id)overOneUpPresentationSessionViewController:(id)a0;
- (double)playButtonTileViewController:(id)a0 delayForButtonAnimation:(BOOL)a1;
- (void)playButtonTileViewControllerDidTapButton:(id)a0;
- (BOOL)playButtonTileViewControllerShouldShowPauseButton:(id)a0;
- (void)ppt_notifyWhenFullQualityIsDisplayedWithTimeout:(double)a0 handler:(id /* block */)a1;
- (void)ppt_notifyWhenVKAnalysisIsReadyWithTimeout:(double)a0 handler:(id /* block */)a1;
- (void)ppt_playCurrentLivePhotoWithCompletionHandler:(id /* block */)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })ppt_scrollableBoundsForTesting;
- (void)ppt_toggleAccessoryView;
- (void)presentErrorFromLoadingIndicator:(id)a0;
- (void)presentErrorFromVideoPlaybackAttempt:(id)a0;
- (void)presentPeopleViewController:(id)a0;
- (id)pu_debugCurrentAsset;
- (id)pu_debugCurrentViewModel;
- (id)pu_debugRows;
- (long long)pu_preferredBarStyle;
- (BOOL)pu_wantsNavigationBarVisible;
- (BOOL)pu_wantsTabBarVisible;
- (BOOL)pu_wantsToolbarVisible;
- (void)pushPeopleViewController:(id)a0;
- (void)restoreAssets:(id)a0;
- (void)restoreAssetsWithoutConfirmation:(id)a0;
- (void)revertAdjustments:(id)a0;
- (void)suggestionBecameAvailable:(id)a0;
- (id)tilingView:(id)a0 scrollInfoWithLayout:(id)a1;
- (BOOL)tilingViewCanBypass20069585Check:(id)a0;
- (void)userTransformTileViewController:(id)a0 didChangeIsUserInteracting:(BOOL)a1;
- (void)userTransformTileViewController:(id)a0 didChangeModelTileTransform:(id)a1;
- (BOOL)userTransformTileViewController:(id)a0 shouldReceiveTouchAtLocationFromProvider:(id)a1;
- (id)userTransformTileViewControllerPresentingTileView:(id)a0;
- (id)userTransformTileViewControllerPresentingViewController:(id)a0;
- (BOOL)userTransformTileViewControllerShouldShowVisualIntelligenceOverlay:(id)a0;
- (id)userTransformTileViewControllerTextsToHighlight:(id)a0;
- (void)viewControllerSpec:(id)a0 didChange:(id)a1;
- (BOOL)wantsContentVisibleAfterUnregisteringWithAirPlayController:(id)a0;

@end