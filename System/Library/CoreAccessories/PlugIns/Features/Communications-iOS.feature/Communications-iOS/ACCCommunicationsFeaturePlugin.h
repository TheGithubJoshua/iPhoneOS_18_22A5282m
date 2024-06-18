@class VMVoicemailManager, NSString, ACCCommunicationsCenter, CHManager, NSObject, RadiosPreferences;
@protocol OS_dispatch_queue;

@interface ACCCommunicationsFeaturePlugin : NSObject <ACCCommunicationsCenterCallStateDelegate, ACCCommunicationsCenterCommunicationsDelegate, ACCCommunicationsCenterCallControlsDelegate, ACCCommunicationsCenterListUpdatesDelegate, RadiosPreferencesDelegate, ACCFeaturePluginProtocol>

@property (nonatomic) BOOL isRunning;
@property (retain, nonatomic) ACCCommunicationsCenter *commCenter;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) VMVoicemailManager *vmManager;
@property (retain, nonatomic) RadiosPreferences *radiosPreferences;
@property (retain, nonatomic) CHManager *chManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *pluginName;

- (void)initPlugin;
- (BOOL)updateMuteStatus:(BOOL)a0;
- (id)currentAudioAndVideoCalls;
- (BOOL)initiateCallToVoicemail;
- (BOOL)isAirplaneModeEnabled;
- (id)currentCommunicationsStatus;
- (unsigned long long)currentCallCount;
- (void)startPlugin;
- (BOOL)isFaceTimeAudioEnabled;
- (BOOL)isCellularSupported;
- (BOOL)currentMuteStatus;
- (void)airplaneModeChanged;
- (BOOL)isHoldAndAcceptAvailable;
- (BOOL)isTelephonyEnabled;
- (unsigned long long)currentUnreadVoicemailCount;
- (BOOL)isInitiateCallAllowed;
- (void)stopPlugin;
- (BOOL)endAllCalls;
- (void)favoritesListDidChangeNotification:(id)a0;
- (BOOL)updateHoldStatus:(BOOL)a0 forCallWithUUID:(id)a1;
- (void)callStateDidChangeForCall:(id)a0;
- (id)currentFavoritesListWithLimit:(unsigned long long)a0;
- (id)currentLocalizedCarrierName;
- (id)currentCarrierName;
- (BOOL)isSwapAvailable;
- (void).cxx_destruct;
- (void)commStatusDidChangeNotification:(id)a0;
- (BOOL)isFaceTimeVideoEnabled;
- (BOOL)acceptCallWithAction:(int)a0 callUUID:(id)a1;
- (int)currentSignalStrength;
- (BOOL)initiateRedial;
- (id)currentCallStates;
- (id)currentRecentsListWithCoalescing:(BOOL)a0 limit:(unsigned long long)a1;
- (void)callStateDidChangeNotification:(id)a0;
- (void)addNotificationObservers;
- (BOOL)isEndAndAcceptAvailable;
- (BOOL)mergeCalls;
- (int)currentRegistrationStatus;
- (void)removeNotificationObservers;
- (BOOL)swapCalls;
- (void)recentsListDidChangeNotification:(id)a0;
- (BOOL)isMergeAvailable;
- (BOOL)sendDTMF:(int)a0 forCallWithUUID:(id)a1;
- (BOOL)isHoldAvailable;
- (BOOL)endCallWithAction:(int)a0 callUUID:(id)a1;
- (BOOL)initiateCallToDestination:(id)a0 withService:(int)a1 addressBookID:(id)a2;

@end
