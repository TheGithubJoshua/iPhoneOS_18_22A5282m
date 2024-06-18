@class NSObject, AnalyticsWorkspace;
@protocol OS_dispatch_queue, ABCPersistentStoreControllerDelegate;

@interface ABCPersistentStoreController : NSObject {
    AnalyticsWorkspace *_workspace;
    BOOL workspaceReady;
    AnalyticsWorkspace *tempWorkspace;
    NSObject<OS_dispatch_queue> *storeQueue;
}

@property (readonly, nonatomic) AnalyticsWorkspace *workspace;
@property (weak, nonatomic) id<ABCPersistentStoreControllerDelegate> delegate;

- (void)removeCaseStorageWithID:(id)a0;
- (void)save:(BOOL)a0;
- (id)initWithDirectory:(id)a0;
- (id)workspace;
- (void)shutdown;
- (id)caseSummaryAnalytics;
- (id)init;
- (void)removeCaseStoragesWithCaseIDs:(id)a0;
- (id)prepareDataDirectoryWithName:(id)a0 containerPath:(id)a1;
- (id)uploadRecordAnalytics;
- (id)initWithName:(id)a0 inDirectory:(id)a1;
- (void)removeAllCaseStorages;
- (void)caseAttachmentsForDiagnosticCaseIDs:(id)a0 queue:(id)a1 reply:(id /* block */)a2;
- (id)caseStorageAnalytics;
- (void)cleanupUploadRecord;
- (void)cleanupDiagnosticCaseStorage;
- (void).cxx_destruct;
- (void)cleanupDiagnosticCaseUsage;
- (BOOL)prepareWorkspaceWithDirectoryPath:(id)a0;
- (void)save;
- (void)cleanupDiagnosticCaseSummary;
- (id)caseUsageAnalytics;
- (void)caseAttachmentsForAllDiagnosticCasesWithQueue:(id)a0 reply:(id /* block */)a1;
- (void)removeCaseStoragesWithUUIDs:(id)a0;

@end
