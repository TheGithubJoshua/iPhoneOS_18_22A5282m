@class NSArray, NSDictionary;

@interface CloudHistoryConfiguration : WBSCloudHistoryConfiguration {
    NSArray *_assetsSortedByVersionNumber;
    NSDictionary *_remoteConfigurationDictionary;
    BOOL _fetchedAssetData;
}

+ (id)sharedConfiguration;

- (id)init;
- (BOOL)shouldUseLongLivedOperationsToSaveRecords;
- (void).cxx_destruct;
- (id)remoteConfiguration;
- (id)_cloudConfigurationAssetsSortedByVersionNumber;
- (void)_reloadConfigurationDataIfNecessary;
- (id)platformBuiltInConfiguration;

@end
