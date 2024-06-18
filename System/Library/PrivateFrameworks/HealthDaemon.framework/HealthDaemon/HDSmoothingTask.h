@class HKWorkout, NSArray, HDDaemonTransaction;

@interface HDSmoothingTask : NSObject {
    HKWorkout *_workout;
    NSArray *_routes;
    NSArray *_unsmoothedLocations;
    id /* block */ _completionHandler;
    HDDaemonTransaction *_transaction;
    unsigned long long _smoothingAttempts;
}

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;

@end
