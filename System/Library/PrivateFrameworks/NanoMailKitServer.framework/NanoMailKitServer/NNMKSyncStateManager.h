@class NSString, BLTPingSubscriber, PSYSyncCoordinator;
@protocol NNMKSyncStateManagerDelegate;

@interface NNMKSyncStateManager : NSObject <PSYSyncCoordinatorDelegate, NNMKSyncStateManager>

@property (retain, nonatomic) BLTPingSubscriber *notificationsPingSubscriber;
@property (retain, nonatomic) PSYSyncCoordinator *initialSyncCoordinator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<NNMKSyncStateManagerDelegate> delegate;

- (id)init;
- (BOOL)pairedDeviceSupportsMultipleMailboxes;
- (void)syncCoordinator:(id)a0 beginSyncSession:(id)a1;
- (void)syncCoordinator:(id)a0 didInvalidateSyncSession:(id)a1;
- (id)pairedDeviceScreenSize;
- (BOOL)pairedDeviceSupportsMailContentProtectedChannel;
- (void)reportInitialSyncDidFailWithError:(id)a0;
- (BOOL)isInitialSyncRestricted;
- (BOOL)pairedDeviceSupportsStandaloneMode;
- (void)reportInitialSyncDidCompleteSending;
- (void)reportInitialSyncDidComplete;
- (void).cxx_destruct;
- (id)pairingStorePath;
- (id)_bbSubsectionIdsForMessage:(id)a0;
- (void)reportInitialSyncProgress:(double)a0;
- (id)_pairedNanoRegistryDevice;
- (void)_handlePairedDeviceChangedNotification:(id)a0;
- (id)pairedDeviceScreenScale;
- (void)dealloc;
- (void)_handleDidUnpairNotification:(id)a0;
- (BOOL)willPresentNotificationForMessage:(id)a0;

@end
