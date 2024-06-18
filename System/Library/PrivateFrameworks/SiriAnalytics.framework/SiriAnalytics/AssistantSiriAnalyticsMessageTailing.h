@class NSObject, SiriAnalyticsPreferences;
@protocol OS_dispatch_queue;

@interface AssistantSiriAnalyticsMessageTailing : NSObject <SiriAnalyticsMessageObserverDelegate> {
    SiriAnalyticsPreferences *_preferences;
    NSObject<OS_dispatch_queue> *_messageTailingQueue;
}

- (id)init;
- (id)initWithPreferences:(id)a0 observable:(id)a1;
- (void)analyticsMessageObserver:(id)a0 producedMessages:(id)a1;
- (void).cxx_destruct;
- (void)_tailMessages:(id)a0;
- (void)tailAnyEvents:(id)a0;

@end
