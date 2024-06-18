@class NSString, DRConfigMonitor, NSDate;

@interface PLRapidController : NSObject

@property long long stage;
@property double samplingPercentage;
@property (retain) NSString *taskingRequestReason;
@property (retain) NSDate *logCreationStartDate;
@property (retain) NSDate *logCreationEndDate;
@property (retain) NSDate *logCreationResumeDate;
@property (retain) NSString *mdLogFilePath;
@property (retain) NSString *mdLogCompressedFilePath;
@property (retain) NSString *mssFilePath;
@property (retain) NSString *mssCompressedFilePath;
@property (retain) NSString *failureReason;
@property (retain) DRConfigMonitor *taskingMonitor;
@property (retain) NSString *configUUID;

+ (void)cleanup;
+ (void)dropTablesFromDB:(id)a0 excludingSet:(id)a1;
+ (id)appsToKeep:(id)a0;
+ (id)sharedInstance;
+ (int)hangTypeFromStr:(id)a0;
+ (BOOL)randomBoolWithYesPercentage:(double)a0;
+ (void)dropDataFromDB:(id)a0 withConfig:(id)a1;
+ (BOOL)diagnosticLogSubmissionEnabled;
+ (id)dataCollectionCriterion;
+ (id)allTablesInDB:(id)a0;
+ (BOOL)deferActivity:(id)a0;
+ (void)offsetTimestampsInDB:(id)a0 withConfig:(id)a1 withBaseTimestamp:(double)a2;
+ (void)roundDataInDB:(id)a0 withConfig:(id)a1;
+ (id)trimConditionsForTables:(id)a0 trimDate:(id)a1;
+ (BOOL)finishActivity:(id)a0 withStatus:(long long)a1;

- (id)init;
- (id)setupConnection;
- (id)topAppsRunTime;
- (id)uploadLog:(id)a0;
- (void)registerDataCollectionActivity;
- (void)addMSSContext:(id)a0;
- (void)dropDuplicateRows:(id)a0;
- (BOOL)shouldDoRapidCollection;
- (void)setMSSFilePath;
- (void)initializeTaskingParams;
- (void)logSignpostDataToDB:(id)a0;
- (void)trimAndFilterDB:(id)a0 withConfig:(id)a1;
- (void)logHangSignposts:(id)a0 toDB:(id)a1;
- (void)logToCADataUploadState:(id)a0;
- (void)stopDRTasking;
- (void)setupDRTasking;
- (BOOL)packageDB:(id)a0;
- (void)resetActivity;
- (void)persistActivityState;
- (void).cxx_destruct;
- (void)addMDLogContext:(id)a0;
- (void)handleXPCActivityCallback:(id)a0;
- (BOOL)preparePerfPowerlog:(id)a0 shouldDefer:(BOOL *)a1;
- (void)rejectTaskingConfig:(id)a0;
- (id)logGenerationStats;
- (void)setMDLogCompressedFilePath;
- (BOOL)prepareMSSLog;
- (id)generateContextDictionary:(id)a0;
- (void)logToCALogGenerationStats:(id)a0;
- (id)configFromMonitor:(id)a0;
- (void)dropAppVersions:(id)a0;
- (BOOL)copyDB;
- (void)createHangTableInDB:(id)a0;
- (void)pruneDB:(id)a0 withConfig:(id)a1;
- (void)setMDLogFilePath;
- (void)handleDRConfigUpdate:(id)a0 error:(id)a1;
- (void)setLogCreationStartDate;
- (void)setMSSCompressedFilePath;
- (void)completeTaskingConfig:(id)a0;
- (id)packageAllLogs;
- (void)initializeSamplingPercentage;
- (id)generateDummyPayload;

@end
