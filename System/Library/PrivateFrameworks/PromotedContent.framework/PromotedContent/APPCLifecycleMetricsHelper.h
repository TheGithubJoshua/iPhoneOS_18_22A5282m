@interface APPCLifecycleMetricsHelper : NSObject <APPCLifecycleMetricsHelping> {
    void /* unknown type, empty encoding */ metricsHelper;
    void /* unknown type, empty encoding */ placeholder;
    void /* unknown type, empty encoding */ wasOnScreen;
}

- (id)init;
- (void)contentLoadFailure;
- (void)discarded;
- (void).cxx_destruct;
- (void)trackImpressionWithStartDate:(id)a0 endDate:(id)a1;
- (void)missedOpportunity;
- (void)manuallyDiscardWithReason:(long long)a0;

@end
