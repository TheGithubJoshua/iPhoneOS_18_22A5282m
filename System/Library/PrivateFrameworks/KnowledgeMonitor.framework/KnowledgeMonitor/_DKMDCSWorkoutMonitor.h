@class _CDContextualChangeRegistration, BMWorkoutStream, _CDClientContext;

@interface _DKMDCSWorkoutMonitor : _DKMonitor {
    _CDClientContext *_userContext;
    _CDContextualChangeRegistration *_registration;
}

@property (retain, nonatomic) BMWorkoutStream *workoutStream;

+ (id)eventStream;
+ (id)entitlements;

- (id)init;
- (void)stop;
- (void)start;
- (void).cxx_destruct;
- (id)createWorkoutPredicate;

@end
