@class SOSButtonPressState, NSMapTable, NSXPCConnection, NSString, NSObject;
@protocol OS_dispatch_semaphore;

@interface SOSManager : NSObject <SOSInternalClientProtocol, SOSClientProtocol> {
    BOOL _sendingLocationUpdate;
    long long _sosInitiationState;
    long long _sosInteractiveState;
    SOSButtonPressState *_sosButtonPressState;
    NSObject<OS_dispatch_semaphore> *_initialStateSemaphore;
}

@property (retain, nonatomic) NSXPCConnection *connection;
@property (nonatomic) int connectionRequestNotificationToken;
@property (readonly, nonatomic) NSMapTable *observerToQueue;
@property (nonatomic, getter=isAutomaticCallCountdownEnabled) BOOL automaticCallCountdownEnabled;
@property (nonatomic, getter=isAllowedToMessageSOSContacts) BOOL allowedToMessageSOSContacts;
@property (nonatomic) long long currentSOSInitiationState;
@property (nonatomic) long long currentSOSInteractiveState;
@property (copy, nonatomic) SOSButtonPressState *currentSOSButtonPressState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)notifySOSTriggerMechanismChanged;
+ (id)sharedInstance;
+ (BOOL)deviceSupportsSOS;
+ (BOOL)shouldTriggerSOS;
+ (void)triggerSOS;
+ (void)triggerSOSWithUUID:(id)a0 triggerMechanism:(long long)a1 completion:(id /* block */)a2;
+ (void)triggerSOSWithCompletion:(id /* block */)a0;
+ (void)triggerSOSWithUUID:(id)a0 completion:(id /* block */)a1;

- (void)removeObserver:(id)a0;
- (id)init;
- (void)updateClientCurrentSOSInteractiveState:(long long)a0;
- (void)mostRecentLocationSentWithCompletion:(id /* block */)a0;
- (void)updateClientCurrentSOSButtonPressState:(id)a0;
- (void)startSendingLocationUpdateForReason:(long long)a0 withCompletion:(id /* block */)a1;
- (void)stopSendingLocationUpdate;
- (void)willStartSendingLocationUpdate;
- (void)_waitForInitialState;
- (void)didDismissSOSBeforeSOSCall:(long long)a0;
- (void)addObserver:(id)a0 queue:(id)a1;
- (BOOL)longPressTriggersEmergencySOS;
- (void)didDismissClientSOSBeforeSOSCall:(long long)a0;
- (void).cxx_destruct;
- (void)startSendingLocationUpdateWithCompletion:(id /* block */)a0;
- (void)dismissClientSOSWithCompletion:(id /* block */)a0;
- (void)setSendingLocationUpdate:(BOOL)a0;
- (void)updateClientCurrentSOSInitiationState:(long long)a0;
- (BOOL)isSendingLocationUpdate;
- (void)dealloc;
- (void)didUpdateSOSStatus:(id)a0;
- (void)setLongPressTriggersEmergencySOS:(BOOL)a0;
- (void)dismissSOSWithCompletion:(id /* block */)a0;
- (void)_resetStateWithCompletion:(id /* block */)a0;

@end
