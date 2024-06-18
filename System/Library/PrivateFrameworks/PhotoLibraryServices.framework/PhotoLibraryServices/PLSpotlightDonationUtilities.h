@interface PLSpotlightDonationUtilities : NSObject

@property (class, readonly) BOOL isFullLocationDataEnabled;

+ (id)bundleIdentifierForAsset:(id)a0;
+ (BOOL)searchableItemsFromManagedObjectIDs:(id)a0 entityName:(id)a1 translatorConfiguration:(id)a2 photoLibrary:(id)a3 searchableItemsToIndex:(out id *)a4 searchableItemUUIDsToRemove:(out id *)a5;
+ (BOOL)shouldForceSpotlightReindexForCurrentBundleIdentifierWithLastKnownSearchIndexVersion:(long long)a0;
+ (BOOL)isUniversalSearchEnabledForPhotoLibrary:(id)a0;
+ (id)domainIdentifierForPhotoLibrary:(id)a0;
+ (long long)_wellKnownPhotoLibraryIdentifierFromPLPhotoLibrary:(id)a0;
+ (id)searchableItemsFromManagedObjects:(id)a0 entityName:(id)a1 translatorConfiguration:(id)a2;
+ (BOOL)shouldDisablePhotosLegacySearchDonationForPhotoLibrary:(id)a0;
+ (unsigned long long)universalSearchIneligibilityReasonsForPhotoLibraryWithURL:(id)a0;
+ (id)domainIdentifierForSystemPhotoLibrary;
+ (void)_searchableItemsFromManagedObjects:(id)a0 entityName:(id)a1 translatorConfiguration:(id)a2 itemsToUpdate:(out id *)a3 searchableItemUUIDsToRemove:(out id *)a4;
+ (id)photosBundleIdentifier;
+ (id)spotlightUniqueIdentifierForAsset:(id)a0;

@end
