@class NSDictionary, PPNamedEntityStore, NSMutableDictionary;

@interface REPortraitPredictor : REPredictor <REPortraitPredictorProperties> {
    PPNamedEntityStore *_namedEntityStore;
    NSMutableDictionary *_namedEntityScores;
}

@property (readonly, nonatomic) NSDictionary *namedEntityScores;

+ (double)updateInterval;

- (id)_init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)update;
- (void)_loadStoreIfNeeded;
- (float)userAffinityToContent:(id)a0;

@end
