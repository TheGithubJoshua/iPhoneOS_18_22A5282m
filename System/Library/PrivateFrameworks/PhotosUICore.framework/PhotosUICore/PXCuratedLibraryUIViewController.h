@class PXCuratedLibrarySecondaryToolbarController, UITapGestureRecognizer, PXChangeDirectionNumberFilter, PXAssetSelectionUserActivityController, PXAssetReference, PXGView, UIBarButtonItem, UIPanGestureRecognizer, PXCPLStatusController, PXProgrammaticNavigationRequest, PXCuratedLibrarySkimmingController, PXPhotosDragController, PXRelaxedScreenEdgePanGestureRecognizer, PXSharedLibraryStatusProvider, PXGTransition, PXCuratedLibraryZoomLevelControl, PXSwipeSelectionManager, PXPhotosPointerController, UIPinchGestureRecognizer, PHPhotoLibrary, UIButton, NSLayoutConstraint, PXCuratedLibraryViewProvider, PXActionManager, PXCPLUIStatusProvider, PXSelectionContainer, PXBannerView, PXStatusController, PXTouchingUIGestureRecognizer, PXMoviePresenter, PXCuratedLibraryZoomLevelPinchFilter, NSString, PXCuratedLibraryFilterTipController, UIHoverGestureRecognizer, PXCuratedLibraryBarsController;
@protocol PXGAXResponder, PXCuratedLibraryViewDelegate;

@interface PXCuratedLibraryUIViewController : UIViewController <PXActionManagerProvider, PXChangeObserver, PXCuratedLibraryActionPerformerDelegate, PXCuratedLibraryFooterControllerDelegate, PXCuratedLibrarySkimmingControllerDelegate, PXCuratedLibraryZoomLevelControlDelegate, PXGAXResponder, PXOneUpPresentationDelegate, PXPhotosPointerControllerDelegate, PXPhotosDragControllerDelegate, PXPhotosGlobalFooterViewDelegate, PXScrollViewControllerObserver, PXStatusControllerDelegate, PXCuratedLibraryFilterTipControllerDelegate, PXSwipeSelectionManagerDelegate, PXTouchingUIGestureRecognizerDelegate, PXUserInterfaceFeatureViewController, UIGestureRecognizerDelegate, PXSplitViewControllerChangeObserver, PXSelectionContainerProvider, PXBannerViewDelegate, PXBarsControllerDelegate>

@property (readonly, nonatomic) PXCuratedLibraryViewProvider *viewProviderIfLoaded;
@property (readonly, nonatomic) PXCuratedLibraryBarsController *barsController;
@property (readonly, nonatomic) PXAssetSelectionUserActivityController *userActivityController;
@property (readonly, nonatomic) PXPhotosDragController *dragController;
@property (retain, nonatomic) PXPhotosDragController *emptyPlaceholderDragController;
@property (readonly, nonatomic) PXCuratedLibrarySecondaryToolbarController *secondaryToolbarController;
@property (readonly, nonatomic) PXCuratedLibraryZoomLevelControl *zoomLevelControl;
@property (readonly, nonatomic) PXCuratedLibrarySkimmingController *skimmingController;
@property (readonly, nonatomic) UIHoverGestureRecognizer *hoverGesture;
@property (readonly, nonatomic) UITapGestureRecognizer *tapGesture;
@property (readonly, nonatomic) UITapGestureRecognizer *pressGesture;
@property (readonly, nonatomic) PXTouchingUIGestureRecognizer *skimmingTouchGesture;
@property (readonly, nonatomic) UIPinchGestureRecognizer *pinchGesture;
@property (readonly, nonatomic) UIPanGestureRecognizer *panGesture;
@property (retain, nonatomic) PXChangeDirectionNumberFilter *backNavigationGestureDirectionFilter;
@property (nonatomic) long long zoomLevelBeforeBackNavigationTransition;
@property (retain, nonatomic) PXGTransition *backNavigationTransition;
@property (readonly, nonatomic) PXRelaxedScreenEdgePanGestureRecognizer *screenEdgePanGestureRecognizer;
@property (nonatomic) struct { long long zoomLevel; long long scrollRegime; } trackedScrollContext;
@property (readonly, nonatomic) PXSwipeSelectionManager *swipeSelectionManager;
@property (retain, nonatomic) PXAssetReference *navigatedAssetReference;
@property (retain, nonatomic) PXAssetReference *preferredFocusAssetReference;
@property (readonly, nonatomic) PXPhotosPointerController *pointerController;
@property (readonly, nonatomic) PXCuratedLibraryZoomLevelPinchFilter *zoomLevelPinchFilter;
@property (readonly, nonatomic) PXGView *gridView;
@property (nonatomic) BOOL isGridViewReady;
@property (retain, nonatomic) PXProgrammaticNavigationRequest *initialNavigationRequest;
@property (nonatomic) BOOL isInUnselectedTab;
@property (retain, nonatomic) PXCPLUIStatusProvider *cplUIStatusProvider;
@property (retain, nonatomic) PXSharedLibraryStatusProvider *sharedLibraryStatusProvider;
@property (retain, nonatomic) UIButton *emptyPlaceholderSwitchLibraryButton;
@property (retain, nonatomic) NSLayoutConstraint *emptyPlaceholderSwitchLibraryButtonTrailingConstraint;
@property (retain, nonatomic) NSLayoutConstraint *emptyPlaceholderSwitchLibraryButtonBottomConstraint;
@property (retain, nonatomic) UIBarButtonItem *emptyPlaceholderSwitchLibraryBarButtonItem;
@property (retain, nonatomic) PXStatusController *emptyPlaceholderStatusController;
@property (retain, nonatomic) PXCPLStatusController *statusController;
@property (readonly, nonatomic) PXCuratedLibraryFilterTipController *filterTipController;
@property (retain, nonatomic) PXMoviePresenter *moviePresenter;
@property (nonatomic) BOOL canShowFooter;
@property (readonly, nonatomic) PXBannerView *bannerView;
@property (weak, nonatomic) id<PXCuratedLibraryViewDelegate> delegate;
@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary;
@property (readonly, nonatomic) PXCuratedLibraryViewProvider *viewProvider;
@property (readonly, nonatomic) PXActionManager *assetActionManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<PXGAXResponder> axNextResponder;
@property (readonly, nonatomic) long long userInterfaceFeature;
@property (readonly, nonatomic) PXSelectionContainer *selectionContainer;

