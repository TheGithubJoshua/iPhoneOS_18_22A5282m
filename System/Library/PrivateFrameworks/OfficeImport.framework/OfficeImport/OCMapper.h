@class OCCancel, OITSUTemporaryDirectory;

@interface OCMapper : NSObject {
    OCCancel *mCancel;
    OITSUTemporaryDirectory *mTemporaryDirectoryObject;
}

+ (id)mapperForCurrentThread;

- (void)setup;
- (id)init;
- (void)cancel;
- (void)teardown;
- (void).cxx_destruct;
- (BOOL)isCancelled;
- (void)quit;
- (id)temporaryDirectoryPath;

@end
