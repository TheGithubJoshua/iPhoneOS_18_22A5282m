@interface CDPStateController : CDPController

- (id)init;
- (BOOL)isDeviceEscrowRecordRecoverable:(id *)a0;
- (void)startCircleApplicationApprovalServer:(id /* block */)a0;
- (void)attemptToEscrowPreRecord:(id)a0 completion:(id /* block */)a1;
- (id)generateRandomRecoveryKey:(id *)a0;
- (BOOL)shouldPerformRepairWithOptionForceFetch:(BOOL)a0 error:(id *)a1;
- (void)generateEscrowRecordReportUsingCache:(BOOL)a0 completion:(id /* block */)a1;
- (BOOL)isRecoveryKeyAvailableWithError:(id *)a0;
- (void)shouldPerformSilentEscrowRecordRepairUsingCache:(BOOL)a0 completion:(id /* block */)a1;
- (void)repairCloudDataProtectionStateWithCompletion:(id /* block */)a0;
- (void)performSilentEscrowRecordRepairWithCompletion:(id /* block */)a0;
- (void)finishOfflineLocalSecretChangeWithCompletion:(id /* block */)a0;
- (void)handleCloudDataProtectionStateWithCompletion:(id /* block */)a0;
- (void)fetchEscrowRecordDevicesWithContext:(id)a0 usingCache:(BOOL)a1 completion:(id /* block */)a2;
- (void)startCircleApplicationApprovalServerSkipEscrowFetches:(id /* block */)a0;
- (void)recoverWithSquirrel:(id /* block */)a0;
- (void)handleURLActionWithInfo:(id)a0 completion:(id /* block */)a1;
- (BOOL)deleteRecoveryKeyWithError:(id *)a0;
- (void)shouldPerformRepairWithOptionForceFetch:(BOOL)a0 completion:(id /* block */)a1;
- (void)deleteRecoveryKey:(id /* block */)a0;
- (void)recoverAndSynchronizeWithSquirrel:(id /* block */)a0;
- (BOOL)isManateeAvailable:(id *)a0;
- (BOOL)updateLastSilentEscrowRecordRepairAttemptDate:(id)a0 error:(id *)a1;
- (void)startSilentEscrowRecordRepairWithCompletion:(id /* block */)a0;
- (void)isRecoveryKeyAvailableWithCompletion:(id /* block */)a0;
- (void)generateNewRecoveryKey:(id /* block */)a0;
- (BOOL)shouldPerformSilentEscrowRecordRepairUsingCache:(BOOL)a0 error:(id *)a1;
- (void)localSecretChangedTo:(id)a0 secretType:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)handleURLActionWithInfo:(id)a0;
- (void)deviceEscrowRecordRecoverableWithContext:(id)a0 completion:(id /* block */)a1;
- (void)attemptToEscrowPreRecord:(id)a0 preRecordUUID:(id)a1 secretType:(unsigned long long)a2 completion:(id /* block */)a3;
- (void)finishCyrusFlowAfterTermsAgreementWithContext:(id /* block */)a0;
- (void)verifyRecoveryKey:(id /* block */)a0;

@end
