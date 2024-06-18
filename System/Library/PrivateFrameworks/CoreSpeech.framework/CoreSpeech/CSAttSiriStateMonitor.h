@class NSObject;
@protocol OS_dispatch_queue;

@interface CSAttSiriStateMonitor : CSEventMonitor

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) unsigned long long attendingState;

+ (id)sharedInstance;

- (void)updateState:(unsigned long long)a0;
- (id)init;
- (void)_stopMonitoring;
- (void)_startMonitoringWithQueue:(id)a0;
- (BOOL)isAttendingForDictation;
- (BOOL)isAttending;
- (void).cxx_destruct;
- (unsigned long long)getAttendingState;

@end
