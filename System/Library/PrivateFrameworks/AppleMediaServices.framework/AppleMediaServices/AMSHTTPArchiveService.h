@class NSObject, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface AMSHTTPArchiveService : NSObject

@property (retain, nonatomic) NSXPCConnection *connection;
@property (copy, nonatomic) id /* block */ errorHandler;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

+ (void)recordTrafficWithTaskInfo:(id)a0;
+ (id)_sharedProxy;

- (id)init;
- (void)_removeRemoteConnection;
- (void).cxx_destruct;
- (id)_createRemoteConnection;
- (void)dealloc;
- (id)_createProxy;

@end
