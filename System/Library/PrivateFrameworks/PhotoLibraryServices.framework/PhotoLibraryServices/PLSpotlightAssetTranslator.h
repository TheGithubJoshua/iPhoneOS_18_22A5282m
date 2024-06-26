@interface PLSpotlightAssetTranslator : NSObject

+ (id)_contentRatingForAsset:(id)a0;
+ (id)_libraryScopeForAsset:(id)a0;
+ (id)_personsForAsset:(id)a0;
+ (BOOL)_isGoldilocksEnabledForManagedObjectContext:(id)a0;
+ (id)_locationNamesForAsset:(id)a0;
+ (id)spotlightSearchableItemFromAsset:(id)a0 graphData:(id)a1 searchConfiguration:(id)a2 documentObservation:(id)a3;
+ (id)_scenesForAsset:(id)a0 sceneTaxonomyProvider:(id)a1;
+ (id)_spotlightSearchableAttributesForAsset:(id)a0 graphData:(id)a1 searchConfiguration:(id)a2 documentObservation:(id)a3;
+ (BOOL)_isUnnamedPeoplePersonDonationEnabled;
+ (id)_mediaTypesForAsset:(id)a0;

@end
