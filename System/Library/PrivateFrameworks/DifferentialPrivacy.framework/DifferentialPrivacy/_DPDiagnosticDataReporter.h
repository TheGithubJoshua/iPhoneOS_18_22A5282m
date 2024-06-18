@interface _DPDiagnosticDataReporter : NSObject

+ (id)blacklistFileRemovalKey;
+ (id)staleReportFileRemovalKey;
+ (id)blacklistFileCreationKey;
+ (id)parsecReportSubmissionKey;
+ (void)clearScalarKey:(id)a0;
+ (void)addValue:(long long)a0 forDPKey:(id)a1 scalarKeyPrefix:(id)a2;
+ (void)addValue:(long long)a0 forScalarKey:(id)a1;
+ (void)clearDPKey:(id)a0 scalarKeyPrefix:(id)a1;
+ (id)IOTrackingPrefix;
+ (void)setValue:(long long)a0 forScalarKey:(id)a1;
+ (id)staleRecordRemovalKey;
+ (id)daReportSubmissionKey;
+ (id)diagnosticReportKeyFor:(id)a0 scalerKeyPrefix:(id)a1;
+ (id)budgetUpdateKey;
+ (id)submittedRecordRemovalKey;
+ (void)setValue:(long long)a0 forDPKey:(id)a1 scalarKeyPrefix:(id)a2;

@end
