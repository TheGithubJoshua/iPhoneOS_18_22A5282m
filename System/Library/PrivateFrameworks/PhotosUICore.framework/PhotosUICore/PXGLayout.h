@class PXGDataSourceChange, PXMediaProvider, PXGBasicAXGroup, PXGDecoratingLayout, NSObject, PXGEntityManager, NSMutableArray, PXGSublayoutDataStore, PXGAnchor, NSString, NSHashTable, PXGSpriteDataStore, NSIndexSet, PXGItemsLayout, NSArray, PXGViewEnvironment, NSMutableSet, PXGSpriteMetadataStore;
@protocol PXGLayoutFocusDelegate, PXGDisplayAssetSource, UICoordinateSpace, PXGLayoutContentSource, PXGLayoutViewDelegate, PXGLayoutScrollDelegate, PXGLayoutVisibleRectDelegate, OS_dispatch_queue, PXGAXResponder, PXGLayoutUpdateDelegate;

@interface PXGLayout : NSObject <PXGDataSourceDrivenLayout, PXGAXGroupSource, PXGAXInfoSource, PXGAXResponder, PXGSpriteIndexReferencing, PXGDiagnosticsProvider> {
    struct { unsigned long long needsUpdate; unsigned long long updated; BOOL isPerformingUpdate; BOOL willPerformUpdate; } _updateFlags;
    NSMutableArray *_changeDetails;
    NSMutableArray *_animations;
    NSMutableArray *_transitions;
    NSMutableArray *_fences;
    NSMutableArray *_spriteReferencesForHiddenSprites;
    NSIndexSet *_spriteIndexesWithInvalidatedStyle;
    BOOL _isRequestingVisibleRect;
    BOOL _isUpdating;
    BOOL _isUpdatingSpriteStyling;
    BOOL _isUpdatingAnchoring;
    BOOL _isPropagatingAdjustedReferencedHiddenSpriteIndexes;
    BOOL _isLastVisibleAreaAnchoringInformationInvalidated;
    BOOL _isPerformingWithLocalUpdate;
    PXGBasicAXGroup *_reusableAXGroup;
    long long _nestedAnchorVisibleRectChanges;
    NSMutableSet *_sublayoutsExpectedToBeUpdatedInUpdatePass;
    long long _numberOfRepeatedSublayoutUpdatesInUpdatePass;
    unsigned long long _childrenTotalUpdateDuration;
}

