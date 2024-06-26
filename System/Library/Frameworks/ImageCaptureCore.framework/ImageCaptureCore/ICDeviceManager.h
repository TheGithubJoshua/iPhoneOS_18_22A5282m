@class NSString, NSXPCConnection, NSOperationQueue, NSDictionary, NSMutableArray, NSMutableDictionary;

@interface ICDeviceManager : NSObject <ICDeviceManagerProtocol> {
    NSMutableArray *_deviceHandles;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _deviceHandlesLock;
    NSDictionary *_deviceMatchingInfo;
    NSMutableDictionary *_devices;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _deviceOperationQueueLock;
    BOOL _deviceOperationQueueSuspended;
    BOOL _managerIsRunning;
    unsigned int _managerInvalidationCount;
    BOOL _controlAuthorizedOnce;
}

@property (retain) NSOperationQueue *deviceOperations;
@property (retain, nonatomic) NSXPCConnection *managerConnection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)postNotification:(id)a0;
- (void)startRunning;
- (void)stopRunning;
- (void)getFileDataImp:(id)a0;
- (void)closeDeviceImp:(id)a0;
- (void)openSessionImp:(id)a0;
- (void)addInitiatedOperation:(id)a0;
- (void)addInteractiveOperation:(id)a0;
- (void)addSelectorToInterface:(id)a0 selectorString:(id)a1 origin:(BOOL)a2;
- (long long)closeDevice:(id)a0 contextInfo:(void *)a1;
- (void)closeDeviceHandle:(id)a0;
- (long long)closeSession:(id)a0 withOptions:(id)a1 completion:(id /* block */)a2;
- (void)closeSessionImp:(id)a0;
- (long long)deleteFile:(id)a0 fromDevice:(id)a1 completion:(id /* block */)a2;
- (void)deleteFileImp:(id)a0;
- (id)deviceForConnection:(id)a0;
- (id)deviceForUUID:(id)a0;
- (id)deviceManagerConnection;
- (long long)downloadFile:(id)a0 fromDevice:(id)a1 withOptions:(id)a2 completion:(id /* block */)a3;
- (void)downloadFileImp:(id)a0;
- (long long)ejectDevice:(id)a0 completion:(id /* block */)a1;
- (void)ejectImp:(id)a0;
- (void)enumerateContent;
- (void)getDeviceList;
- (long long)getFileData:(id)a0 fromDevice:(id)a1 withOptions:(id)a2 completion:(id /* block */)a3;
- (long long)getFileMetadata:(id)a0 fromDevice:(id)a1 withOptions:(id)a2 completion:(id /* block */)a3;
- (void)getFileMetadataImp:(id)a0;
- (long long)getFileThumbnail:(id)a0 fromDevice:(id)a1 withOptions:(id)a2 completion:(id /* block */)a3;
- (void)getFileThumbnailImp:(id)a0;
- (void)notifyAddedDevice:(id)a0;
- (void)notifyRemovedDevice:(id)a0;
- (long long)openDevice:(id)a0 contextInfo:(void *)a1;
- (void)openDeviceHandle:(id)a0;
- (void)openDeviceImp:(id)a0;
- (BOOL)openRemoteDeviceManager;
- (long long)openSession:(id)a0 withOptions:(id)a1 completion:(id /* block */)a2;
- (void)postCommandCompletionNotification:(id)a0;
- (long long)registerDevice:(id)a0 forImageCaptureEventNotifications:(id)a1;
- (void)registerDevice:(id)a0 forImageCaptureEventNotificationsImp:(id)a1;
- (id)remoteManager;
- (void)restartRunning;
- (void)resumeOperations;
- (long long)sendDevice:(id)a0 ptpCommand:(id)a1 andPayload:(id)a2 completion:(id /* block */)a3;
- (void)sendDevicePTPCommandImp:(id)a0;
- (void)setDeviceOperationQueueName:(id)a0;
- (void)startDeviceWithHandle:(id)a0;
- (void)suspendOperations;
- (long long)syncClock:(id)a0 completion:(id /* block */)a1;
- (void)syncClockImp:(id)a0;
- (long long)unregisterDevice:(id)a0 forImageCaptureEventNotifications:(id)a1;
- (void)unregisterDevice:(id)a0 forImageCaptureEventNotificationsImp:(id)a1;

@end
