@interface WBSFeatureAvailability : NSObject

@property (class, readonly, nonatomic) BOOL isInternalInstall;
@property (class, readonly, nonatomic) BOOL isCustomizationSyncEnabled;
@property (class, readonly, nonatomic) BOOL isPerSiteSettingSyncEnabled;
@property (class, readonly, nonatomic) BOOL isStartPageSettingSyncEnabled;
@property (class, readonly, nonatomic) BOOL isResponsiveCompletionListEnabled;
@property (class, readonly, nonatomic) BOOL isMoreSearchProviderSuggestionsEnabled;
@property (class, readonly, nonatomic) BOOL isStreamlinedCompletionListEnabled;
@property (class, readonly, nonatomic) BOOL isReflectUserIntentInSearchEnabled;
@property (class, readonly, nonatomic) BOOL isDuckDuckGoDefaultSearchEngine;

+ (BOOL)wantsAggressiveKeychainCredentialCaching;
+ (BOOL)_shouldShowRussianFeatures;
+ (BOOL)isSearchProviderEnabled:(unsigned long long)a0;
+ (BOOL)_shouldShowChineseFeatures;
+ (BOOL)supportsURLCredentialStorageAccessControlGroups;

@end
