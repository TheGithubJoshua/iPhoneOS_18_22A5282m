@class NSString, NSMutableDictionary, FMTokenBucket, FMQueueSynchronizer, FMXPCServiceDescription, NSObject, FMXPCSession;
@protocol OS_dispatch_queue, SPCBPeripheralManagementXPCProtocol;

@interface SPCBPeripheralManager : NSObject <SPCBPeripheralManagement>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) FMQueueSynchronizer *queueSynchronizer;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property (retain, nonatomic) FMTokenBucket *tokenBucket;
@property (retain, nonatomic) FMXPCServiceDescription *serviceDescription;
@property (retain, nonatomic) FMXPCSession *session;
@property (retain, nonatomic) id<SPCBPeripheralManagementXPCProtocol> proxy;
@property (retain, nonatomic) NSMutableDictionary *sessionMetadata;
@property (nonatomic) BOOL enableSystemWakes;
@property (nonatomic) BOOL forceUpdateCriteria;
@property (copy, nonatomic) id /* block */ peripheralsUpdatedCallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)remoteInterface;

- (double)timeIntervalToNextFireDateFromDate:(id)a0;
- (id)init;
- (void)successfulConnectionForPeripheral:(id)a0 leMAC:(id)a1 ltk:(id)a2 completion:(id /* block */)a3;
- (id)descriptionForVendorIdentifierList:(id)a0;
- (void)stopSessionForUserIdentifier:(id)a0 bundleId:(id)a1 completion:(id /* block */)a2;
- (void)handleDarwinNotificationNamed:(id)a0;
- (void)startSessionForUserIdentifier:(id)a0 bundleId:(id)a1 vendorIdentifierList:(id)a2 completion:(id /* block */)a3;
- (void).cxx_destruct;
- (void)invalidationHandler:(id)a0;
- (void)fetch;
- (void)interruptionHandler:(id)a0;
- (void)timerFiredForActivity:(id)a0;
- (void)enableSystemWakesForUpdate:(BOOL)a0 completion:(id /* block */)a1;
- (id)_enforceRateLimit;

@end
