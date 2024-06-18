@class NSIndexPath, PBFPosterPair;

@interface PBFPosterRackCollectionViewController : UICollectionViewController <UICollectionViewDelegate_Private, UIGestureRecognizerDelegate, UISheetPresentationControllerDelegate, PBFPosterGalleryPreviewViewControllerDelegate, PRDateObserving, FCUIFocusSelectionViewControllerDelegate, PBFPosterEditingIngestionManagerDelegate, PREditingFontAndColorPickerViewControllerDelegate, PREditingSceneViewControllerObserver, PBFPosterRackSwitcherControlling> {
    void /* unknown type, empty encoding */ lockPosterOverlayLayerSpecification;
    void /* unknown type, empty encoding */ lockPosterLiveContentLayerSpecification;
    void /* unknown type, empty encoding */ lockPosterLiveFloatingLayerSpecification;
    void /* unknown type, empty encoding */ isLockPosterFloatingLayerInlined;
    void /* unknown type, empty encoding */ isLockPosterComplicationRowHidden;
    void /* unknown type, empty encoding */ lockVibrancyConfiguration;
    void /* unknown type, empty encoding */ posterStore;
    void /* unknown type, empty encoding */ focusSetupStateProvider;
    void /* unknown type, empty encoding */ currentFocusSetupState;
    void /* unknown type, empty encoding */ shouldShowFocusButtonOnLockScreenPosterCells;
    void /* unknown type, empty encoding */ shouldDisplayHomeCardsParallaxedWithLockCardsInAlongsideLayout;
    void /* unknown type, empty encoding */ leadingTopButton;
    void /* unknown type, empty encoding */ trailingTopButton;
    void /* unknown type, empty encoding */ centeredPosterButton;
    void /* unknown type, empty encoding */ addPosterButton;
    void /* unknown type, empty encoding */ homeScreenConfigurationView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_feedbackGenerator;
    void /* unknown type, empty encoding */ currentPosterSignificantEventsCounter;
    void /* unknown type, empty encoding */ galleryController;
    void /* unknown type, empty encoding */ hasScrolledToSelectionForInitialViewLayout;
    void /* unknown type, empty encoding */ isScrollingOrSettling;
    void /* unknown type, empty encoding */ pageControlPreferredNumberOfVisibleIndicators;
    void /* unknown type, empty encoding */ $__lazy_storage_$_initialLayoutModeFromFullscreen;
    void /* unknown type, empty encoding */ layoutTransitionAnimationCount;
    void /* unknown type, empty encoding */ durationForCommittingToAlongsideLayout;
    void /* unknown type, empty encoding */ minimumMovementForSignificantPan;
    void /* unknown type, empty encoding */ isTransitioningToInitialLayoutModeFromFullscreen;
    void /* unknown type, empty encoding */ shouldBeginAlongsideCompactDeflationWhenAppropriate;
    void /* unknown type, empty encoding */ numberOfTrackingTouchesBegunWhileTransitioningToInitialLayoutModeFromFullscreen;
    void /* unknown type, empty encoding */ layout;
    void /* unknown type, empty encoding */ centeredLockPosterOverlayView;
    void /* unknown type, empty encoding */ lockPosterLiveContentView;
    void /* unknown type, empty encoding */ lockPosterLiveFloatingView;
    void /* unknown type, empty encoding */ homeScreenIconContentLayout;
    void /* unknown type, empty encoding */ currentHomeScreenIconContentLayoutFetchRequestID;
    void /* unknown type, empty encoding */ homeScreenIconContentViewConnector;
    void /* unknown type, empty encoding */ focusSelector;
    void /* unknown type, empty encoding */ editingSessionInProgressAssertion;
    void /* unknown type, empty encoding */ legacyMigrationHelper;
    void /* unknown type, empty encoding */ widgetHost;
    void /* unknown type, empty encoding */ $__lazy_storage_$_lockScreenWidgetMetricsSpecifications;
    void /* unknown type, empty encoding */ galleryDataProvider;
    void /* unknown type, empty encoding */ galleryInUseAssertion;
}

