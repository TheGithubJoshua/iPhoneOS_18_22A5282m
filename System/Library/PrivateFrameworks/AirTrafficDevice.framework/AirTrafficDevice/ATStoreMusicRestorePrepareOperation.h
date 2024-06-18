@class ICMusicRestoreRequest;

@interface ATStoreMusicRestorePrepareOperation : ATStoreDownloadPrepareOperation {
    ICMusicRestoreRequest *_restoreRequest;
}

- (void)cancel;
- (void)execute;
- (void).cxx_destruct;
- (void)finishWithError:(id)a0 operationResult:(id)a1;

@end
