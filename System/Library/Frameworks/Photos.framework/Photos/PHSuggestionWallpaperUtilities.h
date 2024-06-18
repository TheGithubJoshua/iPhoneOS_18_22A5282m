@interface PHSuggestionWallpaperUtilities : NSObject

+ (unsigned long long)mediaAnalysisTypeForParallaxClassification:(unsigned long long)a0;
+ (id)randomNumberGeneratorForWallpaperDonation;
+ (id)_facePredicateForPortraitWallpaperCandidatesWithPersonLocalIdentifiers:(id)a0 deviceAspectRatio:(double)a1;
+ (id /* block */)_assetSortComparatorForPortraitWallpaper;
+ (id)_blockedImportedByBundleIdentifiers;
+ (void)rejectWallpaperSuggestionsUsingAssetOfSuggestion:(id)a0 completionHandler:(id /* block */)a1;
+ (id)wallpaperGallerySmartAlbumSuggestionsFromSuggestions:(id)a0;
+ (id)fallbackPortraitWallpaperGallerySortedFeaturedPhotosInPhotoLibrary:(id)a0;
+ (BOOL)hasAnyKnownPersonLocalIdentifierInPhotoLibrary:(id)a0;
+ (id)fetchPortraitAssetsWithOptions:(id)a0;
+ (unsigned long long)parallaxClassificationForMedia:(id)a0 descriptorType:(long long)a1;
+ (unsigned long long)parallaxClassificationForSuggestionSubtype:(unsigned short)a0;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bestWallpaperCropForSuggestion:(id)a0 outputCropScore:(double *)a1 outputLayoutAcceptable:(BOOL *)a2;
+ (id)knownPersonLocalIdentifiersInPhotoLibrary:(id)a0;
+ (void)rejectWallpaperSuggestions:(id)a0 completionHandler:(id /* block */)a1;
+ (id)fallbackPortraitWallpaperGallerySortedFeaturedPhotosInPhotoLibrary:(id)a0 passingFilterBlock:(id /* block */)a1 maximumNumberOfTries:(long long)a2;
+ (id)predicateForPortraitWallpaperCandidatesWithPersonLocalIdentifiers:(id)a0;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bestWallpaperCropForAsset:(id)a0 classification:(unsigned long long)a1 outputCropScore:(double *)a2 outputLayoutAcceptable:(BOOL *)a3 layoutConfiguration:(id)a4;
+ (id)predicateForPortraitWallpaperCandidatesWithPersonLocalIdentifiers:(id)a0 deviceAspectRatio:(double)a1;
+ (unsigned long long)parallaxClassificationForSuggestionMedia:(id)a0;
+ (id)_fetchSuggestedMePersonLocalIdentifierInPhotoLibrary:(id)a0;
+ (id)fetchKnownPersonLocalIdentifiersInPhotoLibrary:(id)a0 fetchLimit:(unsigned long long)a1;
+ (id)_fetchMeContactIdentifier;
+ (id)wallpaperGalleryFeaturedPhotoSortedSuggestionsFromSuggestions:(id)a0;
+ (id)fetchPersonLocalIdentifiersForSuggestionSubtype:(unsigned short)a0 photoLibrary:(id)a1;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bestWallpaperCropForAsset:(id)a0 classification:(unsigned long long)a1 outputCropScore:(double *)a2 outputLayoutAcceptable:(BOOL *)a3;
+ (id)fetchWallpaperGallerySuggestionsInPhotoLibrary:(id)a0;
+ (id)_personFetchOptionsWithPhotoLibrary:(id)a0;
+ (void)rejectWallpaperSuggestionsUsingAsset:(id)a0 completionHandler:(id /* block */)a1;
+ (id)_mostRecentAssetDateInPhotoLibrary:(id)a0;

@end
