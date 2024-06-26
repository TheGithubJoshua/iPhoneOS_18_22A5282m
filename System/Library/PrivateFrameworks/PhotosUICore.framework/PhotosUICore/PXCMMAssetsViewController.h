@class PXActionManager, PXCMMSpecManager, PXAssetReference, PXCMMProgressBannerView, NSString, UILongPressGestureRecognizer, PXStatusController, PXUITapGestureRecognizer, PXCMMSendBackBannerView, NSMutableSet, PXCMMStatusController, PXOneUpPresentation, PXUIAssetsScene, NSArray, PXCMMFooterViewModel, PXContextualNotification, PXSwipeSelectionManager, NSSet, PXUpdater, PXCMMSpec, PXTilingController, PXCMMSendBackSuggestionSource, PXLayoutGenerator, PXUIScrollViewController, PXSectionedLayoutEngine, PXBasicTileAnimator, PXMomentShareStatusPresentation, PXPhotosGlobalFooterView, PXCMMBannerTileController;
@protocol PXCMMAssetsViewControllerDelegate;

@interface PXCMMAssetsViewController : PXCMMComponentViewController <PXActionManagerProvider, PXActionPerformerDelegate, PXAssetsSceneDelegate, PXCMMBannerTileControllerDelegate, PXCMMEngineDrivenLayoutDelegate, PXCMMProgressBannerViewDelegate, PXChangeObserver, PXContextualNotificationDelegate, PXOneUpPresentationDelegate, PXPhotosGlobalFooterViewDelegate, PXScrollViewControllerObserver, PXStatusControllerDelegate, PXSwipeSelectionManagerDelegate, PXTileSource> {
    PXUpdater *_updater;
    PXLayoutGenerator *_layoutGenerator;
    PXSectionedLayoutEngine *_layoutEngine;
    BOOL _layoutAnimationsGloballyDisabled;
    PXUIScrollViewController *_scrollViewController;
    PXBasicTileAnimator *_tileAnimator;
    PXTilingController *_tilingController;
    PXUIAssetsScene *_sceneController;
    PXCMMProgressBannerView *_progressBannerView;
    NSArray *_progressBannerViewConstraints;
    PXStatusController *_statusController;
    PXCMMStatusController *_cmmStatusController;
    PXUITapGestureRecognizer *_tapSelectionGesture;
    PXSwipeSelectionManager *_swipeSelectionManager;
    PXUITapGestureRecognizer *_layoutTransitionGesture;
    UILongPressGestureRecognizer *_longPressGesture;
    PXAssetReference *_navigatedAssetReference;
    PXCMMSpecManager *_specManager;
    PXCMMSpec *_spec;
    PXMomentShareStatusPresentation *_momentShareStatusPresentationForFooter;
    PXCMMFooterViewModel *_statusFooterViewModel;
    PXPhotosGlobalFooterView *_measuringStatusFooterView;
    PXCMMBannerTileController *_measuringBannerTile;
    PXCMMSendBackBannerView *_measuringSendBackBannerView;
    PXMomentShareStatusPresentation *_momentShareStatusPresentationForPoster;
    NSMutableSet *_inUseTiles;
    struct CGSize { double width; double height; } _knownReferenceSize;
    BOOL _needsToPerformInitialSelection;
    PXCMMSendBackSuggestionSource *_sendBackSuggestionSource;
    PXContextualNotification *_sendBackNotification;
    BOOL _sendBackNotificationWasDiscarded;
    BOOL _sendBackNotificationWasTapped;
    BOOL _receivingActionButtonWasTapped;
    BOOL _didReportSendBackNotificationMissingAssetFault;
    BOOL _didIncrementNumberOfPresentableSendBacks;
    BOOL _didIncrementNumberOfPresentedSendBacks;
    BOOL _isWaitingForSendBackPresentationConfirmationTimeout;
    unsigned long long _sendBackPresentationConfirmationGeneration;
    struct { BOOL shouldShowAddMoreButton; BOOL didTapAddMoreButton; BOOL oneUpPresentation; } _delegateRespondsTo;
}

