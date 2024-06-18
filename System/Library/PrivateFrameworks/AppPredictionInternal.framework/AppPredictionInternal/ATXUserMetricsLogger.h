@class NSObject;
@protocol ATXUserMetricsLoggerTarget;

@interface ATXUserMetricsLogger : NSObject {
    NSObject<ATXUserMetricsLoggerTarget> *_target;
}

- (id)init;
- (id)initWithTarget:(id)a0;
- (void).cxx_destruct;
- (void)storeUserMetric:(id)a0;
- (void)storeUserMetric:(id)a0 forceUserId:(id)a1;

@end
