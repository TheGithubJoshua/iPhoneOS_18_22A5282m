@class NSUUID, NSObject;
@protocol OS_dispatch_queue;

@interface SiriCoreNetworkingAnalytics : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSUUID *_netId;
    NSUUID *_orchestratorRequestId;
    BOOL _isConnectionActive;
    BOOL _netIdAvailable;
    unsigned int _sequenceNumber;
}

+ (int)connectionMethodFromString:(id)a0;
+ (int)connectionModeFromString:(id)a0;
+ (int)connectionTypeFromString:(id)a0;
+ (id)debugNetworkInterfacesFromSiriCoreConnectionMetrics:(id)a0;
+ (id)debugSessionConnectionNetworkFromSiriCoreConnectionMetrics:(id)a0;
+ (id)endpointFromDictionary:(id)a0;
+ (int)endpointTypeFromNumber:(id)a0;
+ (id)endpointsFromArray:(id)a0;
+ (id)establishmentResolutionFromArray:(id)a0;
+ (id)handShakeProtocolFromArray:(id)a0;
+ (int)handshakeProtocolFromString:(id)a0;
+ (id)networkInterfacesFromDictionary:(id)a0;
+ (id)pathInterfacesFromArray:(id)a0;
+ (int)pathStatusFromNumber:(id)a0;
+ (int)pathTypeFromNumber:(id)a0;
+ (int)phyModeFromString:(id)a0;
+ (id)pingInfoFromSiriCoreConnectionMetrics:(id)a0;
+ (int)providerFromString:(id)a0;
+ (id)proxyConfigurationFromDictionary:(id)a0;
+ (int)qualityFromString:(id)a0;
+ (id)sessionConnectionFailedError:(id)a0 connectionMode:(id)a1 sessionType:(id)a2 sessionState:(id)a3 dormant:(BOOL)a4 analysisInfo:(id)a5;
+ (id)sessionConnectionNetworkFromSiriCoreConnectionMetrics:(id)a0;
+ (id)sessionConnectionQualityFromSiriCoreConnectionMetrics:(id)a0;
+ (int)sessionStateFromString:(id)a0;
+ (int)sessionTypeFromString:(id)a0;
+ (id)sharedSiriCoreNetworkingAnalytics;
+ (int)snapshotStateFromStringEvent:(id)a0;
+ (int)tlsFromString:(id)a0;

- (id)init;
- (id)_init;
- (void).cxx_destruct;
- (void)reset;
- (void)setNetId:(id)a0;
- (id)_createRequestLinkInfoFromUUID:(id)a0 component:(int)a1;
- (id)_createSchemaClientEventFromUUID:(id)a0;
- (BOOL)emitLogDebug;
- (unsigned int)getSequenceNumber;
- (void)increaseSequenceNumber;
- (BOOL)isNetIdAvailable;
- (void)logDebugNetworkConnectionStatePreparationSnapshotCaptured:(id)a0;
- (void)logDebugNetworkConnectionStateReadySnapshotCaptured:(id)a0;
- (void)logDebugSessionConnectionSnapshotCaptured:(id)a0;
- (void)logNetworkConnectionStatePreparationSnapshotCaptured:(id)a0;
- (void)logNetworkConnectionStateReadySnapshotCaptured:(id)a0;
- (void)logPeerConnectionFailed:(id)a0;
- (void)logRequestLinkBetweenOrchestratorAndNetworkComponent;
- (void)logSessionConnectionFailed:(id)a0;
- (void)logSessionConnectionHttpHeaderCreated:(id)a0;
- (void)logSessionConnectionSnapshotCaptured:(id)a0;
- (id)orchestratorRequestId;
- (void)resetNetId;
- (void)resetSequenceNumber;
- (void)setIsConnectionActive:(BOOL)a0;
- (void)setNetIdAvailable:(BOOL)a0;
- (void)setOrchestratorRequestId:(id)a0;

@end