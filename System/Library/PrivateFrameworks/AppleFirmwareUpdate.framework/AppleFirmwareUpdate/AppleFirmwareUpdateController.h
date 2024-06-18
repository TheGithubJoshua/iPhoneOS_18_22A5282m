@class NSMutableArray, NSString, NSArray, NSNumber, NSObject;
@protocol OS_os_log, AppleFirmwareUpdateControllerDelegate, OS_dispatch_queue;

@interface AppleFirmwareUpdateController : NSObject {
    NSObject<OS_os_log> *_log;
    struct IONotificationPort { } *_iokitNotifyPort;
    NSMutableArray *_pendingCriticalEarlyBootEntriesInternal;
    id<AppleFirmwareUpdateControllerDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSNumber *_registryEntryID;
    NSString *_fwAssetDirectory;
}

@property (retain, nonatomic) NSString *fwAssetFile;
@property (retain, nonatomic) NSString *fwAssetSignatureType;
@property (retain, nonatomic) NSNumber *fwAssetVersion;
@property (retain, nonatomic) NSNumber *fwAssetSize;
@property (retain, nonatomic) NSNumber *img4Tag;
@property (retain, nonatomic) NSArray *fdrClasses;

- (void)earlyBootAccessoryAttachedInternal:(unsigned int)a0;
- (unsigned int)getConnectionForRegistryID:(long long *)a0;
- (BOOL)registerForPendingEarlyBootAccessoriesInternal;
- (BOOL)registerForPendingEarlyBootAccessories;
- (id)getPendingEarlyBootAccessories;
- (void)readCriticalEarlyBootEntries;
- (void)setDelegate:(id)a0;
- (unsigned int)getServiceForRegistryID:(long long *)a0;
- (void).cxx_destruct;
- (BOOL)createFWAssetInfo;
- (id)updateFirmwareWithOptionsInternal:(id)a0;
- (long long)sendFDRData:(unsigned int)a0;
- (BOOL)getEarlyBootList:(id)a0;
- (BOOL)createFWAssetInfoInternal;
- (BOOL)getEarlyBootListInternal:(id)a0;
- (void)dealloc;
- (id)updateFirmwareWithOptions:(id)a0;
- (id)findFWAssetFromTag:(id)a0 tag:(unsigned int)a1 size:(unsigned long long *)a2;
- (BOOL)isFWDownloadNeeded:(id)a0;
- (id)initWithRegistryEntryID:(id)a0 fwAssetDirectory:(id)a1;
- (void)earlyBootAccessoryAttached:(unsigned int)a0;
- (void)enableEarlyBootLoggingMode;

@end
