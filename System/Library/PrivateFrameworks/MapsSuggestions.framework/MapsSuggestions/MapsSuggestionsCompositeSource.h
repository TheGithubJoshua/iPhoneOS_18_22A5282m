@class NSString, NSMutableDictionary, NSMutableSet, NSObject, MapsSuggestionsSuppressor;
@protocol OS_dispatch_queue, MapsSuggestionsSourceDelegate, OS_dispatch_source;

@interface MapsSuggestionsCompositeSource : MapsSuggestionsBaseSource <MapsSuggestionsSource, MapsSuggestionsSourceDelegate> {
    NSMutableSet *_sources;
    NSMutableDictionary *_nextUpdateTimes;
    struct Queue { NSObject<OS_dispatch_queue> *_innerQueue; NSString *_name; } _queue;
    NSObject<OS_dispatch_source> *_updateTimer;
    MapsSuggestionsSuppressor *_suppressor;
    NSMutableDictionary *_hasStarted;
}

@property BOOL running;
@property (weak, nonatomic) id<MapsSuggestionsSourceDelegate> delegate;
@property (readonly, nonatomic) NSString *uniqueName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isEnabled;
+ (unsigned long long)disposition;

- (double)updateSuggestionEntriesWithHandler:(id /* block */)a0;
- (double)updateSuggestionEntriesOfType:(long long)a0 handler:(id /* block */)a1;
- (id)children;
- (char)removeEntry:(id)a0 behavior:(long long)a1 handler:(id /* block */)a2;
- (id)initFromResourceDepot:(id)a0 name:(id)a1;
- (void)feedbackForContact:(id)a0 action:(long long)a1;
- (BOOL)canProduceEntriesOfType:(long long)a0;
- (void)feedbackForEntry:(id)a0 action:(long long)a1;
- (id)initWithDelegate:(id)a0 name:(id)a1;
- (void)feedbackForMapItem:(id)a0 action:(long long)a1;
- (BOOL)addChildSource:(id)a0;
- (BOOL)attachSource:(id)a0;
- (void)stop;
- (unsigned long long)addOrUpdateSuggestionEntries:(id)a0 source:(id)a1;
- (BOOL)detachSource:(id)a0;
- (void)start;
- (id)sources;
- (void)test_sync;
- (id)test_dateUntilSuppressedEntry:(id)a0;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)test_awaitQueue;
- (BOOL)removeChildSource:(id)a0;
- (void)test_resetSuppressions;
- (void)dealloc;
- (double)test_suppressionDurationForBehavior:(long long)a0 type:(long long)a1;

@end
