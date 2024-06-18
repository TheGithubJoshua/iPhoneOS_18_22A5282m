@class NSDictionary;

@interface ATXAppPredictorAssetMapping : NSObject {
    NSDictionary *_consumerSubTypeAssetMappings;
}

+ (id)sharedInstanceWithMobileAssets;
+ (id)getFullCachePathWithBaseCachePath:(id)a0 cacheFileBaseName:(id)a1 subScoreName:(id)a2;
+ (id)assetMappingWithCachedAssets;

- (id)init;
- (void).cxx_destruct;
- (id)getAtxToolDescription;
- (id)getFullDefaultCachePathWithConsumerSubType:(unsigned char)a0;
- (id)initWithUseMobileAssets:(BOOL)a0;
- (id)getFullCachePathWithBaseCachePath:(id)a0 consumerSubType:(unsigned char)a1;
- (id)getAssetFileAndSubscoreForConsumerSubType:(unsigned char)a0;

@end
