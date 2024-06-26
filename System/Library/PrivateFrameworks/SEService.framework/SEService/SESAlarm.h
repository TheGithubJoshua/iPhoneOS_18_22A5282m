@class NSMutableSet, NSMapTable, NSObject;
@protocol OS_dispatch_queue;

@interface SESAlarm : NSObject {
    NSObject<OS_dispatch_queue> *queue;
    NSMapTable *registered;
    NSMutableSet *pendingAlarms;
}

+ (BOOL)registerAlarm:(id)a0 handler:(id)a1;
+ (BOOL)isAlarmSet:(id)a0;
+ (void)setAlarm:(id)a0 secondsFromNow:(double)a1;
+ (id)sharedObject;
+ (void)kickoff;
+ (void)deregisterAlarm:(id)a0;
+ (void)clearAlarm:(id)a0;

- (id)init;
- (void)_handleAlarmFired:(id)a0;
- (void).cxx_destruct;

@end
