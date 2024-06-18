@class NSMutableArray, NSMutableDictionary, RTMotionActivity, NSOperationQueue, NSDate, CMMotionActivityManager, NSObject;
@protocol OS_dispatch_source;

@interface RTMotionActivityManager_CoreMotion : RTMotionActivityManager

@property (retain, nonatomic) CMMotionActivityManager *motionActivityManager;
@property (nonatomic) BOOL motionActivityAvailable;
@property (retain, nonatomic) NSOperationQueue *operationQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *dominantMotionActivityTimer;
@property (retain, nonatomic) NSMutableDictionary *activityAlarms;
@property (retain, nonatomic) NSDate *lastQueryForMotionActivity;
@property (nonatomic) BOOL dominantMotionActivityBootstrapped;
@property (retain, nonatomic) NSMutableArray *motionActivities;
@property (retain, nonatomic) RTMotionActivity *dominantMotionActivity;
@property (nonatomic) unsigned long long settledState;
@property (nonatomic) long long interestedInActivity;
@property (nonatomic) unsigned long long vehicleConnectedState;

+ (double)durationForTrigger:(unsigned int)a0;
+ (long long)activityAlarmTriggerFromCMActivityAlarmTrigger:(unsigned int)a0;

- (void)_resetMotionActivitiesIfNeeded;
- (void)_shutdownWithHandler:(id /* block */)a0;
- (void)internalAddObserver:(id)a0 name:(id)a1;
- (void)_fetchMotionActivitiesIfNeeded;
- (void)internalRemoveObserver:(id)a0 name:(id)a1;
- (void)_bootstrapDominantActivityWithMotionActivites:(id)a0;
- (void)_fetchPredominantMotionActivityTypeFromStartDate:(id)a0 toEndDate:(id)a1 withHandler:(id /* block */)a2;
- (void)onVehicleExitNotification;
- (void)_processActivityAlarm:(id)a0 error:(id)a1;
- (void)_invalidateActivityAlarms;
- (void)_resubscribeForActivityAlarms;
- (void)_processDominantActivity;
- (void)_processSettledState;
- (void)onVehicleConnectedNotification;
- (void)_fetchMotionActivitiesFromStartDate:(id)a0 endDate:(id)a1 handler:(id /* block */)a2;
- (void)onActivity:(id)a0;
- (void).cxx_destruct;
- (void)_onVehicleDisconnectedNotification;
- (id)_rtAlarmForTrigger:(unsigned int)a0;
- (void)_subscribeForMotionAlarmTypes:(id)a0;
- (void)_onActivity:(id)a0;
- (void)_onVehicleConnectedNotification;
- (id)initWithPlatform:(id)a0;
- (void)_invalidateAlarm:(id)a0;
- (void)onVehicleDisconnectedNotification;
- (void)_fetchPredominantMotionActivityWithHandler:(id /* block */)a0;

@end
