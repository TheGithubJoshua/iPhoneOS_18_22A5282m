@class NSUUID, NSString, WBSEncryptedCloudKeyValueStore, NSObject, NSMutableArray;
@protocol OS_dispatch_queue, CloudTabStoreDelegate;

@interface CloudTabStore : WBSCloudTabStore <WBSCloudTabStoreDelegate> {
    NSObject<OS_dispatch_queue> *_internalQueue;
    WBSEncryptedCloudKeyValueStore *_syncedDevicesStore;
    WBSEncryptedCloudKeyValueStore *_userRequestsStore;
    BOOL _hasInitiatedFetchOfCloudKitDataAtLeastOnce;
    BOOL _hasCompletedFetchOfCloudKitDataAtLeastOnce;
    NSMutableArray *_fetchCloudKitDataCompletionHandlers;
    BOOL _didAttemptToCloseAtLeastOneTab;
}

@property (setter=_setCloudKitDataNeedsFetching:) BOOL _cloudKitDataNeedsFetching;
@property (readonly, nonatomic) NSUUID *currentDeviceUUID;
@property (weak, nonatomic) id<CloudTabStoreDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedCloudTabStore;

- (id)init;
- (void)_syncedDevicesStoreDidUpdate:(id)a0;
- (void)fetchSyncedCloudTabDevicesAndCloseRequestsFromCloudKit;
- (BOOL)closeTabs:(id)a0 onDevice:(id)a1;
- (void)_clearAllDevices;
- (void)didUpdateDevicesAndCloseRequestsFromCloudKitForCloudTabStore:(id)a0 error:(id)a1;
- (BOOL)_shouldUseCloudKitForSavingCurrentDevice;
- (void)_clearTabsForCurrentDeviceWithSyncCompletionHandler:(id /* block */)a0;
- (id)_storeForIdentifier:(long long)a0;
- (void)_removeObjectFromKeyValueStore:(long long)a0 forKey:(id)a1;
- (id)_keyValueStoreDictionaryRepresentation:(long long)a0;
- (id)_currentDeviceUUID;
- (void)saveCurrentDeviceTabsFromBrowserSavedState:(id)a0 syncCompletionHandler:(id /* block */)a1;
- (void)_closeRequestedTabIfPossible:(id)a0;
- (void)_userRequestsStoreDidUpdate:(id)a0;
- (void).cxx_destruct;
- (void)_callFetchCloudKitDataCompletionHandlers;
- (void)synchronizeCloudTabDevices;
- (void)_notifyCloudTabStoreDidUpdateWithType:(id)a0;
- (BOOL)cloudTabsAreEnabled;
- (void)_cloudKitDataDidUpdateOnServer:(id)a0;
- (void)saveCurrentDeviceCloudTabsForEnteringBackground:(id)a0 completion:(id /* block */)a1;
- (void)_waitForInitialCloudKitFetchToComplete:(id /* block */)a0;
- (BOOL)closeTab:(id)a0 onDevice:(id)a1;
- (void)stopObservingTabStoreStateChanges;
- (void)didGetCachedDevicesFromCloudKitForCloudTabStore:(id)a0;
- (id)syncedCloudTabDevices;
- (void)_cloudTabsEnabledDidChange;
- (id)currentDevice;
- (void)_saveCurrentDeviceCloudTabs:(id)a0 syncCompletionHandler:(id /* block */)a1;
- (BOOL)closeAllTabsOnDevice:(id)a0;
- (void)saveCurrentDeviceTabsFromBrowserSavedState:(id)a0;
- (BOOL)canSaveCloudTabsForCurrentDevice;
- (void)_setDictionaryInKeyValueStore:(long long)a0 dictionary:(id)a1 forKey:(id)a2;
- (void)clearTabsForCurrentDevice;
- (void)_removeConflictingDevice;
- (void)saveCurrentDeviceCloudTabs:(id)a0;
- (void)startObservingTabStoreStateChanges;

@end
