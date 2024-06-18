@class NSObject;
@protocol OS_xpc_object, OS_dispatch_queue, OS_dispatch_source;

@interface CAMKeepAliveController : NSObject

@property (retain, nonatomic, setter=_setConnection:) NSObject<OS_xpc_object> *_connection;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *_keepAliveQueue;
@property (retain, nonatomic, setter=_setHeartbeatSource:) NSObject<OS_dispatch_source> *_heartbeatSource;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *_heartbeatQueue;

- (void)_handleApplicationWillEnterForeground:(id)a0;
- (void)_handleApplicationDidEnterBackground:(id)a0;
- (id)init;
- (void)_setupConnectionIfNecessary;
- (void)_keepAliveQueueTeardownHeartbeat;
- (void)startKeepAliveSession;
- (void)sendCameraRollVisibilityChangedMessage:(BOOL)a0;
- (void)_teardownHeartbeat;
- (void)_keepAliveQueueCreateHeartbeatIfNecessary;
- (void).cxx_destruct;
- (void)_teardownConnection;
- (void)dealloc;
- (void)_keepAliveQueueCreateConnectionIfNecessary;
- (void)stopKeepAliveSession;
- (void)_handleHeartbeatConnectionReply:(id)a0;
- (void)_keepAliveQueueTeardownConnection;
- (void)_handleHeartbeatSourceEvent;

@end
