@class _LTHotfixManager;

@interface _LTOfflineAssetManager : NSObject {
    _LTHotfixManager *_hotfixMgr;
}

+ (void)initialize;
+ (id)fallBackAssetResourcePath;

- (void)_clearCaches;
- (id)init;
- (void)_refreshAllAssets:(id /* block */)a0;
- (id)_speechTranslationAssetInfoForLocalePair:(id)a0 installedAssets:(id)a1 catalogAssets:(id)a2 config:(id)a3 error:(id *)a4;
- (id)installedAssets;
- (void)purgeAssetForLanguagePair:(id)a0 userInitiated:(BOOL)a1 completion:(id /* block */)a2;
- (id)speechTranslationAssetInfoForLocalePair:(id)a0 error:(id *)a1;
- (void)_downloadPassthroughAssetForLocale:(id)a0 userInitiated:(BOOL)a1 completion:(id /* block */)a2;
- (id)assetIdentifierReferenceCountDictionary;
- (void)_updateAsset:(id)a0 catalogAssets:(id)a1 downloadGroup:(id)a2 completion:(id /* block */)a3;
- (void)downloadAssetsForLanguagePair:(id)a0 userInitiated:(BOOL)a1 completion:(id /* block */)a2;
- (id)_speechTranslationAssetInfoForLocalePair:(id)a0 error:(id *)a1;
- (void)downloadAsset:(id)a0 userInitiated:(BOOL)a1 useCellular:(BOOL)a2 progressCallback:(id /* block */)a3 completion:(id /* block */)a4;
- (id)modelURLsForLanguagePair:(id)a0;
- (void)purgeAllAssetsExcludingConfig:(BOOL)a0 completion:(id /* block */)a1;
- (void)_removeOldAssetDirectory;
- (id)endpointAssetInfoWithContext:(id)a0 error:(id *)a1;
- (void)downloadVoiceAssetsForLanguagePair:(id)a0;
- (void)downloadAsset:(id)a0 downloadOptions:(id)a1 progressCallback:(id /* block */)a2 completion:(id /* block */)a3;
- (id)assetDirectory;
- (id)languageDetectorAssetWithError:(id *)a0;
- (void).cxx_destruct;
- (void)removeObsoleteAssets;
- (void)debugDumpAssets:(id)a0;
- (id)configAsset;
- (void)refreshAllIfNeededWithCompletion:(id /* block */)a0;
- (id)configAssetInAssets:(id)a0;
- (void)updateAllAssets:(id /* block */)a0;
- (id)configurationPropertyListWithName:(id)a0;
- (id)catalogAssets;
- (id)_assetIdentifiersForLanguagePairDirectory:(id)a0;
- (id)configurationPropertyListWithURL:(id)a0;
- (id)_configPlistWithFileName:(id)a0;
- (void)assetSize:(id /* block */)a0;
- (id)assetsSortedByVersion:(id)a0;
- (void)_queryLanguagePairStatus:(id /* block */)a0;
- (void)downloadAsset:(id)a0 userInitiated:(BOOL)a1 progressCallback:(id /* block */)a2 completion:(id /* block */)a3;
- (id)getEndpointerAssetWithType:(long long)a0 error:(id *)a1;
- (void)_refreshCatalogIfNeededWithCompletion:(id /* block */)a0;
- (id)_voiceAssetForLocaleIdentifier:(id)a0;
- (void)updateSpeechTranslationAssetSymLinks:(id)a0;
- (id)matchingASRAssetForLocale:(id)a0 inAssets:(id)a1;
- (void)_downloadVoiceAsset:(id)a0;
- (void)offlineLanguageStatus:(id /* block */)a0;
- (void)deleteAsset:(id)a0 completion:(id /* block */)a1;
- (id)configAssetURL;

@end
