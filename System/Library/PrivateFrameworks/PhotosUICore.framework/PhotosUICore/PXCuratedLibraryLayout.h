@class NSMutableDictionary, PXAssetCollectionReference, PXCuratedLibraryLayoutSpec, PXCuratedLibraryViewModel, PXZoomablePhotosLayout, PXSectionedObjectReference, NSString, PXCuratedLibrarySummaryHelper, PXCuratedLibrarySectionHeaderLayout, PXCuratedLibrarySectionedLayout, PXGDiagnosticsSpriteProbe, PXNumberAnimator, PXGSpriteReference;
@protocol PXDisplayAssetCollection, PXBrowserVisibleContentSnapshot;

@interface PXCuratedLibraryLayout : PXGSplitLayout <PXLibrarySummaryDataSource, PXChangeObserver, PXAssetsDataSourceManagerObserver, PXCuratedLibraryViewModelPresenter, PXGNamedImageSource, PXGAnchorDelegate, PXSettingsKeyObserver, PXCuratedLibraryLayoutAssetCollectionReferenceProvider> {
    PXCuratedLibrarySummaryHelper *_summaryHelper;
    struct { unsigned long long needsUpdate; unsigned long long updated; BOOL isPerformingUpdate; BOOL willPerformUpdate; } _updateFlags;
    struct { unsigned long long needsUpdate; unsigned long long updated; BOOL isPerformingUpdate; BOOL willPerformUpdate; } _postUpdateFlags;
    NSMutableDictionary *_lastVisibleAreaAnchorsByZoomLevels;
    NSMutableDictionary *_preferredVisibleAreaAnchorsByZoomLevels;
    PXGDiagnosticsSpriteProbe *_spriteProbe;
    BOOL _wantsStatusBarGradient;
    PXNumberAnimator *_statusBarGradientAnimator;
    unsigned short _statusBarGradientResizableCapInsetsIndex;
    unsigned int _statusBarGradientSpriteIndex;
    double _statusBarGradientAlpha;
    double _statusBarGradientHeight;
    double _statusBarGradientAndStyleFadeDuration;
    BOOL _isPerformingUpdate;
    BOOL _isPerformingInitialUpdate;
}

@property (readonly, nonatomic) PXSectionedObjectReference *dominantObjectReference;
@property (nonatomic) double lateralMargin;
@property (retain, nonatomic) id lastVisibleDominantObjectReference;
@property (retain, nonatomic) PXAssetCollectionReference *lastPresentedDayAssetCollectionReference;
@property (retain, nonatomic) id dominantHeroPreferencesBeforeTransition;
@property (readonly, nonatomic) PXCuratedLibraryLayoutSpec *spec;
@property (readonly, nonatomic) PXCuratedLibrarySectionedLayout *libraryBodyLayout;
@property (readonly, nonatomic) PXZoomablePhotosLayout *allPhotosLayout;
@property (readonly, nonatomic) PXCuratedLibrarySectionHeaderLayout *floatingHeaderLayout;
@property (readonly, nonatomic) long long presentedZoomLevel;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } presentedVisibleRect;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } fullyVisibleRect;
@property (readonly, nonatomic) PXCuratedLibraryViewModel *viewModel;
@property (retain, nonatomic) PXGSpriteReference *lastHitSpriteReference;
@property (readonly, nonatomic) double estimatedHeaderHeight;
@property (readonly, nonatomic) double bottomMargin;
@property (readonly, nonatomic) id<PXBrowserVisibleContentSnapshot> visibleContentSnapshot;
@property (readonly, nonatomic) id<PXDisplayAssetCollection> topMostAssetCollection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) PXAssetCollectionReference *assetCollectionReference;

