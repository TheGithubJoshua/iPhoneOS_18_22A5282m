@class CDPDaemonConnection;

@interface CDPTermsInfoBackupController : NSObject

@property (retain, nonatomic) CDPDaemonConnection *daemonConn;

- (id)init;
- (void).cxx_destruct;
- (void)fetchTermsAcceptanceForAccount:(id)a0 completion:(id /* block */)a1;
- (void)saveTermsAcceptance:(id)a0 completion:(id /* block */)a1;

@end
