@class NSObject;
@protocol OS_dispatch_queue, OS_dispatch_group, AFAnalyticsService;

@interface AFAnalytics : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_group> *_group;
    id<AFAnalyticsService> _service;
}

+ (id)sharedAnalytics;

- (void)logEventWithType:(long long)a0 context:(id)a1 contextNoCopy:(BOOL)a2;
- (id)init;
- (void)setService:(id)a0;
- (void)logEventWithType:(long long)a0 machAbsoluteTime:(unsigned long long)a1 context:(id)a2 contextNoCopy:(BOOL)a3;
- (void)_stageEvents:(id)a0;
- (void)logInstrumentationOfType:(Class)a0 machAbsoluteTime:(unsigned long long)a1 turnIdentifier:(id)a2;
- (void)logEventWithType:(long long)a0 contextResolver:(id /* block */)a1;
- (void)logInstrumentation:(id)a0 turnContext:(id)a1;
- (id)_service:(BOOL)a0;
- (void)logEventWithType:(long long)a0 machAbsoluteTime:(unsigned long long)a1 contextProvider:(id /* block */)a2 contextProvidingQueue:(id)a3;
- (id)newTurnBasedInstrumentationContext;
- (void)logEventWithType:(long long)a0 machAbsoluteTime:(unsigned long long)a1 contextResolver:(id /* block */)a2;
- (void)logEvents:(id)a0;
- (void)logEvent:(id)a0;
- (void).cxx_destruct;
- (void)barrier:(id /* block */)a0;
- (void)logInstrumentation:(id)a0 machAbsoluteTime:(unsigned long long)a1 turnContext:(id)a2;
- (void)logEventWithType:(long long)a0 contextProvider:(id /* block */)a1;
- (void)logEventWithType:(long long)a0 machAbsoluteTime:(unsigned long long)a1 context:(id)a2;
- (void)logClientFeedbackPresented:(id)a0 dialogIdentifierProvider:(id)a1;
- (void)logInstrumentation:(id)a0 machAbsoluteTime:(unsigned long long)a1 turnIdentifier:(id)a2;
- (void)logEventWithType:(long long)a0 context:(id)a1;
- (void)logInstrumentationOfType:(Class)a0 turnIdentifier:(id)a1;
- (void)logClientFeedbackPresented:(id)a0;
- (void)_stageEvent:(id)a0;
- (void)beginEventsGrouping;
- (void)boostQueuedEvents:(id /* block */)a0;
- (void)logEventWithType:(long long)a0 contextProvider:(id /* block */)a1 contextProvidingQueue:(id)a2;
- (void)endEventsGrouping;
- (id)initWithInstanceContext:(id)a0;

@end
