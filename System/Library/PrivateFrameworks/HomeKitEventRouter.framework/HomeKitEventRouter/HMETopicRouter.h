@class NSObject, NSMapTable, NSMutableSet;
@protocol HMETopicRouterDelegate, OS_os_log;

@interface HMETopicRouter : NSObject {
    NSObject<OS_os_log> *_logger;
}

@property (readonly, nonatomic) NSMapTable *registrations;
@property (readonly, nonatomic) NSMutableSet *registeredTopics;
@property (readonly, weak) id<HMETopicRouterDelegate> delegate;

+ (id)forwardingTopicsForAdditions:(id)a0 removals:(id)a1 current:(id)a2 indexProvider:(id /* block */)a3;

- (id)dumpStateDescription;
- (id)init;
- (id)initWithDelegate:(id)a0 logCategory:(const char *)a1;
- (id)initWithDelegate:(id)a0;
- (void)unregisterConsumer:(id)a0 topicFilters:(id)a1;
- (void)registerConsumer:(id)a0 topicFilters:(id)a1;
- (void).cxx_destruct;
- (id)allRegisteredTopicFilters;
- (id)minimalSpanningTopicFilters;
- (id)consumersForTopic:(id)a0;
- (void)changeRegistrationsForConsumer:(id)a0 topicFilterAdditions:(id)a1 topicFilterRemovals:(id)a2;
- (id)topicsForConsumer:(id)a0;
- (void)unregisterConsumer:(id)a0;
- (id)initWithDelegate:(id)a0 logger:(id)a1;

@end
