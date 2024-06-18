@class CARObserverHashTable;

@interface DBBuddyMonitor : NSObject

@property (retain) CARObserverHashTable *observers;
@property (nonatomic) BOOL buddyFinished;

- (void)removeObserver:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)addObserver:(id)a0;
- (void)_updateBuddyFinished;

@end
