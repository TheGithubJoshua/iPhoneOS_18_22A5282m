@class BKSApplicationStateMonitor;
@protocol SOSProcessObserverDelegate;

@interface SOSProcessObserver : NSObject

@property (readonly, nonatomic) BKSApplicationStateMonitor *applicationMonitor;
@property (nonatomic) BOOL cachedApplicationRunning;
@property (weak, nonatomic) id<SOSProcessObserverDelegate> delegate;

+ (BOOL)isApplicationStateRunning:(unsigned int)a0;

- (id)initWithBundleIdentifier:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)applicationMonitorStateDidChangeForBundleIdentifier:(id)a0;

@end
