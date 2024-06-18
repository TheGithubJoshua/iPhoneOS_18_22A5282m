@class NSString, CoreTelephonyClient, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface MBCellularDataSubscriptionMonitor : NSObject <CoreTelephonyClientDataDelegate> {
    BOOL _backupOnCellularSupportChanged;
}

@property unsigned long long backupOnCellularSupport;
@property int cellularRadioType;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *delegateTimer;
@property (retain) CoreTelephonyClient *telephonyClient;
@property (nonatomic) unsigned long long timeout;
@property (copy, nonatomic) id /* block */ backupOnCellularSupportHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)currentDataSimChanged:(id)a0;
- (void)_cancelDelegateTimer;
- (void)dataSettingsChanged:(id)a0;
- (BOOL)_startDelegateTimerWithTimeout:(unsigned long long)a0;
- (void)cancel;
- (id)initWithQueue:(id)a0 timeout:(unsigned long long)a1;
- (void)_refreshBackupOnCellularSupportWithTimeout:(unsigned long long)a0;
- (void)start;
- (void)internetDataStatus:(id)a0;
- (void).cxx_destruct;
- (id)initWithTimeout:(unsigned long long)a0;
- (unsigned long long)_backupOnCellularSupportWithError:(id *)a0;

@end
