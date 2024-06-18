@interface ATXAssets2 : NSObject

+ (id)rawDictionaryForResource:(id)a0 ofType:(id)a1;
+ (id)pathForResource:(id)a0 ofType:(id)a1;
+ (void)clearOverrides;
+ (id)rawDictionaryUsingTrialForResource:(id)a0 ofType:(id)a1;
+ (id)dictionaryForClass:(Class)a0;
+ (void)addOverridePath:(id)a0 forResource:(id)a1 ofType:(id)a2;
+ (void)updateMobileAssetMetadata;
+ (id)rawDictionaryUsingMobileAssetsForResource:(id)a0 ofType:(id)a1;
+ (id)dictionaryForResource:(id)a0 ofType:(id)a1 specifiedABGroup:(id)a2;
+ (id)asset;
+ (void)onUpdateRestartThisProcess;

@end
