@class NSString, NSObject, MapsSuggestionsVirtualGarage;
@protocol OS_dispatch_queue, MapsSuggestionsSourceDelegate;

@interface MapsSuggestionsVirtualGarageSource : MapsSuggestionsBaseSource <MapsSuggestionsVirtualGarageObserver, MapsSuggestionsSource> {
    MapsSuggestionsVirtualGarage *_virtualGarage;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly, nonatomic) NSString *uniqueName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<MapsSuggestionsSourceDelegate> delegate;

+ (BOOL)isEnabled;
+ (unsigned long long)disposition;

- (double)updateSuggestionEntriesWithHandler:(id /* block */)a0;
- (BOOL)removeEntry:(id)a0 behavior:(long long)a1 handler:(id /* block */)a2;
- (id)initFromResourceDepot:(id)a0 name:(id)a1;
- (BOOL)canProduceEntriesOfType:(long long)a0;
- (void)stop;
- (void)unpairedVehiclesChangedInVirtualGarage:(id)a0;
- (void)start;
- (void).cxx_destruct;
- (id)initWithVirtualGarage:(id)a0 delegate:(id)a1 name:(id)a2;

@end
