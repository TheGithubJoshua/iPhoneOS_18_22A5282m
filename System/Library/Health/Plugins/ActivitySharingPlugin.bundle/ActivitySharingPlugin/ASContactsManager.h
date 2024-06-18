@class CNContactStore, NSSet, NSString, NSMutableDictionary, NSHashTable, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_group;

@interface ASContactsManager : NSObject <ASActivitySharingManagerReadyObserver> {
    CNContactStore *_contactStore;
    NSMutableDictionary *_contactsByUUID;
    NSMutableDictionary *_placeholderContactsByUUID;
    NSHashTable *_observers;
    NSObject<OS_dispatch_queue> *_contactsQueue;
    NSObject<OS_dispatch_queue> *_observerQueue;
    NSObject<OS_dispatch_queue> *_persistQueue;
    NSObject<OS_dispatch_group> *_contactsTransactionBarrier;
}

@property (copy, nonatomic) NSSet *contacts;
@property (readonly, nonatomic) NSSet *placeholderContacts;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)removeObserver:(id)a0;
- (void)loadCachedContacts;
- (void)_endTransaction;
- (id)contactWithDestinations:(id)a0;
- (void)_queue_notifyObservers;
- (id)initWithIsWatch:(BOOL)a0;
- (void)_setContacts:(id)a0 waitForTransaction:(BOOL)a1;
- (id)savePlaceholderContact:(id)a0;
- (void)removeAllPlaceholderContacts;
- (id)_findMatchingContactStoreContactForDestinations:(id)a0;
- (id)_queue_allContacts;
- (void)removePlaceholderContactWithToken:(id)a0;
- (void)_persistContacts:(id)a0;
- (void).cxx_destruct;
- (void)setContactsUsingTransaction:(id /* block */)a0;
- (id)contactWithUUID:(id)a0;
- (id)_contactStoreContactWithIdentifier:(id)a0;
- (void)_waitForTransaction;
- (id)createContactWithDestinations:(id)a0;
- (void)addObserver:(id)a0;
- (id)placeholderContactWithUUID:(id)a0;
- (id)contactMatchingCriteriaBlock:(id /* block */)a0;
- (void)saveContact:(id)a0;
- (void)_beginTransaction;

@end
