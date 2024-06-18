@class PXStatusViewModel, PXLibraryFilterState, NSOrderedSet, PXAssetReference, NSString, NSMutableSet, NSArray, PXAssetsDataSource, PXMediaProvider, PXPhotosLayoutSpecManager, PXContentFilterState, PXSelectionSnapshot, PXUpdater, NSSet, PXContentPrivacyController, PXAssetsDataSourceManager, PXFooterViewModel, PXLoadingStatusManager, PXAssetActionManager, PXSectionedSelectionManager, PXPhotosGridActionManager, NSMutableOrderedSet, PXAssetCollectionActionManager, NSNumber;
@protocol PXAssetImportStatusManager, PXPhotosViewDelegate, PXPhotosGridOptionsController, PXBrowserSelectionSnapshot, PXPhotosPreferredAssetCropDelegate, PXTapbackStatusManager, NSObject;

@interface PXPhotosViewModel : PXObservable <PXAssetsDataSourceManagerObserver, PXMutablePhotosViewModel, PXSectionedSelectionManagerSnapshotValidator> {
    long long _footerVisibilityStyle;
    PXFooterViewModel *_footerViewModel;
    NSMutableSet *_enterSelectModePreventedForReasons;
    NSMutableSet *_oneUpPresentationPreventedForReasons;
    NSMutableSet *_aspectRatioTogglePreventedForReasons;
    NSMutableSet *_hideSurroundingContentForReasons;
    BOOL _allowsAspectFitToggle;
    long long _contentMode;
    id<NSObject> _filterTimeoutObserver;
    NSMutableOrderedSet *_visibleAssetCollections;
    long long _contentStartingPosition;
}

