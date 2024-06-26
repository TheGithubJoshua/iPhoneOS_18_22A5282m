@class NSXPCConnection;

@interface SBFCARenderer : NSObject {
    NSXPCConnection *_rendererServiceConnection;
}

+ (id)sharedInstance;
+ (BOOL)shouldUseXPCServiceForRendering;

- (id)_remoteObjectProxy;
- (void)warmup;
- (void)_createConnection;
- (void).cxx_destruct;

@end
