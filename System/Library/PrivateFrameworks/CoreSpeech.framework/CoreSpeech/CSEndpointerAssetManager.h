@class CSAsset, NSDictionary, NSHashTable, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface CSEndpointerAssetManager : NSObject <CSAssetManagerDelegate, CSFirstUnlockMonitorDelegate, CESRTrialAssetDelegate>

@property (retain, nonatomic) CSAsset *currentHEPAsset;
@property (retain, nonatomic) CSAsset *currentOEPAsset;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSDictionary *asrDatapackInstallationStatus;
@property (retain, nonatomic) NSHashTable *observers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (void)CSFirstUnlockMonitor:(id)a0 didReceiveFirstUnlock:(BOOL)a1;
- (void)removeObserver:(id)a0;
- (id)init;
- (id)getCurrentOSDAsset;
- (void)assetStatus:(id)a0;
- (id)_getModelPathFromInstallationStatusString:(id)a0;
- (void)_notifyAssetsUpdate;
- (void)checkFirstUnlocked;
- (id)getCurrentEndpointerAsset;
- (void)_updateAssetWithLanguage:(id)a0 assetType:(unsigned long long)a1;
- (void).cxx_destruct;
- (void)CSAssetManagerDidDownloadNewAsset:(id)a0;
- (void)_updateAssetWithCurrentLanguageForAssetType:(unsigned long long)a0;
- (id)_fetchEndpointMobileAssetWithLanguage:(id)a0;
- (id)_getCurrentHEPAsset;
- (id)_getOEPVersionFromPath:(id)a0;
- (BOOL)_isOSDIncludedInAsset:(id)a0;
- (id)_getFakeEndpointAsset;
- (void)_updateOEPAssetsWithLanguage:(id)a0;
- (void)addObserver:(id)a0;
- (void)CSLanguageCodeUpdateMonitor:(id)a0 didReceiveLanguageCodeChanged:(id)a1;

@end
