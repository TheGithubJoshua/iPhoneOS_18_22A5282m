@class CMMotionActivityManager, NSOperationQueue, NSObject;
@protocol OS_dispatch_queue;

@interface MotionStateRelay : NSObject {
    int deviceOrientationStateToken;
    NSObject<OS_dispatch_queue> *_alarmQueue;
    BOOL _isMoving;
    CMMotionActivityManager *_activityManager;
    NSOperationQueue *_alarmOperationQueue;
}

@property (nonatomic) int deviceOrientation;
@property (readonly, nonatomic) unsigned int currentMotion;
@property (readonly, nonatomic) BOOL isStationary;

+ (id)sharedInstance;
+ (BOOL)automaticallyNotifiesObserversOfIsStationary;
+ (BOOL)automaticallyNotifiesObserversOfCurrentMotion;

- (BOOL)isMoving;
- (void)transitionToState:(unsigned int)a0;
- (void)setdeviceOrientation:(int)a0;
- (id)init;
- (void)initializeEngine;
- (id)motionStateString:(unsigned int)a0;
- (void)startActivityUpdates;
- (id)deviceOrientationString:(int)a0;
- (void)stopActivityUpdates;
- (void)startMotionMonitoring;
- (void)subscribe;
- (void).cxx_destruct;
- (void)destroyEngine;
- (void)unsubscribe;
- (void)stopMotionMonitoring;
- (void)dealloc;

@end
