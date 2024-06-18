@class NSString, NSXPCConnection;
@protocol BYDeviceMigrationDelegate;

@interface BYBuddyDaemonMigrationSourceClient : NSObject <BYClientMigrationSourceProtocol>

@property (retain, nonatomic) NSXPCConnection *connection;
@property (weak, nonatomic) id<BYDeviceMigrationDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)clientInterface;

- (id)init;
- (void)cancel;
- (void).cxx_destruct;
- (void)didUpdateProgress:(id)a0;
- (void)didFinishWithError:(id)a0;
- (void)_connectToDaemon;
- (void)didChangeConnectionInformation:(id)a0;
- (void)launchSetupForMigration;
- (void)registerAsUserInterfaceHost:(id /* block */)a0;
- (void)setFileTransferTemplate:(id)a0;

@end
