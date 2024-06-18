@class NSURL, CUBonjourAdvertiser, NSMutableDictionary, CUCoalescer, RPIdentity, NSObject, CUTCPServer, NSMutableArray, RPFileTransferProgress, CUBonjourDevice, NSString, CUBonjourBrowser, RPConnection, CUWiFiManager, NSMutableSet, NSData;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface RPFileTransferSession : NSObject <NSSecureCoding, RPMessageable> {
    BOOL _activateCalled;
    CUBonjourAdvertiser *_bonjourAdvertiser;
    CUBonjourBrowser *_bonjourBrowser;
    CUCoalescer *_bonjourCoalescer;
    CUBonjourDevice *_bonjourDevice;
    unsigned int _cnxIDLast;
    NSMutableSet *_connections;
    RPConnection *_controlCnx;
    NSObject<OS_dispatch_source> *_controlRetryTimer;
    int _controlState;
    int _debugNotifyToken;
    BOOL _finishPending;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    BOOL _lockedInterface;
    RPIdentity *_peerIdentity;
    BOOL _peerInfraWiFiDisabled;
    NSMutableDictionary *_registeredEvents;
    NSMutableDictionary *_registeredRequests;
    RPIdentity *_selfIdentity;
    CUTCPServer *_tcpServer;
    struct LogCategory { int x0; int x1; char *x2; unsigned int x3; char *x4; char *x5; int x6; struct LogCategory *x7; struct LogOutput *x8; struct LogOutput *x9; unsigned long long x10; unsigned long long x11; unsigned int x12; unsigned int x13; char *x14; struct LogCategoryPrivate *x15; } *_ucat;
    CUWiFiManager *_wifiManager;
    NSMutableSet *_addedItems;
    BOOL _compressionEnabled;
    unsigned long long _fileIDLastReceive;
    unsigned long long _fileIDLastSend;
    NSMutableArray *_ioQueues;
    NSString *_receiveFileParentPath;
    unsigned long long _taskIDLast;
    NSMutableDictionary *_smallFilesReceiveTasks;
    NSMutableSet *_smallFilesSendTasks;
    NSMutableDictionary *_largeFileReceiveTasks;
    NSMutableSet *_largeFileSendTasks;
    unsigned int _fileWritesOutstanding;
    BOOL _prefCompress;
    unsigned int _prefLargeFileBufferBytes;
    int _prefLargeFileMaxOutstanding;
    unsigned int _prefLargeFileMaxTasks;
    unsigned int _prefSmallFilesMaxBytes;
    unsigned int _prefSmallFilesMaxTasks;
    unsigned long long _metricCompressedBytes;
    unsigned long long _metricUncompressedBytes;
    unsigned long long _metricCompressionErrors;
    unsigned long long _metricUncompressibleChunks;
    unsigned int _metricDisconnects;
    unsigned long long _metricRetries;
    unsigned long long _metricLastFileCompletionTicks;
    unsigned long long _metricFileSizeBuckets[8];
    unsigned int _metricLinkTypeCountAWDL;
    unsigned int _metricLinkTypeCountOther;
    unsigned int _metricLinkTypeCountUSB;
    unsigned long long _metricNotEnoughFiles;
    unsigned long long _metricPrematureSmallSets;
    unsigned long long _metricTCPRanDryCount;
    unsigned long long _metricTicksConnected;
    unsigned long long _metricTicksConnectStart;
    unsigned long long _metricTicksActivate;
    unsigned long long _metricTotalBytes;
    unsigned long long _metricTotalFiles;
    unsigned int _metricTotalIOQueues;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSData *selfPublicKey;
@property (copy, nonatomic) NSData *selfSecretKey;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (nonatomic) unsigned long long debugFlags;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic) unsigned int flags;
@property (copy, nonatomic) id /* block */ flowControlChangedHandler;
@property (readonly, nonatomic) int flowControlState;
@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSData *peerPublicKey;
@property (readonly, nonatomic) RPFileTransferProgress *progressCurrent;
@property (copy, nonatomic) id /* block */ progressHandler;
@property (copy, nonatomic) id /* block */ receivedItemHandler;
@property (copy, nonatomic) id /* block */ receivedItemsHandler;
@property (copy, nonatomic) NSString *targetID;
@property (copy, nonatomic) NSURL *temporaryDirectoryURL;
@property (retain, nonatomic) NSString *serviceType;

