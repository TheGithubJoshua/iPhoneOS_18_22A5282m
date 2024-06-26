@class ACAccount, MBManager;

@interface DKBackupProvider : NSObject <MBManagerDelegate>

@property (retain, nonatomic) ACAccount *account;
@property (retain, nonatomic) MBManager *manager;
@property (copy, nonatomic) id /* block */ progressHandler;
@property (copy, nonatomic) id /* block */ completionHandler;

- (id)initWithAccount:(id)a0;
- (BOOL)isRestoring;
- (void)managerDidLoseConnectionToService:(id)a0;
- (void)cancel;
- (BOOL)isBackupEnabled;
- (void).cxx_destruct;
- (BOOL)isBackingUp;
- (void)manager:(id)a0 didUpdateProgress:(float)a1 estimatedTimeRemaining:(unsigned long long)a2;
- (void)manager:(id)a0 didFailBackupWithError:(id)a1;
- (void)managerDidFinishBackup:(id)a0;
- (BOOL)isManualBackupOnCellularAllowed;
- (void)startBackupWithExpensiveCellularAllowed:(BOOL)a0 progressHandler:(id /* block */)a1 completionHandler:(id /* block */)a2;

@end
