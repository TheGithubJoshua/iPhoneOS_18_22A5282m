@class PFCameraViewfinderSessionWatcher, NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface PLCacheDeleteRegistration : NSObject <PFCameraViewfinderSessionWatcherDelegate> {
    NSMutableDictionary *_cacheDeleteSupportByLibraryURL;
    NSMutableDictionary *_notificationIDsByLibraryURL;
    NSObject<OS_dispatch_queue> *_queue;
    PFCameraViewfinderSessionWatcher *_cameraWatcher;
    NSMutableDictionary *_fileIDsAndPurgedPathsReceivedWhileCameraIsStreamingPerLibrary;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)registerNullHandler;

- (void)unregisterCacheDeleteSupport:(id)a0 withLibraryServicesManager:(id)a1;
- (id)init;
- (void)cameraWatcherDidChangeState:(id)a0;
- (void)_registerResourceDirectories;
- (void).cxx_destruct;
- (void)_replaceCameraWatcherWith:(id)a0;
- (void)_processRemovedFiles:(id)a0 withCacheDeleteSupport:(id)a1 forLibraryURL:(id)a2;
- (void)registerCacheDeleteSupport:(id)a0 withLibraryServicesManager:(id)a1;
- (void)_setCacheDeleteSupport:(id)a0 forLibrary:(id)a1;
- (id)_getInternalQueue;

@end