- (void)addItem:(id)a0;
- (id)descriptionWithLevel:(int)a0;
- (id)initWithCoder:(id)a0;
- (void)finish;
- (id)init;
- (void)_handleDeviceLost:(id)a0;
- (void)activate;
- (void)_invalidated;
- (void)encodeWithCoder:(id)a0;
- (void)invalidate;
- (void).cxx_destruct;
- (void)_updateIfNeededWithBlock:(id /* block */)a0;
- (id)description;
- (void)addItems:(id)a0;
- (void)dealloc;
- (void)_invalidate;
- (void)_reportProgressType:(int)a0;
- (void)deregisterEventID:(id)a0;
- (void)deregisterRequestID:(id)a0;
- (void)registerEventID:(id)a0 options:(id)a1 handler:(id /* block */)a2;
- (void)registerRequestID:(id)a0 options:(id)a1 handler:(id /* block */)a2;
- (void)sendEventID:(id)a0 event:(id)a1 options:(id)a2 completion:(id /* block */)a3;
- (void)sendRequestID:(id)a0 request:(id)a1 options:(id)a2 responseHandler:(id /* block */)a3;
- (void)sendRequestID:(id)a0 request:(id)a1 destinationID:(id)a2 options:(id)a3 responseHandler:(id /* block */)a4;
- (void)sendEventID:(id)a0 event:(id)a1 destinationID:(id)a2 options:(id)a3 completion:(id /* block */)a4;
- (BOOL)prepareTemplateAndReturnError:(id *)a0;
- (void)_largeFileSendTaskFailed:(id)a0 error:(id)a1;
- (void)_receivedEventID:(id)a0 event:(id)a1 options:(id)a2;
- (void)_handleIncomingConnectionEnded:(id)a0;
- (id)_ioQueueDequeue;
- (BOOL)_activateAndReturnError:(id *)a0;
- (BOOL)_activateSourceAndReturnError:(id *)a0;
- (BOOL)_activateTargetAndReturnError:(id *)a0;
- (void)_completeItem:(id)a0 error:(id)a1;
- (void)_completeItemDirect:(id)a0 error:(id)a1;
- (id)_compressData:(id)a0 error:(id *)a1;
- (void)_controlCnxRetryIfNeeded;
- (void)_controlCnxStartIfNeeded;
- (void)_debugSetup;
- (void)_debugUpdate;
- (id)_decompressAndDecodeData:(id)a0 originalSize:(unsigned long long)a1 error:(id *)a2;
- (id)_decompressData:(id)a0 originalSize:(unsigned long long)a1 error:(id *)a2;
- (id)_encodeAndCompressObject:(id)a0 originalSize:(unsigned long long *)a1 error:(id *)a2;
- (void)_handleDeviceFound:(id)a0;
- (void)_handleDevicesCoalesced;
- (void)_handleIncomingConnectionStarted:(id)a0;
- (void)_ioQueueEnqueue:(id)a0;
- (void)_largeFileReceiveRequest:(id)a0 responseHandler:(id /* block */)a1;
- (void)_largeFileReceiveTaskInvalidate:(id)a0;
- (void)_largeFileReceiveTaskRespond:(id)a0 error:(id)a1 complete:(BOOL)a2 responseHandler:(id /* block */)a3;
- (void)_largeFileReceiveTaskRun:(id)a0 data:(id)a1 sendFlags:(unsigned int)a2 responseHandler:(id /* block */)a3;
- (id)_largeFileSendTaskCreate;
- (void)_largeFileSendTaskEnd:(id)a0 error:(id)a1;
- (void)_largeFileSendTaskNext:(id)a0 xid:(unsigned int)a1;
- (void)_largeFileSendTaskResponse:(id)a0 error:(id)a1 end:(BOOL)a2 xid:(unsigned int)a3;
- (void)_largeFileSendTaskSend:(id)a0 data:(id)a1 end:(BOOL)a2 xid:(unsigned int)a3;
- (void)_largeFileSendTaskStart:(id)a0;
- (void)_metricAddFileSize:(long long)a0;
- (int)_openReadPath:(const char *)a0 error:(id *)a1;
- (int)_openWriteFileItem:(id)a0 size:(long long)a1 error:(id *)a2;
- (int)_openWritePath:(id)a0 size:(long long)a1 error:(id *)a2;
- (void)_prefsChanged;
- (BOOL)_prepareItem:(id)a0 error:(id *)a1;
- (void)_processFinish;
- (void)_processReceivedItem:(id)a0 responseHandler:(id /* block */)a1;
- (void)_processReceivedItems:(id)a0 responseHandler:(id /* block */)a1;
- (BOOL)_readFD:(int)a0 buffer:(char *)a1 size:(unsigned long long)a2 error:(id *)a3;
- (id)_readFD:(int)a0 size:(unsigned long long)a1 error:(id *)a2;
- (id)_readPath:(const char *)a0 size:(unsigned long long)a1 error:(id *)a2;
- (void)_receivedPeerUpdate:(id)a0;
- (void)_receivedRequestID:(id)a0 request:(id)a1 options:(id)a2 responseHandler:(id /* block */)a3;
- (void)_reportCompletion:(id)a0;
- (void)_reportProgressControlState;
- (void)_scheduleItems;
- (void)_smallFilesReceiveRequest:(id)a0 responseHandler:(id /* block */)a1;
- (void)_smallFilesReceiveTaskComplete:(id)a0 error:(id)a1 responseHandler:(id /* block */)a2;
- (BOOL)_smallFilesReceiveTaskFileItem:(id)a0 error:(id *)a1;
- (void)_smallFilesReceiveTaskRun:(id)a0 responseHandler:(id /* block */)a1;
- (id)_smallFilesSendTaskCreate;
- (void)_smallFilesSendTaskEnd:(id)a0 error:(id)a1;
- (id)_smallFilesSendTaskReadItem:(id)a0 error:(id *)a1;
- (void)_smallFilesSendTaskRun:(id)a0;
- (void)_updateWiFi;
- (BOOL)_writeFD:(int)a0 buffer:(const char *)a1 size:(unsigned long long)a2 error:(id *)a3;

@end