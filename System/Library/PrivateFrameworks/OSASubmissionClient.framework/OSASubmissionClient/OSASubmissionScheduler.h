@interface OSASubmissionScheduler : NSObject

+ (double)_lastSuccessTime;
+ (void)scheduleSubmission;
+ (void)scheduleCleanupWithHomeDirectory:(id)a0;
+ (void)_setCadenceForActivity:(id)a0;
+ (void)_saveLastSuccessTime;
+ (void)_setRetryCount:(long long)a0;
+ (long long)_retryCount;
+ (void)_scheduleSubmissionPermissive:(BOOL)a0;

@end
