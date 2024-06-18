@interface PHSmartAlbum : PHAssetCollection

+ (id)_collectionSubtypeExpressionForFetchRequests;
+ (id)fetchType;
+ (id)managedEntityName;
+ (id)albumKindFromSmartAlbumSubtype:(long long)a0;
+ (id)fetchPredicateFromComparisonPredicate:(id)a0 options:(id)a1;

- (BOOL)collectionHasFixedOrder;

@end
