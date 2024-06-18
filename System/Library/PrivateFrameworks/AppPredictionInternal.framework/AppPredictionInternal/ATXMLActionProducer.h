@class NSString;

@interface ATXMLActionProducer : NSObject {
    NSString *_cacheBasePath;
}

+ (id)consumerSubTypesToUpdate;
+ (id)predictionChunksForActionResults:(id)a0;

- (id)init;
- (id)produceActions;
- (void)updateBlendingLayerForLockscreen;
- (void)updateBlendingLayerForConsumerSubType:(unsigned char)a0;
- (void)updateBlendingLayerForHomeScreen;
- (void).cxx_destruct;
- (BOOL)_writeIntermediateCacheForConsumerSubType:(unsigned char)a0 actionPredictionCandidates:(id)a1 remainingPredictionItems:(void *)a2;
- (BOOL)writeCacheIfNotExistsForConsumerSubType:(unsigned char)a0;
- (id)_cachePathForConsumerSubtype:(unsigned char)a0;
- (id)consumerSubTypesToInvalidateForTTL:(double)a0 disabledConsumerSubTypes:(id)a1 shouldOverrideRefreshRateForDisabledConsumerSubTypes:(BOOL)a2;
- (void)updateBlendingLayerForSpotlight;
- (void)invalidateCacheForConsumerSubTypes:(id)a0 featureCache:(id)a1;
- (void)updateBlendingLayerForAllConsumerSubTypes;
- (void)invalidateCacheForConsumerSubType:(unsigned char)a0 actionPredictionCandidates:(id)a1 remainingPredictionItems:(struct vector<ATXPredictionItem, std::allocator<ATXPredictionItem>> { struct ATXPredictionItem *x0; struct ATXPredictionItem *x1; struct __compressed_pair<ATXPredictionItem *, std::allocator<ATXPredictionItem>> { struct ATXPredictionItem *x0; } x2; })a2;
- (id)lockscreenActionsFromPredictions:(id)a0;
- (void)readCacheAndSendFilteredResultsToBlendingForConsumerSubType:(unsigned char)a0;
- (id)_getActionsFromCacheForConsumerSubType:(unsigned char)a0 cacheFileData:(id)a1;

@end
