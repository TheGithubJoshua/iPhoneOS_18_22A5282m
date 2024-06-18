@class NSObject, NSError, NSXPCConnection;
@protocol OS_dispatch_semaphore;

@interface DIBaseXPCHandler : NSObject

@property (retain, nonatomic) id remoteProxy;
@property (retain, nonatomic) NSXPCConnection *connection;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *semaphore;
@property (retain, nonatomic) NSError *xpcError;
@property (nonatomic) BOOL isPrivileged;

- (id)init;
- (void)createConnection;
- (id)remoteObjectInterface;
- (id)serviceName;
- (void).cxx_destruct;
- (void)closeConnection;
- (void)dealloc;
- (BOOL)connectWithError:(id *)a0;
- (BOOL)completeCommandWithError:(id *)a0;
- (BOOL)dupStderrWithError:(id *)a0;
- (void)signalCommandCompletedWithXpcError:(id)a0;

@end
