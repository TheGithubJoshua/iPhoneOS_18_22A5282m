@class NSOrderedSet, MSPSharingRestorationStorage, NSMutableOrderedSet, NSSet, NSMutableSet, NSObject;
@protocol MSPSharedTripContactControllerDelegate, OS_dispatch_queue, MSPSharedTripXPCServer;

@interface MSPSharedTripContactController : NSObject {
    NSMutableOrderedSet *_contactsValues;
    NSSet *_activeHandles;
    NSMutableSet *_pendingContacts;
    id<MSPSharedTripXPCServer> _sharedTripServer;
    NSObject<OS_dispatch_queue> *_isolationQueue;
}

@property (weak, nonatomic) id<MSPSharedTripContactControllerDelegate> delegate;
@property (readonly, nonatomic) NSOrderedSet *activeContactsValues;
@property (readonly, nonatomic) MSPSharingRestorationStorage *archivedSharingStorage;

- (void)_stopAllSharingWithQueue:(id)a0 completion:(id /* block */)a1;
- (void)_shareWithContactValue:(id)a0 queue:(id)a1 completion:(id /* block */)a2;
- (void)_didStartSharingWithContact:(id)a0 withCapabilityType:(unsigned long long)a1 error:(id)a2 queue:(id)a3 completion:(id /* block */)a4;
- (void)_stopSharingWithContactValue:(id)a0 queue:(id)a1 completion:(id /* block */)a2;
- (BOOL)_contactIsActive:(id)a0;
- (void)stopSharingWithContactValue:(id)a0 queue:(id)a1 completion:(id /* block */)a2;
- (id)_archivedSharingStorage;
- (void)_notifyDelegateContactsChanged;
- (void)updateActiveSharingHandles:(id)a0;
- (void).cxx_destruct;
- (void)stopAllSharingWithQueue:(id)a0 completion:(id /* block */)a1;
- (id)_activeContactsValues;
- (id)initWithSharedTripServer:(id)a0;
- (void)shareWithContactValue:(id)a0 queue:(id)a1 completion:(id /* block */)a2;
- (void)_updateActiveSharingHandles:(id)a0;
- (BOOL)contactIsActive:(id)a0;
- (id)_existingValueForContact:(id)a0;

@end
