@class RBSProcessMonitor, EFObservable;
@protocol EFObserver;

@interface MFAppStateMonitor : NSObject {
    _Atomic BOOL _isVisible;
    RBSProcessMonitor *_underlyingMonitor;
    EFObservable<EFObserver> *_observable;
}

@property (class, readonly, nonatomic) MFAppStateMonitor *sharedInstance;

@property (readonly, nonatomic) EFObservable *appIsVisibleObservable;
@property (readonly, nonatomic, getter=isVisible) BOOL visible;

- (void).cxx_destruct;
- (id)initWithBundleId:(id)a0;
- (void)dealloc;

@end