- (BOOL)axGroup:(id)a0 didRequestToPerformAction:(long long)a1 userInfo:(id)a2;
- (id)axContainingScrollViewForAXGroup:(id)a0;
- (id)initWithPhotoLibrary:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)axGroup:(id)a0 didChange:(unsigned long long)a1 userInfo:(id)a2;
- (unsigned long long)routingOptionsForDestination:(id)a0;
- (void)navigateToDestination:(id)a0 options:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (BOOL)oneUpPresentation:(id)a0 commitPreviewForContextMenuInteraction:(id)a1;
- (id)dragControllerAssetReferenceForBeginningSession:(id)a0;
- (id)dragControllerUndoManager:(id)a0;
- (struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })swipeSelectionManager:(id)a0 itemIndexPathClosestAboveLocation:(struct CGPoint { double x0; double x1; })a1;
- (void)validateCommand:(id)a0;
- (id)px_navigationDestination;
- (void)_handleHover:(id)a0;
- (id)oneUpPresentation:(id)a0 currentImageForAssetReference:(id)a1;
- (id)oneUpPresentation:(id)a0 previewForHighlightingSecondaryItemWithIdentifier:(id)a1 configuration:(id)a2;
- (void)_handlePan:(id)a0;
- (id)swipeSelectionManager:(id)a0 indexPathSetFromIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a1 toIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a2;
- (id)undoManagerForActionPerformer:(id)a0;
- (void)oneUpPresentation:(id)a0 scrollAssetReferenceToVisible:(id)a1;
- (id)targetedPreviewForAssetReference:(id)a0;
- (void)viewDidLayoutSubviews;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)viewWillLayoutSubviews;
- (long long)preferredStatusBarStyle;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)_handlePinch:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (BOOL)dragController:(id)a0 shouldResizeCancelledPreviewForAssetReference:(id)a1;
- (void)_handleHoverWithHitTestResults:(id)a0 hoverGesture:(id)a1;
- (BOOL)pu_scrollToInitialPositionAnimated:(BOOL)a0;
- (void)_addContentView:(id)a0;
- (void)viewDidLoad;
- (void)assetCollectionActionPerformer:(id)a0 playMovieForAssetCollection:(id)a1;
- (id)oneUpPresentationDataSourceManager:(id)a0;
- (BOOL)oneUpPresentation:(id)a0 allowsActionsForContextMenuInteraction:(id)a1;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (id)px_diagnosticsItemProvidersForPoint:(struct CGPoint { double x0; double x1; })a0 inCoordinateSpace:(id)a1;
- (void)traitCollectionDidChange:(id)a0;
- (void)photosGlobalFooterView:(id)a0 presentViewController:(id)a1;
- (id)targetForAction:(SEL)a0 withSender:(id)a1;
- (void)scrollViewControllerDidScroll:(id)a0;
- (void)dragController:(id)a0 isDragSessionActiveDidChange:(BOOL)a1;
- (id)oneUpPresentationInitialAssetReference:(id)a0;
- (BOOL)_handleTapWithHitTestResult:(id)a0 keyModifierFlags:(long long)a1;
- (id)oneUpPresentationMediaProvider:(id)a0;
- (struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })swipeSelectionManager:(id)a0 itemIndexPathAtLocation:(struct CGPoint { double x0; double x1; })a1;
- (void).cxx_destruct;
- (BOOL)dragController:(id)a0 shouldSelectRearrangedAssetReferences:(id)a1;
- (void)_updateStatusBarStyle;
- (BOOL)swipeSelectionManagerIsInMultiSelectMode:(id)a0;
- (BOOL)pu_handleSecondTabTap;
- (BOOL)_actionPerformer:(id)a0 presentViewController:(id)a1;
- (BOOL)actionPerformer:(id)a0 dismissViewController:(id)a1 completionHandler:(id /* block */)a2;
- (id)oneUpPresentation:(id)a0 regionOfInterestForAssetReference:(id)a1;
- (void)_handlePress:(id)a0;
- (struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })swipeSelectionManager:(id)a0 itemIndexPathClosestLeadingLocation:(struct CGPoint { double x0; double x1; })a1;
- (id)dragController:(id)a0 regionOfInterestForAssetReference:(id)a1 image:(id *)a2;
- (id)oneUpPresentationHelperScrollView:(id)a0;
- (void)viewLayoutMarginsDidChange;
- (void)oneUpPresentation:(id)a0 willEndPreviewingForContextMenuInteraction:(id)a1 configuration:(id)a2;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (BOOL)canPerformAction:(SEL)a0 withSender:(id)a1;
- (id)_scrollView;
- (void)oneUpPresentation:(id)a0 setHiddenAssetReferences:(id)a1;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (id)oneUpPresentation:(id)a0 previewForDismissingToSecondaryItemWithIdentifier:(id)a1 configuration:(id)a2;
- (void)swipeSelectionManager:(id)a0 extendSelectionInDirection:(unsigned long long)a1;
- (void)_handleTap:(id)a0;
- (id)oneUpPresentation:(id)a0 secondaryIdentifiersForConfiguration:(id)a1;
- (id)dragControllerViewControllerForPresentation:(id)a0;
- (BOOL)swipeSelectionManager:(id)a0 shouldAutomaticallyTransitionToMultiSelectModeAtPoint:(struct CGPoint { double x0; double x1; })a1;
- (void)viewWillAppear:(BOOL)a0;
- (BOOL)canBecomeFirstResponder;
- (BOOL)gestureRecognizer:(id)a0 shouldBeRequiredToFailByGestureRecognizer:(id)a1;
- (BOOL)_handleHoverWithHitTestResult:(id)a0;
- (void)swipeSelectionManagerAutomaticallyTransitionToMultiSelectMode:(id)a0;
- (id)preferredFocusEnvironments;
- (void)dragController:(id)a0 dropTargetAssetReferenceDidChange:(id)a1;
- (void)scrollViewControllerWillBeginScrolling:(id)a0;
- (long long)oneUpPresentationOrigin:(id)a0;
- (id)dragController:(id)a0 scrollViewForAssetReference:(id)a1;
- (struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })_indexPathForAssetAtLocation:(struct CGPoint { double x0; double x1; })a0 withPadding:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1 forSwipeSelectionManager:(id)a2;
- (id)dragController:(id)a0 draggableAssetReferenceAtLocation:(struct CGPoint { double x0; double x1; })a1;
- (void)swipeSelectionManagerDidAutoScroll:(id)a0;
- (id)dragController:(id)a0 dropTargetAssetReferenceForLocation:(struct CGPoint { double x0; double x1; })a1;
- (BOOL)oneUpPresentation:(id)a0 allowsMultiSelectMenuForInteraction:(id)a1;
- (id)oneUpPresentationActionManagerForPreviewing:(id)a0;
- (void)dragController:(id)a0 draggedAssetReferencesDidChange:(id)a1;
- (BOOL)actionPerformer:(id)a0 transitionToViewController:(id)a1 transitionType:(long long)a2;
- (BOOL)oneUpPresentation:(id)a0 canStartPreviewingForContextMenuInteraction:(id)a1;
- (void)zoomIn:(id)a0;
- (void)zoomOut:(id)a0;
- (void)_handleShowAlternateUIForGroup:(id)a0;
- (void)oneUpPresentation:(id)a0 willStartPreviewingForContextMenuInteraction:(id)a1;
- (void)toggleViewMode:(id)a0;
- (void)_updateSkimmingSlideshowEnabled;
- (id)pu_debugCurrentlySelectedAssets;
- (void)toggleEditMode:(id)a0;
- (void)_addEmptyPlaceholderSwitchLibraryButtonForCompactSizeClass;
- (void)_addEmptyPlaceholderSwitchLibraryButtonForRegularSizeClass;
- (id)_assetCollectionReferenceForGroup:(id)a0;
- (id)_bestHitTestResultForCursorAtLocation:(struct CGPoint { double x0; double x1; })a0;
- (id)_buttonForEllipsisButtonAction;
- (id)_buttonHitTestResultAtPoint:(struct CGPoint { double x0; double x1; })a0 inCoordinateSpace:(id)a1;
- (void)_conditionallyUpdateEmptyPlaceholder;
- (void)_createAnimationForSkimmingWithDuration:(double)a0 indicatorsDidChangeVisibility:(BOOL)a1;
- (id)_createPreviewViewForAssetReference:(id)a0;
- (id)_createPreviewViewForHitTestResult:(id)a0;
- (id)_dominantAssetCollectionReferenceForSkimming;
- (id)_emptyPlaceholderMessageTextAttributesFromTextProperties:(id)a0;
- (double)_emptyPlaceholderswitchLibraryButtonTrailingInset;
- (double)_emptyPlaceholderswitchLibraryButtonVerticalSpacing;
- (BOOL)_handleGestureForFilterTipController;
- (void)_handleNavigationRequestConditionCompletionForNavigationRequest:(id)a0 withAssetReference:(id)a1;
- (void)_handleScreenEdgePan:(id)a0;
- (void)_handleScrollToRevealInfo:(id)a0 inGroup:(id)a1;
- (void)_handleShowDefaultUIForGroup:(id)a0;
- (BOOL)_handleTapOnTitleWithHitTestResult:(id)a0;
- (BOOL)_handleTapToToggleChromeWithGestureRecognizer:(id)a0;
- (void)_handleTapWithHitTestResults:(id)a0 tapGesture:(id)a1;
- (void)_hideNavigationBarItems:(BOOL)a0;
- (id)_hitTestAssetReferenceAtLocation:(struct CGPoint { double x0; double x1; })a0 inCoordinateSpace:(id)a1;
- (id)_hitTestResultAtLocation:(struct CGPoint { double x0; double x1; })a0 withPadding:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1 swipeSelectionManager:(id)a2;
- (void)_invalidateBannerView;
- (void)_invalidateEmptyPlaceholder;
- (void)_invalidateSecondaryToolbar;
- (void)_navigateToInitialScrollPositionForNavigationRequest:(id)a0;
- (void)_navigateToRevealAssetForNavigationRequest:(id)a0;
- (void)_prepareGestureRecognizers;
- (BOOL)_presentOneUpForAssetReference:(id)a0 configurationHandler:(id /* block */)a1;
- (void)_presentOneUpForSingleSelectedAssetWithActivity:(unsigned long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_rectForEllipsisActionPerformerButton;
- (id)_regionOfInterestForAssetReference:(id)a0 image:(id *)a1;
- (void)_removeEmptyPlaceholderSwitchLibraryButton;
- (void)_requestFocusUpdateForCursorAsset;
- (void)_requestFocusUpdateWithAssetReference:(id)a0;
- (void)_rescheduleNavigationRequest:(id)a0;
- (void)_saveCurrentAllPhotosScrollPosition;
- (void)_scrollLibraryViewToInitialPositionWithCompletionHandler:(id /* block */)a0;
- (void)_scrollToBottomAnimated:(BOOL)a0;
- (BOOL)_scrollToNextSectionInDirection:(long long)a0 animated:(BOOL)a1;
- (void)_setWantsOptionalChromeVisible:(BOOL)a0 changeReason:(long long)a1;
- (BOOL)_shouldExposeCursorAnimations;
- (void)_updateBannerView;
- (void)_updateDrawerButtonVisibility;
- (void)_updateEmptyPlaceholder;
- (void)_updateEmptyPlaceholderSwitchLibraryButtonPosition;
- (void)_updateSecondaryToolbar;
- (void)_updateTrackedScrollLevelIfNeeded;
- (void)_updateViewLayoutMarginsForEmptyPlaceholder;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })anchorViewRectForController:(id)a0;
- (id)assetCollectionReferenceForSkimmingSlideshow:(id)a0;
- (id)assetCollectionReferenceToShowSkimmingHints:(id)a0;
- (id)assetReferenceForIndexPath:(id)a0;
- (id)barsControllerActionsForSelectionContextMenu:(id)a0;
- (void)cancelSelectMode:(id)a0;
- (void)curatedLibraryActionPerformer:(id)a0 contentFilterStateChanged:(id)a1;
- (void)curatedLibraryActionPerformer:(id)a0 libraryFilterStateChanged:(id)a1;
- (void)curatedLibraryActionPerformer:(id)a0 presentContextMenuActionsWithPerformers:(id)a1;
- (void)curatedLibraryActionPerformer:(id)a0 presentShareSheetWithSharingContext:(id)a1;
- (void)deselectAll:(id)a0;
- (void)didDismissTipForController:(id)a0;
- (void)footerControllerRevealFooter:(id)a0;
- (void)navigateToSegment:(id)a0;
- (BOOL)oneUpPresentationShouldPreventShowInAllPhotosAction:(id)a0;
- (void)openParentWithCommandUpArrow:(id)a0;
- (void)openSelectionWithCommandDownArrow:(id)a0;
- (id)passthroughViewsForTipForController:(id)a0;
- (void)pointerController:(id)a0 didExitRegionWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 inCoordinateSpace:(id)a2;
- (id)pointerController:(id)a0 identifierForRegionAtLocation:(struct CGPoint { double x0; double x1; })a1 inCoordinateSpace:(id)a2;
- (long long)pointerController:(id)a0 interactionOptionsForRegionAtLocation:(struct CGPoint { double x0; double x1; })a1 inCoordinateSpace:(id)a2;
- (id)pointerController:(id)a0 regionOfInterestForCursorAtLocation:(struct CGPoint { double x0; double x1; })a1 inCoordinateSpace:(id)a2;
- (id)pointerController:(id)a0 viewForCursorInteractionAtLocation:(struct CGPoint { double x0; double x1; })a1 inCoordinateSpace:(id)a2;
- (void)pointerController:(id)a0 willEnterRegionWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 inCoordinateSpace:(id)a2;
- (void)preparePresentationEnvironmentForBannerView:(id)a0 actionIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (id)presentingViewControllerForFooterController:(id)a0;
- (BOOL)pu_shouldOptOutFromChromelessBars;
- (void)px_didTransitionBars;
- (void)px_navigateToStateAllowingTabSwitchingWithOptions:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (void)px_willTransitionBars;
- (BOOL)scrollViewControllerShouldScrollToTop:(id)a0;
- (void)scrollViewControllerWillEndScrolling:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;
- (void)skimmingController:(id)a0 willHideSkimmingHintsForAssetCollectionReference:(id)a1 animationDuration:(double)a2;
- (void)skimmingController:(id)a0 willShowSkimmingHintsForAssetCollectionReference:(id)a1 animationDuration:(double)a2;
- (void)skimmingController:(id)a0 willStartSkimmingAssetCollectionReference:(id)a1 animationDuration:(double)a2;
- (void)skimmingControllerDidStopSkimming:(id)a0 animationDuration:(double)a1;
- (void)splitViewController:(id)a0 didChangeSidebarVisibility:(BOOL)a1;
- (void)splitViewController:(id)a0 willChangeSidebarVisibility:(BOOL)a1;
- (void)statusController:(id)a0 configurationDidChange:(id)a1;
- (void)statusController:(id)a0 dismissViewController:(id)a1;
- (void)statusController:(id)a0 presentViewController:(id)a1;
- (void)toggleFilter:(id)a0;
- (void)toggleViewer:(id)a0;
- (void)touchingUIGestureRecognizerDidBeginTouching:(id)a0;
- (void)touchingUIGestureRecognizerDidEndTouching:(id)a0;
- (id)viewControllerToPresentTipForController:(id)a0;
- (id)viewToPresentTipForController:(id)a0;
- (void)willPresentTipForController:(id)a0;
- (void)zoomLevelControl:(id)a0 didTapOnAlreadySelectedZoomLevel:(long long)a1;

@end
