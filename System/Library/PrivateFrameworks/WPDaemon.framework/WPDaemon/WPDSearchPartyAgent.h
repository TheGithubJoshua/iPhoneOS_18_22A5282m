@class WPDPendingCompletions, NSArray, NSData, SPBeaconManager, NSObject, NSDate;
@protocol OS_dispatch_queue;

@interface WPDSearchPartyAgent : NSObject

@property (retain) NSData *beaconKey;
@property (readonly, weak) NSObject<OS_dispatch_queue> *queue;
@property BOOL disableScans;
@property BOOL isTestMode;
@property BOOL spBeaconState;
@property unsigned char spBeaconStatus;
@property (readonly) NSData *spBeaconReserved;
@property BOOL testBeaconState;
@property unsigned char testBeaconStatus;
@property (retain) NSData *testBeaconReserved;
@property (retain) SPBeaconManager *beaconManager;
@property (copy) id /* block */ beaconChange;
@property (retain) NSArray *spBeaconKeys;
@property (retain) NSDate *spBeaconKeysUpdated;
@property (copy) id /* block */ beaconStateChangedBlock;
@property (copy) id /* block */ beaconKeysChangedBlock;
@property (copy) id /* block */ beaconStatusChangedBlock;
@property (copy) id /* block */ nearbyTokensChangedBlock;
@property (copy) id /* block */ tokensChange;
@property (retain) NSArray *spNearbyTokens;
@property (retain) NSDate *spNearbyTokensUpdated;
@property (retain) NSArray *testNearbyTokens;
@property (retain) NSArray *testBeaconKeys;
@property (retain) NSDate *testNearbyTokensUpdated;
@property (retain) NSDate *testBeaconKeysUpdated;
@property (readonly) NSArray *beaconKeys;
@property (readonly) NSDate *nearbyTokensUpdated;
@property (readonly) NSDate *beaconKeysUpdated;
@property BOOL continueAdvOnFail;
@property (retain) WPDPendingCompletions *pendingKeyCompletions;
@property (retain) WPDPendingCompletions *pendingTokenCompletions;
@property (readonly) BOOL beaconState;
@property (readonly) unsigned char beaconStatus;
@property (readonly) NSData *beaconReserved;
@property (readonly) NSArray *nearbyTokens;

+ (id)spBeaconKeyFromTestKey:(id)a0;

- (void)generateStateDump;
- (void)updateTestBeaconKeys:(id)a0;
- (void)startTest;
- (void)updateTestBeaconState:(id)a0;
- (void)completedTokenRequestID:(unsigned long long)a0 success:(BOOL)a1;
- (void)rollKeys_async_completion:(id /* block */)a0;
- (void)updateTestBeaconStatus:(id)a0;
- (void)rollTokens_async_completion:(id /* block */)a0;
- (void)rollTokensWithRequestID:(unsigned long long)a0;
- (void)updateTestNearOwnerTokens:(id)a0;
- (void)completedKeyRequestID:(unsigned long long)a0 success:(BOOL)a1;
- (void).cxx_destruct;
- (void)stopTest;
- (void)initSPObjects;
- (void)rollKeys_async;
- (void)rollTokens_async;
- (void)dealloc;
- (id)initWithQueue:(id)a0 beaconChange:(id /* block */)a1 tokensChange:(id /* block */)a2;
- (void)rollKeysWithRequestID:(unsigned long long)a0;
- (void)updateTestBeaconExtended:(id)a0;

@end
