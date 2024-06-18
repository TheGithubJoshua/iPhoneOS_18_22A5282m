@class NSLock, NSXPCConnection;

@interface BYBuddyDaemonGeneralClient : NSObject {
    NSLock *_connectionLock;
    NSXPCConnection *_connection;
}

+ (id /* block */)factory;

- (id)init;
- (void)performSilentICDPUpgrade;
- (void).cxx_destruct;
- (id)_daemonConnection;
- (BOOL)setupAssistantNeedsToRun;
- (id)backupMetadata;
- (void)cancelDataMigratorDeferredExit;
- (void)cancelInternalSkipInfo;
- (void)deferDataMigratorExit;
- (void)enrollInSeedProgramNamed:(id)a0 withAssetAudience:(id)a1;
- (void)ensureShortLivedTokenUpgrade;
- (void)ensureSilentLoginUpgrade;
- (id)fetchAuthenticationContextForApplePay;
- (id)fetchAuthenticationContextForBiometric;
- (void)getInternalSkipInfo:(id /* block */)a0;
- (void)observeFinishSetupTriggers;
- (void)setInternalShouldSkipFlows:(BOOL)a0 skipExceptions:(id)a1;
- (void)startExpressSettingsUpload;
- (void)storeAuthenticationContextforApplyPay:(id)a0;
- (void)storeAuthenticationContextforBiometric:(id)a0;

@end
