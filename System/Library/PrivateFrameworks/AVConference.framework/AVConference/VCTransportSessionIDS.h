@class NSString, VCDatagramChannelIDS;

@interface VCTransportSessionIDS : VCTransportSession {
    VCDatagramChannelIDS *_datagramChannel;
    BOOL _requireEncryptionInfo;
    int _dataPath;
    BOOL _useIDSLinkSuggestionFeatureFlag;
    unsigned int _linkPreferSuggestionFromDefaults;
}

@property (nonatomic) int socket;
@property (copy, nonatomic) NSString *destination;

- (void)stop;
- (void)start;
- (void)dealloc;
- (void)startMKMRecoveryForParticipantIDs:(id)a0;
- (int)onStart;
- (void)deregisterBasebandNotifications;
- (id)datagramChannel;
- (void)handleLinkDisconnectedWithInfo:(id)a0;
- (void)cleanupDatagramChannel;
- (id)connectionSetupPiggybackBlob;
- (void)dispatchedProcessDatagramChannelEventInfo:(id)a0;
- (int)flushBasebandQueueForConnection:(id)a0 payloadInfoList:(id)a1;
- (BOOL)getConnectionSetupData:(id *)a0 withOptions:(id)a1 error:(id *)a2;
- (int)getSignalStrengthBars:(int *)a0 displayBars:(int *)a1 maxDisplayBars:(int *)a2;
- (void)handleCellularMTUChanged:(id)a0;
- (void)handleCellularSoMaskChanged:(id)a0;
- (void)handleChannelInfoReport:(id)a0;
- (void)handleDefaultLinkUpdatedWithInfo:(id)a0;
- (void)handleIDSEncryptionInfoEvent:(id)a0;
- (void)handleIDSMembershipChangeInfoEvent:(id)a0;
- (void)handleLinkConnectedWithInfo:(id)a0;
- (void)handleLinkConstrainsChanged:(id)a0;
- (void)handleLinkPreferSuggestion:(id)a0;
- (void)handlePreConnectionDataReceived:(id)a0;
- (void)handleProbingResponse:(id)a0;
- (void)handleRATChanged:(id)a0;
- (void)handleReportingBlob:(id)a0;
- (void)handleSessionInfoResponse:(id)a0;
- (id)initWithCallID:(unsigned int)a0 reportingAgent:(id)a1;
- (id)initWithCallID:(unsigned int)a0 requireEncryptionInfo:(BOOL)a1 reportingAgent:(id)a2 notificationQueue:(id)a3;
- (id)initWithCallID:(unsigned int)a0 requireEncryptionInfo:(BOOL)a1 reportingAgent:(id)a2 notificationQueue:(id)a3 dataPath:(int)a4;
- (void)onStop;
- (void)processDatagramChannelEventInfo:(id)a0;
- (int)registerBasebandNotificationsForConnection:(id)a0;
- (unsigned int)remoteDeviceVersionIDS;
- (void)setConnectionSetupPiggybackBlob:(id)a0;
- (void)setConnectionSetupTime;
- (void)setPiggybackBlobPreference;
- (void)setQuickRelayServerProvider:(int)a0;
- (int)updateQualityIndicator:(int)a0 isIPv6:(BOOL)a1;

@end
