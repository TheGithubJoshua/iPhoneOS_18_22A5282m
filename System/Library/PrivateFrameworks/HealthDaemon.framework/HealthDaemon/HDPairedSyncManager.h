@class NSString, HDProfile, NSHashTable, PSYSyncCoordinator, NSObject;
@protocol OS_dispatch_queue;

@interface HDPairedSyncManager : NSObject <PSYSyncCoordinatorDelegate, HDDiagnosticObject> {
    PSYSyncCoordinator *_pairedSyncCoordinator;
    HDProfile *_profile;
    NSObject<OS_dispatch_queue> *_queue;
    NSHashTable *_unfinishedSyncSessions;
}

@property (readonly) PSYSyncCoordinator *syncCoordinator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)syncCoordinatorWithServiceName:(id)a0;

- (void)syncCoordinator:(id)a0 beginSyncSession:(id)a1;
- (void)syncCoordinator:(id)a0 didInvalidateSyncSession:(id)a1;
- (void).cxx_destruct;
- (id)diagnosticDescription;
- (id)initWithProfile:(id)a0 queue:(id)a1;
- (void)syncCoordinatorDidChangeSyncRestriction:(id)a0;
- (BOOL)permitSynchronization;
- (void)dealloc;

@end
