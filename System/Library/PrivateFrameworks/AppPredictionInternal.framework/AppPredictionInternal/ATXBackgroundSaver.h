@class _PASLock, ATXSigtermListener, NSObject;
@protocol OS_dispatch_queue;

@interface ATXBackgroundSaver : NSObject <ATXSigtermObserver> {
    NSObject<OS_dispatch_queue> *_queue;
    id /* block */ _block;
    _PASLock *_lock;
    ATXSigtermListener *_sigtermListener;
}

- (id)init;
- (id)initWithQueue:(id)a0 block:(id /* block */)a1;
- (void)scheduleSaveImmediately;
- (void)_cancelSaveTimer;
- (void)_cancelSaveTimerWithLockWitness:(id)a0;
- (void).cxx_destruct;
- (void)_saveImmediatelyOnSigterm;
- (void)dealloc;
- (void)handleSigterm;
- (void)scheduleSave;

@end
