@class NSObject, NSMutableOrderedSet;
@protocol OS_dispatch_queue, NSFileProviderEnumerationObserver, NSFileProviderItem;

@interface BRCRecentsEnumeratorBatch : NSObject {
    NSMutableOrderedSet<NSFileProviderItem> *_toIndexItems;
    NSMutableOrderedSet *_deletedItemIDs;
    NSObject<OS_dispatch_queue> *_queue;
    id<NSFileProviderEnumerationObserver> _observer;
}

@property (nonatomic) unsigned long long rank;

- (id)init;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)batchCount;
- (void)addDeletionOfFileObjectID:(id)a0 rank:(unsigned long long)a1;
- (void)addIndexOfItem:(id)a0;
- (void)listItems:(id /* block */)a0;

@end
