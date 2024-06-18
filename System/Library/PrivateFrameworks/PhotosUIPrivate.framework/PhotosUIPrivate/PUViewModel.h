@class PUViewModelChange, NSHashTable, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface PUViewModel : NSObject {
    NSObject<OS_dispatch_queue> *_observerQueue;
    long long _nestedChanges;
    NSMutableArray *_pendingChangeBlocks;
    long long _numAppliedPendingChanges;
    PUViewModelChange *_currentChange;
}

@property (nonatomic, getter=_isPublishingChanges, setter=_setPublishingChanges:) BOOL _publishingChanges;
@property (readonly, nonatomic) NSHashTable *_changeObservers;
@property (readonly, nonatomic) PUViewModelChange *currentChange;
@property (readonly, nonatomic) PUViewModelChange *currentChangeIfExists;

- (void)unregisterChangeObserver:(id)a0;
- (void)registerChangeObserver:(id)a0;
- (void)didPublishChanges;
- (id)init;
- (void)performChanges:(id /* block */)a0;
- (void)didPerformChanges;
- (void)_didChange;
- (void).cxx_destruct;
- (void)_publishChanges;
- (void)_willChange;
- (id)debugDetailedDescription;
- (id)newViewModelChange;
- (void)_applyPendingChanges;
- (void)assertInsideChangesBlock;
- (void)willPublishChanges;

@end
