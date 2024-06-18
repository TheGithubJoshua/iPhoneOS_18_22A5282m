@class _TtC13CoreKnowledge36PrivateLearningPluginEventsScheduler;

@interface CoreKnowledge.PrivateLearningPluginEventsScheduler : NSObject {
    void /* unknown type, empty encoding */ pluginEventsScheduler;
}

@property (class, nonatomic, readonly) _TtC13CoreKnowledge36PrivateLearningPluginEventsScheduler *sharedScheduler;

- (id)init;
- (void)subscribeToEvents;
- (void).cxx_destruct;
- (void)unsubscribe;

@end
