@class NSHashTable, AFSiriAnnouncementRoute, NSString, AFSettingsConnection, AFNotifyObserver, AVSystemController, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_group;

@interface AFHeadphonesAnnouncementRequestCapabilityProvider : NSObject <AFNotifyObserverDelegate, AFSettingsDelegate, AFAnnouncementRequestCapabilityProviding> {
    BOOL _inWirelessSplitterSession;
    BOOL _inWirelessSplitterSessionStateValid;
    BOOL _localVoiceAssetAvailable;
    AFSettingsConnection *_settingsConnection;
    AFNotifyObserver *_pairedInfoChangeObserver;
    AFNotifyObserver *_wirelessSplitterSessionObserver;
    AFNotifyObserver *_wirelessGuestConnectionObserver;
    AVSystemController *_avSystemController;
    AFNotifyObserver *_forcedUpdateObserver;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_group> *_group;
    unsigned long long _lastKnownAvailableAnnouncementRequests;
    unsigned long long _lastKnownEligibleAnnouncementRequests;
    NSHashTable *_delegates;
}

@property (retain, nonatomic) AFSiriAnnouncementRoute *currentAnnouncementRoute;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)platform;
+ (id)provider;
+ (id)requiredIntentIdentifiersForUserNotificationAnnouncementType:(long long)a0;
+ (id)announceableIntentIdentifiersForUserNotificationAnnouncementType:(long long)a0;

- (void)addDelegate:(id)a0;
- (void)fetchLocalVoiceAssetAvailabilityWithCompletion:(id /* block */)a0;
- (void)fetchWirelessSplitterSessionInfoAndStartObservingSync;
- (void)fetchEligibleAnnouncementRequestTypesAndNotifyObservers:(id)a0;
- (id)_init;
- (void)updateAudioRouteAvailability:(id)a0;
- (void)fetchEligibleAnnouncementRequestTypesWithCompletion:(id /* block */)a0;
- (void)notifyObserversOfAvailableAnnouncementRequestTypes;
- (void)notifyObserver:(id)a0 didReceiveNotificationWithToken:(int)a1;
- (void)_settingsConnectionDidDisconnect;
- (void)fetchAvailableAnnouncementRequestTypesWithCompletion:(id /* block */)a0;
- (void)systemControllerDied:(id)a0;
- (void).cxx_destruct;
- (void)_fetchWirelessSplitterSessionInfoAndStartObservingFromSourceWithCompletion:(id /* block */)a0;
- (id)currentlyRoutedHeadphonesProductID;
- (id)_getCurrentAnnouncementRoute;
- (void)updateWirelessSplitterSessionInfoAndObserve;
- (void)_fetchInitialState;
- (unsigned long long)lastKnownEligibleAnnouncementRequestTypes;
- (void)notifyObserversOfEligibleAnnouncementRequestTypes:(unsigned long long)a0;
- (id)_settingsConnection;
- (void)_updateAnnounceNotificationsOnHearingAidSupportedStatus;
- (id)currentlyRoutedHeadphonesBTAddress;
- (void)notifyObserver:(id)a0 didChangeStateFrom:(unsigned long long)a1 to:(unsigned long long)a2;
- (void)_fetchPairedBluetoothDevicesFromSourceWithCompletion:(id /* block */)a0;
- (BOOL)_updateAudioRouteAvailabilityAndBroadcast:(BOOL)a0;
- (void)_fetchEligibleAnnouncementRequestTypesAndNotifyObservers;

@end
