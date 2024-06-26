@class NSTimer, NSString, NSArray, MSPSharedTripBlocklist, NSMutableDictionary, MSPSharedTripRelay, MDNotificationCenter, NSObject;
@protocol OS_os_transaction, MSPReceiverETAControllerDelegate;

@interface MSPReceiverETAController : NSObject <MSPSharedTripStorageDelegate, MSPSharedTripRelayDelegate> {
    NSObject<OS_os_transaction> *_transaction;
    NSMutableDictionary *_sharedSessions;
    NSMutableDictionary *_sharedNavStates;
    NSMutableDictionary *_waitingNavStates;
    MDNotificationCenter *_mapsNotificationCenter;
    MSPSharedTripRelay *_idsRelay;
    MSPSharedTripBlocklist *_blockedList;
    NSTimer *_cleanupTimer;
}

@property (readonly, nonatomic) NSArray *allTrips;
@property (weak, nonatomic) id<MSPReceiverETAControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cleanTimer;
- (void)groupSession:(id)a0 participantDidLeave:(id)a1;
- (void)relay:(id)a0 receiveData:(id)a1 info:(id)a2 fromID:(id)a3;
- (void)groupSession:(id)a0 participantDidJoin:(id)a1;
- (void)_resolveContactIfNeeded:(id)a0 fromId:(id)a1 completion:(id /* block */)a2;
- (void)clearBlockedTripIdentifiers;
- (BOOL)unsubscribeFromUpdatesToSharedTrip:(id)a0 error:(id *)a1;
- (void)storageController:(id)a0 updatedSharedTripGroupStorage:(id)a1;
- (void)_cleanupIfNecessary;
- (BOOL)subscribeToUpdatesToSharedTrip:(id)a0 error:(id *)a1;
- (BOOL)_allowMessageWithState:(id)a0 forGroup:(id)a1 fromID:(id)a2;
- (void).cxx_destruct;
- (BOOL)_cleanUpNecessaryForGroup:(id)a0;
- (id)initWithRelay:(id)a0;
- (void)_updateData:(id)a0 forGroup:(id)a1 fromID:(id)a2;
- (void)relay:(id)a0 sharingClosed:(id)a1;
- (void)purgeExpiredBlockedTripIdentifiers;
- (void)_setNotificationCenter:(id)a0;
- (void)groupSessionEnded:(id)a0;
- (void)dealloc;
- (void)updateContacts;
- (void)blockSharedTrip:(id)a0;
- (void)_cleanGroup:(id)a0;
- (void)_updateDelegateWithUpdateState:(id)a0 to:(id)a1 freshAvailable:(BOOL)a2;
- (void)_showOrUpdateNotificationIfNeeded:(id)a0;

@end
