@class NSArray, NSMutableDictionary, NSString;

@interface HDSPSleepEventList : NSObject <BSDescriptionProviding>

@property (readonly, nonatomic) NSMutableDictionary *eventsByProvider;
@property (readonly, nonatomic) NSArray *sortedEvents;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)overdueEventsForDate:(id)a0;
- (id)init;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)_sortEvents;
- (void)removeEventsForProvider:(id)a0;
- (void)addEvents:(id)a0 provider:(id)a1;
- (id)succinctDescription;
- (void)removeAllEvents;
- (void).cxx_destruct;
- (void)removeEvents:(id)a0;
- (id)succinctDescriptionBuilder;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)allEvents;
- (id)nextEvent;

@end
