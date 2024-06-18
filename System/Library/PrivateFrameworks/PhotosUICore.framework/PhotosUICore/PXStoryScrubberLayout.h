@class PXStoryModel, PXStoryScrubberContentLayout, PXStoryViewModel, PXStoryScrubberScrollLayout, NSDate, NSNumber, NSString;

@interface PXStoryScrubberLayout : PXGSplitLayout <PXChangeObserver, PXGViewSource> {
    struct { unsigned long long needsUpdate; unsigned long long updated; BOOL isPerformingUpdate; BOOL willPerformUpdate; } _updateFlags;
    BOOL _isUpdatingWantsVisible;
    unsigned int _focusGuideSpriteIndex;
}

@property (readonly, nonatomic) PXStoryViewModel *viewModel;
@property (retain, nonatomic) PXStoryModel *mainModel;
@property (retain, nonatomic) NSDate *currentSkipSegmentActionDate;
@property (retain, nonatomic) NSDate *lastScrubbedDate;
@property (retain, nonatomic) PXStoryScrubberContentLayout *contentLayout;
@property (retain, nonatomic) PXStoryScrubberScrollLayout *scrollLayout;
@property (retain, nonatomic) NSNumber *alphaOverride;
@property (nonatomic) unsigned short focusGuideContentVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_updateSkipSegmentActionDate;
- (id)init;
- (id)initWithViewModel:(id)a0;
- (BOOL)_shouldEnableFocusGuide;
- (BOOL)allowsRepeatedSublayoutsUpdates;
- (void)referenceSizeDidChange;
- (void)_invalidateMainModel;
- (void)_loadSublayoutsIfNeeded;
- (void)_updateFocusGuide;
- (void)alphaDidChange;
- (void)_updateMainModel;
- (void)_updateVisibilityFraction;
- (id)preferredFocusLayouts;
- (void)referenceDepthDidChange;
- (void)willUpdate;
- (void)_loadTVSublayoutsIfNeeded;
- (void)_updateWantsVisible;
- (void).cxx_destruct;
- (void)getDetailedPresentedPlacement:(id)a0 forItemReference:(id)a1;
- (void)_invalidateSkipSegmentActionDate;
- (Class)viewClassForSpriteAtIndex:(unsigned int)a0 inLayout:(id)a1;
- (void)_invalidateSublayoutsAlpha;
- (void)_updateSublayouts;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)didUpdate;
- (void)_invalidateLastScrubbedDate;
- (void)_invalidateVisibilityFraction;
- (void)_invalidateFocusGuide;
- (void)setDetailedPlacementOverride:(id)a0 forItemReference:(id)a1;
- (void)update;
- (void)_invalidateWantsVisible;
- (void)_updateLastScrubbedDate;
- (id)axSpriteIndexes;
- (void)_updateSublayoutsAlpha;
- (void)_invalidateSublayouts;
- (id)viewUserDataForSpriteAtIndex:(unsigned int)a0 inLayout:(id)a1;

@end
