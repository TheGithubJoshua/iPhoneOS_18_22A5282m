@class NSString, DNDModeConfigurationService, NSHashTable, NSObject;
@protocol OS_dispatch_queue;

@interface DNDModeSelectionService : NSObject <DNDRemoteServiceConnectionEventListener> {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    NSHashTable *_listeners;
    BOOL _registeredForUpdates;
    DNDModeConfigurationService *_modeConfigurationService;
}

@property (readonly, copy, nonatomic) NSString *clientIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (id)serviceForClientIdentifier:(id)a0;

- (void)removeListener:(id)a0;
- (BOOL)activateModeWithDetails:(id)a0 error:(id *)a1;
- (id)activeModeAssertionWithError:(id *)a0;
- (id)modeConfigurationForModeIdentifier:(id)a0 error:(id *)a1;
- (id)promotedPlaceholderWithModeIdentifier:(id)a0 error:(id *)a1;
- (BOOL)_queue_registerForUpdatesIfRequired;
- (void).cxx_destruct;
- (id)allModesWithError:(id *)a0;
- (id)availableModesWithError:(id *)a0;
- (BOOL)promotePlaceholderWithModeIdentifier:(id)a0 error:(id *)a1;
- (void)addListener:(id)a0 withCompletionHandler:(id /* block */)a1;
- (id)_initWithClientIdentifier:(id)a0;
- (void)remoteService:(id)a0 didReceiveUpdatedActiveModeAssertion:(id)a1 stateUpdate:(id)a2;
- (BOOL)invalidateModeAssertionWithUUID:(id)a0 error:(id *)a1;
- (void)remoteService:(id)a0 didReceiveUpdatedAvailableModes:(id)a1;
- (void)remoteService:(id)a0 didReceiveUpdatedModes:(id)a1;

@end
