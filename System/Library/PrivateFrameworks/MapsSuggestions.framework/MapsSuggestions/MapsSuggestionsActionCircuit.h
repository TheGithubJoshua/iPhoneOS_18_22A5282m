@class NSString, NSArray, NSError, MapsSuggestionsObservers, NSObject;
@protocol OS_dispatch_queue, MapsSuggestionsAction;

@interface MapsSuggestionsActionCircuit : NSObject <MapsSuggestionsTriggerObserver, MapsSuggestionsCircuit> {
    struct Queue { NSObject<OS_dispatch_queue> *_innerQueue; NSString *_name; } _queue;
    struct _Config { NSString *name; MapsSuggestionsObservers *observers; id<MapsSuggestionsAction> action; NSArray *triggers; NSArray *conditions; unsigned long long type; } _config;
    struct _State { NSString *firedTriggerName; NSString *failedConditionName; NSError *lastError; BOOL active; } _state;
}

@property (readonly, nonatomic) struct Queue { NSObject<OS_dispatch_queue> *_innerQueue; NSString *_name; } dispatchQueue;
@property (readonly, nonatomic) NSString *uniqueName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addCondition:(id)a0;
- (id)objectForJSON;
- (void)addTrigger:(id)a0;
- (id)nameForJSON;
- (void)awaitQueue;
- (void)unregisterObserver:(id)a0;
- (void)triggerFired:(id)a0;
- (id)initWithAction:(id)a0;
- (id)initWithTriggers:(id)a0 action:(id)a1;
- (void)registerObserver:(id)a0;
- (id)initWithTriggers:(id)a0 conditions:(id)a1 action:(id)a2;
- (id).cxx_construct;
- (void)removeTrigger:(id)a0;
- (void).cxx_destruct;
- (void)removeCondition:(id)a0;
- (id)initWithTriggers:(id)a0 conditions:(id)a1 type:(unsigned long long)a2 action:(id)a3;
- (void)dealloc;

@end
