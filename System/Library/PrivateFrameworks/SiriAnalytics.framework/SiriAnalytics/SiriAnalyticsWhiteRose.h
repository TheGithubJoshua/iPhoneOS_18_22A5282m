@class SiriAnalyticsRootClock, SiriAnalyticsMetastore, NSObject;
@protocol OS_dispatch_queue, SiriAnalyticsWhiteRoseDelegate, OS_dispatch_source;

@interface SiriAnalyticsWhiteRose : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    id<SiriAnalyticsWhiteRoseDelegate> _delegate;
    SiriAnalyticsRootClock *_activeClock;
    SiriAnalyticsRootClock *_trailingClock;
    NSObject<OS_dispatch_source> *_inactivityTimer;
    double _maximumInactivityInterval;
    NSObject<OS_dispatch_source> *_maximumClockLifeTimer;
    double _maximumClockLifeInterval;
    SiriAnalyticsMetastore *_metastore;
}

+ (void)reportRedactionSummaryForTimestamp:(unsigned long long)a0 spans:(id)a1 andDidRedact:(BOOL)a2;

- (void)_destroyActiveClockWithReason:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)_cancelMaximumClockLifeTimer;
- (void)bootstrap;
- (void)sensitiveCondition:(int)a0 startedAt:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)destroyActiveClockWithReason:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)_maximumClockLifeExpired;
- (void)_startInactivityTimer;
- (void)_ensureActiveClockStartingAt:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)sensitiveCondition:(int)a0 endedAt:(unsigned long long)a1 completion:(id /* block */)a2;
- (id)markTimeForAnnotatedMessage:(id)a0 withRootClock:(id)a1;
- (void).cxx_destruct;
- (void)markTimeForAnnotatedMessages:(id)a0 completion:(id /* block */)a1;
- (void)_cancelInactivityTimer;
- (id)initWithQueue:(id)a0 delegate:(id)a1 metastore:(id)a2;
- (void)_inactivityTimerElapsed;
- (void)_startMaximumClockLifeTimer;

@end
