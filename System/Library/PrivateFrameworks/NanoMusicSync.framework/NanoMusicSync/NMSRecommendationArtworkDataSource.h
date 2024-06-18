@class NSString, NSCache;

@interface NMSRecommendationArtworkDataSource : NSObject <MPArtworkDataSource> {
    NSCache *_fallbackCache;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)artworkCacheDirectory;
+ (id)sharedDataSource;

- (id)init;
- (id)_cachedRepresentationForCatalog:(id)a0;
- (id)visualIdenticalityIdentifierForCatalog:(id)a0;
- (id)existingRepresentationForArtworkCatalog:(id)a0;
- (void)cancelLoadingRepresentationForArtworkCatalog:(id)a0;
- (BOOL)areRepresentationsAvailableForCatalog:(id)a0;
- (id)_existingRepresentationForArtworkCatalog:(id)a0 fromCacheOnly:(BOOL)a1;
- (void).cxx_destruct;
- (void)_cacheRepresentation:(id)a0 forCatalog:(id)a1;
- (BOOL)isRepresentation:(id)a0 bestRepresentationForArtworkCatalog:(id)a1;
- (void)loadRepresentationForArtworkCatalog:(id)a0 completionHandler:(id /* block */)a1;
- (id)_cachedArtworkImageWithToken:(id)a0;
- (BOOL)artworkCacheExistsForToken:(id)a0;

@end
