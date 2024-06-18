@class NSString, NSDictionary, RUILoader, NSObject, RUIStyle, NSMutableData, NSMutableURLRequest, NSURLConnection;
@protocol PBBridgeConnectionDelegate, OS_dispatch_source, OS_dispatch_queue, RUILoaderDelegate;

@interface PBBridgeCompanionController : PBBridgeIDSServiceDelegate <IDSServiceDelegate, NSURLConnectionDelegate, RUILoaderDelegate, PBBridgeCompanionProtocol> {
    struct __MKBAssertion { } *_unlockPairingAssertion;
    NSObject<OS_dispatch_queue> *_timeoutTrackerQueue;
}

@property (retain, nonatomic) NSURLConnection *activationConnection;
@property (retain, nonatomic) NSMutableURLRequest *activationRequest;
@property (retain, nonatomic) NSMutableData *activationData;
@property (retain, nonatomic) RUILoader *ruiLoader;
@property (copy, nonatomic) NSString *contentType;
@property (retain, nonatomic) NSDictionary *allHeaders;
@property (nonatomic) BOOL nonSilentActivation;
@property (nonatomic) BOOL connectionFailed;
@property (nonatomic) BOOL awaitingCustomResponse;
@property (nonatomic) int activationState;
@property (nonatomic) BOOL isEstablishingPairing;
@property (nonatomic) unsigned short granularActivationState;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *activationTimeout;
@property (retain, nonatomic) NSString *internalLastSendMessageID;
@property (nonatomic) BOOL allowAnyHTTPSCertificate;
@property (copy, nonatomic) NSString *remoteActivationUserAgent;
@property (copy, nonatomic) id /* block */ lockedOnAnimationCompletion;
@property (copy, nonatomic) id /* block */ initialSyncPrepCompletion;
@property (copy, nonatomic) id /* block */ languageLocaleCompletion;
@property (copy, nonatomic) id /* block */ prepareWatchForForcedSUCompletion;
@property (copy, nonatomic) id /* block */ remoteAccountForDeviceCompletion;
@property (copy, nonatomic) id /* block */ tinkerCredentialsIngestedCompletion;
@property (copy, nonatomic) id /* block */ tinkerWiFiCredentialsIngestedCompletion;
@property (copy, nonatomic) id /* block */ buysOnWatchCredentialsIngestedCompletion;
@property (nonatomic) BOOL sentSessionRequest;
@property (nonatomic) BOOL sentActivationRequest;
@property (copy, nonatomic) id /* block */ appViewListImageCompletion;
@property (nonatomic) BOOL passcodeSet;
@property (nonatomic) BOOL selectedPairedUnlock;
@property (nonatomic) int activationRetries;
@property (retain, nonatomic) RUIStyle *remoteUIStyle;
@property (weak, nonatomic) id<RUILoaderDelegate> ruiDelegate;
@property (weak, nonatomic) id<PBBridgeConnectionDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)displayNameWithFirstName:(id)a0 lastName:(id)a1;
+ (void)iCloudFirstName:(id *)a0 lastName:(id *)a1;
+ (void)meCardFirstName:(id *)a0 lastName:(id *)a1;

