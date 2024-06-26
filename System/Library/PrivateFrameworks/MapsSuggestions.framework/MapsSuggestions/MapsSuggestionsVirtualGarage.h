@class NSString, MapsSuggestionsObservers, NSObject;
@protocol OS_dispatch_queue, MapsSuggestionsVirtualGarageConnector;

@interface MapsSuggestionsVirtualGarage : NSObject <MapsSuggestionsVirtualGarageConnectorDelegate> {
    id<MapsSuggestionsVirtualGarageConnector> _connector;
    MapsSuggestionsObservers *_observers;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _isConnectedToVG;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initFromResourceDepot:(id)a0;
- (void)unregisterObserver:(id)a0;
- (void)stateOfChargeForVehicleWithIdentifier:(id)a0 handler:(id /* block */)a1;
- (id)initWithConnector:(id)a0;
- (void)registerObserver:(id)a0;
- (void)virtualGarageDidUpdateUnpairedVehicles:(id)a0;
- (void).cxx_destruct;
- (BOOL)entriesForUnpairedVehiclesWithHandler:(id /* block */)a0;
- (void)closeConnection;
- (void)openConnection;

@end
