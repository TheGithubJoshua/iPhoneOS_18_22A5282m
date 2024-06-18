@class NSString, MapsSuggestionsObservers, NSObject;
@protocol OS_dispatch_queue;

@interface MapsSuggestionsBaseTrigger : NSObject <MapsSuggestionsTrigger> {
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_name;
    MapsSuggestionsObservers *_observers;
}

@property (readonly, nonatomic) NSString *uniqueName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)objectForJSON;
- (id)nameForJSON;
- (id)initWithName:(id)a0 queue:(id)a1;
- (void)didRemoveLastObserver;
- (BOOL)hasObservers;
- (void)unregisterObserver:(id)a0;
- (void)didAddFirstObserver;
- (void)registerObserver:(id)a0;
- (id)dispatchQueue;
- (void).cxx_destruct;
- (id)initWithName:(id)a0;
- (void)triggerMyObservers;

@end
