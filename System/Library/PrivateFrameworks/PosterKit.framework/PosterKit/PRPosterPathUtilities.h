@interface PRPosterPathUtilities : NSObject

+ (BOOL)removeRenderingConfigurationForPath:(id)a0 error:(out id *)a1;
+ (id)loadHomeScreenConfigurationForPath:(id)a0 error:(out id *)a1;
+ (BOOL)removeFocusConfigurationForPath:(id)a0 error:(out id *)a1;
+ (BOOL)storeOtherMetadataForPath:(id)a0 otherMetadata:(id)a1 error:(out id *)a2;
+ (BOOL)storeTitleStyleConfigurationForPath:(id)a0 titleStyleConfiguration:(id)a1 error:(out id *)a2;
+ (BOOL)removeColorVariationsConfigurationForPath:(id)a0 error:(out id *)a1;
+ (id)loadTitleStyleConfigurationForPath:(id)a0 error:(out id *)a1;
+ (id)loadComplicationLayoutForPath:(id)a0 error:(out id *)a1;
+ (id)loadConfigurableOptionsForPath:(id)a0 error:(out id *)a1;
+ (BOOL)storeSuggestionMetadataForPath:(id)a0 suggestionMetadata:(id)a1 error:(out id *)a2;
+ (BOOL)storeConfigurableOptionsForPath:(id)a0 configurableOptions:(id)a1 error:(out id *)a2;
+ (BOOL)storeHomeScreenConfigurationForPath:(id)a0 homeScreenConfiguration:(id)a1 error:(out id *)a2;
+ (BOOL)storeFocusConfigurationForPath:(id)a0 focusConfiguration:(id)a1 error:(out id *)a2;
+ (BOOL)storeConfiguredPropertiesForPath:(id)a0 configuredProperties:(id)a1 error:(out id *)a2;
+ (BOOL)storePosterDescriptorGalleryOptions:(id)a0 posterDescriptorGalleryOptions:(id)a1 error:(out id *)a2;
+ (id)loadConfiguredPropertiesForPath:(id)a0 error:(out id *)a1;
+ (id)loadFocusConfigurationForPath:(id)a0 error:(out id *)a1;
+ (BOOL)removeConfigurableOptionsForPath:(id)a0 error:(out id *)a1;
+ (id)loadSuggestionMetadataForPath:(id)a0 error:(out id *)a1;
+ (BOOL)removeSuggestionMetadataForPath:(id)a0 error:(out id *)a1;
+ (BOOL)storeUserObject:(id)a0 path:(id)a1 atURL:(id)a2 error:(out id *)a3;
+ (BOOL)removeOtherMetadataForPath:(id)a0 error:(out id *)a1;
+ (id)loadRenderingConfigurationForPath:(id)a0 error:(out id *)a1;
+ (BOOL)removeTitleStyleConfigurationForPath:(id)a0 error:(out id *)a1;
+ (id)loadOtherMetadataForPath:(id)a0 error:(out id *)a1;
+ (BOOL)removePosterDescriptorGalleryOptions:(id)a0 error:(out id *)a1;
+ (id)loadUserObjectForURL:(id)a0 expectedClass:(Class)a1 error:(out id *)a2;
+ (id)loadColorVariationsConfigurationForPath:(id)a0 error:(out id *)a1;
+ (id)loadPosterDescriptorGalleryOptionsForPath:(id)a0 error:(out id *)a1;
+ (BOOL)storeComplicationLayoutForPath:(id)a0 complicationLayout:(id)a1 error:(out id *)a2;
+ (BOOL)removeComplicationLayoutForPath:(id)a0 error:(out id *)a1;
+ (BOOL)storeRenderingConfiguration:(id)a0 forPath:(id)a1 error:(out id *)a2;
+ (BOOL)storeColorVariationsConfigurationForPath:(id)a0 colorVariationsConfiguration:(id)a1 error:(out id *)a2;

@end
