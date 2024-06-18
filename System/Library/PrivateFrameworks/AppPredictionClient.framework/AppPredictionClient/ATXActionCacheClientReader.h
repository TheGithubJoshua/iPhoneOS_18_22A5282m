@class NSIndexSet, NSData;

@interface ATXActionCacheClientReader : NSObject {
    NSData *_scoredActionsChunk;
}

@property (readonly, nonatomic) NSIndexSet *lockscreenPredictionIndices;

- (id)init;
- (unsigned long long)chunkCount;
- (id)actionsWithLimit:(long long)a0 shouldFilterRestrictedAppsAndRecentEngagements:(BOOL)a1;
- (void).cxx_destruct;
- (id)_predicateForInstalledAndNonEngagedPredictions:(id)a0;
- (id)initWithChunks:(id)a0;
- (id)initWithData:(id)a0;
- (id)actionsWithConsumerSubType:(unsigned char)a0 limit:(long long)a1;
- (id)lockscreenPredictionIndicesUpToLimit:(long long)a0;
- (id)_getLockScreenPredictionIndices:(id)a0;

@end
