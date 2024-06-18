@class NSNumber;
@protocol SASLockStateMonitorDelegate;

@interface SASLockStateMonitor : NSObject

@property (nonatomic) unsigned long long lockState;
@property (nonatomic) BOOL unlockedByTouchID;
@property (retain, nonatomic) NSNumber *assistantIsEnabled;
@property (weak, nonatomic) id<SASLockStateMonitorDelegate> delegate;

- (BOOL)isScreenOn;
- (BOOL)isBlocked;
- (BOOL)hasUnlockedSinceBoot;
- (id)init;
- (unsigned long long)_currentLockState;
- (void)_updateLockState;
- (void).cxx_destruct;
- (void)_lockStateDidChange:(id)a0;
- (void)dealloc;

@end
