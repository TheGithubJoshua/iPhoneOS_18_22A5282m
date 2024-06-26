@class NSMutableArray, NSMutableDictionary;

@interface BYAnalyticsManager : NSObject

@property (retain, nonatomic) NSMutableArray *events;
@property (retain, nonatomic) NSMutableDictionary *lazyEvents;

- (void)_sendEvent:(id)a0 payload:(id)a1;
- (id)init;
- (void)commit;
- (void).cxx_destruct;
- (void)addEvent:(id)a0;
- (void)reset;
- (void)_gatherDataFromProducers;
- (void)addEvent:(id)a0 withPayload:(id)a1 persist:(BOOL)a2;
- (void)addEvent:(id)a0 withPayloadBlock:(id /* block */)a1 persist:(BOOL)a2;
- (void)commitThenUpload;
- (void)removeEventsUsingBlock:(id /* block */)a0;
- (void)removeNonPersistentEvents;
- (void)stash:(id)a0;

@end
