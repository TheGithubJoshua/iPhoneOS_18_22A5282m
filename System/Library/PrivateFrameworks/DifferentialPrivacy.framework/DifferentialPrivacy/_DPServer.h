@class NSXPCListener, _DPStorage, NSString;

@interface _DPServer : NSObject <NSXPCListenerDelegate, _DPDaemonProtocol>

@property (readonly, nonatomic) NSXPCListener *listener;
@property (readonly, nonatomic) _DPStorage *db;
@property (readonly, nonatomic) BOOL metadataMethodsAllowed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldNotRecord:(id)a0 forKey:(id)a1;

- (id)init;
- (void)recordBitVectors:(id)a0 forKey:(id)a1 withReply:(id /* block */)a2;
- (void)reportsNotYetSubmittedWithReply:(id /* block */)a0;
- (void)recordStrings:(id)a0 forKey:(id)a1 withReply:(id /* block */)a2;
- (void)recordValues:(id)a0 forKey:(id)a1 usingSelector:(SEL)a2;
- (void)recordFloatVectors:(id)a0 forKey:(id)a1 withReply:(id /* block */)a2;
- (void)recordNumbersVectors:(id)a0 forKey:(id)a1 withReply:(id /* block */)a2;
- (void)retireReports:(id)a0 withReply:(id /* block */)a1;
- (void)recordWords:(id)a0 forKey:(id)a1 withReply:(id /* block */)a2;
- (void)recordBitValues:(id)a0 forKey:(id)a1 withReply:(id /* block */)a2;
- (void)start;
- (void)setupPeriodicTasksWith:(id)a0;
- (void)recordValues:(id)a0 metadata:(id)a1 forKey:(id)a2 usingSelector:(SEL)a3;
- (void)recordNumbersVectors:(id)a0 metadata:(id)a1 forKey:(id)a2 withReply:(id /* block */)a3;
- (void)recordStrings:(id)a0 metadata:(id)a1 forKey:(id)a2 withReply:(id /* block */)a3;
- (BOOL)retireReports:(id)a0 inDirectory:(id)a1;
- (void)recordNumbers:(id)a0 metadata:(id)a1 forKey:(id)a2 withReply:(id /* block */)a3;
- (void)recordNumbers:(id)a0 forKey:(id)a1 withReply:(id /* block */)a2;
- (void).cxx_destruct;
- (id)reportsNotYetSubmittedInDirecory:(id)a0;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (id)initWithDatabaseDirectoryPath:(id)a0 reportsDirectoryPath:(id)a1 enablePeriodicTasks:(BOOL)a2 enterSandbox:(BOOL)a3;
- (BOOL)metadataMethodsAllowed;
- (void)recordBitValues:(id)a0 metadata:(id)a1 forKey:(id)a2 withReply:(id /* block */)a3;
- (void)recordFloatVectors:(id)a0 metadata:(id)a1 forKey:(id)a2 withReply:(id /* block */)a3;
- (void)recordBitVectors:(id)a0 metadata:(id)a1 forKey:(id)a2 withReply:(id /* block */)a3;

@end
