@class NSDate, NSString, MapsSuggestionsTracker, GEOAutomobileOptions, NSArray, NSMutableDictionary, MapsSuggestionsCompositeSource, MapsSuggestionsCanKicker, NSObject, MapsSuggestionsObservers, CLLocation;
@protocol MapsSuggestionsStrategy, MapsSuggestionsLocationUpdater, OS_dispatch_queue;

@interface MapsSuggestionsManager : NSObject <MapsSuggestionsObject, MapsSuggestionsSourceDelegate, MapsSuggestionsLocationUpdaterDelegate> {
    NSObject<OS_dispatch_queue> *_gatheringQueue;
    NSObject<OS_dispatch_queue> *_storageQueue;
    NSMutableDictionary *_additionalFiltersPerSink;
    MapsSuggestionsTracker *_tracker;
    NSDate *_etaValidUntil;
    MapsSuggestionsObservers *_sinks;
    MapsSuggestionsCompositeSource *_compositeSource;
    NSMutableDictionary *_storage;
    NSArray *_latestResults;
    int _defaultTansportType;
    MapsSuggestionsCanKicker *_expiredEntryInvalidator;
    MapsSuggestionsCanKicker *_wipeStaleETAWiper;
    MapsSuggestionsCanKicker *_deferredSourcesUpdater;
    CLLocation *_oldLocation;
    BOOL _sourcesRunning;
}

@property (retain, nonatomic) id<MapsSuggestionsStrategy> strategy;
@property (nonatomic) int mapType;
@property (retain, nonatomic) GEOAutomobileOptions *automobileOptions;
@property (weak, nonatomic) id<MapsSuggestionsLocationUpdater> locationUpdater;
@property (readonly, nonatomic) NSString *uniqueName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)tracker;
- (char)removeEntry:(id)a0 behavior:(long long)a1 handler:(id /* block */)a2;
- (id)sinks;
- (void)trackerRefreshedETAsUntil:(id)a0;
- (void)feedbackForContact:(id)a0 action:(long long)a1;
- (void)feedbackForEntry:(id)a0 action:(long long)a1;
- (void)feedbackForMapItem:(id)a0 action:(long long)a1;
- (id)initWithStrategy:(id)a0 locationUpdater:(id)a1 network:(id)a2 flightUpdater:(id)a3 ETARequirements:(id)a4 virtualGarage:(id)a5;
- (void)attachSource:(id)a0;
- (id)storage;
- (char)oneShotTopSuggestionsForSink:(id)a0 count:(unsigned long long)a1 transportType:(int)a2 callback:(id /* block */)a3 onQueue:(id)a4;
- (char)loadStorageFromFile:(id)a0 callback:(id /* block */)a1 callbackQueue:(id)a2;
- (char)oneShotTopSuggestionsForSink:(id)a0 transportType:(int)a1 count:(unsigned long long)a2 queue:(id)a3 handler:(id /* block */)a4;
- (unsigned long long)addOrUpdateSuggestionEntries:(id)a0 source:(id)a1;
- (char)topSuggestionsForSink:(id)a0 count:(unsigned long long)a1 transportType:(int)a2 callback:(id /* block */)a3 onQueue:(id)a4;
- (void)detachSource:(id)a0;
- (void)awaitGatheringQueue;
- (id)sources;
- (BOOL)loadStorageFromFile:(id)a0;
- (void)attachSink:(id)a0;
- (char)saveStorageToFile:(id)a0 callback:(id /* block */)a1;
- (void)addAdditionalFilter:(id)a0 forSink:(id)a1;
- (void)removeEntry:(id)a0;
- (void)awaitStorageQueue;
- (void)removeAdditionalFilter:(id)a0 forSink:(id)a1;
- (void).cxx_destruct;
- (void)didUpdateLocation:(id)a0;
- (char)topSuggestionsForSink:(id)a0 count:(unsigned long long)a1 queue:(id)a2 handler:(id /* block */)a3;
- (id)additionalFiltersPerSink;
- (char)topSuggestionsForSink:(id)a0 transportType:(int)a1 count:(unsigned long long)a2 queue:(id)a3 handler:(id /* block */)a4;
- (id)storageQueue;
- (id)storageForSource:(id)a0;
- (void)detachSink:(id)a0;
- (void)dealloc;
- (char)oneShotTopSuggestionsForSink:(id)a0 count:(unsigned long long)a1 queue:(id)a2 handler:(id /* block */)a3;
- (void)hintRefreshOfType:(long long)a0;
- (void)didLoseLocationPermission;

@end
