@class NSXPCConnection;

@interface _LTTranslator : NSObject {
    NSXPCConnection *_connection;
}

@property (class, copy, nonatomic) id /* block */ interruptionHandler;

+ (void)_clearCaches;
+ (void)languagesForText:(id)a0 completion:(id /* block */)a1;
+ (void)languagesForText:(id)a0 usingModel:(unsigned long long)a1 completion:(id /* block */)a2;
+ (void)_offlineLanguageStatus:(id /* block */)a0;
+ (void)taskIsSupportedInCurrentRegion:(long long)a0 completion:(id /* block */)a1;
+ (void)_getAssetSize:(id /* block */)a0;
+ (void)onDeviceModeEnabled:(id /* block */)a0;
+ (void)installedLocales:(id /* block */)a0;
+ (void)task:(long long)a0 isSupportedInCountry:(id)a1 completion:(id /* block */)a2;
+ (void)_purgeAssetForLanguagePair:(id)a0 userInitiated:(BOOL)a1 completion:(id /* block */)a2;
+ (void)_updateHotfix:(id /* block */)a0;
+ (void)additionalLikelyPreferredLocalesForLocale:(id)a0 completion:(id /* block */)a1;
+ (void)initialize;
+ (void)languageForText:(id)a0 completion:(id /* block */)a1;
+ (void)_downloadAssetForLanguagePair:(id)a0 userInitiated:(BOOL)a1 completion:(id /* block */)a2;
+ (void)configInfoForLocale:(id)a0 otherLocale:(id)a1 completion:(id /* block */)a2;
+ (void)_purgeAllAssets:(id /* block */)a0;
+ (void)_getTextServiceProxyWithDelegate:(id)a0 useDedicatedTextMachPort:(BOOL)a1 errorHandler:(id /* block */)a2 block:(id /* block */)a3;
+ (void)shouldPresentSystemFirstUseConsentWithDedicatedMachPort:(BOOL)a0 completion:(id /* block */)a1;
+ (void)_deleteHotfix:(id /* block */)a0;
+ (void)installOfflineLocales:(id)a0 completion:(id /* block */)a1;
+ (void)_getSyncServiceProxyWithDelegate:(id)a0 errorHandler:(id /* block */)a1 block:(id /* block */)a2;
+ (void)_updateAllAssets:(id /* block */)a0;
+ (void)languagesForText:(id)a0 usingModel:(unsigned long long)a1 useDedicatedTextMachPort:(BOOL)a2 completion:(id /* block */)a3;
+ (void)availableLocalePairsForTask:(long long)a0 completion:(id /* block */)a1;
+ (void)availableLocalePairsForTask:(long long)a0 useDedicatedMachPort:(BOOL)a1 completion:(id /* block */)a2;
+ (void)languagesForText:(id)a0 usingModel:(unsigned long long)a1 strategy:(unsigned long long)a2 useDedicatedTextMachPort:(BOOL)a3 completion:(id /* block */)a4;
+ (void)onDeviceModeEnabledWithDedicatedMachPort:(BOOL)a0 completion:(id /* block */)a1;
+ (void)_getServiceProxyWithDelegate:(id)a0 errorHandler:(id /* block */)a1 block:(id /* block */)a2;

- (void)translate:(id)a0;
- (void)cleanup;
- (void)preheatForRequest:(id)a0 completion:(id /* block */)a1;
- (void)log:(id)a0;
- (void).cxx_destruct;
- (void)translate:(id)a0 useDedicatedTextMachPort:(BOOL)a1;
- (void)preheatForRequestSync:(id)a0;
- (id)startTranslationSession;

@end