@property (readonly, nonatomic) NSArray *pendingFences;
@property (readonly, nonatomic) PXGItemsLayout *itemsLayout;
@property (readonly, nonatomic) BOOL hasPointReferences;
@property (readonly, nonatomic) PXGItemsLayout *layoutForItemChanges;
@property (readonly, nonatomic) PXGDataSourceChange *currentDataSourceChange;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSArray *pendingAnimations;
@property (readonly, copy, nonatomic) NSArray *interactions;
@property (readonly, nonatomic) BOOL shouldInvalidateDecorationForModifiedSprites;
@property (readonly, nonatomic) BOOL shouldUpdateDecorationMediaTargetSizes;
@property (readonly, nonatomic) BOOL shouldDecorateUndefinedMediaKind;
@property (readonly, nonatomic) PXGDecoratingLayout *decoratingLayout;
@property (readonly, nonatomic) NSString *axLocalizedLabel;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } axFrame;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } axVisibleRect;
@property (readonly, nonatomic) BOOL axShouldSearchLeafsInSubgroups;
@property (readonly, nonatomic) BOOL axShouldBeConsideredAsSubgroup;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSIndexSet *axSpriteIndexes;
@property (readonly, nonatomic) NSIndexSet *axVisibleSpriteIndexes;
@property (readonly, nonatomic) NSIndexSet *axSelectedSpriteIndexes;
@property (weak, nonatomic) id<PXGAXResponder> axNextResponder;
@property (weak, nonatomic) PXGLayout *superlayout;
@property (retain, nonatomic) PXGEntityManager *entityManager;
@property (readonly, nonatomic) PXGSpriteDataStore *spriteDataStore;
@property (readonly, nonatomic) PXGSpriteMetadataStore *spriteMetadataStore;
@property (weak, nonatomic) id<PXGLayoutUpdateDelegate> updateDelegate;
@property (weak, nonatomic) id<PXGLayoutVisibleRectDelegate> visibleRectDelegate;
@property (weak, nonatomic) id<PXGLayoutScrollDelegate> scrollDelegate;
@property (weak, nonatomic) id<PXGLayoutViewDelegate> viewDelegate;
@property (weak, nonatomic) id<PXGLayoutFocusDelegate> focusDelegate;
@property (readonly, nonatomic) NSMutableArray *changeDetails;
@property (readonly, nonatomic) long long updateCount;
@property (nonatomic) unsigned long long appearState;
@property (readonly, nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } flexibleRegionInsets;
@property (readonly, weak, nonatomic) id<PXGDisplayAssetSource> displayAssetSource;
@property (readonly, nonatomic) struct { BOOL supportedDisplayAssetPresentationStylesInLayout; BOOL minSpriteSizeForPresentationStyle; BOOL displayAssetRequestObserverForSpritesInRangeInLayout; BOOL videoPresentationControllerForDisplayAssetSpriteIndexInLayout; BOOL adjustmentForDisplayAssetSpriteIndexInLayout; BOOL presentationIntentForSpritesInRangeInLayout; } displayAssetSourceRespondsTo;
@property (readonly, nonatomic) struct { BOOL stringDrawingOptionsForSpriteAtIndexInLayout; BOOL paddingForSpriteAtIndexInLayout; BOOL drawingContextForSpriteAtIndexInLayout; BOOL attributedStringBoundingSizeForSpriteAtIndexInLayout; } stringSourceRespondsTo;
@property (readonly, nonatomic) long long intrinsicScrollRegime;
@property (readonly, nonatomic) NSString *recursiveDescription;
@property (retain, nonatomic) PXMediaProvider *mediaProvider;
@property (retain, nonatomic) PXGDataSourceChange *internalCurrentDataSourceChange;
@property (readonly, nonatomic) PXGAnchor *activeAnchor;
@property (nonatomic) struct CGSize { double width; double height; } estimatedContentSize;
@property (retain, nonatomic) PXGAnchor *lastVisibleAreaAnchor;
@property (copy, nonatomic) NSArray *interactions;
@property (readonly, copy, nonatomic) NSArray *animations;
@property (readonly, copy, nonatomic) NSArray *transitions;
@property (readonly, copy, nonatomic) NSArray *fences;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frame;
@property (readonly, nonatomic) BOOL appliesAlphaToSublayouts;
@property (readonly, nonatomic) BOOL isAnimating;
@property (readonly, nonatomic) unsigned long long contentChangeTrend;
@property (readonly, nonatomic) long long scrollableAxis;
@property (readonly, nonatomic) BOOL allowsDanglingUpdatesAssertions;
@property (readonly, nonatomic) BOOL allowsSublayoutUpdateCycleAssertions;
@property (readonly, nonatomic) BOOL hasSublayoutsRemainingToBeUpdated;
@property (readonly, nonatomic) NSIndexSet *localHiddenSpriteIndexes;
@property (nonatomic) struct CGSize { double width; double height; } contentSize;
@property (nonatomic) double lastBaseline;
@property (readonly, nonatomic) unsigned int localNumberOfSprites;
@property (readonly, nonatomic) unsigned int childrenNumberOfSprites;
@property (readonly, nonatomic) BOOL isUpdatingSpriteStyling;
@property (nonatomic, getter=isFloating) BOOL floating;
@property (nonatomic) double floatingOffset;
@property (readonly, nonatomic) PXGSublayoutDataStore *sublayoutDataStore;
@property (readonly, nonatomic) BOOL canHandleVisibleRectRejection;
@property (readonly, nonatomic) long long numberOfDescendantAnchors;
@property (readonly, nonatomic) unsigned long long anchoredContentEdges;
@property (readonly, nonatomic) BOOL shouldFaultInContentAtAnchoredContentEdges;
@property (readonly, nonatomic) long long anchoredSublayoutIndex;
@property (readonly, nonatomic) BOOL allowsObjectReferenceSpriteIndexLookup;
@property (readonly, nonatomic) NSHashTable *pointReferences;
@property (readonly, nonatomic) BOOL definesContextForPointReferences;
@property (weak, nonatomic) id<PXGAXResponder> axNextResponder;
@property (readonly, nonatomic) PXGBasicAXGroup *axGroup;
@property (readonly, nonatomic) unsigned int viewHostingSpriteIndex;
@property (weak, nonatomic) PXGLayout *nextViewHostingLayout;
@property (nonatomic) struct PXGCameraConfiguration { struct { void /* unknown type, empty encoding */ columns[4]; } viewMatrix; struct { void /* unknown type, empty encoding */ columns[4]; } projectionMatrix; struct { void /* unknown type, empty encoding */ columns[4]; } billboardMatrix; void /* unknown type, empty encoding */ renderOrigin; } cameraConfiguration;
@property (readonly, nonatomic) long long numberOfSublayouts;
@property (readonly, nonatomic) NSObject<UICoordinateSpace> *coordinateSpace;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *layoutQueue;
@property (retain, nonatomic) PXGViewEnvironment *viewEnvironment;
@property (nonatomic) struct CGSize { double width; double height; } referenceSize;
@property (nonatomic) double referenceDepth;
@property (nonatomic) unsigned short referenceOptions;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } visibleRect;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } safeAreaInsets;
@property (nonatomic) double screenScale;
@property (nonatomic) struct CGPoint { double x; double y; } lastScrollDirection;
@property (nonatomic) long long scrollSpeedRegime;
@property (nonatomic) double alpha;
@property (nonatomic) unsigned long long userInterfaceDirection;
@property (copy, nonatomic) NSIndexSet *hiddenSpriteIndexes;
@property (readonly, nonatomic) BOOL needsUpdate;
@property (readonly, nonatomic) long long version;
@property (readonly, nonatomic) unsigned int numberOfSprites;
@property (readonly, nonatomic) PXGLayout *rootLayout;
@property (readonly, nonatomic) unsigned long long fullyVisibleEdgesWithDefaultTolerance;
@property (readonly, nonatomic) struct { struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } x0; double x1; } orientedContentTransform;
@property (weak, nonatomic) id<PXGLayoutContentSource> contentSource;
@property (retain, nonatomic) id userData;
@property (readonly, nonatomic) NSArray *preferredFocusLayouts;
@property (readonly, nonatomic) NSIndexSet *preferredFocusSpriteIndexes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *diagnosticDescription;

