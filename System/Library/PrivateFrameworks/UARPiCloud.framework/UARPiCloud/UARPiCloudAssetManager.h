@class UARPAssetManager, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue, OS_os_log;

@interface UARPiCloudAssetManager : NSObject {
    NSObject<OS_os_log> *_log;
    UARPAssetManager *_assetManager;
    id _cloudManager;
    NSMutableDictionary *_accessories;
    NSObject<OS_dispatch_queue> *_workQueue;
}

@property BOOL uarpDownloadOnCellularAllowed;
@property (readonly) NSObject<OS_dispatch_queue> *delegateQueue;

- (id)initWithManager:(id)a0;
- (void)handleReleaseNotesDownloadResponseFromLocation:(id)a0 forAccessory:(id)a1;
- (long long)performRemoteUpdateCheckForAccessories:(id)a0 inContainer:(id)a1;
- (void)setReleaseNotesDownloadSuccessStatusForAccessory:(id)a0;
- (BOOL)moveFileAtURL:(id)a0 toTempURL:(id)a1;
- (void)remoteFetchCompletion:(id)a0 error:(id)a1;
- (void)setReleaseNotesDownloadFailureStatusForAccessory:(id)a0;
- (void)setFirmwareDownloadFailureStatusForAccessory:(id)a0;
- (long long)handleReleaseNotesDownloadRequestForAccessory:(id)a0;
- (id)pathToSuperBinaryInAccessoryVersionDirectory:(id)a0 uarpVersion:(id *)a1;
- (void)handleRemoteDownloadResponseForAttestationCertificates:(id)a0 forSubKeyIdentifier:(id)a1;
- (long long)handleRemoteFirmwareDownloadRequestForAccessory:(id)a0;
- (unsigned int)_getCoreCryptoDigestAlgorithmFromCHIPFirmwareAlgorithm:(unsigned long long)a0;
- (void)handleRemoteFetchCompletion:(id)a0 error:(id)a1;
- (void)handleRemoteDownloadRequestForSupportedAccessoriesForProductGroup:(id)a0 inContainer:(id)a1;
- (void)handleFirmwareDownloadResponseFromLocation:(id)a0 forAccessory:(id)a1;
- (void)remoteFetchCompletionForAttestationCertificates:(id)a0 subjectKeyIdentifier:(id)a1 error:(id)a2;
- (void)remoteFetchCompletionForSupportedAccessories:(id)a0 productGroup:(id)a1 error:(id)a2;
- (void).cxx_destruct;
- (id)moveToUARPCacheFromRemoteURL:(id)a0 assetType:(long long)a1 forAcessory:(id)a2;
- (void)handleRemoteDownloadRequestForAttestationCertificatesForSubjectKeyIdentifier:(id)a0 inContainer:(id)a1;
- (long long)downloadReleaseNotesForAccessory:(id)a0;
- (long long)getAttestationCertificates:(id)a0 inContainer:(id)a1;
- (void)setFirmwareDownloadSuccessStatusForAccessory:(id)a0;
- (long long)handleRemoteQueryRequestForAccessories:(id)a0 inContainer:(id)a1;
- (long long)getSupportedAccessories:(id)a0 inContainer:(id)a1;
- (long long)downloadFirmwareForAccessory:(id)a0;
- (void)handleRemoteDownloadResponseForSupportedAccessories:(id)a0 forProductGroup:(id)a1;
- (BOOL)checkLocalUARPCacheForAccessory:(id)a0 versionAvailable:(id *)a1 firmwarePath:(id *)a2 releaseNotesPath:(id *)a3;

@end
