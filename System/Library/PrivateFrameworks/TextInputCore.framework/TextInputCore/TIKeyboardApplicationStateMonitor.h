@class NSDate, NSCalendar, NSString, NSLock, BKSApplicationStateMonitor, NSDictionary, NSMutableSet, NSMutableArray, NSObject;
@protocol TIKeyboardApplicationStateResponses;

@interface TIKeyboardApplicationStateMonitor : NSObject {
    double _appActivityTimeDurationThreshold;
    double _appActivityKeyboardUsageFractionThreshold;
}

@property (retain, nonatomic) BKSApplicationStateMonitor *applicationStateMonitor;
@property (retain, nonatomic) NSString *activeAppBundleID;
@property (nonatomic) double activeAppStartTime;
@property (retain, nonatomic) NSMutableSet *foregroundApps;
@property (retain, nonatomic) NSDate *activeAppStartDate;
@property (retain, nonatomic) NSDictionary *applicationStateDatabase;
@property (retain, nonatomic) NSMutableSet *imSuppressingBundleIDs;
@property (retain, nonatomic) NSLock *activeStateDataLock;
@property (retain, nonatomic) NSLock *databaseInUseLock;
@property (retain, nonatomic) NSDate *timeOfLastFlushToDisk;
@property (retain, nonatomic) NSCalendar *utcCalendar;
@property (retain, nonatomic) NSMutableArray *keyboardUsageTimes;
@property (nonatomic) double activeKeyboardStartTime;
@property (weak, nonatomic) NSObject<TIKeyboardApplicationStateResponses> *delegate;

- (id)init;
- (void)handleApplicationStateChange:(id)a0;
- (void)logOutKeyboardActivity:(double)a0;
- (BOOL)flushPendingChangesToDisk;
- (void)keyboardNoLongerInUse;
- (id)initWithAppActivityTimeDurationThreshold:(double)a0 keyboardUsageFractionThreshold:(double)a1;
- (BOOL)threadUnsafeFlushChangesToDiskWithImmediacy:(BOOL)a0;
- (void).cxx_destruct;
- (BOOL)ignoreAppExtension:(id)a0;
- (id)databaseLocation;
- (void)dealloc;
- (void)applicationUninstalled:(id)a0;
- (void)keyboardInUse;
- (void)startANewKeyboardActivity:(id)a0;

@end
