@class NSObject, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface SYDefaultsClient : NSObject

@property (retain, nonatomic) NSXPCConnection *_connection;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *_clientQueue;

- (id)init;
- (void)_invalidateConnection;
- (void)indicatorCoverageWithCompletion:(id /* block */)a0;
- (void)_createConnectionIfNeeded;
- (void)_configureConnectionAndResume;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setIndicatorCoverage:(long long)a0 completion:(id /* block */)a1;

@end
