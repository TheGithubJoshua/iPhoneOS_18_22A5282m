@class HDDaemon;

@interface HDAutoBugCaptureReporter : NSObject

@property (copy, nonatomic) id /* block */ unitTesting_didReportHandler;
@property (readonly, weak, nonatomic) HDDaemon *daemon;

+ (void)reportNotFinalSeriesSampleWithClass:(Class)a0 count:(long long)a1 datumCount:(long long)a2 reason:(id)a3;

- (id)initWithDaemon:(id)a0;
- (void)reportCorruptionForDatabase:(id)a0 resultCode:(int)a1;
- (void)reportDataCollectionSeriesProblem:(id)a0 quantityType:(id)a1;
- (void)reportMissingSource:(id)a0 duringSyncFromStore:(id)a1;
- (void)reportDatabaseMigrationFailureWithContext:(id)a0;
- (void).cxx_destruct;
- (void)reportQueryDurationWithServer:(id)a0 dataCount:(long long)a1 duration:(double)a2;
- (void)reportSummarySharingInvitationFailureForOperation:(id)a0 error:(id)a1;
- (void)reportApplyDataFailure:(Class)a0 duringSyncFromStore:(id)a1 error:(id)a2;
- (void)reportJournalFailureWithErrorDescription:(id)a0 provenance:(id)a1 error:(id)a2;

@end
