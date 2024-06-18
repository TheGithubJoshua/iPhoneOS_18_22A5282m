@class WPDZoneManager, NSMutableDictionary, WPDPersistence, NSMapTable, NSObject, WPDObjectDiscoveryManager, WPDState, NSString, WPDStatsManager, WPDScanManager, WPDPipeManager, NSMutableSet, WPDAdvertisingManager, NSArray, NSXPCListener, WPDClient;
@protocol OS_dispatch_queue;

@interface WPDaemonServer : NSObject <NSXPCListenerDelegate>

@property (retain, nonatomic) WPDState *wpdState;
@property (nonatomic) long long cbState;
@property unsigned char coreBluetoothState;
@property (retain) NSObject<OS_dispatch_queue> *serverQueue;
@property (retain) WPDScanManager *scanManager;
@property (retain) WPDAdvertisingManager *advertisingManager;
@property (retain) WPDZoneManager *zoneManager;
@property (retain) WPDPipeManager *pipeManager;
@property (retain) WPDObjectDiscoveryManager *objectDiscoveryManager;
@property (readonly) WPDClient *spObjectDiscoveryClient;
@property (retain) WPDPersistence *persistence;
@property (retain, nonatomic) NSArray *managers;
@property (retain, nonatomic) WPDStatsManager *statsManager;
@property (retain) NSMutableDictionary *clients;
@property (retain) NSMutableSet *testClients;
@property (retain) NSMutableSet *privilegedClients;
@property (retain) NSMapTable *clientsWithMach;
@property (retain) NSObject<OS_dispatch_queue> *queue;
@property (retain) NSXPCListener *listener;
@property (nonatomic) int lockStatusChangedToken;
@property (nonatomic) int screenStateToken;
@property (nonatomic) int firstUnlockStatusChangedToken;
@property BOOL screenOff;
@property BOOL systemLocked;
@property BOOL isTesting;
@property (nonatomic) int gazeChangeToken;
@property BOOL onHead;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isAppleTV;
+ (BOOL)isInternalBuild;
+ (BOOL)isHomePod;
+ (void)initialize;
+ (BOOL)supportsRanging;

- (void)enableRanging:(BOOL)a0;
- (void)generateStateDump;
- (void)startListening;
- (id)init;
- (id)getAllClients;
- (void)initManagers;
- (BOOL)isRangingEnabled;
- (BOOL)isClientTestMode:(id)a0;
- (void)addClient:(id)a0;
- (void)cbManagerDidUpdateState:(id)a0;
- (void)dumpDaemonStateAsync;
- (id)clientForMachName:(id)a0;
- (void)removeClient:(id)a0;
- (void)notifyManagersOfStateChange;
- (void)screenStateUpdate;
- (void)registerClient:(id)a0 withMachName:(id)a1 withCompletion:(id /* block */)a2;
- (void).cxx_destruct;
- (void)initClients;
- (void)enableTestMode:(BOOL)a0;
- (void)dumpDaemonState;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)notifyClientsOfStateChange;
- (void)SetupSignalHandler;
- (void)updateState;
- (void)dealloc;
- (id)getClientForUUID:(id)a0;
- (void)registerForSpringboardNotifications;
- (BOOL)scanWithRetainDuplicates;
- (void)disableScanningForClient:(id)a0;
- (void)enableTestMode;
- (void)lockStateUpdate;

@end
