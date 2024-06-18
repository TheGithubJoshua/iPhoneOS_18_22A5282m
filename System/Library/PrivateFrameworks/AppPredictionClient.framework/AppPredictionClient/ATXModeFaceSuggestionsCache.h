@interface ATXModeFaceSuggestionsCache : NSObject

- (void)evictCachedSuggestedFaces;
- (void)cacheSuggestedFaces:(id)a0 forModeUUID:(id)a1;
- (id)cachedSuggestedFacesForModeUUID:(id)a0;
- (id)_suggestedFacesDirectoryURL;
- (id)_cacheForUUID:(id)a0;

@end
