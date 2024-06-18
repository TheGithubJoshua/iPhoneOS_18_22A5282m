@class NSMutableDictionary;

@interface PLCoreAnalyticsEventManager : NSObject {
    NSMutableDictionary *_eventMap;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

- (id)init;
- (void)setPayloadValue:(id)a0 forKey:(id)a1 onlyOnExistingEventWithName:(id)a2;
- (void)addRecordingTimedEventSnippetWithToken:(double)a0 forKey:(id)a1 onEventWithName:(id)a2;
- (id)rawEventForEventName:(id)a0;
- (void)setPayloadValue:(id)a0 forKey:(id)a1 onEventWithName:(id)a2;
- (void)publishEventWithName:(id)a0;
- (void)removePayloadValueForKey:(id)a0 onEventWithName:(id)a1;
- (void)publishAllEvents;
- (void)removeEventWithName:(id)a0;
- (id)valueForKey:(id)a0 onEventWithName:(id)a1;
- (void).cxx_destruct;
- (id)description;
- (double)startRecordingTimedEventToken;
- (void)mergePayload:(id)a0 onEventWithName:(id)a1;
- (void)_setPayloadValue:(id)a0 forKey:(id)a1 onEventWithName:(id)a2 eventBlock:(id /* block */)a3;
- (id)_eventForEventName:(id)a0;
- (void)stopRecordingTimedEventWithToken:(double)a0 forKey:(id)a1 onEventWithName:(id)a2;

@end