@property (nonatomic) long long _layoutType;
@property (readonly, nonatomic) PXOneUpPresentation *_oneUpPresentation;
@property (readonly, nonatomic) PXAssetReference *_focusedAssetReference;
@property (retain, nonatomic) NSSet *_hiddenAssetReferences;
@property (nonatomic) BOOL userSelectionEnabled;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentInset;
@property (weak, nonatomic) id<PXCMMAssetsViewControllerDelegate> delegate;
@property (nonatomic, getter=isActionInProgress) BOOL actionInProgress;
@property (readonly, nonatomic) PXActionManager *assetActionManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })swipeSelectionManager:(id)a0 itemIndexPathClosestAboveLocation:(struct CGPoint { double x0; double x1; })a1;
- (id)oneUpPresentation:(id)a0 currentImageForAssetReference:(id)a1;
- (id)undoManagerForActionPerformer:(id)a0;
- (void)oneUpPresentation:(id)a0 scrollAssetReferenceToVisible:(id)a1;
- (void)viewDidLayoutSubviews;
- (BOOL)actionPerformer:(id)a0 presentViewController:(id)a1;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewDidLoad;
- (id)oneUpPresentationDataSourceManager:(id)a0;
- (BOOL)oneUpPresentation:(id)a0 allowsActionsForContextMenuInteraction:(id)a1;
- (long long)oneUpPresentationActionContext:(id)a0;
- (void)_handleLongPress:(id)a0;
- (void)photosGlobalFooterView:(id)a0 presentViewController:(id)a1;
- (void)_preferredContentSizeChanged:(id)a0;
- (void)scrollViewControllerDidScroll:(id)a0;
- (id)oneUpPresentationInitialAssetReference:(id)a0;
- (void)_configureLayout:(id)a0;
- (id)oneUpPresentationMediaProvider:(id)a0;
- (id)initWithSession:(id)a0;
- (struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })swipeSelectionManager:(id)a0 itemIndexPathAtLocation:(struct CGPoint { double x0; double x1; })a1;
- (void).cxx_destruct;
- (BOOL)swipeSelectionManagerIsInMultiSelectMode:(id)a0;
- (BOOL)actionPerformer:(id)a0 dismissViewController:(id)a1 completionHandler:(id /* block */)a2;
- (id)oneUpPresentation:(id)a0 regionOfInterestForAssetReference:(id)a1;
- (struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })swipeSelectionManager:(id)a0 itemIndexPathClosestLeadingLocation:(struct CGPoint { double x0; double x1; })a1;
- (id)oneUpPresentationActionManager:(id)a0;
- (id)oneUpPresentationHelperScrollView:(id)a0;
- (void)oneUpPresentation:(id)a0 setHiddenAssetReferences:(id)a1;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)_handleTap:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)swipeSelectionManagerAutomaticallyTransitionToMultiSelectMode:(id)a0;
- (void)_updateStyle;
- (long long)oneUpPresentationOrigin:(id)a0;
- (id)oneUpPresentationActionManagerForPreviewing:(id)a0;
- (void)_contentSizeCategoryDidChangeNotification:(id)a0;
- (BOOL)oneUpPresentation:(id)a0 canStartPreviewingForContextMenuInteraction:(id)a1;
- (void)_updatePlaceholder;
- (id)_assetReferenceAtPoint:(struct CGPoint { double x0; double x1; })a0 padding:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1;
- (double)_progressBannerViewLayoutHeight;
- (void)_setLayoutType:(long long)a0;
- (void)_updateGestures;
- (double)_bannerHeightFromReferenceSize:(struct CGSize { double x0; double x1; })a0;
- (void)_scheduleLayout;
- (unsigned long long)_additionalTileCount;
- (BOOL)_areAllNotCopiedAssetsSelected;
- (id)_assetActionManagerWithSelectionManager:(id)a0;
- (long long)_assetImportStateAtIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a0 withDataSource:(id)a1;
- (struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })_assetIndexPathAtLocation:(struct CGPoint { double x0; double x1; })a0 padding:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1;
- (struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })_assetIndexPathAtLocation:(struct CGPoint { double x0; double x1; })a0 padding:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1 kind:(unsigned long long)a2;
- (BOOL)_canShowSendBackSuggestion;
- (void)_checkSendBackPresentationStatus;
- (void)_configureBannerTile:(id)a0;
- (id)_createAddButton;
- (id)_createBannerTileController;
- (id)_createNewLayout;
- (id)_createNewLayoutGeneratorWithReferenceSize:(struct CGSize { double x0; double x1; })a0;
- (id)_createOverlayTileView;
- (id)_createPosterTileController;
- (id)_createSectionHeaderController;
- (id)_createSelectionManagerWithAssetReference:(id)a0;
- (id)_createSendBackBannerView;
- (id)_createSendBackFooter;
- (id)_createStatusBadgeTileView;
- (id)_createStatusFooter;
- (id)_createStatusPlaceholderTileView;
- (void)_deselectAllAssets;
- (void)_didFindPresentableSendBack;
- (void)_didPresentSendBack;
- (void)_handleSendBackPresentationConfirmationTimeoutForGeneration:(unsigned long long)a0;
- (void)_handleSpaceBar:(id)a0;
- (double)_headerHeightFromReferenceSize:(struct CGSize { double x0; double x1; })a0 insets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1;
- (id)_indexPathsForAssetReferences:(id)a0 inDataSource:(id)a1;
- (void)_invalidateLayoutGenerator;
- (void)_invokeSendBackAction;
- (BOOL)_isAssetAlreadyImportedAtIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a0;
- (BOOL)_isAssetAlreadyImportedAtIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a0 withEngineDrivenLayout:(id)a1;
- (BOOL)_isSendBackBannerViewContentsAtAllVisible;
- (BOOL)_isSendBackBannerViewContentsFullyVisible;
- (struct CGSize { double x0; double x1; })_maximumThumbnailSize;
- (void)_performInitialSelectionIfNeeded;
- (void)_performTilingChangeWithoutAnimationTransition:(id /* block */)a0;
- (void)_presentSendBackNotification;
- (void)_selectAllAssets;
- (void)_selectCuratedAssets;
- (void)_selectNonCopiedAssets;
- (void)_selectionModeDidChange;
- (double)_sendBackFooterHeightFromReferenceSize:(struct CGSize { double x0; double x1; })a0;
- (void)_setHiddenAssetReferences:(id)a0;
- (BOOL)_shouldShowDefaultOneUpActions;
- (BOOL)_shouldShowProgressBanner;
- (BOOL)_shouldShowStatusPlaceholder;
- (double)_statusFooterHeightFromReferenceSize:(struct CGSize { double x0; double x1; })a0 insets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1;
- (void)_toggleAssetSelectionAtIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a0;
- (void)_transitionLayoutGesture:(id)a0;
- (void)_updateAssetsScene;
- (void)_updateLayoutEngine;
- (void)_updateProgressBannerViewConstraints;
- (void)_updateProgressBannerViewVisibility;
- (void)_updateSelectionEnabled;
- (void)_updateSelectionIfNeeded;
- (void)_updateSendBackNotification;
- (void)addButtonTapped:(id)a0;
- (id)assetsScene:(id)a0 layoutForDataSource:(id)a1;
- (id)assetsScene:(id)a0 transitionAnimationCoordinatorForChange:(id)a1;
- (void)checkInTile:(void *)a0 withIdentifier:(struct PXTileIdentifier { unsigned long long x0; unsigned long long x1[10]; })a1;
- (void *)checkOutTileForIdentifier:(struct PXTileIdentifier { unsigned long long x0; unsigned long long x1[10]; })a0 layout:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })contextualNotification:(id)a0 containingFrameInCoordinateSpace:(id)a1;
- (void)contextualNotificationDidAppear:(id)a0;
- (void)contextualNotificationDidDisappear:(id)a0;
- (void)contextualNotificationWasDiscarded:(id)a0;
- (void)contextualNotificationWasTapped:(id)a0;
- (void)didTapActionButtonInBannerTileController:(id)a0;
- (double)engineDrivenLayout:(id)a0 aspectRatioForItemAtIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a1;
- (long long)engineDrivenLayout:(id)a0 assetStatusAtIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })engineDrivenLayout:(id)a0 contentsRectForItemAtIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a1 forAspectRatio:(double)a2;
- (BOOL)engineDrivenLayout:(id)a0 shouldShowDimmingOverlayAtIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a1;
- (BOOL)engineDrivenLayout:(id)a0 shouldShowStatusBadgeAtIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a1;
- (void)engineDrivenLayoutReferenceSizeDidChange:(id)a0;
- (id)oneUpPresentationImportStatusManager:(id)a0;
- (id)preferredContainerViewForContextualNotification:(id)a0;
- (void)progressBannerView:(id)a0 dismissViewController:(id)a1;
- (void)progressBannerView:(id)a0 presentViewController:(id)a1;
- (void)progressBannerViewLayoutHeightDidChange:(id)a0;
- (void)statusController:(id)a0 configurationDidChange:(id)a1;
- (void)statusController:(id)a0 dismissViewController:(id)a1;
- (void)statusController:(id)a0 presentViewController:(id)a1;
- (BOOL)swipeSelectionManager:(id)a0 shouldSelectItemAtIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a1;

@end
