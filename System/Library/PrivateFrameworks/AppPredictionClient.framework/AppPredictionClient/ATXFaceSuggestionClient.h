@class ATXFaceGalleryBiomeStream, NSObject, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface ATXFaceSuggestionClient : NSObject <ATXFaceSuggestionClientXPCInterface, ATXFaceSuggestionLogging> {
    NSXPCConnection *_connection;
    ATXFaceGalleryBiomeStream *_stream;
    NSObject<OS_dispatch_queue> *_loggingQueue;
}

+ (id)sharedInstance;

- (void)refreshComplicationsCacheWithCompletion:(id /* block */)a0;
- (void)fetchComplicationSuggestionsModelDescriptionWithCompletion:(id /* block */)a0;
- (void)posterBoardDidUpdateConfigurations:(id)a0 completion:(id /* block */)a1;
- (void)logComplicationGalleryDidDisappear;
- (id)init;
- (void)logPosterEditUIViewedWithCompletion:(id /* block */)a0;
- (void)logComplicationGalleryDidAppearWithComplicationSets:(id)a0;
- (void)logDidTapComplicationSet:(id)a0;
- (void)_logEvent:(id)a0;
- (void)fetchPosterConfigurationsWithCompletion:(id /* block */)a0;
- (void)logDidTapComplication:(id)a0;
- (void)fetchRankedPosterDescriptors:(id /* block */)a0;
- (void)logDidAddComplication:(id)a0;
- (void)logPosterSwitch:(id)a0 completion:(id /* block */)a1;
- (void)fetchInlineComplicationSetForFaceGalleryItem:(id)a0 completion:(id /* block */)a1;
- (void)fetchScoredComplicationDescriptionWithCompletion:(id /* block */)a0;
- (void)inputDescriptionForComplicationSuggestionSignal:(id)a0 completion:(id /* block */)a1;
- (void)logDidAddComplicationSet:(id)a0;
- (void)logFaceGalleryDidAppearWithFaceGalleryConfiguration:(id)a0;
- (void)fetchMetricsDescriptionWithCompletion:(id /* block */)a0;
- (void)logDidHideFaceGalleryItem:(id)a0;
- (void).cxx_destruct;
- (void)logFaceGalleryDidDisappear;
- (void)logComplicationsSeenInGalleryWithEngagements:(id)a0 completion:(id /* block */)a1;
- (void)fetchFaceSuggestionsForFocusMode:(id)a0 completion:(id /* block */)a1;
- (void)logDidTapFaceGalleryItem:(id)a0;
- (void)logFaceGalleryItemsDidAppear:(id)a0;
- (void)posterBoardDidUpdateDescriptors:(id)a0 completion:(id /* block */)a1;
- (void)fetchComplicationSetsForFaceGalleryItem:(id)a0 completion:(id /* block */)a1;
- (void)synchronousDateOfLastGalleryAppearanceWithCompletion:(id /* block */)a0;
- (void)logPosterEdit:(id)a0 completion:(id /* block */)a1;
- (void)regenerateFaceGalleryConfigurationWithCompletion:(id /* block */)a0;
- (void)fetchFaceGalleryConfigurationWithCompletion:(id /* block */)a0;
- (void)logFaceGalleryItemsSeenInGalleryWithOutcomes:(id)a0 completion:(id /* block */)a1;
- (void)fetchPosterDescriptorsAndSuggestionDataWithCompletion:(id /* block */)a0;

@end
