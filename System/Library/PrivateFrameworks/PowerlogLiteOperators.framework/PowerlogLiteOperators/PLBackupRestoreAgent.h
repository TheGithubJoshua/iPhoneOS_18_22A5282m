@class MBManager;

@interface PLBackupRestoreAgent : PLAgent

@property (readonly) MBManager *backupRestoreManager;
@property (nonatomic) BOOL backupState;
@property (nonatomic) BOOL restoreState;

+ (void)load;
+ (id)defaults;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventPointDefinitions;
+ (id)entryEventIntervalDefinitions;
+ (id)entryEventNoneDefinitions;
+ (id)entryAggregateDefinitions;
+ (id)entryEventForwardDefinitions;

- (void)initOperatorDependancies;
- (id)init;
- (void)log;
- (void)updateBackupState;
- (void)updateRestoreState;
- (void).cxx_destruct;
- (void)didChangeEvent:(id)a0 toState:(BOOL)a1;

@end
