@class WFWorkflowQuarantine, WFDebouncer, WFVariableAvailability, WFWorkflowIcon, WFInputAction, NSString, WFWorkflowReference, WFDatabase, NSArray, WFIcon, WFActionGroupingCache, WFWorkflowRecord;
@protocol WFWorkflowStorage, WFWorkflowEditingDelegate, WFWorkflowNoInputBehavior;

@interface WFWorkflow : NSObject <WFNaming, WFActionEventObserver, WFDatabaseObjectObserver, NSCopying>

@property (readonly, copy, nonatomic) NSArray *actions;
@property (readonly, copy, nonatomic) NSString *wfName;
@property (readonly, nonatomic) NSString *attributionTitle;
@property (readonly, nonatomic) WFIcon *attributionIcon;
@property (readonly, nonatomic, getter=isResidentCompatible) BOOL residentCompatible;
@property (retain, nonatomic) id<WFWorkflowStorage> storageProvider;
@property (retain, nonatomic) WFVariableAvailability *variableAvailability;
@property (retain, nonatomic) WFActionGroupingCache *groupingCache;
@property (copy, nonatomic) NSArray *outputClasses;
@property (nonatomic) BOOL hasShortcutInputVariables;
@property (nonatomic) BOOL hasOutputFallback;
@property (nonatomic) BOOL shouldAutoUpdateAssociatedAppBundleIdentifier;
@property (nonatomic) BOOL saveDisabled;
@property (nonatomic) BOOL serializeActionsWhenSaving;
@property (readonly, nonatomic) WFDebouncer *saveDebouncer;
@property (getter=isSaving) BOOL saving;
@property (nonatomic) BOOL deletedFromDatabase;
@property (retain, nonatomic) WFWorkflow *retainedSelf;
@property (copy, nonatomic) NSArray *inputClasses;
@property (retain, nonatomic) id<WFWorkflowNoInputBehavior> noInputBehavior;
@property (retain, nonatomic) WFInputAction *inputAction;
@property (readonly, nonatomic) NSArray *actions;
@property (copy, nonatomic) NSArray *importQuestions;
@property (readonly, nonatomic) WFWorkflowReference *reference;
@property (readonly, nonatomic) WFWorkflowRecord *record;
@property (readonly, nonatomic) long long environment;
@property (readonly, nonatomic) NSString *workflowID;
@property (copy, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *legacyName;
@property (retain, nonatomic) WFWorkflowIcon *icon;
@property (copy, nonatomic) NSArray *workflowTypes;
@property (readonly, nonatomic) NSString *workflowSubtitle;
@property (readonly, nonatomic) NSString *actionsDescription;
@property (copy, nonatomic) NSString *associatedAppBundleIdentifier;
@property (readonly, nonatomic) NSString *resolvedAssociatedAppBundleIdentifier;
@property (readonly, nonatomic) NSString *galleryIdentifier;
@property (copy, nonatomic) NSString *source;
@property (readonly, nonatomic, getter=isDeleted) BOOL deleted;
@property (readonly, nonatomic) BOOL hiddenFromLibraryAndSync;
@property (nonatomic) BOOL disabledOnLockScreen;
@property (readonly, nonatomic) WFWorkflowQuarantine *quarantine;
@property (nonatomic) long long remoteQuarantineStatus;
@property (readonly, nonatomic) WFDatabase *database;
@property (readonly, nonatomic) BOOL hasStorageProvider;
@property (nonatomic) BOOL ignoreModifications;
@property (weak, nonatomic) id<WFWorkflowEditingDelegate> editingDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultName;
+ (BOOL)attemptRecoveryFromError:(id)a0 optionIndex:(unsigned long long)a1;
+ (id)effectiveInputClassesFromInputClasses:(id)a0 workflowTypes:(id)a1;
+ (id)workflowWithReference:(id)a0 database:(id)a1 error:(id *)a2;
+ (BOOL)checkClientVersion:(id)a0 currentVersion:(id)a1 error:(id *)a2;
+ (id)localizedSubtitleWithActionCount:(unsigned long long)a0;
+ (id)supportedInputClassNames;
+ (id)supportedInputClasses;
+ (id)workflowWithReference:(id)a0 database:(id)a1 migrateIfNecessary:(BOOL)a2 environment:(long long)a3 error:(id *)a4;

- (void)addAction:(id)a0;
- (void)removeActions:(id)a0;
- (void)databaseDidChange:(id)a0 modified:(id)a1 inserted:(id)a2 removed:(id)a3;
- (id)init;
- (BOOL)hasActions;
- (id)localizedSubtitle;
- (void).cxx_destruct;
- (void)save;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (void)removeAction:(id)a0;
- (void)generateShortcutRepresentation:(id /* block */)a0;
- (BOOL)addWatchWorkflowTypeIfEligible;
- (id)initWithRecord:(id)a0 reference:(id)a1 storageProvider:(id)a2 error:(id *)a3;
- (void)moveActionsAtIndexes:(id)a0 toIndexes:(id)a1;
- (void)updateReference;
- (id)initWithName:(id)a0 description:(id)a1 associatedAppBundleIdentifier:(id)a2 actions:(id)a3;
- (void)_insertAction:(id)a0 atIndex:(unsigned long long)a1;
- (void)action:(id)a0 didChangeVariableName:(id)a1 to:(id)a2;
- (void)action:(id)a0 parameterStateDidChangeForKey:(id)a1;
- (void)action:(id)a0 supplementalParameterValueDidChangeForKey:(id)a1;
- (void)actionGroupingIdentifierDidChange:(id)a0;
- (void)actionGroupingIdentifierWillChange:(id)a0;
- (void)actionNameDidChange:(id)a0;
- (void)actionOutputDetailsDidChange:(id)a0;
- (id)actionsGroupedWithAction:(id)a0;
- (void)addWatchWorkflowType;
- (id)additionalEffectiveInputClassesForTriggers:(id)a0;
- (void)configureAsSingleStepShortcutIfNecessary:(id /* block */)a0;
- (void)configureWithStandaloneShortcutRepresentation:(id)a0 homeSummaryText:(id)a1;
- (id)createUserActivityForViewing;
- (id)effectiveInputClasses;
- (void)fixControlFlowActionLayout;
- (void)generateStandaloneShortcutRepresentation:(id /* block */)a0;
- (void)getHomeSummaryTextWithCompletion:(id /* block */)a0;
- (id)inferOutputTypesWithHasOutputFallback:(BOOL *)a0;
- (id)initWithActionDonation:(id)a0 error:(id *)a1;
- (id)initWithRecord:(id)a0 reference:(id)a1 storageProvider:(id)a2 migrateIfNecessary:(BOOL)a3 environment:(long long)a4 error:(id *)a5;
- (id)initWithShortcut:(id)a0 error:(id *)a1;
- (void)initializeAddedAction:(id)a0;
- (void)insertAction:(id)a0 atIndex:(unsigned long long)a1;
- (void)insertActions:(id)a0 atIndexes:(id)a1;
- (BOOL)isEligibleForWatch;
- (BOOL)isUntitled;
- (void)loadFromRecord;
- (id)localizedActionsSummary;
- (void)performBatchOperation:(id /* block */)a0;
- (id)prepareForSharingWithOptions:(id)a0;
- (BOOL)record:(id)a0 isEquivalentToRecord:(id)a1;
- (void)reloadFromRecord;
- (void)requestToRunScriptsOnDomain:(id)a0 withUserInterface:(id)a1 database:(id)a2 completionHandler:(id /* block */)a3;
- (void)saveFromDebouncer:(id)a0;
- (void)saveWithCompletionBlock:(id /* block */)a0;
- (BOOL)shouldShowInputAction;
- (void)updateInputAction;
- (void)updateMinimumClientVersion;
- (id)validImportQuestions;

@end