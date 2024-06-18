@class NSString, _PASLock;

@interface ATXClientModelCacheManager : NSObject <ATXClientModelCacheManagerProtocol> {
    _PASLock *_clientModelCacheHandlersLock;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)cacheDirectory;
- (void)addCacheHandlersForExistingClientModelCaches;
- (id)init;
- (void)initGuardedData;
- (void)addNewCacheHandlerIfNeededGivenExistingCacheHandlersInGuardedData:(id)a0 clientModelId:(id)a1;
- (id)cacheFileHandlerForClientModel:(id)a0 guardedData:(id)a1;
- (void).cxx_destruct;
- (id)cachedSuggestionsForAllClientModels;
- (id)cachedSuggestionsForClientModel:(id)a0;
- (double)cacheAgeForClientModel:(id)a0;
- (void)updateCachedSuggestions:(id)a0;
- (id)lastCacheUpdateDateForClientModel:(id)a0;

@end
