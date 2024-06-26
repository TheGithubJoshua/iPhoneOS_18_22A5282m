@class WPAdvertisingRequestsQueue, NSString, WPDAdvertisingData, NSMutableDictionary, CBPeripheralManager, NSMutableSet, NSMutableIndexSet, NSIndexSet;

@interface WPDAdvertisingManager : WPDManager <CBPeripheralManagerDelegate>

@property (retain) WPAdvertisingRequestsQueue *advertisingRequests;
@property (retain) NSMutableDictionary *clientAdvertisingRequests;
@property (retain) NSMutableIndexSet *currentAdvertisers;
@property (retain) NSMutableSet *clientsToNotifyOnAddressChange;
@property (retain) NSMutableDictionary *publishedServices;
@property (retain, nonatomic) CBPeripheralManager *connectablePeripheralManager;
@property (retain, nonatomic) CBPeripheralManager *nonConnectablePeripheralManager;
@property (retain, nonatomic) WPDAdvertisingData *currentConnectableAdvertisingData;
@property (retain, nonatomic) WPDAdvertisingData *currentNonConnectableAdvertisingData;
@property BOOL allowCompoundAdvertisements;
@property (retain) NSMutableDictionary *preallocatedServices;
@property (readonly, nonatomic) BOOL isRanging;
@property (readonly, nonatomic) NSIndexSet *rangingTypes;
@property (retain) NSMutableSet *rangingClients;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)peripheralManager:(id)a0 didStopAdvertisingWithError:(id)a1;
- (void)peripheralManager:(id)a0 didReceiveWriteRequests:(id)a1;
- (void)addCharacteristic:(id)a0 forService:(id)a1 forClient:(id)a2;
- (id)getManager;
- (id)getClientUUIDsForCharacteristic:(id)a0;
- (void)resetAdvertisingManager;
- (id)getCharacteristicForClient:(id)a0;
- (id)removeAdvertisingRequest:(id)a0 forClient:(id)a1;
- (void)peripheralManagerIsReadyToUpdateSubscribers:(id)a0;
- (BOOL)heySiriAdvertActiveAllDevices;
- (void)peripheralManager:(id)a0 didAddService:(id)a1 error:(id)a2;
- (id)requestFromAdvertisingDataConnectable:(BOOL)a0 AddressChangeNotificationNeeded:(BOOL)a1;
- (void)addCharacteristic:(id)a0 Properties:(unsigned long long)a1 Permissions:(unsigned long long)a2 Service:(id)a3 Name:(id)a4;
- (void)peripheralManager:(id)a0 central:(id)a1 didUnsubscribeFromCharacteristic:(id)a2;
- (void)removeAdvertisingRequest:(id)a0 forDaemon:(id)a1;
- (void)peripheralManagerDidStartAdvertising:(id)a0 error:(id)a1;
- (id)clientForAdvRequest:(id)a0;
- (void)addAdvertisingRequest:(id)a0 forDaemon:(id)a1;
- (void)preallocateServices;
- (void)peripheralManager:(id)a0 central:(id)a1 didSubscribeToCharacteristic:(id)a2;
- (void)enableRanging:(BOOL)a0 forClient:(id)a1;
- (id)getCurrentAdvertisers;
- (void).cxx_destruct;
- (id)generateStateDumpStrings;
- (id)removeAdvertisingRequestsForClient:(id)a0;
- (BOOL)platformSupportsMultipleAdvertising;
- (id)addAdvertisingRequest:(id)a0 forClient:(id)a1;
- (void)peripheralManager:(id)a0 didReceiveReadRequest:(id)a1;
- (void)removeServiceForClient:(id)a0;
- (BOOL)heySiriAdvertActive:(BOOL)a0;
- (id)removeAdvertisingRequest:(id)a0 forClient:(id)a1 shouldUpdate:(BOOL)a2;
- (BOOL)isAdvertiserTestMode;
- (id)addXPCDelayTiming:(id)a0 IsMetricOnly:(BOOL)a1 UseCase:(unsigned long long)a2;
- (void)informClientsAdvertisingPending:(id)a0;
- (id)initWithServer:(id)a0;
- (id)NSUUIDfromCBUUID:(id)a0;
- (void)update;
- (void)updateAdvertiser;
- (id)advertisingRules;

@end
