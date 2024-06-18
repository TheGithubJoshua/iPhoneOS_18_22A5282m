@class NSMutableArray, NSString, PLSQLiteConnection, DRConfigMonitor, NSNumber, PLStorageOperator;

@interface PLSubmissions : NSObject

@property (retain) PLSQLiteConnection *connection;
@property (retain) NSString *request;
@property (retain) NSString *filterQuery;
@property (retain) NSString *onDemandTasking;
@property (retain) NSNumber *capValue;
@property (retain) DRConfigMonitor *taskingMonitor;
@property (weak) PLStorageOperator *storageOperator;
@property BOOL xpcActivityStarted;
@property (retain) NSMutableArray *submissionQueue;
@property double lastXPCActivityTimestamp;
@property double xpcActivityDelay;
@property (readonly) BOOL taskingStarted;

+ (id)sharedInstance;

- (void)deferXPCActivity:(id)a0;
- (id)init;
- (BOOL)taskingBlobExists;
- (void)stopWatchdogForSubmissionActivity:(id)a0;
- (void)disableHangtracer;
- (void)submitWithTaskingConfig:(id)a0;
- (void)rejectTaskingDRConfig;
- (void)logTaskingStatus:(int)a0 withAction:(int)a1 withTables:(id)a2;
- (BOOL)taskingTypeSpecified;
- (BOOL)internalSubmissionBehavior;
- (id)workQueue;
- (void)logSubmissionStateToAnalytics:(id)a0;
- (BOOL)taskingBlobDRExists;
- (id)enqueueFileForUpload:(id)a0;
- (void)emitBlobVerifiedEvent:(id)a0;
- (void)fileCleanupWithRecord:(id)a0;
- (void)finishXPCActivity:(id)a0;
- (id)generateMSSSubmissionWithPayload:(id)a0;
- (void)logOTAStatus:(id)a0;
- (void)stopDRTasking;
- (void)emitCollisionEvent:(id)a0;
- (void)enqueueSubmissionRecord:(id)a0;
- (void)logTaskingTablesTurnedOn:(id)a0;
- (void)setupDRTasking;
- (void)taskingCleanup;
- (void)removeFileAtPath:(id)a0;
- (short)submitReasonForToday;
- (id)getCurrentDRConfig;
- (void)enableHangtracer;
- (void)emitBlobDetectedEvent:(id)a0;
- (void)generatePLLSubmissionWithPayload:(id)a0;
- (void).cxx_destruct;
- (void)handleXPCActivityCallback:(id)a0;
- (void)attemptToUnregisterUploadSchedulingActivity;
- (void)taskingModeSafeguard;
- (void)generateOTASubmissionAndSendTaskingEndSubmission:(BOOL)a0;
- (void)prepareAndEnqueueSubmissionFilesWithConfig:(id)a0;
- (id)createWatchdogForSubmissionActivity:(id)a0;
- (void)registerUploadSchedulingActivity;
- (void)persistSubmissionInfo:(id)a0;
- (int)checkTaskingCompletionStatus;
- (id)configFromMonitor:(id)a0;
- (void)submitRecordToDiagnosticPipeline:(id)a0 withConfig:(id)a1;
- (BOOL)taskingBlobLegacyExists;
- (void)clearTaskingDRConfig;
- (void)sendSubmissionIssueSignature:(id)a0;
- (void)handleDRConfigUpdate:(id)a0 error:(id)a1;
- (id)getLastBatteryTimestampSystem;
- (BOOL)fullModeSubmissionBehavior;
- (id)generateCKRecordDictionaryWithRecord:(id)a0;
- (void)logTaskingStatus:(int)a0 withAction:(int)a1;
- (void)taskingModeSetup;
- (void)submitRecord:(id)a0 withActivity:(id)a1;
- (void)removeFileAtURL:(id)a0;
- (void)cleanupTemporarySubmissionFilesForTag:(id)a0;
- (void)initSubmissionQueue;

@end
