@class NSObject, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface WCAClient : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    long long _changeCounter;
}

@property (retain, nonatomic) NSXPCConnection *connectionToService;

+ (id)sharedClient;

- (id)init;
- (void)_invalidateDaemonConnectionIfPossible;
- (void)fetchWiFiAssetsFromServer;
- (void)_establishDaemonConnection;
- (void).cxx_destruct;
- (void)executeFetchRequest:(id)a0;

@end
