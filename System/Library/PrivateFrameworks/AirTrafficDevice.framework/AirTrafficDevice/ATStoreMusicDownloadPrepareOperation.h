@class ICMediaRedownloadRequest;

@interface ATStoreMusicDownloadPrepareOperation : ATStoreDownloadPrepareOperation {
    ICMediaRedownloadRequest *_redownloadRequest;
}

- (void)cancel;
- (void)execute;
- (void).cxx_destruct;
- (void)finishWithError:(id)a0 operationResult:(id)a1;

@end
