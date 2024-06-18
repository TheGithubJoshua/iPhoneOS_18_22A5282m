@class HKSPObserverSet;

@interface HKSPMuteMonitor : NSObject {
    int _notifyToken;
    HKSPObserverSet *_observers;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BOOL _isMuted;
}

@property (readonly, nonatomic) BOOL isMuted;

- (void)removeObserver:(id)a0;
- (id)init;
- (void)addObserver:(id)a0 queue:(id)a1;
- (void).cxx_destruct;
- (void)setIsMuted:(BOOL)a0;
- (void)dealloc;
- (void)_updateIsMuted;

@end
