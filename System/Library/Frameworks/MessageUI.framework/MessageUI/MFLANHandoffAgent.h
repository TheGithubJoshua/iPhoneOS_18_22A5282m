@class MFLANHandoffContext;

@interface MFLANHandoffAgent : NSObject {
    struct __CFSocket { } *_socket;
    struct __CFRunLoopSource { } *_serverRunLoopSource;
    id /* block */ _connectCallbackBlock;
}

@property (readonly, nonatomic) BOOL serverRunning;
@property (readonly, nonatomic) MFLANHandoffContext *handoffContext;

- (id)init;
- (void)stopServer;
- (void)dealloc;
- (void)_cleanupRunLoopSource;
- (void)_cleanupSocket;
- (id)_getDeviceHostname;
- (void)_socketListenerRunLoop;
- (void)connectToServerWithContext:(id)a0 completion:(id /* block */)a1;
- (id)startServerWithCompletion:(id /* block */)a0;

@end
