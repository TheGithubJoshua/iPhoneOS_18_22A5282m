@class NSHashTable, CMMotionManager, CMDeviceMotion;

@interface PKMotionManager : NSObject {
    CMMotionManager *_motionManager;
    NSHashTable *_clients;
}

@property (readonly, nonatomic, getter=isMonitoring) BOOL monitoring;
@property (readonly, nonatomic) CMDeviceMotion *motion;

+ (id)sharedManager;

- (id)init;
- (id)_init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)unregisterClient:(id)a0;
- (void)registerClient:(id)a0;
- (void)updateWithMotion:(id)a0;

@end
