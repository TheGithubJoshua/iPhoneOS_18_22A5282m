@class NSConditionLock;

@interface MFDAMailAccountConsumer : NSObject <DAActionConsumer> {
    NSConditionLock *_doneCondition;
    BOOL _shouldRetryRequest;
    BOOL _alwaysReportFailures;
}

- (id)init;
- (void).cxx_destruct;
- (void)waitUntilDone;
- (void)setDone:(BOOL)a0;
- (void)actionFailed:(long long)a0 forTask:(id)a1 error:(id)a2;
- (id)initWithAlwaysReportFailures:(BOOL)a0;
- (BOOL)shouldRetryRequest;
- (void)taskFailed:(id)a0 statusCode:(long long)a1 error:(id)a2;
- (BOOL)waitUntilDoneBeforeDate:(id)a0;

@end
