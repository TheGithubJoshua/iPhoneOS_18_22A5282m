@class TUCallCenter, NSObject;
@protocol OS_dispatch_queue;

@interface CSTUPhoneCallStateMonitor : CSPhoneCallStateMonitor

@property (retain, nonatomic) TUCallCenter *tuCallCenter;
@property (nonatomic) unsigned long long tuPhoneCallState;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

+ (id)sharedInstance;

- (id)init;
- (void)_stopMonitoring;
- (void)_startMonitoringWithQueue:(id)a0;
- (unsigned long long)phoneCallState;
- (void).cxx_destruct;
- (BOOL)firstPartyCall;
- (void)_callStatusDidChangeHandler:(id)a0;
- (unsigned long long)_fetchTUPhoneCallState;
- (void)_registerPhoneCallStateChangeNotifier;

@end
