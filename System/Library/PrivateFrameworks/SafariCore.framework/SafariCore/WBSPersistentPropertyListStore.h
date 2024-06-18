@class NSMutableDictionary, NSURL, NSObject, WBSCoalescedAsynchronousWriter;
@protocol OS_dispatch_queue;

@interface WBSPersistentPropertyListStore : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSURL *_backingStoreURL;
    NSMutableDictionary *_store;
    WBSCoalescedAsynchronousWriter *_writer;
}

@property (copy, nonatomic) id /* block */ createEmptyStoreHandler;
@property (copy, nonatomic) id /* block */ validateLoadedStoreHandler;

- (void)saveStoreSynchronously;
- (id)_objectForKey:(id)a0 ofClass:(Class)a1;
- (void)_prepareEmptyStore;
- (void)setObject:(id)a0 forKey:(id)a1;
- (id)stringForKey:(id)a0;
- (id)_existingSavedData;
- (id)numberForKey:(id)a0;
- (id)allKeys;
- (void)_loadDataIfNecessary;
- (id)objectForKey:(id)a0;
- (void)clearStoreSynchronously;
- (id)dataForKey:(id)a0;
- (id)initWithBackingStoreURL:(id)a0 fileResourceValues:(id)a1;
- (id)initWithBackingStoreURL:(id)a0;
- (id)dateForKey:(id)a0;
- (void).cxx_destruct;
- (id)_dataRepresentation;
- (void)saveAndCloseStoreSynchronously;
- (id)dictionaryForKey:(id)a0;
- (id)arrayForKey:(id)a0;

@end
