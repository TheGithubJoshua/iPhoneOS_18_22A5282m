@class NSString, CDPContext;

@interface CDPDSecureBackupProxyImpl : NSObject <CDPDSecureBackupProxy>

@property (retain, nonatomic) CDPContext *cdpContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)secureBackupContextWithInfo:(id)a0;
- (id)recoverWithInfo:(id)a0 error:(id *)a1;
- (id)initWithContext:(id)a0;
- (void)cacheRecoveryKey:(id)a0 completionBlock:(id /* block */)a1;
- (void)disableWithInfo:(id)a0 completionBlock:(id /* block */)a1;
- (id)accountInfoWithInfo:(id)a0 error:(id *)a1;
- (id)secureBackupContext;
- (BOOL)disableWithInfo:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (void)enableWithInfo:(id)a0 completionBlock:(id /* block */)a1;
- (void)uncacheAllSecrets;
- (BOOL)enableWithInfo:(id)a0 error:(id *)a1;
- (id)activityTypeString;

@end
