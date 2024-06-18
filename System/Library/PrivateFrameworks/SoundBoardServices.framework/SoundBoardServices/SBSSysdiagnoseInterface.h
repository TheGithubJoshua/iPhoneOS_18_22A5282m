@class NSXPCConnection;
@protocol SBSSysdiagnoseImplementer;

@interface SBSSysdiagnoseInterface : NSObject {
    NSXPCConnection *_sbConnection;
    id<SBSSysdiagnoseImplementer> _sbProxy;
}

- (id)init;
- (id)initWithTarget:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)sysdiagnoseHasStarted:(BOOL)a0;

@end
