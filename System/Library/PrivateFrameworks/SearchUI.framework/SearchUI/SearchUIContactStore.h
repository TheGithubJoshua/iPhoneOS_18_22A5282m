@class CNContactStore, NSString, NSObject, NSCache;
@protocol OS_dispatch_queue;

@interface SearchUIContactStore : NSObject <SearchUIBatchedCachePrewarmer>

@property (retain, nonatomic) NSCache *contactCache;
@property (retain, nonatomic) CNContactStore *contactStore;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *contactFetchingQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)contactForPhoneNumber:(id)a0 email:(id)a1;
+ (id)placeholderContact;
+ (id)viewControllerDescriptorKeys;
+ (id)sharedStore;
+ (id)resultTableContactDescriptorKeys;

- (id)init;
- (void)fetchContactsForIdentifiers:(id)a0 completionHandler:(id /* block */)a1;
- (void)fetchContactForIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (id)contactForIdentifier:(id)a0;
- (id)batchingItemsForRowModel:(id)a0;
- (void).cxx_destruct;
- (void)fetchContactsForIdentifiers:(id)a0 withKeyDescriptors:(id)a1 completionHandler:(id /* block */)a2;
- (void)prewarmCacheForBatchedItems:(id)a0;
- (id)cachedContactForIdentifier:(id)a0;
- (id)cachedContactsForIdentifiers:(id)a0 withKeyDescriptors:(id)a1;
- (id)contactsForIdentifiers:(id)a0 withKeys:(id)a1;

@end
