@class PHFetchResult, NSDictionary, PXCMMSuggestionsDataSourceContext, PHAssetCollection;

@interface PXCMMSuggestionsDataSourceState : NSObject <NSCopying>

@property (readonly, nonatomic) PHFetchResult *assetCollections;
@property (readonly, nonatomic) NSDictionary *suggestionsByAssetCollectionObjectID;
@property (readonly, nonatomic) PXCMMSuggestionsDataSourceContext *context;
@property (readonly, nonatomic) PHAssetCollection *confidentMatch;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_compareSuggestionsUsingContext;
- (id)_confidentMatch;
- (id)_confidentMatchUsingStrategy:(unsigned long long)a0;
- (id)initWithAssetCollections:(id)a0 suggestionsByAssetCollectionObjectID:(id)a1 context:(id)a2;
- (id)stateUpdatedWithChange:(id)a0 changeDetails:(id *)a1;

@end
