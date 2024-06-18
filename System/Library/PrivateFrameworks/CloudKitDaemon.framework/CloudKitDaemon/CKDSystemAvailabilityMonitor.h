@class NSMutableSet;

@interface CKDSystemAvailabilityMonitor : NSObject

@property (retain, nonatomic) NSMutableSet *watcherWrappers;
@property unsigned long long availabilityState;
@property unsigned long long simulatedAvailabilityState;

+ (void)initialize;
+ (id)sharedMonitor;

- (BOOL)registerWatcher:(id)a0;
- (id)_init;
- (void)resetToUnavailableForUnitTests;
- (void)removeNotifications;
- (void)simulateBuddyCompletedForUnitTests;
- (void)_systemMayNowBeReady;
- (void).cxx_destruct;
- (void)simulateFirstUnlockForUnitTests;
- (void)_logAvailabilityDescription;
- (void)dealloc;
- (unsigned long long)currentAvailabilityState;
- (void)assertAvailability:(unsigned long long)a0;
- (void)_clearVanishedWatchers;

@end
