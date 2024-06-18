@class NSString, NSDate, NSObject;
@protocol OS_os_log, OS_xpc_object, HDXPCActivityShim;

@interface HDXPCPeriodicActivity : NSObject <HDXPCActivityShim> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    _Atomic BOOL _registered;
    NSObject<OS_xpc_object> *_criteria;
    NSObject<OS_xpc_object> *_currentActivity;
    long long _state;
    BOOL _conditionsChanged;
    id /* block */ _handler;
    id<HDXPCActivityShim> _activityShim;
    BOOL _unitTest_shouldDeferOverride;
}

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) NSObject<OS_os_log> *loggingCategory;
@property (readonly, nonatomic) double baseInterval;
@property (copy) NSObject<OS_xpc_object> *criteria;
@property (readonly, nonatomic) long long errorCount;
@property (readonly, nonatomic) NSDate *lastSuccessfulRunDate;
@property (readonly, nonatomic) NSDate *earliestRunDate;
@property (readonly) NSObject<OS_xpc_object> *currentActivity;
@property (readonly, copy) NSObject<OS_xpc_object> *currentCriteria;
@property (readonly, nonatomic) BOOL shouldDefer;
@property (readonly, nonatomic) BOOL isWaiting;

+ (void)registerDisabledPeriodicActivityWithName:(id)a0 loggingCategory:(id)a1;

- (long long)xpcActivity_getState:(id)a0;
- (double)modifiedIntervalForCurrentState;
- (void)unitTest_setActivityShim:(id)a0;
- (id)xpcActivity_copyCriteria:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (void)registerActivity;
- (void)xpcActivity_unregister:(const char *)a0;
- (BOOL)xpcActivity_shouldDefer:(id)a0;
- (id)initWithName:(id)a0 baseInterval:(double)a1 criteria:(id)a2 loggingCategory:(id)a3 handler:(id /* block */)a4;
- (void)externalConditionsChanged;
- (void)xpcActivity_setCriteria:(id)a0 activity:(id)a1;
- (void)unitTest_synthesizeActivityFireWithCompletion:(id /* block */)a0;
- (void)xpcActivity_register:(const char *)a0 criteria:(id)a1 handler:(id /* block */)a2;
- (void)unitTest_reset;
- (void)updateCriteriaForModifiedIntervalForCurrentState;
- (BOOL)xpcActivity_setState:(long long)a0 activity:(id)a1;
- (void)dealloc;
- (void)unregisterActivity;
- (void)didPerformActivityWithResult:(long long)a0 minimumRetryInterval:(double)a1 activityStartDate:(id)a2 error:(id)a3;
- (BOOL)xpcActivity_setCompletionStatus:(long long)a0 activity:(id)a1;

@end