- (BOOL)axGroup:(id)a0 didRequestToPerformAction:(long long)a1 userInfo:(id)a2;
- (void)adjustReferencedSpriteIndexesWithChangeDetails:(id)a0 appliedToLayout:(id)a1;
- (BOOL)isSpriteIndex:(unsigned int)a0 decoratingSpriteWithIndex:(out unsigned int *)a1;
- (id)axContainingScrollViewForAXGroup:(id)a0;
- (void)sublayoutDidChangeLastBaseline:(id)a0;
- (void)updateIfNeeded;
- (void)entityManagerDidChange;
- (void)appearStateDidChange;
- (void)axGroup:(id)a0 didChange:(unsigned long long)a1 userInfo:(id)a2;
- (void)enumerateVisibleAnchoringSpriteIndexesUsingBlock:(id /* block */)a0;
- (void)clearLastVisibleAreaAnchoringInformation;
- (void)enumerateSpritesInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 usingBlock:(id /* block */)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })convertRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 fromLayout:(id)a1;
- (id)init;
- (void)removeAnchor:(id)a0;
- (void)addTransition:(id)a0;
- (void)_appendDescription:(id)a0 atLevel:(long long)a1;
- (void)removeSpritesAtIndexes:(id)a0;
- (void)removeSpritesInRange:(struct _PXGSpriteIndexRange { unsigned int x0; unsigned int x1; })a0;
- (void)moveSpritesInRange:(struct _PXGSpriteIndexRange { unsigned int x0; unsigned int x1; })a0 toRange:(struct _PXGSpriteIndexRange { unsigned int x0; unsigned int x1; })a1;
- (void)setNeedsFocusUpdate;
- (void)enumerateLayoutsForSpritesInRange:(struct _PXGSpriteIndexRange { unsigned int x0; unsigned int x1; })a0 options:(unsigned long long)a1 usingBlock:(id /* block */)a2;
- (void)willFaultOutSublayout:(id)a0 atIndex:(long long)a1;
- (id)objectReferenceForSpriteIndex:(unsigned int)a0;
- (id)dropTargetObjectReferenceForLocation:(struct CGPoint { double x0; double x1; })a0;
- (id)_paddingForLevel:(long long)a0;
- (id)axSpriteIndexesInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)enumerateSpritesInRange:(struct _PXGSpriteIndexRange { unsigned int x0; unsigned int x1; })a0 usingBlock:(id /* block */)a1;
- (void)referenceSizeDidChange;
- (id)axContentInfoAtSpriteIndex:(unsigned int)a0;
- (void)removeAllAnimations;
- (void)addInteraction:(id)a0;
- (void)sublayout:(id)a0 didApplySpriteChangeDetails:(id)a1 fromDescendentSublayout:(id)a2;
- (unsigned int)axSpriteIndexClosestToSpriteIndex:(unsigned int)a0 inDirection:(unsigned long long)a1;
- (void)userInterfaceDirectionDidChange;
- (void)sublayoutDidChangeContentSize:(id)a0;
- (void)alphaDidChange;
- (void)invalidateVersion;
- (void)didAddSublayout:(id)a0 atIndex:(long long)a1 flags:(unsigned long long)a2;
- (void)referenceOptionsDidChange;
- (void)addAnimation:(id)a0;
- (void)safeAreaInsetsDidChange;
- (struct CGPoint { double x0; double x1; })convertPoint:(struct CGPoint { double x0; double x1; })a0 fromLayout:(id)a1;
- (id)viewForSpriteIndex:(unsigned int)a0;
- (void)removeSublayoutsInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)hitTestResultForSpriteIndex:(unsigned int)a0;
- (void)referenceDepthDidChange;
- (void)willUpdate;
- (void)scrollSpeedRegimeDidChange;
- (void)didFaultInSublayout:(id)a0 atIndex:(long long)a1 fromEstimatedContentSize:(struct CGSize { double x0; double x1; })a2;
- (void)setNeedsUpdate;
- (id)createDefaultAnimationForCurrentContext;
- (void)animationDidComplete:(id)a0;
- (void)sublayoutNeedsUpdate:(id)a0;
- (void)hideSpritesForObjectReferences:(id)a0;
- (void).cxx_destruct;
- (void)axDidUpdateFocusFromSpriteAtIndex:(unsigned int)a0 toSpriteAtIndex:(unsigned int)a1;
- (unsigned short)addResizableCapInsets:(struct { float x0; float x1; float x2; float x3; })a0;
- (void)didChangeSublayoutOrigins;
- (void)containingScrollViewDidScroll:(struct CGPoint { double x0; double x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })sublayout:(id)a0 visibleRectForRequestedVisibleRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)removeAllFences;
- (void)insertSublayout:(id)a0 atIndex:(long long)a1;
- (void)getDetailedPresentedPlacement:(id)a0 forItemReference:(id)a1;
- (void)visibleRectDidChange;
- (struct _PXGSpriteIndexRange { unsigned int x0; unsigned int x1; })spriteIndexRangeCoveringRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)willRemoveSublayout:(id)a0 atIndex:(long long)a1 flags:(unsigned long long)a2;
- (void)addAnchor:(id)a0;
- (void)addFence:(id)a0;
- (id)createCuratedLibraryLayoutTransitionIfNeededWithContext:(long long)a0;
- (long long)indexOfSublayout:(id)a0;
- (void)contentSizeDidChange;
- (void)insertSublayoutProvider:(id)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)dealloc;
- (void)didUpdate;
- (unsigned int)spriteIndexForObjectReference:(id)a0 options:(unsigned long long)a1 updatedObjectReference:(out id *)a2;
- (void)screenScaleDidChange;
- (id)createCuratedLibraryLayoutAnimationIfNeededWithContext:(long long)a0 userData:(id)a1;
- (void)axDidReceiveFocusMovementHint:(id)a0 forSpriteAtIndex:(unsigned int)a1;
- (void)_invalidateDecorationForSpriteRange:(struct _PXGSpriteIndexRange { unsigned int x0; unsigned int x1; })a0 inLayout:(id)a1 invalidateSprites:(BOOL)a2;
- (void)setNeedsUpdateOfScrollableAxis;
- (void)viewEnvironmentDidChange;
- (void)applySpriteChangeDetails:(id)a0 countAfterChanges:(unsigned int)a1 initialState:(id /* block */)a2 modifyState:(id /* block */)a3;
- (void)setDetailedPlacementOverride:(id)a0 forItemReference:(id)a1;
- (id)leafSublayoutForSpriteIndex:(unsigned int)a0;
- (unsigned int)convertSpriteIndex:(unsigned int)a0 fromLayout:(id)a1;
- (void)update;
- (void)enumerateVisibleAnchoringLayoutsUsingBlock:(id /* block */)a0;
- (void)enumerateDescendantsLayoutsUsingBlock:(id /* block */)a0;
- (long long)sublayoutIndexForObjectReference:(id)a0 options:(unsigned long long)a1 updatedObjectReference:(out id *)a2;
- (id)createAnimation;
- (void)removeAnimation:(id)a0;
- (void)removeInteraction:(id)a0;
- (void)_updateVersion;
- (void)_addAnimations:(id)a0;
- (unsigned long long)axFocusabilityForSpriteAtIndex:(unsigned int)a0;
- (id)createAnchorForScrollingSpriteAtIndex:(unsigned int)a0 toScrollPosition:(unsigned long long)a1 padding:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a2;
- (id)createTransitionWithAnimations:(id)a0;
- (void)modifySpritesInRange:(struct _PXGSpriteIndexRange { unsigned int x0; unsigned int x1; })a0 fullState:(id /* block */)a1;
- (void)addSpritesInRange:(struct _PXGSpriteIndexRange { unsigned int x0; unsigned int x1; })a0 initialState:(id /* block */)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })convertRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 toDescendantLayout:(id)a1;
- (id)diagnosticsItemProvidersInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_addFences:(id)a0;
- (void)_addHiddenSpriteIndexes:(id)a0;
- (void)_childDidUpdateWithDuration:(unsigned long long)a0;
- (id)_createAnchorForContentEdges:(unsigned long long)a0 priority:(long long)a1;
- (id)_createAnchorWithAnchor:(id)a0 resetPriority:(BOOL)a1;
- (id)_createAnchorWithPriority:(long long)a0 constraints:(id /* block */)a1;
- (void)_ensureSpriteDataStore;
- (void)_ensureSublayoutDataStore;
- (void)_enumerateSpritesInRange:(struct _PXGSpriteIndexRange { unsigned int x0; unsigned int x1; })a0 transform:(struct { struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } x0; double x1; })a1 spriteOffset:(unsigned int)a2 stop:(BOOL *)a3 usingBlock:(id /* block */)a4;
- (void)_enumerateSpritesInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 transform:(struct { struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } x0; double x1; })a1 usingBlock:(id /* block */)a2;
- (void)_incrementNumberOfSprites:(long long)a0;
- (void)_invalidateStyleOfSpritesWithIndexes:(id)a0;
- (struct CGPoint { double x0; double x1; })_offsetToDescendantLayout:(id)a0;
- (void)_propagateHiddenSpriteIndexes:(id)a0;
- (void)_recursivelyResetHiddenSpriteIndexes;
- (void)_recycleSpriteDataStore;
- (void)_resetHiddenSpriteIndexes;
- (void)_setNeedsUpdateExternally:(BOOL)a0;
- (void)_updateAnchoring;
- (void)_willAddSublayout:(id)a0;
- (void)addPointReference:(id)a0;
- (struct _PXGSpriteIndexRange { unsigned int x0; unsigned int x1; })addSpriteCount:(unsigned int)a0 withInitialState:(id /* block */)a1;
- (unsigned int)addSpriteWithInitialState:(id /* block */)a0;
- (void)addSpritesAtIndexes:(id)a0 initialState:(id /* block */)a1;
- (long long)addSublayout:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })anchoringRectForSpriteAtIndex:(unsigned int)a0;
- (void)applySectionedChangeDetails:(id)a0 dataSourceBeforeChanges:(id)a1 dataSourceAfterChanges:(id)a2 sublayoutProvider:(id)a3 outChangedSections:(id *)a4 outSectionsWithItemChanges:(id *)a5 changeMediaVersionHandler:(id /* block */)a6;
- (void)applySectionedChangeDetailsForSingleSection:(id)a0 dataSourceBeforeChanges:(id)a1 dataSourceAfterChanges:(id)a2 changeMediaVersionHandler:(id /* block */)a3;
- (void)applySpriteChangeDetails:(id)a0 countAfterChanges:(unsigned int)a1 initialState:(id /* block */)a2 modifyFullState:(id /* block */)a3;
- (void)applySublayoutChangeDetails:(id)a0 countAfterChanges:(long long)a1 sublayoutProvider:(id)a2;
- (void)assumeWillUpdateSublayoutInUpdatePass:(id)a0;
- (void)axAddSubgroupForSublayout:(id)a0 atIndex:(long long)a1 flags:(unsigned long long)a2;
- (id)axContainingViewForAXGroup:(id)a0;
- (struct CGPoint { double x0; double x1; })axConvertPoint:(struct CGPoint { double x0; double x1; })a0 fromDescendantGroup:(id)a1;
- (struct CGPoint { double x0; double x1; })axConvertPoint:(struct CGPoint { double x0; double x1; })a0 toDescendantGroup:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })axConvertRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 fromDescendantGroup:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })axConvertRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 toDescendantGroup:(id)a1;
- (void)axDidUpdateFocusInContext:(id)a0;
- (id)axLeafForObjectReference:(id)a0;
- (void)axRemoveSubgroupForSublayout:(id)a0 atIndex:(long long)a1 flags:(unsigned long long)a2;
- (unsigned int)axSpriteIndexClosestToSpriteIndexDefaultImplementation:(unsigned int)a0 inDirection:(unsigned long long)a1;
- (id)axSpriteIndexesInRectDefaultImplementation:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)changeVisibleRectToProposedVisibleRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)commonAncestorWithLayout:(id)a0;
- (id)convertChangeDetails:(id)a0 fromSublayout:(id)a1;
- (struct CGPoint { double x0; double x1; })convertPoint:(struct CGPoint { double x0; double x1; })a0 fromDescendantLayout:(id)a1;
- (struct CGPoint { double x0; double x1; })convertPoint:(struct CGPoint { double x0; double x1; })a0 toDescendantLayout:(id)a1;
- (struct _PXGSpriteIndexRange { unsigned int x0; unsigned int x1; })convertRange:(struct _PXGSpriteIndexRange { unsigned int x0; unsigned int x1; })a0 fromSublayout:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })convertRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 fromDescendantLayout:(id)a1;
- (unsigned int)convertSpriteIndex:(unsigned int)a0 fromDescendantLayout:(id)a1;
- (unsigned int)convertSpriteIndex:(unsigned int)a0 toDescendantLayout:(id)a1;
- (struct _PXGSpriteIndexRange { unsigned int x0; unsigned int x1; })convertSpriteIndexRange:(struct _PXGSpriteIndexRange { unsigned int x0; unsigned int x1; })a0 fromDescendantLayout:(id)a1;
- (id)convertSpriteIndexes:(id)a0 fromDescendantLayout:(id)a1;
- (void)copyLayoutForSpritesInRange:(struct _PXGSpriteIndexRange { unsigned int x0; unsigned int x1; })a0 applySpriteTransforms:(BOOL)a1 entities:(struct { unsigned int x0; } *)a2 geometries:(struct { struct { double x0; double x1; double x2; } x0; } *)a3 styles:(struct { float x0; struct { union { struct { float x0; float x1; float x2; float x3; } x0; float x1[4]; } x0; } x1; float x2; float x3; float x4; float x5; unsigned short x6; unsigned char x7; float x8; struct { void /* unknown type, empty encoding */ x0[4]; } x9; } *)a4 infos:(struct { int x0; int x1; float x2; long long x3; unsigned short x4; unsigned char x5; } *)a5;
- (void)copyLayoutForSpritesInRange:(struct _PXGSpriteIndexRange { unsigned int x0; unsigned int x1; })a0 applySpriteTransforms:(BOOL)a1 parentTransform:(struct { struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } x0; double x1; })a2 parentAlpha:(float)a3 parentSublayoutOrigin:(struct { double x0; double x1; double x2; })a4 entities:(struct { unsigned int x0; } *)a5 geometries:(struct { struct { double x0; double x1; double x2; } x0; } *)a6 styles:(struct { float x0; struct { union { struct { float x0; float x1; float x2; float x3; } x0; float x1[4]; } x0; } x1; float x2; float x3; float x4; float x5; unsigned short x6; unsigned char x7; float x8; struct { void /* unknown type, empty encoding */ x0[4]; } x9; } *)a7 infos:(struct { int x0; int x1; float x2; long long x3; unsigned short x4; unsigned char x5; } *)a8;
- (void)copyLayoutForSpritesInRange:(struct _PXGSpriteIndexRange { unsigned int x0; unsigned int x1; })a0 entities:(struct { unsigned int x0; } *)a1 geometries:(struct { struct { double x0; double x1; double x2; } x0; } *)a2 styles:(struct { float x0; struct { union { struct { float x0; float x1; float x2; float x3; } x0; float x1[4]; } x0; } x1; float x2; float x3; float x4; float x5; unsigned short x6; unsigned char x7; float x8; struct { void /* unknown type, empty encoding */ x0[4]; } x9; } *)a3 infos:(struct { int x0; int x1; float x2; long long x3; unsigned short x4; unsigned char x5; } *)a4;
- (void)copyLayoutForSpritesInRange:(struct _PXGSpriteIndexRange { unsigned int x0; unsigned int x1; })a0 toSpriteDataStore:(id)a1;
- (void)copySpritesToDataStore:(id)a0;
- (id)createAnchorForContentEdges:(unsigned long long)a0;
- (id)createAnchorForScrollingAnimationTowardsContentEdges:(unsigned long long)a0;
- (id)createAnchorForScrollingSpriteForObjectReference:(id)a0 toScrollPosition:(unsigned long long)a1 padding:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a2;
- (id)createAnchorForScrollingSpriteForSpriteReference:(id)a0 normalizedAnchorPoint:(struct CGPoint { double x0; double x1; })a1 toVisibleLocation:(struct CGPoint { double x0; double x1; })a2;
- (id)createAnchorForScrollingSpriteForSpriteReference:(id)a0 toScrollPosition:(unsigned long long)a1 padding:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a2;
- (id)createAnchorForScrollingSpriteForSpriteReference:(id)a0 toScrollPosition:(unsigned long long)a1 padding:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a2 customOffset:(id /* block */)a3;
- (id)createAnchorForScrollingToContentEdges:(unsigned long long)a0 padding:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1;
- (id)createAnchorForSpriteAtIndex:(unsigned int)a0;
- (id)createAnchorForSpriteReferences:(id)a0;
- (id)createAnchorForVisibleArea;
- (id)createAnchorForVisibleAreaIgnoringEdges:(unsigned long long)a0;
- (id)createAnchorFromSuperlayoutWithSublayoutIndex:(long long)a0 sublayoutPositionEdges:(unsigned long long)a1 ignoringScrollingAnimationAnchors:(BOOL)a2;
- (id)createAnchorWithAnchor:(id)a0;
- (id)createAnchorWithConstraints:(id /* block */)a0;
- (id)createCuratedLibraryLayoutAnimationIfNeededWithContext:(long long)a0;
- (id)createCuratedLibraryLayoutSkimmingSlideshowAnimationFromSectionIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a0 toSectionIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a1;
- (id)createCuratedLibraryLayoutZoomLevelChangeAnimationFromZoomLevel:(long long)a0 toZoomLevel:(long long)a1 withContext:(long long)a2;
- (id)createFenceWithType:(unsigned long long)a0;
- (id)createPointReferenceAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)didApplySpriteChangeDetails:(id)a0;
- (void)didApplySublayoutChangeDetails:(id)a0 axAdjustedSubgroupChangeDetails:(id)a1 countAfterChanges:(long long)a2;
- (void)didRender;
- (void)didUpdateSublayout:(id)a0;
- (id)dynamicSpriteReferenceForObjectReference:(id)a0;
- (struct { unsigned int x0; })entityForSpriteAtIndex:(unsigned int)a0;
- (void)enumerateDescendantsLayoutsBreadthFirstReverseUsingBlock:(id /* block */)a0;
- (void)enumerateLocalSpritesInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 usingBlock:(id /* block */)a1;
- (void)enumerateSpritesInRange:(struct _PXGSpriteIndexRange { unsigned int x0; unsigned int x1; })a0 options:(unsigned long long)a1 usingBlock:(id /* block */)a2;
- (void)enumerateSublayoutsForDetailedPlacement:(id)a0 ofItemWithReference:(id)a1 usingBlock:(id /* block */)a2;
- (void)floatingDidChange;
- (void)floatingOffsetDidChange;
- (unsigned long long)fullyVisibleEdgesWithEdgeTolerances:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (struct { struct { double x0; double x1; double x2; } x0; })geometryForSpriteAtIndex:(unsigned int)a0;
- (void)insertSublayoutProvider:(id)a0 atIndexes:(id)a1;
- (void)installLayoutCompletionBlock:(id /* block */)a0;
- (void)invalidateDecoration;
- (void)invalidateDecorationAndSprites;
- (void)invalidateDecorationForSpritesInRange:(struct _PXGSpriteIndexRange { unsigned int x0; unsigned int x1; })a0;
- (void)invalidateLastVisibleAreaAnchoringInformation;
- (BOOL)isDescendantOfLayout:(id)a0;
- (void)lastScrollDirectionDidChange;
- (void)layoutQueueDidChange;
- (void)localHiddenSpriteIndexesDidChange;
- (void)markLastVisibleAreaAnchoringInformationForInvalidation;
- (void)mediaProviderDidChange;
- (struct CGSize { double x0; double x1; })minPlayableSizeForSpriteAtIndex:(unsigned int)a0;
- (void)modifySpritesAtIndexes:(id)a0 fullState:(id /* block */)a1;
- (void)modifySpritesAtIndexes:(id)a0 state:(id /* block */)a1;
- (void)modifySpritesInRange:(struct _PXGSpriteIndexRange { unsigned int x0; unsigned int x1; })a0 state:(id /* block */)a1;
- (void)modifySpritesInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 state:(id /* block */)a1;
- (void)performChangesWithLocalUpdate:(id /* block */)a0;
- (void)performRepeatedSublayoutsUpdate:(id /* block */)a0;
- (void)performSpriteStylingUpdate:(id /* block */)a0;
- (struct CGPoint { double x0; double x1; })pointForPointReference:(id)a0;
- (void)removeAllTransitions;
- (void)removeFromSuperlayout;
- (void)removePointReference:(id)a0;
- (void)removeSublayoutAtIndex:(long long)a0;
- (void)removeSublayoutsAtIndexes:(id)a0;
- (void)setLocalHiddenSpriteIndexes:(id)a0;
- (unsigned int)spriteIndexForObjectReference:(id)a0;
- (unsigned int)spriteIndexForSpriteReference:(id)a0;
- (unsigned int)spriteIndexForSpriteReference:(id)a0 options:(unsigned long long)a1;
- (id)spriteReferenceForObjectReference:(id)a0;
- (id)spriteReferenceForSpriteIndex:(unsigned int)a0;
- (id)spriteReferenceForSpriteIndex:(unsigned int)a0 objectReference:(id)a1;
- (id)spriteReferenceForSpriteReference:(id)a0;
- (struct { float x0; struct { union { struct { float x0; float x1; float x2; float x3; } x0; float x1[4]; } x0; } x1; float x2; float x3; float x4; float x5; unsigned short x6; unsigned char x7; float x8; struct { void /* unknown type, empty encoding */ x0[4]; } x9; })styleForSpriteAtIndex:(unsigned int)a0;
- (void)sublayout:(id)a0 didAddAnchor:(id)a1;
- (void)sublayout:(id)a0 didRemoveAnchor:(id)a1;
- (id)sublayoutAtIndex:(long long)a0 loadIfNeeded:(BOOL)a1;
- (id)sublayoutForSpriteIndex:(unsigned int)a0;
- (long long)sublayoutIndexForSpriteIndex:(unsigned int)a0;
- (long long)sublayoutIndexForSpriteReference:(id)a0 options:(unsigned long long)a1;
- (void)superlayoutDidChange;
- (void)updateAsRootIfNeeded;
- (void)updateStylingForSpritesAtIndexes:(id)a0;
- (unsigned int)viewHostingSpriteIndexForSublayout:(id)a0;

@end