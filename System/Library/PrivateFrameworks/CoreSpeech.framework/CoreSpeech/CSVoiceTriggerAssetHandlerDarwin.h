@class CSAsset, NSString;

@interface CSVoiceTriggerAssetHandlerDarwin : CSVoiceTriggerAssetHandler <CSRemoteAssetManagerDelegate, CSLanguageCodeUpdateMonitorDelegate>

@property (retain) CSAsset *cachedAsset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_checkNewAssetAvailablity;
- (void)getVoiceTriggerAssetWithEndpointId:(id)a0 completion:(id /* block */)a1;
- (id)init;
- (void)_getVoiceTriggerAssetFromAssetManager:(id /* block */)a0;
- (void)start;
- (void)CSRemoteAssetManagerDidDownloadNewAsset:(id)a0;
- (void).cxx_destruct;
- (void)CSLanguageCodeUpdateMonitor:(id)a0 didReceiveLanguageCodeChanged:(id)a1;

@end
