@class HKObserverSet, NSMutableDictionary, NSObject, HDDaemon;
@protocol OS_dispatch_queue, HDProfileManagerObserver;

@interface HDProfileManager : NSObject {
    HDDaemon *_daemon;
    NSMutableDictionary *_profiles;
    HKObserverSet<HDProfileManagerObserver> *_observers;
    NSObject<OS_dispatch_queue> *_resourceQueue;
}

- (id)initWithDaemon:(id)a0;
- (id)createProfileForIdentifier:(id)a0 firstName:(id)a1 lastName:(id)a2 error:(id *)a3;
- (id)profileIdentifierForUUID:(id)a0;
- (void)reloadSecondaryProfiles;
- (id)createProfileOfType:(long long)a0 displayName:(id)a1 error:(id *)a2;
- (id)profileForIdentifier:(id)a0;
- (void)addProfileManagerObserver:(id)a0;
- (void).cxx_destruct;
- (id)allProfileIdentifiers;
- (void)removeProfileManagerObserver:(id)a0;
- (id)newProfileWithIdentifier:(id)a0 daemon:(id)a1 directoryPath:(id)a2;
- (void)addProfileManagerObserver:(id)a0 queue:(id)a1;
- (BOOL)deleteProfile:(id)a0 error:(id *)a1;
- (void)dispatchProfileListDidChange;
- (BOOL)createProfileForIdentifier:(id)a0 displayName:(id)a1 error:(id *)a2;
- (void)addProfile:(id)a0;
- (void)invalidateAndWaitWithReason:(id)a0;
- (id)profileAssociatedWithNRDeviceUUID:(id)a0;

@end
