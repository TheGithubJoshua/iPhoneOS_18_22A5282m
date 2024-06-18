@class NSUUID, NSString, NSArray, NSMutableDictionary, NSDictionary, CBPeripheralManager, CBCentralManager, NSObject, WPAdvertisingRequest, NSMutableSet;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface WPDObjectDiscoveryManager : WPDManager <CBPeripheralManagerDelegate, CBCentralManagerDelegate, WPDObjectDiscoveryAdvertiser, WPDObjectDiscoveryScanner>

@property (readonly, weak) NSObject<OS_dispatch_queue> *serverQueue;
@property (retain) CBPeripheralManager *peripheralManager;
@property BOOL advertising;
@property (retain) WPAdvertisingRequest *advertRequest;
@property (weak) NSUUID *advertClientUUID;
@property (retain) NSDictionary *advertOptions;
@property unsigned long long advertHash;
@property (readonly, nonatomic) BOOL advAllowlisted;
@property BOOL scanning;
@property (retain) CBCentralManager *centralManager;
@property (retain) NSMutableDictionary *scanRequests;
@property (retain) NSMutableSet *currentScanners;
@property (retain) NSDictionary *scanOptions;
@property (retain) NSObject<OS_dispatch_source> *scanStopTimer;
@property int advBuffersToRead;
@property (retain) NSArray *nearbyTokensRequest;
@property (retain) NSArray *matchActionRules;
@property (readonly, nonatomic) BOOL scanAllowlisted;
@property BOOL scanningDisabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)centralManager:(id)a0 didDiscoverPeripheral:(id)a1 advertisementData:(id)a2 RSSI:(id)a3;
- (void)resetAdvertiser;
- (void)peripheralManager:(id)a0 didStopAdvertisingWithError:(id)a1;
- (void)forceReadADVBuffer:(id)a0;
- (void)centralManager:(id)a0 didFailToScanWithError:(id)a1;
- (void)cleanup;
- (void)updateNearbyTokens:(id)a0;
- (void)updateScanner;
- (void)updateReports:(id)a0 Peripheral:(id)a1 AdvertisementData:(id)a2 RSSI:(id)a3;
- (void)cancelScanStopTimer;
- (BOOL)changedScanOptions:(id)a0 Clients:(id)a1;
- (id)removeAdvertisingRequest:(id)a0 forClient:(id)a1;
- (void)addScanStopTimer;
- (BOOL)advertOptionsChanged:(id)a0;
- (void)updateClientsWithReports:(id)a0;
- (void)startAdvertiser;
- (void)removeScanRequestsForClient:(id)a0;
- (id)addScanRequest:(id)a0 forClient:(id)a1;
- (void)peripheralManagerDidStartAdvertising:(id)a0 error:(id)a1;
- (id)getScanRequestsForClient:(id)a0;
- (void).cxx_destruct;
- (id)generateStateDumpStrings;
- (void)updateReports:(id)a0 fromReport:(id)a1;
- (void)removeAdvertisingRequestsForClient:(id)a0;
- (void)activateADVBuffer;
- (BOOL)updateScanRules;
- (id)addAdvertisingRequest:(id)a0 forClient:(id)a1;
- (void)stopAdvertiser;
- (void)centralManager:(id)a0 didDiscoverMultiplePeripherals:(id)a1;
- (BOOL)updateAdvertisingOptionsWithError:(id *)a0;
- (id)initWithServer:(id)a0;
- (void)update;
- (void)deactivateADVBuffer;
- (id)updateAdvertiser;
- (id)rulesFromTokens:(id)a0;

@end
