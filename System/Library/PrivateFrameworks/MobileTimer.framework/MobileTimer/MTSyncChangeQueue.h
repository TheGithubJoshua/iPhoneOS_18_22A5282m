@class NSMutableArray, NSObject;
@protocol OS_dispatch_group, NAScheduler, OS_dispatch_queue, MTSyncChangeStore;

@interface MTSyncChangeQueue : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (retain, nonatomic) id<NAScheduler> serializer;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *changesLoaded;
@property (retain, nonatomic) id<MTSyncChangeStore> changeStore;
@property (retain, nonatomic) NSMutableArray *changeQueue;

- (void)_enqueueChange:(id)a0 changeCompareBlock:(id /* block */)a1;
- (void)_enqueueAction:(id)a0;
- (void)loadChanges;
- (void)performBlockOnceChangesAreLoaded:(id /* block */)a0 async:(BOOL)a1;
- (void).cxx_destruct;
- (void)dequeueChanges:(id)a0;
- (id)initWithChangeStore:(id)a0;
- (void)persistChanges;
- (id)_resolveChange:(id)a0 resolutionHandler:(id /* block */)a1;
- (void)removePendingChanges;
- (id)_resolveChange:(id)a0;
- (void)enqueueChange:(id)a0;
- (id)resolveChange:(id)a0;
- (id)pendingChanges;
- (BOOL)hasPendingChanges;

@end
