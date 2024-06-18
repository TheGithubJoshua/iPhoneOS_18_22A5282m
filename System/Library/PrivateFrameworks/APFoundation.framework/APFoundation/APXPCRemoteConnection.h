@class NSString, NSXPCConnection, APUnfairLock, NSMutableArray;

@interface APXPCRemoteConnection : NSObject

@property (nonatomic) int numClients;
@property (retain, nonatomic) NSMutableArray *delegates;
@property (retain, nonatomic) NSXPCConnection *xpcConnection;
@property (readonly, nonatomic) NSString *machService;
@property (readonly, nonatomic) APUnfairLock *unfairLock;

+ (void)addSharedConnection:(id)a0 forMachService:(id)a1;
+ (id)connectionFor:(id)a0;
+ (void)removeSharedConnectionForMachService:(id)a0;
+ (id)sharedConnections;
+ (id)sharedConnectionFor:(id)a0;
+ (id)connectionForMachService:(id)a0;

- (void)connectionInterrupted;
- (void)addDelegate:(id)a0;
- (void)connectionInvalidated;
- (id)initWithDelegate:(id)a0;
- (void)removeDelegate:(id)a0;
- (void)increaseConnectionCount;
- (void)invalidateForDelegate:(id)a0;
- (void).cxx_destruct;
- (void)decreaseConnectionCount;
- (void)dealloc;

@end