- (void)_cleanup;
- (id)serviceIdentifier;
- (id)init;
- (void)connection:(id)a0 didReceiveData:(id)a1;
- (void)connection:(id)a0 didFailWithError:(id)a1;
- (void)connectionDidFinishLoading:(id)a0;
- (void).cxx_destruct;
- (void)connection:(id)a0 didReceiveResponse:(id)a1;
- (id)connection:(id)a0 willSendRequest:(id)a1 redirectResponse:(id)a2;
- (void)loader:(id)a0 didFailWithError:(id)a1;
- (void)loader:(id)a0 didReceiveHTTPResponse:(id)a1;
- (void)loader:(id)a0 receivedObjectModel:(id)a1 actionSignal:(unsigned long long)a2;
- (void)objectModel:(id)a0 pressedButton:(id)a1 attributes:(id)a2;
- (id)viewControllerForAlertPresentation;
- (void)handleWarrantySentinelResponse:(id)a0;
- (double)offsetEventTime;
- (BOOL)shouldHandleMessageType:(unsigned short)a0 fromId:(id)a1;
- (void)tellGizmoToPopToControllerType:(unsigned long long)a0;
- (void)tellWatchToSetLauncherViewMode:(long long)a0;
- (id)customDescriptionOfMessageType:(unsigned short)a0;
- (void)handleAppViewListImageResponse:(id)a0;
- (void)returnedRemoteAccountForDevice:(id)a0;
- (void)tellWatchToChangeDeviceNameFor:(id)a0;
- (void)tinkerWatchIngestedCredentials:(id)a0;
- (id)_connectionWithRequest:(id)a0;
- (BOOL)_dumpActivationResquests;
- (void)_processActivationData;
- (BOOL)_sendRemoteCommandWithMessageID:(unsigned short)a0 withArguments:(id)a1;
- (BOOL)_sendResponseToMessage:(id)a0 withResponseMessageID:(unsigned short)a1 withArguments:(id)a2;
- (unsigned short)_testActivationResponseType;
- (void)acknowledgeBuysOnWatchCredentialIngestion:(id)a0;
- (void)activationTimedOut;
- (void)beganWaitingForPresentationOfActivationEvent;
- (void)beganWaitingForUserResponseToActivationEvent;
- (void)beginSetupTransaction;
- (id)currentNetworks:(BOOL)a0;
- (id)currentWiFiNetworkName;
- (void)enableSiriForGizmo:(id)a0;
- (void)endSetupTransaction;
- (void)getCompanionLanguage:(id)a0;
- (void)getCompanionRegion:(id)a0;
- (void)getSiriState:(id)a0;
- (void)gizmoActivationFailed:(id)a0;
- (void)gizmoBecameAvailableWantsConfirmation:(id)a0;
- (void)gizmoDidBeginActivating:(id)a0;
- (void)gizmoDidBeginUnlockPairing:(id)a0;
- (void)gizmoDidEndPasscodeChange:(id)a0;
- (void)gizmoDidEndPasscodeCreation:(id)a0;
- (void)gizmoDidEndUnlockPairing:(id)a0;
- (void)gizmoDidFinishActivating:(id)a0;
- (void)gizmoFailedToCreatePasscode:(id)a0;
- (void)handleOfflineTermsResponse:(id)a0;
- (void)handlePerformanceResults:(id)a0;
- (void)handleRemoteActivationDetails:(id)a0;
- (void)invalidateTimeoutTimerWithNewActivationGranularState:(unsigned short)a0;
- (void)queryGizmoForOfflineTerms;
- (void)queryGizmoForShowWarrantySentinelAndRestoreDeviceName:(id)a0;
- (void)refreshTimeoutTimerWithNewActivationGranularState:(unsigned short)a0;
- (void)requestProxiedDeviceForWatchWithCompletion:(id /* block */)a0;
- (void)retrieveAppViewListImageFromGizmo:(struct CGSize { double x0; double x1; })a0 completion:(id /* block */)a1;
- (void)sendAllTinkerWirelessCredentials:(BOOL)a0;
- (void)sendBuysOnWatchUsername:(id)a0 andPassword:(id)a1 withCompletion:(id /* block */)a2;
- (void)sendComputedTimeZoneToGizmo;
- (void)sendDemoWatchWirelessCredentials;
- (void)sendGizmoPasscodeRestrictions;
- (void)sendProxyActivationRequest:(id)a0;
- (void)sendProxyActivationWithCustomRequest:(id)a0;
- (void)sendTinkerAccountCredentialsWithContext:(id)a0 completion:(id /* block */)a1;
- (void)setupServiceMessageSelectorMappings;
- (void)startEstablishingPairing;
- (void)tellGizmoToBeginActivation;
- (void)tellGizmoToDeleteWarrantySentinel;
- (void)tellGizmoToKeepAliveForActivationEvent;
- (void)tellGizmoToPrepareForInitialSyncWithCompletion:(id /* block */)a0;
- (void)tellGizmoToPushControllerType:(unsigned long long)a0;
- (void)tellGizmoToRetryActivation;
- (void)tellGizmoToSetCrownOrientationRight:(BOOL)a0;
- (void)tellGizmoToSetDiagnosticsEnabled:(BOOL)a0;
- (void)tellGizmoToSetFitnessRouteTrackingEnabled:(BOOL)a0;
- (void)tellGizmoToSetLocationEnabled:(BOOL)a0;
- (void)tellGizmoToSetMessagesinCloudEnabled:(BOOL)a0;
- (void)tellGizmoToShowLockedOnAnimationTimeToFlash:(double)a0 animationCompletion:(id /* block */)a1;
- (void)tellGizmoToUpdateNanoRegistryToNormalState;
- (void)tellGizmoToUpdateSyncProgressTo:(double)a0 withState:(long long)a1;
- (void)tellWatchLanguagesAndLocaleSupportingTermOfAddress:(BOOL)a0 withCompletion:(id /* block */)a1;
- (void)tellWatchToPrepareForForcedSUWithCompletion:(id /* block */)a0;
- (void)tellWatchToSetSiriEnabled:(BOOL)a0;
- (void)tinkerFinishedHealthSharingOptIn:(id)a0;
- (void)transportBecameReachable;
- (void)transportBecameUnreachable;
- (void)watchDidIngestWirelessCredentials:(id)a0;
- (void)watchDidPrepareForForcedSU:(id)a0;
- (void)watchDidPrepareForInitialSync:(id)a0;
- (void)watchDidRespondWithLanguageAndLocaleStatus:(id)a0;

@end