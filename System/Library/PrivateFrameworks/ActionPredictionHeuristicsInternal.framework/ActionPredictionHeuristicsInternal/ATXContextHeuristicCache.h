@class NSMutableDictionary, NSHashTable;

@interface ATXContextHeuristicCache : NSObject {
    NSMutableDictionary *_cache;
    NSHashTable *_criteriaTable;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
}

- (id)init;
- (id)suggestionsForKey:(id)a0;
- (void)setSuggestions:(id)a0 forKey:(id)a1;
- (void)evictAll;
- (id)allRelevantSuggestionsForDate:(id)a0;
- (void)evict:(id)a0;
- (void).cxx_destruct;
- (id)nextChangeAfterDate:(id)a0;
- (void)dealloc;
- (id)heuristicsCached;
- (void)evictBefore:(id)a0;

@end
