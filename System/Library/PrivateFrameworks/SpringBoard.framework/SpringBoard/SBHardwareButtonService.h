@class RBSProcessMonitor, NSString, FBServiceClientAuthenticator, NSMutableArray, BSMutableIntegerMap, SBSystemServiceServer;

@interface SBHardwareButtonService : NSObject <SBSystemServiceServerHardwareButtonDelegate> {
    SBSystemServiceServer *_systemServiceServer;
    FBServiceClientAuthenticator *_serviceClientHomeHardwareButtonHintSuppressionEntitlementAuthenticator;
    FBServiceClientAuthenticator *_serviceClientEventConsumerEntitlement;
    RBSProcessMonitor *_processMonitor;
    NSMutableArray *_observers;
    BSMutableIntegerMap *_eventMaskPerKind;
}

@property (retain, nonatomic) BSMutableIntegerMap *registrationsByButtonKind;
@property (retain, nonatomic) BSMutableIntegerMap *clientsByPID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void)_sendXPCMessageForEvent:(long long)a0 buttonKind:(long long)a1 priority:(long long)a2 toClient:(id)a3;
- (id)_initWithSystemServiceServer:(id)a0;
- (BOOL)consumeHomeButtonTriplePressUpWithPriority:(long long)a0;
- (id)_init;
- (BOOL)hasConsumersForLockButtonDoublePressUp;
- (BOOL)hasConsumersForLockButtonPresses;
- (void)systemServiceServer:(id)a0 client:(id)a1 fetchHapticTypeForButtonKind:(long long)a2 completion:(id /* block */)a3;
- (BOOL)consumeRingerSwitchToggleStateOffWithPriority:(long long)a0;
- (BOOL)consumeVolumeIncreaseButtonSinglePressDownWithPriority:(long long)a0 continuation:(out id /* block */ *)a1;
- (BOOL)consumeRingerSwitchToggleStateOnWithPriority:(long long)a0;
- (id)_applicationForClientInfo:(id)a0;
- (void)_addRegistration:(id)a0 toClient:(id)a1;
- (BOOL)consumeVolumeDecreaseButtonSinglePressUpWithPriority:(long long)a0;
- (void)systemServiceServer:(id)a0 clientDidDisconnect:(id)a1;
- (BOOL)consumeVolumeDecreaseButtonSinglePressDownWithPriority:(long long)a0 continuation:(out id /* block */ *)a1;
- (void)_updateAllButtonEventMasks;
- (BOOL)_sendEvent:(long long)a0 buttonKind:(long long)a1 withPriority:(long long)a2;
- (void)systemServiceServer:(id)a0 client:(id)a1 setHapticType:(long long)a2 buttonKind:(long long)a3;
- (void)systemServiceServer:(id)a0 client:(id)a1 requestsHIDEvents:(BOOL)a2 token:(id)a3 forButtonKind:(long long)a4;
- (void)_process:(id)a0 stateDidUpdate:(id)a1;
- (void)systemServiceServer:(id)a0 client:(id)a1 acquireAssertionOfType:(long long)a2 forReason:(id)a3 withCompletion:(id /* block */)a4;
- (id)_mutableRegistrationsForButtonKind:(long long)a0 createIfNecessary:(BOOL)a1;
- (void).cxx_destruct;
- (id)_registrationsForButtonKind:(long long)a0;
- (void)_setSystemServiceClient:(id)a0 buttonKind:(long long)a1 eventMask:(unsigned long long)a2 priority:(long long)a3;
- (BOOL)_sendEvent:(long long)a0 buttonKind:(long long)a1 withPriority:(long long)a2 continuation:(out id /* block */ *)a3;
- (BOOL)consumeHomeButtonDoublePressDownWithPriority:(long long)a0;
- (BOOL)consumeLockButtonLongPressWithPriority:(long long)a0;
- (void)_performButtonRegistrationChangeAndNotifyObservers:(id /* block */)a0;
- (BOOL)consumeVolumeIncreaseButtonSinglePressUpWithPriority:(long long)a0;
- (void)_reconfigureProcessMonitor;
- (void)systemServiceServer:(id)a0 client:(id)a1 setEventMask:(unsigned long long)a2 buttonKind:(long long)a3 priority:(long long)a4;
- (void)_removeRegistration:(id)a0 fromClient:(id)a1;
- (BOOL)consumeHomeButtonSinglePressUpWithPriority:(long long)a0;
- (BOOL)consumeHeadsetPlayPauseSinglePressUpWithPriority:(long long)a0;
- (BOOL)consumeLockButtonDoublePressUpWithPriority:(long long)a0;
- (BOOL)hasConsumersForHomeButtonPresses;
- (id)addObserver:(id)a0;
- (BOOL)hasConsumersForHomeButtonSinglePress;
- (id)_mutableRegistrationsForButtonKind:(long long)a0;
- (BOOL)consumeHeadsetPlayPauseSinglePressDownWithPriority:(long long)a0 continuation:(out id /* block */ *)a1;
- (BOOL)consumeLockButtonSinglePressUpWithPriority:(long long)a0;
- (void)_updateEventMasksForButtonKind:(long long)a0;
- (void)_reconfigureProcessMonitorForPredicates:(id)a0;
- (BOOL)consumeHomeButtonLongPressWithPriority:(long long)a0;

@end
