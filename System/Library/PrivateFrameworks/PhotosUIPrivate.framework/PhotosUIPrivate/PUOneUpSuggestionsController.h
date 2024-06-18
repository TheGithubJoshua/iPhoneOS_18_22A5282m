@class PUAssetReference, NSMutableDictionary, PUOneUpSuggestionsProvider, NSString, PUBrowsingViewModel;
@protocol PUOneUpSuggestionsControllerDelegate;

@interface PUOneUpSuggestionsController : NSObject <PUBrowsingViewModelChangeObserver> {
    BOOL _willPerformUpdates;
    BOOL _isPerformingUpdates;
    struct { BOOL focusedAssetReference; BOOL focusedLongEnough; BOOL activeSuggestionsWindow; } _needsUpdateFlags;
    struct { BOOL suggestionAvailable; BOOL canShowSuggestion; } _delegateRespondsTo;
}

@property (nonatomic, getter=isInFocus) BOOL inFocus;
@property (retain, nonatomic) PUAssetReference *focusedAssetReference;
@property (nonatomic) double lastFocusedAssetReferenceChangeTime;
@property (nonatomic, getter=isFocusedLongEnough) BOOL focusedLongEnough;
@property (readonly, nonatomic) NSMutableDictionary *suggestionInfos;
@property (readonly, nonatomic) PUOneUpSuggestionsProvider *suggestionsProvider;
@property (readonly, nonatomic) PUBrowsingViewModel *browsingViewModel;
@property (weak, nonatomic) id<PUOneUpSuggestionsControllerDelegate> delegate;
@property (nonatomic, getter=isViewVisible) BOOL viewVisible;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewModel:(id)a0 didChange:(id)a1;
- (void)_updateIfNeeded;
- (id)init;
- (void)_updateFocusedLongEnoughIfNeeded;
- (BOOL)_needsUpdate;
- (id)initWithSuggestionsProvider:(id)a0 browsingViewModel:(id)a1;
- (void)_setNeedsUpdate;
- (id)_suggestionInfoForAssetReference:(id)a0 createIfNeeded:(BOOL)a1;
- (void)invalidateSuggestions;
- (void)_invalidateSuggestionsVisibility;
- (void)_updateActiveSuggestionsWindowIfNeeded;
- (void)_invalidateFocusedAssetReference;
- (void)_handleDataSourceChange:(id)a0;
- (BOOL)_canKeepDisplayingSuggestionsForAssetReference:(id)a0;
- (void)_updateInFocus;
- (void)_removeSuggestionInfoForAssetReference:(id)a0;
- (void)_invalidateFocusedLongEnough;
- (void)invalidateLayoutForAssetReference:(id)a0;
- (void).cxx_destruct;
- (void)_updateFocusedAssetReferenceIfNeeded;
- (void)invalidateLayout;
- (void)_handleSuggestionForAssetReference:(id)a0;
- (void)_dismissSuggestionInfo:(id)a0;
- (void)_updateSuggestions;
- (void)_invalidateActiveSuggestionsWindow;
- (void)_invalidateInFocus;
- (void)_requestSuggestionForAssetReference:(id)a0;
- (BOOL)_canBeginDisplayingSuggestionsForAssetReference:(id)a0;

@end
