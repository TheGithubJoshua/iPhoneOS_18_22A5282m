@class NSUUID, NSTimer, NSXPCConnection, NSString, TUCall;
@protocol SOSCoreAnalyticsReporting;

@interface SOSStatusManager : NSObject <SOSStatusManagerServerProtocol, NSXPCListenerDelegate, SOSPairedDeviceStatusObserver>

@property (retain, nonatomic) NSXPCConnection *clientConnection;
@property (nonatomic) BOOL inSOSFlow;
@property (nonatomic) BOOL inSOSFlowOnCurrentDevice;
@property (retain, nonatomic) TUCall *activeSOSCall;
@property (nonatomic) BOOL hasActiveSOSCall;
@property (retain, nonatomic) NSTimer *currentDeviceStatusClearTimer;
@property (retain, nonatomic) NSTimer *pairedDeviceStatusClearTimer;
@property (nonatomic) long long mostRecentTriggerSource;
@property (retain, nonatomic) id<SOSCoreAnalyticsReporting> coreAnalyticsReporter;
@property (retain, nonatomic) NSUUID *handoffTriggerUUID;
@property (nonatomic) long long handoffTrigger;
@property (retain, nonatomic) NSTimer *handoffFallbackTimer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void)flowEndedOnCurrentDevice;
- (void)startCurrentDeviceClearStatusTimer;
- (void)updatePairedDeviceSOSStatus:(id)a0;
- (void)sosTriggeredWithUUID:(id)a0 trigger:(long long)a1 source:(long long)a2;
- (void)flowEndedOnBothDevices;
- (void)cancelCurrentDeviceClearStatusTimer;
- (void)flowStartedOnCurrentDevice;
- (void)cancelPairedDeviceClearStatusTimer;
- (void)checkHandoffFallback;
- (void)handleLostStatusReporterConnection;
- (void)pairedDeviceSOSStatusDidUpdate:(id)a0 progression:(long long)a1 shouldHandleThirdParty:(BOOL)a2;
- (void)startHandoffFallbackTimer;
- (void)sosTriggerDisabledWithUUID:(id)a0 trigger:(long long)a1;
- (void)handleSOSCallStatusChange:(id)a0;
- (void)sosTriggeredOnPairedDevice:(id)a0;
- (void)triggerHandoffFallback;
- (void)endAudioSession;
- (void).cxx_destruct;
- (void)checkSOSStatusOnLaunch;
- (void)flowEnded;
- (void)flowStarted;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)updateSOSFlowState:(long long)a0;
- (void)_reportSOSEvent:(id)a0 callDuration:(long long)a1;
- (void)sosTriggerPushedToPairedDeviceWithUUID:(id)a0 trigger:(long long)a1;
- (void)flowStartedOnEitherDevice;
- (void)clearHandoffFallbackState;
- (void)cancelHandoffFallbackTimer;
- (void)startAudioSession;
- (void)startPairedDeviceClearStatusTimer;

@end