@property (nonatomic, readonly) unsigned long long supportedInterfaceOrientations;
@property (nonatomic, readonly) BOOL prefersStatusBarHidden;
@property (nonatomic, weak) void /* unknown type, empty encoding */ posterRackDelegate;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ dateProvider;
@property (nonatomic) void /* unknown type, empty encoding */ managesLiveWidgetHosting;
@property (nonatomic) void /* unknown type, empty encoding */ shouldDisplayCancelButton;
@property (nonatomic) void /* unknown type, empty encoding */ shouldDisplayGalleryAffordance;
@property (nonatomic) void /* unknown type, empty encoding */ shouldDisplayAddButton;
@property (nonatomic) void /* unknown type, empty encoding */ shouldDisplayConfigurationTopButtons;
@property (nonatomic) void /* unknown type, empty encoding */ allowsLeavingHomeConfiguringLayout;
@property (nonatomic) void /* unknown type, empty encoding */ allowsEnteringFullscreenLayout;
@property (nonatomic) void /* unknown type, empty encoding */ shouldTransitionLayoutToConfiguringHomeForFirstPoster;
@property (nonatomic) void /* unknown type, empty encoding */ leadingTopButtonFrame;
@property (nonatomic) void /* unknown type, empty encoding */ trailingTopButtonFrame;
@property (nonatomic, retain) void /* unknown type, empty encoding */ pageControl;
@property (nonatomic) void /* unknown type, empty encoding */ layoutMode;
@property (nonatomic, readonly) NSIndexPath *centeredPosterIndexPath;
@property (nonatomic, readonly) PBFPosterPair *centeredPoster;

+ (id)simplifiedHomeScreenSwitcherFor:(id)a0 delegate:(id)a1 topButtonLayout:(struct PREditingSceneViewControllerTopButtonLayout { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x1; })a2;
+ (id)simplifiedHomeScreenSwitcherWithFilter:(id)a0 delegate:(id)a1 topButtonLayout:(struct PREditingSceneViewControllerTopButtonLayout { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x1; })a2;

- (id)initWithCoder:(id)a0;
- (void)presentationControllerDidDismiss:(id)a0;
- (id)init;
- (void)collectionView:(id)a0 didEndDisplayingCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)presentationControllerWillDismiss:(id)a0;
- (id)initWithCollectionViewLayout:(id)a0;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void)viewDidLayoutSubviews;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)viewWillLayoutSubviews;
- (id)_indexPathOfReferenceItemForLayoutTransitionInCollectionView:(id)a0;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(struct CGPoint { double x0; double x1; } *)a2;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)viewDidLoad;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void).cxx_destruct;
- (void)viewDidMoveToWindow:(id)a0 shouldAppearOrDisappear:(BOOL)a1;
- (void)reset:(id /* block */)a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)scrollViewDidEndScrollingAnimation:(id)a0;
- (void)dealloc;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (id)_newCollectionViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 collectionViewLayout:(id)a1;
- (void)dateProvider:(id)a0 didUpdateDate:(id)a1;
- (void)editingSceneViewController:(id)a0 userDidDismissWithAction:(long long)a1 updatedConfiguration:(id)a2 updatedConfiguredProperties:(id)a3 completion:(id /* block */)a4;
- (void)editingSceneViewControllerDidFinalize:(id)a0;
- (void)fontAndColorPickerViewController:(id)a0 didUpdateDesiredDetent:(double)a1;
- (struct PREditingSceneViewControllerTopButtonLayout { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x1; })topButtonLayoutForEditingSceneViewController:(id)a0;
- (void)scrollToFirstPoster:(BOOL)a0 completion:(id /* block */)a1;
- (void)didTapEmptyViewArea:(id)a0;
- (void)dismissPresentedViewControllersAnimated:(BOOL)a0 dismissHandler:(id /* block */)a1 completion:(id /* block */)a2;
- (void)editingIngestionManager:(id)a0 didAccept:(id)a1 userChoice:(long long)a2;
- (void)focusSelectionViewController:(id)a0 hasSelected:(BOOL)a1 activity:(id)a2;
- (void)galleryViewController:(id)a0 didSelectPreview:(id)a1 fromPreviewView:(id)a2;
- (id)galleryViewController:(id)a0 willUseAnimationController:(id)a1 forDismissingEditingViewControllerWithAction:(long long)a2;
- (id)initWithPosterFilter:(id)a0;
- (void)pageControlDidChangePage:(id)a0;
- (id)posterExtensionDataStore;
- (void)presentDeletePosterAlertForPosterPairID:(id)a0;
- (void)presentPosterGallery:(id /* block */)a0;

@end