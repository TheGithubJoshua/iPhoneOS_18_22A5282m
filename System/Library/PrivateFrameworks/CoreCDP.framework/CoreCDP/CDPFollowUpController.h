@class CDPDaemonConnection;

@interface CDPFollowUpController : NSObject {
    CDPDaemonConnection *_daemonConn;
}

- (id)init;
- (BOOL)postFollowUpWithContext:(id)a0 error:(id *)a1;
- (void)invalidate;
- (void).cxx_destruct;
- (BOOL)clearFollowUpWithContext:(id)a0 error:(id *)a1;
- (void)dealloc;

@end
