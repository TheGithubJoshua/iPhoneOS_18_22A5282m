@class NSXPCConnection, NSDate, NSArray, NSString, TUCallCenter, TUCallServicesClientCapabilities, TURouteController, TUFeatureFlags, NSObject, NSMapTable, TUCallNotificationManager;
@protocol OS_dispatch_queue, TUCallServicesXPCServer, TUCallContainerPrivate;

@interface TUCallServicesInterface : NSObject <TUCallServicesXPCClient, TUCallServicesProxyCallActions, TUCallServicesClientCapabilitiesActions, TUAudioDeviceControllerActions, TURouteControllerActions, TUCallFilterControllerActions>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) void *queueContext;
@property (readonly, nonatomic) int connectionRequestNotificationToken;
@property (retain, nonatomic) NSXPCConnection *xpcConnection;
@property (nonatomic) BOOL hasRequestedInitialState;
@property (nonatomic) BOOL hasReceivedInitialState;
@property (nonatomic) BOOL shouldHandleServerDisconnect;
@property (copy, nonatomic) NSArray *currentCalls;
@property (readonly, nonatomic) NSMapTable *uniqueProxyIdentifierToProxyCall;
@property (readonly, nonatomic) TUCallNotificationManager *callNotificationManager;
@property (readonly, nonatomic) TUFeatureFlags *featureFlags;
@property (copy, nonatomic) NSArray *localProxyCalls;
@property (readonly, nonatomic, getter=isServerLocal) BOOL serverLocal;
@property (nonatomic) BOOL hasServerLaunched;
@property (weak, nonatomic) TUCallCenter *callCenter;
@property (readonly, nonatomic) id<TUCallServicesXPCServer> asynchronousServer;
@property (weak, nonatomic) id<TUCallServicesXPCServer> server;
@property (readonly, nonatomic) TUCallServicesClientCapabilities *callServicesClientCapabilities;
@property (retain, nonatomic) TURouteController *localRouteController;
@property (retain, nonatomic) TURouteController *pairedHostDeviceRouteController;
@property (readonly, nonatomic) id<TUCallContainerPrivate> callContainer;
@property (nonatomic) NSDate *lastDaemonConnectTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)asynchronousServerWithErrorHandler:(id /* block */)a0;
- (oneway void)reportLocalPreviewStoppedForCallWithUniqueProxyIdentifier:(id)a0;
- (void)handleServerDisconnectIfNecessary;
- (id)init;
- (oneway void)answerCallWithRequest:(id)a0;
- (oneway void)groupCallWithUniqueProxyIdentifier:(id)a0 withOtherCallWithUniqueProxyIdentifier:(id)a1;
- (void)performBlockOnQueue:(id /* block */)a0;
- (void)requestCurrentStateWithCompletionHandler:(id /* block */)a0;
- (oneway void)pullRelayingCallsFromClientAndDisconnectCallsWithUPI:(id)a0;
- (oneway void)handleNotificationName:(id)a0 forCallWithUniqueProxyIdentifier:(id)a1 userInfo:(id)a2;
- (oneway void)unholdCallWithUniqueProxyIdentifier:(id)a0;
- (void)registerCall:(id)a0;
- (oneway void)handleMeterLevelChangedTo:(float)a0 inDirection:(int)a1 forCallsWithUniqueProxyIdentifiers:(id)a2;
- (id)_proxyCallWithUniqueProxyIdentifier:(id)a0;
- (oneway void)setScreenShareAttributesForCallWithUniqueProxyIdentifier:(id)a0 attributes:(id)a1;
- (void)_updateCurrentCalls:(id)a0 withNotificationsUsingUpdatedCalls:(id)a1;
- (oneway void)enteredForegroundForCallWithUniqueProxyIdentifier:(id)a0;
- (oneway void)shouldAllowRingingCallStatusIndicator:(BOOL)a0;
- (id)synchronousServerWithErrorHandler:(id /* block */)a0;
- (oneway void)sendUserScoreToRTCReporting:(id)a0 withScore:(int)a1;
- (oneway void)pullCallFromClientUsingHandoffActivityUserInfo:(id)a0 completion:(id /* block */)a1;
- (void)handleServerDisconnect;
- (oneway void)sendHardPauseDigitsForCallWithUniqueProxyIdentifier:(id)a0;
- (unsigned long long)filterStatusForAddresses:(id)a0 forBundleIdentifier:(id)a1;
- (id)joinConversationWithRequest:(id)a0;
- (oneway void)resetCallProvisionalStates;
- (oneway void)setBluetoothAudioFormatForCallWithUniqueProxyIdentifier:(id)a0 bluetoothAudioFormat:(long long)a1;
- (oneway void)pullPersistedChannel:(id /* block */)a0;
- (oneway void)enteredBackgroundForAllCalls;
- (oneway void)ungroupCallWithUniqueProxyIdentifier:(id)a0;
- (oneway void)setDownlinkMuted:(BOOL)a0 forCallWithUniqueProxyIdentifier:(id)a1;
- (oneway void)playDTMFToneForCallWithUniqueProxyIdentifier:(id)a0 key:(unsigned char)a1;
- (oneway void)setUplinkMuted:(BOOL)a0 forCallWithUniqueProxyIdentifier:(id)a1;
- (void)requestCurrentStateWithCompletionHandler:(id /* block */)a0 handleInitialState:(id /* block */)a1;
- (void)fetchCurrentCalls;
- (oneway void)pushRelayingCallsToHostWithSourceIdentifier:(id)a0;
- (oneway void)setIsSendingVideo:(BOOL)a0 forCallWithUniqueProxyIdentifier:(id)a1;
- (oneway void)handleLocalRoutesByUniqueIdentifierUpdated:(id)a0;
- (BOOL)willRestrictAddresses:(id)a0 forBundleIdentifier:(id)a1;
- (oneway void)requestVideoUpgradeForCallWithUniqueProxyIdentifier:(id)a0;
- (oneway void)willEnterBackgroundForAllCalls;
- (oneway void)_handleCurrentCallsChanged:(id)a0 callsDisconnected:(id)a1;
- (void).cxx_destruct;
- (void)_ignorePendingServerDisconnectionHandlers;
- (void)_registerCall:(id)a0;
- (void)performBlockOnQueue:(id /* block */)a0 andWait:(BOOL)a1;
- (void)handleServerReconnect;
- (oneway void)setCurrentAudioInputDeviceToDeviceWithUID:(id)a0;
- (id)dialWithRequest:(id)a0 completion:(id /* block */)a1;
- (void)startTransmissionForBargeCall:(id)a0 sourceIsHandsfreeAccessory:(BOOL)a1;
- (oneway void)setSharingScreen:(BOOL)a0 attributes:(id)a1 forCallWithUniqueProxyIdentifier:(id)a2;
- (oneway void)disconnectCurrentCallAndActivateHeld;
- (oneway void)shouldSuppressInCallStatusBar:(BOOL)a0;
- (void)_tearDownXPCConnection;
- (oneway void)setSharingScreen:(BOOL)a0 forCallWithUniqueProxyIdentifier:(id)a1;
- (void)waitForInitialStateIfNecessary;
- (oneway void)setTTYType:(int)a0 forCallWithUniqueProxyIdentifier:(id)a1;
- (oneway void)holdCallWithUniqueProxyIdentifier:(id)a0;
- (oneway void)setClientCapabilities:(id)a0;
- (oneway void)handleFrequencyChangedTo:(id)a0 inDirection:(int)a1 forCallsWithUniqueProxyIdentifiers:(id)a2;
- (void)_updateCurrentCalls:(id)a0;
- (id)initWithQueue:(id)a0 callCenter:(id)a1;
- (oneway void)handleCurrentCallsChanged:(id)a0 callDisconnected:(id)a1;
- (id)policyForAddresses:(id)a0 forBundleIdentifier:(id)a1;
- (oneway void)disconnectAllCalls;
- (oneway void)disconnectCallWithUniqueProxyIdentifier:(id)a0;
- (void)dealloc;
- (oneway void)activateInCallUIWithActivityContinuationIdentifier:(id)a0;
- (oneway void)swapCalls;
- (id)_proxyCallWithCall:(id)a0;
- (void)pickRouteWithUniqueIdentifier:(id)a0 shouldWaitUntilAvailable:(BOOL)a1 forRouteController:(id)a2;
- (oneway void)pullHostedCallsFromPairedHostDevice;
- (oneway void)setRemoteVideoPresentationSizeForCallWithUniqueProxyIdentifier:(id)a0 size:(struct CGSize { double x0; double x1; })a1;
- (oneway void)updateCallWithProxy:(id)a0;
- (void)_setUpXPCConnection;
- (void)_updateCurrentCallsWithoutNotifications:(id)a0;
- (oneway void)handlePairedHostDeviceRoutesByUniqueIdentifierUpdated:(id)a0;
- (BOOL)shouldRestrictAddresses:(id)a0 forBundleIdentifier:(id)a1 performSynchronously:(BOOL)a2;
- (oneway void)sendMMIOrUSSDCodeWithRequest:(id)a0;
- (void)stopTransmissionForBargeCall:(id)a0 sourceIsHandsfreeAccessory:(BOOL)a1;
- (oneway void)setCurrentAudioOutputDeviceToDeviceWithUID:(id)a0;
- (oneway void)setMixesVoiceWithMedia:(BOOL)a0 forCallWithUniqueProxyIdentifier:(id)a1;
- (BOOL)isUnknownAddress:(id)a0 normalizedAddress:(id)a1 forBundleIdentifier:(id)a2;
- (void)tearDownXPCConnection;
- (oneway void)setRemoteVideoPresentationStateForCallWithUniqueProxyIdentifier:(id)a0 presentationState:(int)a1;
- (BOOL)containsRestrictedHandle:(id)a0 forBundleIdentifier:(id)a1 performSynchronously:(BOOL)a2;
- (id)routesByUniqueIdentifierForRouteController:(id)a0;
- (oneway void)pushHostedCallsToDestination:(id)a0;

@end
