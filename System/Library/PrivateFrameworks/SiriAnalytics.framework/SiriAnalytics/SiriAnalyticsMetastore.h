@interface SiriAnalyticsMetastore : NSObject {
    void /* unknown type, empty encoding */ storageURL;
    void /* unknown type, empty encoding */ db;
    void /* unknown type, empty encoding */ bootstrapped;
    void /* unknown type, empty encoding */ schemas;
}

- (void)prune;
- (id)init;
- (void)bootstrap;
- (void)cleanupAbandonedClocksWithActiveClockIdentifier:(id)a0;
- (void)endClock:(id)a0 endedOn:(unsigned long long)a1 endedReason:(unsigned long long)a2;
- (id)sensitiveConditionsWithBootSessionUUIDs:(id)a0;
- (BOOL)endLastSpanWithClockIdentifier:(id)a0 conditionType:(int)a1 endedOn:(unsigned long long)a2;
- (void)createClock:(id)a0 rootClockIdentifier:(id)a1 bootSessionUUID:(id)a2 startedOn:(unsigned long long)a3;
- (void).cxx_destruct;
- (BOOL)storeSensitiveConditionSpan:(id)a0 for:(id)a1 bootSessionUUID:(id)a2;
- (void)dealloc;

@end
