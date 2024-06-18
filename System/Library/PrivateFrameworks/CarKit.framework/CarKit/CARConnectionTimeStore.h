@class NSXPCConnection;

@interface CARConnectionTimeStore : NSObject

@property (retain, nonatomic) NSXPCConnection *connection;

+ (id)_CARConnectionServiceInterface;

- (id)init;
- (void)_setupConnection;
- (void)_xpcFetchWithServiceBlock:(id /* block */)a0 errorHandler:(id /* block */)a1;
- (void)syncSendConnectionEvent:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (void)fetchRecentSessions:(id /* block */)a0;
- (void)sendConnectionEvent:(id)a0 completion:(id /* block */)a1;
- (void)dealloc;
- (void)_xpcFetchWithSynchronousServiceBlock:(id /* block */)a0 errorHandler:(id /* block */)a1;
- (void)clearHistoricalConnectionsWithCompletion:(id /* block */)a0;

@end
