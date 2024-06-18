@class NSUUID, NSURL, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface WebBookmarkDeviceIdentifier : NSObject {
    NSURL *_plistURL;
    NSUUID *_UUID;
    BOOL _encounteredErrorWhileObtainingUUID;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_fileMonitor;
}

@property (nonatomic, getter=_listensForMetaDataChangeNotification, setter=_setListensForMetaDataChangeNotification:) BOOL listensForMetaDataChangeNotification;
@property (readonly, nonatomic) NSUUID *UUID;
@property (readonly, nonatomic) BOOL encounteredErrorWhileObtainingUUID;
@property (nonatomic, getter=isReadOnly) BOOL readOnly;

+ (void)_postWebBookmarkMetaDataChangeDistributedNotification:(id)a0;
+ (void)clearDeviceIdentifierWithPlistURL:(id)a0;

- (void)stopObservingChanges;
- (void)_cancelMonitoringMetaDataFile;
- (void)_metaDataDidChange:(id)a0;
- (id)initWithPlistURL:(id)a0 readOnly:(BOOL)a1;
- (void)_setUpWithPlistURL:(id)a0 readOnly:(BOOL)a1 queue:(id)a2;
- (void).cxx_destruct;
- (id)description;
- (void)_resumeMonitoringMetaDataFile;
- (void)dealloc;
- (void)_createOrLoadMetaData;

@end
