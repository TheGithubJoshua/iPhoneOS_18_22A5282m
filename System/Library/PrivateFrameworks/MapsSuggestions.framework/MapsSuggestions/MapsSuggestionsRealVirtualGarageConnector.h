@class NSString;
@protocol MapsSuggestionsVirtualGarageConnectorDelegate;

@interface MapsSuggestionsRealVirtualGarageConnector : NSObject <VGVirtualGarageObserver, MapsSuggestionsVirtualGarageConnector>

@property (weak, nonatomic) id<MapsSuggestionsVirtualGarageConnectorDelegate> delegate;
@property (readonly, nonatomic) NSString *uniqueName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)stopObservingVG;
- (void)fetchStateOfChargeForVehicleWithIdentifier:(id)a0 handler:(id /* block */)a1;
- (void)virtualGarageDidUpdate:(id)a0;
- (void)fetchUnpairedVehiclesWithHandler:(id /* block */)a0;
- (void)openVGConnection;
- (void).cxx_destruct;
- (void)closeVGConnection;
- (void)virtualGarage:(id)a0 didUpdateUnpairedVehicles:(id)a1;
- (void)startObservingVG;

@end