@property (readonly, nonatomic) id<PXBrowserSelectionSnapshot> browserSelectionSnapshot;
@property (readonly, nonatomic) PXUpdater *updater;
@property (retain, nonatomic) PXSelectionSnapshot *selectionSnapshot;
@property (nonatomic) double zoomStep;
@property (nonatomic) BOOL isInteractiveZooming;
@property (nonatomic) BOOL shouldAnimateZooming;
@property (retain, nonatomic) PXAssetReference *zoomAnchorAssetReference;
@property (nonatomic) BOOL aspectFitContent;
@property (readonly, nonatomic) BOOL shouldAspectFitContentByDefault;
@property (nonatomic) long long emptyPlaceholderState;
@property (nonatomic) long long contentPrivacyState;
@property (nonatomic) long long systemAuthenticationType;
@property (weak, nonatomic) id<PXPhotosViewDelegate> viewDelegate;
@property (readonly, nonatomic) unsigned long long viewDelegateRespondsTo;
@property (copy, nonatomic) id /* block */ infoActionHandler;
@property (readonly, nonatomic) BOOL isInitializing;
@property (readonly, nonatomic) BOOL alwaysIncludeSharedWithYouAssets;
@property (nonatomic) BOOL wantsTabBarVisible;
@property (nonatomic) BOOL wantsNavbarVisible;
@property (nonatomic) BOOL wantsToolbarVisible;
@property (nonatomic) BOOL wantsFooterVisible;
@property (nonatomic) BOOL wantsFooterTransparent;
@property (readonly, nonatomic) BOOL _shouldMimicSystemChromelessUsingManualScrollEdgeAppearance;
@property (readonly, nonatomic) PXAssetsDataSourceManager *dataSourceManager;
@property (readonly, nonatomic) PXSectionedSelectionManager *selectionManager;
@property (readonly, nonatomic) PXPhotosGridActionManager *gridActionManager;
@property (readonly, nonatomic) PXMediaProvider *mediaProvider;
@property (readonly, nonatomic) PXContentPrivacyController *privacyController;
@property (readonly, nonatomic) PXAssetActionManager *assetActionManager;
@property (readonly, nonatomic) PXAssetCollectionActionManager *assetCollectionActionManager;
@property (readonly, nonatomic) PXLoadingStatusManager *loadingStatusManager;
@property (readonly, nonatomic) id<PXTapbackStatusManager> tapbackStatusManager;
@property (readonly, nonatomic) id<PXAssetImportStatusManager> assetImportStatusManager;
@property (readonly, nonatomic) BOOL wantsCPLStatus;
@property (readonly, nonatomic) BOOL wantsRenderingStatus;
@property (readonly, nonatomic) BOOL isEmbedded;
@property (readonly, nonatomic) PXFooterViewModel *footerViewModel;
@property (readonly, nonatomic) PXPhotosLayoutSpecManager *specManager;
@property (readonly, nonatomic) NSArray *ocrTextToHighlight;
@property (readonly, nonatomic) NSArray *assetUUIDsAllowedToHighlightOCRText;
@property (readonly, nonatomic) id /* block */ badgesModifier;
@property (readonly, nonatomic) Class cplActionManagerClass;
@property (readonly, nonatomic) PXAssetsDataSource *currentDataSource;
@property (readonly, nonatomic) long long selectionContext;
@property (readonly, nonatomic) BOOL isInSelectMode;
@property (readonly, nonatomic) BOOL isInCompactMode;
@property (readonly, nonatomic) BOOL canEnterSelectMode;
@property (readonly, nonatomic) BOOL canExitSelectMode;
@property (readonly, nonatomic) BOOL canSwipeSelect;
@property (readonly, nonatomic) BOOL canPresentOneUp;
@property (readonly, nonatomic) BOOL isAppearing;
@property (readonly, nonatomic) BOOL dismissRequested;
@property (readonly, nonatomic) BOOL hasScrollableContent;
@property (readonly, nonatomic, getter=isScrolledToTop) BOOL scrolledToTop;
@property (readonly, nonatomic) double headerTitleTopInset;
@property (readonly, copy, nonatomic) NSSet *draggedAssetReferences;
@property (readonly, nonatomic) PXAssetReference *dropTargetAssetReference;
@property (readonly, nonatomic) PXAssetReference *singleSelectedAssetReference;
@property (readonly, nonatomic) BOOL supportsAspectRatioToggle;
@property (readonly, nonatomic) long long gridStyle;
@property (readonly, nonatomic) double itemAspectRatio;
@property (readonly, nonatomic) BOOL showLoadingPlaceholderWhenEmpty;
@property (readonly, weak, nonatomic) id<PXPhotosPreferredAssetCropDelegate> preferredAssetCropDelegate;
@property (readonly, nonatomic) BOOL ignoreContentFilterStateWhenNotFiltering;
@property (readonly, copy, nonatomic) NSNumber *userWantsAspectFitContent;
@property (readonly, nonatomic) BOOL supportsZooming;
@property (readonly, nonatomic) long long numberOfZoomSteps;
@property (readonly, nonatomic) BOOL canFilterContent;
@property (readonly, nonatomic) BOOL wantsContentFilterVisible;
@property (readonly, nonatomic) BOOL wantsContentFilterIndicatorVisible;
@property (readonly, nonatomic) BOOL footerHasImportantInformation;
@property (readonly, nonatomic) BOOL wantsContentUnavailableUnlockButtonVisible;
@property (readonly, nonatomic) BOOL hideSurroundingContent;
@property (readonly, nonatomic) BOOL hidesNavbar;
@property (readonly, nonatomic) BOOL hidesToolbar;
@property (readonly, nonatomic) BOOL shouldAlwaysRespectToolbarActionPlacementPreference;
@property (readonly, nonatomic) BOOL prefersActionsInToolbar;
@property (readonly, nonatomic, getter=isContentBelowTitle) BOOL contentBelowTitle;
@property (readonly, nonatomic, getter=isShowingAlternateContent) BOOL showingAlternateContent;
@property (readonly, nonatomic) BOOL requiresLightTopBars;
@property (readonly, nonatomic) double topBarsAppearanceChangeAnimationDuration;
@property (readonly, nonatomic) double titleBackgroundOpacity;
@property (readonly, nonatomic) BOOL viewBasedDecorationsEnabled;
@property (readonly, nonatomic) BOOL captionsVisible;
@property (readonly, nonatomic) BOOL wantsTopBadgesWithViewBasedDecorations;
@property (readonly, nonatomic) BOOL wantsDimmedSelectionStyle;
@property (readonly, nonatomic) BOOL wantsNumberedSelectionStyle;
@property (readonly, nonatomic) BOOL wantsFileSizeBadge;
@property (readonly, nonatomic) BOOL allowsShowDetails;
@property (readonly, nonatomic) BOOL allowsChromeManagementBehavior;
@property (readonly, nonatomic) BOOL allowsInlineAddBehavior;
@property (readonly, nonatomic) BOOL allowsSelectionUserActivityBehavior;
@property (readonly, nonatomic) BOOL allowsPopOnContainerDeleteBehavior;
@property (readonly, nonatomic) BOOL allowsPopOnEmptyBehavior;
@property (readonly, nonatomic) BOOL allowsEmptyPlaceholderBehavior;
@property (readonly, nonatomic) BOOL allowsActionMenuBehavior;
@property (readonly, nonatomic) BOOL allowsDoubleTapBehavior;
@property (readonly, nonatomic) BOOL allowsHoverBehavior;
@property (readonly, nonatomic) BOOL allowsCaptionsInSquareBehavior;
@property (readonly, nonatomic) BOOL allowsContextMenuCustomization;
@property (readonly, nonatomic) BOOL allowsAccessoriesContextMenuCustomization;
@property (readonly, nonatomic) BOOL allowsMacStyleSelection;
@property (readonly, nonatomic) BOOL allowsSelectModeToggle;
@property (readonly, nonatomic) BOOL allowsSelectAllAction;
@property (readonly, nonatomic) BOOL allowsSlideshowAction;
@property (readonly, nonatomic) BOOL allowsAddAction;
@property (readonly, nonatomic) BOOL allowsCopyAction;
@property (readonly, nonatomic) BOOL allowsSelectSectionAction;
@property (readonly, nonatomic) BOOL allowsGridAppearanceActions;
@property (readonly, nonatomic) BOOL allowsShareAllAction;
@property (readonly, nonatomic) BOOL allowsQuickLookAction;
@property (readonly, nonatomic) BOOL allowsShowMapAction;
@property (readonly, nonatomic) BOOL allowsPickAssetAction;
@property (readonly, nonatomic) BOOL allowsOneUpPresentation;
@property (readonly, nonatomic) BOOL allowsDismissAction;
@property (readonly, nonatomic) BOOL allowsFileRadarAction;
@property (readonly, nonatomic) BOOL allowsTrashAction;
@property (readonly, nonatomic) BOOL allowsAddToLibraryAction;
@property (readonly, nonatomic) BOOL allowsSwitchLibraryAction;
@property (readonly, nonatomic) BOOL allowsMoveToLibraryAction;
@property (readonly, nonatomic) BOOL allowsMoveToPersonalLibraryAction;
@property (readonly, nonatomic) BOOL allowsMoveToSharedLibraryAction;
@property (readonly, nonatomic) BOOL allowsInfoAction;
@property (readonly, nonatomic) BOOL allowsCMMActions;
@property (readonly, nonatomic) BOOL allowsSyndicatedContentFiltering;
@property (readonly, nonatomic) BOOL allowsContentSyndicationSaveAllAction;
@property (readonly, nonatomic) BOOL allowsReplyAction;
@property (readonly, nonatomic) BOOL allowsTapbackAction;
@property (readonly, nonatomic) BOOL allowsSwipeToSelect;
@property (readonly, nonatomic) BOOL allowsDragAndDrop;
@property (readonly, nonatomic) BOOL allowsDragOutOnly;
@property (readonly, nonatomic) BOOL allowsUserDefaults;
@property (readonly, nonatomic) BOOL allowsLinkInteractions;
@property (readonly, nonatomic) BOOL allowsMultiSelectMenu;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *footerSubtitle;
@property (readonly, nonatomic) unsigned long long forbiddenBadges;
@property (readonly, nonatomic) BOOL allowsInteractiveFavoriteBadges;
@property (readonly, nonatomic) id<PXPhotosGridOptionsController> optionsController;
@property (readonly, nonatomic) long long navBarStyle;
@property (readonly, nonatomic) BOOL shouldOptOutOfChromelessBars;
@property (readonly, nonatomic) BOOL wantsModernNavBarButtons;
@property (readonly, nonatomic) BOOL lowMemoryMode;
@property (readonly, nonatomic) BOOL hideFooterInSelectMode;
@property (readonly, nonatomic) double floatingTitleOpacity;
@property (readonly, nonatomic) BOOL wantsFloatingTitle;
@property (readonly, nonatomic) long long oneUpPresentationOrigin;
@property (readonly, nonatomic) BOOL providesOneUpActionManager;
@property (readonly, nonatomic) BOOL wantsOneUpShowInLibraryButton;
@property (readonly, nonatomic) BOOL allowsMergeDuplicatesAction;
@property (nonatomic) BOOL showsOnlySelectedItemsInOneUp;
@property (readonly, nonatomic) PXLibraryFilterState *libraryFilterState;
@property (readonly, nonatomic) PXContentFilterState *contentFilterState;
@property (readonly, nonatomic) NSOrderedSet *visibleAssetCollections;
@property (readonly, nonatomic) BOOL contentStartsAtEnd;
@property (retain, nonatomic) Class decorationViewClass;
@property (retain, nonatomic) PXStatusViewModel *emptyPlaceholderStatusViewModel;
@property (readonly, nonatomic) id /* block */ effectProvider;
@property (readonly, nonatomic) long long noContentPlaceholderType;
@property (readonly, nonatomic) BOOL wantsFooterVisibleImmediately;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL keepsTabBarAlwaysHidden;

