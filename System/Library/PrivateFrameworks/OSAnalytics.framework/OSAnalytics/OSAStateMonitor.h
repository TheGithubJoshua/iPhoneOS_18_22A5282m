@interface OSAStateMonitor : NSObject

+ (id)keyForEvent:(id)a0;
+ (void)checkCALogWrittenStatus;
+ (void)postFailureWithReason:(id)a0;
+ (void)checkSubmissionStatus;
+ (void)recordEvent:(id)a0;
+ (void)evaluateState;
+ (id)dateForEvent:(id)a0;

@end
