@class NSString, NSObject;
@protocol OS_os_log, OS_dispatch_source, OS_dispatch_queue, PowerUISignalMonitorDelegate;

@interface PowerUIWalletSignalMonitor : NSObject <PowerUISignalMonitor>

@property (retain, nonatomic) id<PowerUISignalMonitorDelegate> delegate;
@property (retain, nonatomic) NSObject<OS_os_log> *log;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *waitForFinalChangeTimer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)monitorWithDelegate:(id)a0;
+ (id)wallet;

- (void)stopMonitoring;
- (void)startMonitoring;
- (id)initWithDelegate:(id)a0;
- (unsigned long long)signalID;
- (id)requiredFullChargeDate;
- (id)detectedSignals;
- (void).cxx_destruct;
- (void)sourceInformationChangedNotification:(id)a0;

@end
