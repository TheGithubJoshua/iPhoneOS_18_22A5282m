@class HKObserverSet, NSString, HKSynchronousObserverSet, NSObject;
@protocol OS_dispatch_queue;

@interface HDContentProtectionManager : NSObject <HDDiagnosticObject> {
    _Atomic int _contentProtectionState;
    _Atomic BOOL _shouldIgnoreUnlockedState;
    _Atomic BOOL _unlockedSinceBoot;
    int _notifyToken;
    NSObject<OS_dispatch_queue> *_observationQueue;
    HKObserverSet *_observers;
    HKSynchronousObserverSet *_synchronousObservers;
    double _beganObservingTime;
    double _lastNotificationTime;
    double _lastRecheckTime;
}

@property (nonatomic) BOOL shouldIgnoreUnlockedState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isProtectedDataAvailableWithState:(long long)a0;

- (BOOL)isProtectedDataAvailable;
- (id)init;
- (void)setContentProtectionState:(long long)a0;
- (void)addSynchronousContentProtectionObserver:(id)a0;
- (void)recheckContentProtectionState;
- (id)initWithNotifications:(BOOL)a0 initialState:(long long)a1 unlockedSinceBoot:(BOOL)a2;
- (void).cxx_destruct;
- (id)diagnosticDescription;
- (void)dealloc;
- (void)removeContentProtectionObserver:(id)a0;
- (void)addContentProtectionObserver:(id)a0 withQueue:(id)a1;
- (BOOL)deviceUnlockedSinceBoot;
- (long long)observedState;

@end
