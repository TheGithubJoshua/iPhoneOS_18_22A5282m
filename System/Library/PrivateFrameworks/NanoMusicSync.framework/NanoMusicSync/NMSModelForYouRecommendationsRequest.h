@class NSArray, NSDictionary;

@interface NMSModelForYouRecommendationsRequest : MPModelForYouRecommendationsRequest

@property (nonatomic) BOOL nms_useCachedDataOnly;
@property (retain, nonatomic) NSArray *nms_cachedRecommendationsArray;
@property (retain, nonatomic) NSDictionary *nms_cachedStoreItemMetadataResults;

- (void).cxx_destruct;
- (id)newOperationWithResponseHandler:(id /* block */)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
