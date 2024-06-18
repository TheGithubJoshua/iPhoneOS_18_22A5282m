@class ATXPosterDescriptorCache, NSString, ATXPosterConfigurationCache, _ATXInternalUninstallNotification, ATXComplicationSuggestionGenerator, ATXFaceSuggestionGenerator, ATXFaceSuggestionAssetParameters, NSXPCListener, _PASSimpleCoalescingTimer;

@interface ATXFaceSuggestionServer : NSObject <NSXPCListenerDelegate, ATXFaceSuggestionGeneratorDelegate, ATXWidgetDescriptorCacheObserver, ATXPosterDescriptorCacheObserver, ATXFaceSuggestionClientXPCInterface> {
    ATXPosterConfigurationCache *_configurationCache;
    ATXPosterDescriptorCache *_descriptorCache;
    ATXFaceSuggestionAssetParameters *_assetParameters;
    ATXComplicationSuggestionGenerator *_complicationsGenerator;
    ATXFaceSuggestionGenerator *_faceSuggestionGenerator;
    _ATXInternalUninstallNotification *_uninstallNotification;
    _PASSimpleCoalescingTimer *_modeFaceSuggestionRefreshCoalescingTimer;
    NSXPCListener *_listener;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)refreshComplicationsCacheWithCompletion:(id /* block */)a0;
- (void)fetchComplicationSuggestionsModelDescriptionWithCompletion:(id /* block */)a0;
- (void)posterBoardDidUpdateConfigurations:(id)a0 completion:(id /* block */)a1;
- (id)init;
- (void)logPosterEditUIViewedWithCompletion:(id /* block */)a0;
- (void)fetchPosterConfigurationsWithCompletion:(id /* block */)a0;
- (void)fetchRankedPosterDescriptors:(id /* block */)a0;
- (void)logPosterSwitch:(id)a0 completion:(id /* block */)a1;
- (void)fetchInlineComplicationSetForFaceGalleryItem:(id)a0 completion:(id /* block */)a1;
- (void)fetchScoredComplicationDescriptionWithCompletion:(id /* block */)a0;
- (void)inputDescriptionForComplicationSuggestionSignal:(id)a0 completion:(id /* block */)a1;
- (void)logFaceGalleryDidAppearWithFaceGalleryConfiguration:(id)a0;
- (void)fetchMetricsDescriptionWithCompletion:(id /* block */)a0;
- (void)descriptorCacheDidUpdateWithDescriptors:(id)a0;
- (void).cxx_destruct;
- (void)widgetDescriptorCacheDidUpdateDescriptors:(id)a0;
- (void)generatorDidUpdateFaceGalleryConfiguration:(id)a0;
- (void)logComplicationsSeenInGalleryWithEngagements:(id)a0 completion:(id /* block */)a1;
- (void)fetchFaceSuggestionsForFocusMode:(id)a0 completion:(id /* block */)a1;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)posterBoardDidUpdateDescriptors:(id)a0 completion:(id /* block */)a1;
- (void)fetchComplicationSetsForFaceGalleryItem:(id)a0 completion:(id /* block */)a1;
- (void)synchronousDateOfLastGalleryAppearanceWithCompletion:(id /* block */)a0;
- (void)logPosterEdit:(id)a0 completion:(id /* block */)a1;
- (void)regenerateFaceGalleryConfigurationWithCompletion:(id /* block */)a0;
- (void)fetchFaceGalleryConfigurationWithCompletion:(id /* block */)a0;
- (void)logFaceGalleryItemsSeenInGalleryWithOutcomes:(id)a0 completion:(id /* block */)a1;
- (void)fetchPosterDescriptorsAndSuggestionDataWithCompletion:(id /* block */)a0;

@end