- (void)setTapbackStatusManager:(id)a0;
- (void)setWantsContentFilterVisible:(BOOL)a0;
- (void)setIsInSelectMode:(BOOL)a0;
- (void)setEffectProvider:(id /* block */)a0;
- (void)setCurrentDataSource:(id)a0;
- (void)selectAll;
- (void)_updateContentPrivacyState;
- (void)setNumberOfZoomSteps:(long long)a0;
- (void)_invalidateUserWantsAspectFitContent;
- (void)setHidesToolbar:(BOOL)a0;
- (id)init;
- (void)_invalidateGridAppearance;
- (void)setShowingAlternateContent:(BOOL)a0;
- (void)_invalidateAssetsDataSourceManager;
- (void)_invalidateDraggedAssetReferences;
- (void)didPerformChanges;
- (void)_updateFooterVisibility;
- (void)_setNeedsUpdate;
- (void)_invalidateEmptyPlaceholderState;
- (void)_invalidateTopBarsStyles;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)setContentFilterState:(id)a0;
- (void)setHasScrollableContent:(BOOL)a0;
- (void)setIsAppearing:(BOOL)a0;
- (void)setFooterHasImportantInformation:(BOOL)a0;
- (void)setCplActionManagerClass:(Class)a0;
- (void)deselectAll;
- (void)toggleSelectionForAssetReference:(id)a0;
- (void)setOneUpPresentationAllowed:(BOOL)a0 forReason:(id)a1;
- (void)_updateChromeVisibility;
- (void)setDropTargetAssetReference:(id)a0;
- (void)_updateFilteringTimeoutObserver;
- (void)clickSelectIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a0 updateCursorIndexPath:(BOOL)a1;
- (void)_updateSystemAuthenticationType;
- (void)_invalidateChromeVisibility;
- (void)_invalidateAspectFitContent;
- (void)setShowLoadingPlaceholderWhenEmpty:(BOOL)a0;
- (id)_indexPathsForAssetCollectionReference:(id)a0;
- (id)initWithConfiguration:(id)a0 specManager:(id)a1;
- (void)setHeaderTitleTopInset:(double)a0;
- (void)setAspectRatioToggleAllowed:(BOOL)a0 forReason:(id)a1;
- (void)assetsDataSourceManagerDidFinishBackgroundFetching:(id)a0;
- (BOOL)attemptSetInSelectMode:(BOOL)a0;
- (void)_updateWantsContentUnavailableUnlockButtonVisible;
- (void)setHidesNavbar:(BOOL)a0;
- (void)toggleSelectionForAssetCollectionReference:(id)a0;
- (void)toggleSelectionForIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a0 updateCursorIndexPath:(BOOL)a1;
- (void)setViewBasedDecorationsEnabled:(BOOL)a0;
- (void)_invalidateContentPrivacyState;
- (void)toggleSelectionForIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a0;
- (id)_initialContentFilterStateForConfiguration:(id)a0;
- (void)setHideSurroundingContent:(BOOL)a0 forReason:(id)a1;
- (void)toggleSelectionForAssetReference:(id)a0 updateCursorIndexPath:(BOOL)a1;
- (void).cxx_destruct;
- (void)assetsDataSourceManagerDidFinishLoadingInitialDataSource:(id)a0;
- (BOOL)viewDelegateRespondsTo:(unsigned long long)a0;
- (void)setEnterSelectModeAllowed:(BOOL)a0 forReason:(id)a1;
- (void)_invalidateWantsContentUnavailableUnlockButtonVisible;
- (void)setScrolledToTop:(BOOL)a0;
- (void)clickSelectAssetReference:(id)a0 updateCursorIndexPath:(BOOL)a1;
- (id)selectionManager:(id)a0 validateSnapshot:(id)a1;
- (void)_updateAssetsDataSourceManager;
- (void)setLibraryFilterState:(id)a0;
- (void)_updateWantsContentFilterIndicatorVisible;
- (void)setContentBelowTitle:(BOOL)a0;
- (void)_updateGridAppearance;
- (void)_updateAspectFitContent;
- (void)setIsInCompactMode:(BOOL)a0;
- (void)setDraggedAssetReferences:(id)a0;
- (void)_invalidateFooterVisibility;
- (void)setRequiresLightTopBars:(BOOL)a0;
- (void)setDismissRequested:(BOOL)a0;
- (void)_updateDataSourceDependentProperties;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)_updateEmptyPlaceholderState;
- (void)dealloc;
- (void)setWantsContentUnavailableUnlockButtonVisible:(BOOL)a0;
- (void)_updateDraggedAssetReferences;
- (void)setCaptionsVisible:(BOOL)a0;
- (void)setWantsContentFilterIndicatorVisible:(BOOL)a0;
- (BOOL)selectionManagerShouldAvoidEmptySelection:(id)a0;
- (void)_invalidateSystemAuthenticationType;
- (id)_initialLibraryFilterStateForConfiguration:(id)a0;
- (void)_updateTopBarsStyles;
- (void)setZoomStep:(double)a0 isInteractive:(BOOL)a1 shouldAnimate:(BOOL)a2 anchorAssetReference:(id)a3;
- (void)_updateUserWantsAspectFitContent;
- (void)setSupportsAspectRatioToggle:(BOOL)a0;
- (void)_invalidateWantsContentFilterIndicatorVisible;
- (void)setTitleBackgroundOpacity:(double)a0;
- (void)setUserWantsAspectFitContent:(id)a0;
- (void)setShouldAlwaysRespectToolbarActionPlacementPreference:(BOOL)a0;
- (void)setFloatingTitleOpacity:(double)a0;

@end