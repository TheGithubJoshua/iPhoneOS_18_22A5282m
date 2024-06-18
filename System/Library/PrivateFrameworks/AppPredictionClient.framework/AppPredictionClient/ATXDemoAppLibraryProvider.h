@interface ATXDemoAppLibraryProvider : NSObject

+ (id)demoAppLibraryPath;
+ (id)loadCategoriesFromDisk;
+ (id)_parseCategory:(id)a0 realCategories:(id)a1;
+ (id)bundleIdsForCategoryWithName:(id)a0 in:(id)a1;
+ (id)demoAppCategoriesForRealAppCategories:(id)a0;
+ (id)demoSuggestionsAndRecents;
+ (BOOL)isAppLibraryDemoModeEnabled;

@end
