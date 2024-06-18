@class NSArray, NSCountedSet;

@interface ATXFreeMomentDataSource : NSObject {
    NSArray *_events;
    NSCountedSet *_appsLaunchedInLastNSeconds;
    NSArray *_motionStatesInLastNSeconds;
}

- (id)init;
- (void).cxx_destruct;
- (void)logCompletion:(id)a0;
- (id)initWithEvents:(id)a0;
- (id)appsLaunchedInLastNSeconds:(double)a0;
- (id)fetchEventsForDay;
- (id)initWithAppsLaunchedInLastNSeconds:(id)a0;
- (id)initWithMotionStatesInLastNSeconds:(id)a0;
- (id)motionStatesInLastNSeconds:(double)a0;
- (id)numPhoneUnlockEventsInLastNSeconds:(double)a0;

@end
