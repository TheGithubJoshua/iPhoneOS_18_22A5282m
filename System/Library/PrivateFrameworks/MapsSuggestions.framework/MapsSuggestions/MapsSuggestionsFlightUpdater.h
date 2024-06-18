@class NSString, NSObject;
@protocol MapsSuggestionsFlightRequester, MapsSuggestionsNetworkRequester, OS_dispatch_queue;

@interface MapsSuggestionsFlightUpdater : NSObject {
    id<MapsSuggestionsFlightRequester> _flightRequester;
    id<MapsSuggestionsNetworkRequester> _networkRequester;
    struct Queue { NSObject<OS_dispatch_queue> *_innerQueue; NSString *_name; } _queue;
}

- (id)initFromResourceDepot:(id)a0;
- (id)initWithFlightRequester:(id)a0 networkRequester:(id)a1;
- (id).cxx_construct;
- (void).cxx_destruct;
- (char)updateFlightsForEntry:(id)a0 handler:(id /* block */)a1;

@end
