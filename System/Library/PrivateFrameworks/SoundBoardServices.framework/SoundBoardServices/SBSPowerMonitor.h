@class NSXPCConnection;
@protocol SBSPowerMonitorImplementer;

@interface SBSPowerMonitor : NSObject {
    NSXPCConnection *_sbConnection;
    id<SBSPowerMonitorImplementer> _sbProxy;
}

- (id)init;
- (id)initWithTarget:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)getPowerEstimateForInterval:(float)a0 reply:(id /* block */)a1;

@end
