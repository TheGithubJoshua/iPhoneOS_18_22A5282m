@class NSString, PLPhotoLibrary;

@interface PLCloudSharingJob : PLDaemonJob {
    NSString *_archiveFilename;
}

@property (readonly, nonatomic) PLPhotoLibrary *transientPhotoLibrary;
@property (nonatomic) BOOL shouldPrioritize;

+ (id)lowPriorityOperationQueue;
+ (id)recoveredEventsWithPathManager:(id)a0;
+ (void)deleteAllRecoveryEventsWithPathManager:(id)a0;
+ (id)highPriorityOperationQueue;

- (void).cxx_destruct;
- (id)initFromXPCObject:(id)a0 libraryServicesManager:(id)a1;
- (id)initWithAssetsdClient:(id)a0;
- (void)runDaemonSide;
- (void)archiveXPCToDisk:(id)a0;
- (void)runAndWaitForMessageToBeSent;
- (BOOL)shouldArchiveXPCToDisk;

@end
