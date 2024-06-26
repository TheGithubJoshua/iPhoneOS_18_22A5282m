@class NSXPCConnection;
@protocol SBSHomePodControlsImplementer;

@interface SBSHomePodControlsInterface : NSObject {
    NSXPCConnection *_sbConnection;
    id<SBSHomePodControlsImplementer> _sbProxy;
}

- (id)init;
- (id)initWithTarget:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)getAllSyncedAlarmsAndTimers:(id /* block */)a0;
- (BOOL)isMediaAlarm:(id)a0;

@end