- (void)sublayoutDidChangeLastBaseline:(id)a0;
- (void)_updateLocalSprites;
- (BOOL)allowsDanglingUpdatesAssertions;
- (void)clearLastVisibleAreaAnchoringInformation;
- (id)presentedItemsGeometryForDataSource:(id)a0;
- (id /* block */)dateIntervalFutureForContentInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 type:(unsigned long long)a1;
- (void)enumerateSectionBoundariesWithOptions:(unsigned long long)a0 usingBlock:(id /* block */)a1;
- (id)viewModel:(id)a0 dominantAssetCollectionReferenceForZoomLevel:(long long)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })sectionBoundariesForAssetCollectionReference:(id)a0;
- (id)_createAnchorForTransitionToZoomLevel:(long long)a0;
- (id /* block */)locationNamesFutureForContentInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_updateFloatingHeaderButtons;
- (id)imageConfigurationAtIndex:(unsigned int)a0 inLayout:(id)a1;
- (id)initWithViewModel:(id)a0;
- (long long)viewModel:(id)a0 transitionTypeFromZoomLevel:(long long)a1 toZoomLevel:(long long)a2;
- (id)topMostAssetCollectionInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 ignoreChapterHeaders:(BOOL)a1;
- (void)enumerateVisibleAssetReferencesUsingBlock:(id /* block */)a0;
- (void)enumerateVisibleAssetsSectionSublayoutsUsingBlock:(id /* block */)a0;
- (id)topMostAssetCollectionReference;
- (id)axLocalizedLabel;
- (void)_updateFloatingHeaderLayoutSpec;
- (void)_updateFloatingHeaderAppearance;
- (void)_updateZoomLevel;
- (BOOL)allowsSublayoutUpdateCycleAssertions;
- (void)_updateSpecValue;
- (struct CGPoint { double x0; double x1; })anchor:(id)a0 visibleRectOriginForProposedVisibleRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 forLayout:(id)a2;
- (struct CGPoint { double x0; double x1; })_adjustInitialVisibleRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inLayout:(id)a1 forRecentSection:(long long)a2;
- (id)createAnchorForScrollingToInitialPosition;
- (void)_updateAllPhotosOverlayInsets;
- (long long)curatedLibraryLayoutAnimationContextForTransitionToZoomLevel:(long long)a0;
- (BOOL)curatedLibrarySummaryHelperShouldUpdateImmediately:(id)a0;
- (void)_updateStatusBarGradientVisibility;
- (void)safeAreaInsetsDidChange;
- (id)hitTestResultForSpriteIndex:(unsigned int)a0;
- (double)_adjustedTargetVisibleTopToAccomodateFromBottomPaddedAreaVisibility:(BOOL)a0 proposedVisibleRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)willUpdate;
- (id)createDefaultAnimationForCurrentContext;
- (void)animationDidComplete:(id)a0;
- (void).cxx_destruct;
- (void)_updateLibraryBodyLayoutLastVisibleDominantObjectReference;
- (void)_updateStatusBarStyle;
- (void)viewModel:(id)a0 willTransitionFromZoomLevel:(long long)a1 toZoomLevel:(long long)a2;
- (void)_updateLibraryBodyLayoutLateralMargin;
- (void)_updateStatusBarGradientAlphaValue;
- (double)adjustedTargetVisibleTopForProposedTargetVisibleTop:(double)a0 scrollingVelocity:(double)a1;
- (void)viewModel:(id)a0 didTransitionFromZoomLevel:(long long)a1 toZoomLevel:(long long)a2;
- (double)_adjustedTargetVisibleTopByAligningNearestHeroForProposedTargetVisibleTop:(double)a0;
- (void)visibleRectDidChange;
- (id)createCuratedLibraryLayoutTransitionIfNeededWithContext:(long long)a0;
- (void)_updateFloatingHeaderVisibility;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)settings:(id)a0 changedValueForKey:(id)a1;
- (void)_enumerateHeroSpritesInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 usingBlock:(id /* block */)a1;
- (long long)_statusBarVisibility;
- (void)dealloc;
- (void)didUpdate;
- (void)_updateLateralMargin;
- (void)_enumerateScrollablePagesWithOptions:(unsigned long long)a0 usingBlock:(id /* block */)a1;
- (void)screenScaleDidChange;
- (id)createCuratedLibraryLayoutAnimationIfNeededWithContext:(long long)a0 userData:(id)a1;
- (id)_currentBodyLayout;
- (void)_invalidateSummaryHelper;
- (void)_updateFloatingHeaderSelectionTitle;
- (id)lastVisibleAreaAnchor;
- (void)setSpec:(id)a0;
- (void)update;
- (id)_currentFloatingHeaderSpec;
- (void)invalidateFloatingHeaderButtons;
- (id)axSpriteIndexes;
- (void)_noteAnimation:(id)a0 isRunning:(BOOL)a1;
- (long long)sublayoutIndexForObjectReference:(id)a0 options:(unsigned long long)a1 updatedObjectReference:(out id *)a2;

@end
