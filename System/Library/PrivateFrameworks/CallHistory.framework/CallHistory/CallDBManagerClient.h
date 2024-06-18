@class NSXPCConnection;

@interface CallDBManagerClient : CallDBManager

@property (retain) NSXPCConnection *helperConnection;
@property (retain) id syncHelperReadyNotificationRef;

- (BOOL)willMoveCallsFromTempDatabase;
- (void)createHelperConnection;
- (void)createTemporary;
- (void)pokeSyncHelperToInitDB;
- (BOOL)validatePermDatabase;
- (BOOL)validateTempDatabase;
- (void).cxx_destruct;
- (void)createPermanent;
- (void)moveCallsFromTempDatabase;
- (id)permDBLocation:(unsigned char *)a0;
- (void)handlePermanentCreated;
- (id)tempDBLocation:(unsigned char *)a0;

@end
