@class NSObject;
@protocol OS_dispatch_queue;

@interface IMLogDump : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *logDumpQueue;
@property (readonly, nonatomic) BOOL shouldCollectPowerWifiStats;

+ (id)sharedInstance;

- (void)_noteSyncEndedForDurationKey:(id)a0 dateKey:(id)a1;
- (id)init;
- (void)incrementCoreDuetSyncAttempts;
- (id)createTodaysStatisticDictionaryIfNeeded;
- (void)incrementAHDASyncAttempts;
- (void)printPowerAndWifiStats;
- (id)_predicateToAppend:(id)a0;
- (id)_lastHoursToAppend:(int)a0;
- (void)clearSyncStats;
- (id)_calculatePowerAndWifiConnectedTimeInMinutesForDictionary:(id)a0;
- (BOOL)_isOnPower;
- (void)_incrementSyncAttemptsWithKey:(id)a0 syncDateKey:(id)a1;
- (void)dumpLogsToFolderAtPath:(id)a0 withFileName:(id)a1 lastHours:(int)a2 predicate:(id)a3 includeCKDebug:(BOOL)a4 withCompletion:(id /* block */)a5;
- (void).cxx_destruct;
- (void)_compressAndDeleteFilesAtPath:(id)a0 destinationFilePath:(id)a1 withCompletion:(id /* block */)a2;
- (void)noteAHDASyncEnded;
- (BOOL)_isWifiUsable;
- (id)_dictionaryForDayKey:(id)a0;
- (void)printSyncDurationStats;
- (void)_includeCloudKitDebugFilesAtPath:(id)a0;
- (BOOL)_checkArgumentValidity:(id)a0 withFileName:(id)a1 withPredicate:(id)a2 withError:(id *)a3;
- (void)dumpMOCLoggingMetaData;
- (void)_calculateConnectedMinutesForDateKey:(id)a0 durationKey:(id)a1 daysDictionary:(id)a2 totalDurationDictionary:(id)a3 totalDurationKey:(id)a4;
- (void)printIfWeAreInTheMiddleOfASync;
- (void)noteCoreDuetSyncEnded;
- (id)logShowCommandToFilePath:(id)a0 lastHours:(int)a1 predicate:(id)a2;
- (double)_calculateMinutesSyncingWithDurationKey:(id)a0 attemptDateKey:(id)a1;

@end
