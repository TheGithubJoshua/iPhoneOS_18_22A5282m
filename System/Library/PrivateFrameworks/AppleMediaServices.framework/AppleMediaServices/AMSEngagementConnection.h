@class NSNotificationCenter, NSObject, NSXPCConnection;
@protocol OS_dispatch_queue, AMSEngagementServiceProtocol;

@interface AMSEngagementConnection : NSObject <AMSEngagementClientProtocol>

@property (retain, nonatomic) NSXPCConnection *connection;
@property (retain, nonatomic) NSNotificationCenter *notificationCenter;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) id<AMSEngagementServiceProtocol> proxy;
@property (copy, nonatomic) id /* block */ errorHandler;

- (id)_makeExportedClientConnectionInterface;
- (id)initWithNotificationCenter:(id)a0;
- (id)_newRemoteConnection;
- (id)_makeRemoteConnectionInterface;
- (void)treatmentsDidSyncronize;
- (void)_removeRemoteConnection;
- (void).cxx_destruct;
- (void)handlePushedEvent:(id)a0;
- (void)dealloc;

@end
