@class ASDJob;

@interface SSSoftwareDownload : SSDownload

@property (readonly, nonatomic) ASDJob *job;

- (void)pause;
- (id)failureError;
- (void)setStatus:(id)a0;
- (BOOL)isCancelable;
- (double)percentComplete;
- (void).cxx_destruct;
- (void)resume;
- (void)restart;
- (long long)bytesDownloaded;
- (void)setMetadata:(id)a0;
- (id)status;
- (id)metadata;
- (id)valueForProperty:(id)a0;
- (id)initWithPersistentIdentifier:(long long)a0;
- (BOOL)addAsset:(id)a0 forType:(id)a1;
- (id)assetsForType:(id)a0;
- (long long)bytesTotal;
- (id)downloadPhaseIdentifier;
- (void)setDownloadHandler:(id)a0 completionBlock:(id /* block */)a1;
- (id)downloadPolicy;
- (long long)downloadSizeLimit;
- (void)prioritizeAboveDownload:(id)a0 completionBlock:(id /* block */)a1;
- (void)setDownloadPolicy:(id)a0;
- (BOOL)removeAsset:(id)a0;
- (id)networkConstraints;
- (void)setNetworkConstraints:(id)a0;
- (void)_becomeManagedOnConnection:(id)a0;
- (id)backgroundNetworkingJobGroupName;
- (double)estimatedSecondsRemaining;
- (id)initWithJob:(id)a0;
- (BOOL)isBackgroundNetworkingUserInitiated;
- (BOOL)isEligibleForRestore:(id *)a0;
- (void)setBackgroundNetworkingJobGroupName:(id)a0;
- (void)setBackgroundNetworkingUserInitiated:(BOOL)a0;
- (void)setValuesWithStoreDownloadMetadata:(id)a0;

@end
