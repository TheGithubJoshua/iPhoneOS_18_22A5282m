@class NSXPCConnection;
@protocol SBSSystemImplementer;

@interface SBSSystemInterface : NSObject {
    NSXPCConnection *_sbConnection;
    id<SBSSystemImplementer> _sbProxy;
}

- (id)init;
- (id)initWithTarget:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)obliterate:(id)a0;
- (void)reboot:(id)a0;
- (void)identifyWithOptions:(id)a0;
- (void)intercomWithOptions:(id)a0;
- (void)requestDeferredReboot;
- (void)setTurnOffBrightnessFactor:(BOOL)a0;

@end
