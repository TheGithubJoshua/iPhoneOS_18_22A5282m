@class NSString, MAAutoAssetSelector, NSURL, NSDictionary, NSObject, SUCoreConnectClient;
@protocol OS_dispatch_queue;

@interface MAAutoAsset : NSObject <SUCoreConnectClientDelegate, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) MAAutoAssetSelector *contentLockedSelector;
@property (retain, nonatomic) NSString *contentLockedReason;
@property (retain, nonatomic) NSURL *localContentURL;
@property (retain, nonatomic) NSDictionary *assetAttributes;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *completionDispatchQueue;
@property (readonly, nonatomic) NSString *clientProcessName;
@property (readonly, nonatomic) long long clientProcessID;
@property (retain, nonatomic) SUCoreConnectClient *connectionClient;
@property (nonatomic) int locksOfContent;
@property (readonly, nonatomic) NSString *autoAssetClientName;
@property (readonly, nonatomic) MAAutoAssetSelector *assetSelector;
@property (readonly, nonatomic) NSString *updateCategoryDesiredByClient;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)endAllPreviousLocksOfSelectorSync:(id)a0;
+ (void)eliminateAllForAssetType:(id)a0 completion:(id /* block */)a1;
+ (void)interestInContent:(id)a0 forAssetSelector:(id)a1 withInterestPolicy:(id)a2 completion:(id /* block */)a3;
+ (void)stageDetermineAllAvailable:(id)a0 forTargetBuildVersion:(id)a1 completion:(id /* block */)a2;
+ (void)stageDownloadAll:(long long)a0 reportingProgress:(id /* block */)a1 completion:(id /* block */)a2;
+ (id)endAllPreviousLocksOfReasonSync:(id)a0 forAssetSelector:(id)a1;
+ (void)determineIfAvailable:(id)a0 forAssetSelector:(id)a1 completion:(id /* block */)a2;
+ (void)stagePurgeAll:(id /* block */)a0;
+ (id)interestInContentSync:(id)a0 forAssetSelector:(id)a1;
+ (id)eliminateAllForSelectorSync:(id)a0;
+ (void)endPreviousLocksOfReason:(id)a0 forAssetSelector:(id)a1 removingLockCount:(long long)a2 completion:(id /* block */)a3;
+ (void)endAllPreviousLocksOfReason:(id)a0 forAssetSelector:(id)a1 completion:(id /* block */)a2;
+ (id)assetSelectorForAssetTargetOSVersion:(id)a0 forTargetBuildVersion:(id)a1;
+ (void)endAllPreviousLocksOfSelector:(id)a0 forClientName:(id)a1 completion:(id /* block */)a2;
+ (id)frameworkInstanceUUID;
+ (void)frameworkInstanceSetLogDomain;
+ (id)endAllPreviousLocksOfReasonSync:(id)a0 forClientName:(id)a1 forAssetSelector:(id)a2;
+ (void)endPreviousLocksOfReason:(id)a0 forClientName:(id)a1 forAssetSelector:(id)a2 removingLockCount:(long long)a3 completion:(id /* block */)a4;
+ (id)defaultDispatchQueue;
+ (id)eliminatePromotedNeverLockedForSelectorSync:(id)a0;
+ (void)eliminatePromotedNeverLockedForSelector:(id)a0 completion:(id /* block */)a1;
+ (void)endAllPreviousLocksOfReason:(id)a0 forClientName:(id)a1 forAssetSelector:(id)a2 completion:(id /* block */)a3;
+ (id)endPreviousLocksOfReasonSync:(id)a0 forAssetSelector:(id)a1 removingLockCount:(long long)a2;
+ (unsigned long long)stageDownloadAllSync:(long long)a0 assetsSuccessfullyStaged:(long long *)a1 error:(id *)a2 reportingProgress:(id /* block */)a3;
+ (void)eliminateAllForSelector:(id)a0 completion:(id /* block */)a1;
+ (id)frameworkDispatchQueue;
+ (id)interestInContentSync:(id)a0 forAssetSelector:(id)a1 withInterestPolicy:(id)a2;
+ (id)determineIfAvailableSync:(id)a0 forAssetSelector:(id)a1 discoveredAttributes:(id *)a2 error:(id *)a3;
+ (void)endAllPreviousLocksOfSelector:(id)a0 completion:(id /* block */)a1;
+ (long long)waitOnSemaphore:(id)a0 withDaemonTriggeredTimeout:(long long)a1;
+ (id)endAllPreviousLocksOfSelectorSync:(id)a0 forClientName:(id)a1;
+ (id)stagePurgeAllSync;
+ (id)stageDetermineAllAvailableSync:(id)a0 forTargetBuildVersion:(id)a1 totalExpectedBytes:(unsigned long long *)a2 error:(id *)a3;
+ (id)endPreviousLocksOfReasonSync:(id)a0 forClientName:(id)a1 forAssetSelector:(id)a2 removingLockCount:(long long)a3;
+ (void)interestInContent:(id)a0 forAssetSelector:(id)a1 completion:(id /* block */)a2;
+ (id)eliminateAllForAssetTypeSync:(id)a0;

- (id)initWithCoder:(id)a0;
- (void)_eliminateAllForAssetType:(id /* block */)a0;
- (void)_failedStageDetermineAllAvailable:(long long)a0 withResponseError:(id)a1 description:(id)a2 completion:(id /* block */)a3;
- (void)_failedContinueLockUsage:(long long)a0 withResponseError:(id)a1 description:(id)a2 completion:(id /* block */)a3;
- (id)_eliminateAllForAssetTypeSync;
- (id)checkForNewerSync:(id)a0 withTimeout:(long long)a1 discoveredAttributes:(id *)a2 error:(id *)a3;
- (void)continueLockUsage:(id)a0 completion:(id /* block */)a1;
- (void)_failedCurrentStatus:(long long)a0 withResponseError:(id)a1 description:(id)a2 completion:(id /* block */)a3;
- (void)determineIfAvailable:(id)a0 withTimeout:(long long)a1 completion:(id /* block */)a2;
- (void)_successStageDetermineAllAvailable:(id)a0 completion:(id /* block */)a1;
- (void)_successEliminate:(id /* block */)a0;
- (void)_successEndLockUsage:(id)a0 completion:(id /* block */)a1;
- (void)checkForNewer:(id)a0 withTimeout:(long long)a1 completion:(id /* block */)a2;
- (void)_failedDetermineIfAvailable:(long long)a0 withResponseError:(id)a1 description:(id)a2 completion:(id /* block */)a3;
- (void)_successLockContent:(id)a0 dueToDesire:(id)a1 completion:(id /* block */)a2;
- (void)_endAllPreviousLocksOfReason:(id)a0 completion:(id /* block */)a1;
- (void)_failedCheckForNewer:(long long)a0 withResponseError:(id)a1 description:(id)a2 completion:(id /* block */)a3;
- (void)continueLockUsage:(id)a0 withUsagePolicy:(id)a1 completion:(id /* block */)a2;
- (void)interestInContent:(id)a0 withInterestPolicy:(id)a1 completion:(id /* block */)a2;
- (void)handleMessage:(id)a0 reply:(id /* block */)a1;
- (void)_successContinueLockUsage:(id)a0 completion:(id /* block */)a1;
- (id)initForClientName:(id)a0 selectingAsset:(id)a1 completingFromQueue:(id)a2 error:(id *)a3;
- (unsigned long long)_stageDownloadAllSync:(long long)a0 assetsSuccessfullyStaged:(long long *)a1 error:(id *)a2 reportingProgress:(id /* block */)a3;
- (id)currentStatusSync:(id *)a0;
- (void)_stageDownloadAllStatusProgress:(id)a0 stageProgressError:(id)a1 progressBlock:(id /* block */)a2;
- (void)connectionClosed;
- (id)_stagePurgeAllSync;
- (id)_endAllPreviousLocksOfReasonSync:(id)a0;
- (id)endLockUsageSync:(id)a0;
- (void)interestInContent:(id)a0 completion:(id /* block */)a1;
- (void)_stageDownloadAll:(long long)a0 reportingProgress:(id /* block */)a1 completion:(id /* block */)a2;
- (void)connectToServerFrameworkCompletion:(id /* block */)a0;
- (void)lockContent:(id)a0 withTimeout:(long long)a1 completion:(id /* block */)a2;
- (void)_stageDetermineAllAvailable:(id)a0 forTargetBuildVersion:(id)a1 completion:(id /* block */)a2;
- (void)_lockContentStatusProgress:(id)a0 lockForUseError:(id)a1 progressBlock:(id /* block */)a2;
- (void)_successStageDownloadAll:(id)a0 completion:(id /* block */)a1;
- (void)encodeWithCoder:(id)a0;
- (id)lockContentSync:(id)a0 withUsagePolicy:(id)a1 withTimeout:(long long)a2 lockedAssetSelector:(id *)a3 newerInProgress:(id *)a4 error:(id *)a5;
- (void)_failedStageDownloadAll:(long long)a0 withResponseError:(id)a1 description:(id)a2 completion:(id /* block */)a3;
- (id)interestInContentSync:(id)a0 withInterestPolicy:(id)a1;
- (void)lockContent:(id)a0 withTimeout:(long long)a1 reportingProgress:(id /* block */)a2 completion:(id /* block */)a3;
- (void)checkForNewer:(id)a0 withUsagePolicy:(id)a1 withTimeout:(long long)a2 completion:(id /* block */)a3;
- (id)_eliminatePromotedNeverLockedForSelectorSync;
- (id)initForClientName:(id)a0 selectingAsset:(id)a1 usingDesiredPolicyCategory:(id)a2 error:(id *)a3;
- (void).cxx_destruct;
- (id)summary;
- (id)checkForNewerSync:(id)a0 withUsagePolicy:(id)a1 withTimeout:(long long)a2 discoveredAttributes:(id *)a3 error:(id *)a4;
- (void)_endPreviousLocksOfReason:(id)a0 removingLockCount:(long long)a1 completion:(id /* block */)a2;
- (void)_failedEliminate:(long long)a0 withResponseError:(id)a1 description:(id)a2 completion:(id /* block */)a3;
- (void)_stagePurgeAll:(id /* block */)a0;
- (id)_eliminateAllForSelectorSync;
- (void)_failedEndLockUsage:(long long)a0 withResponseError:(id)a1 description:(id)a2 completion:(id /* block */)a3;
- (void)_successStagePurgeAll:(id /* block */)a0;
- (id)_newProxyObjectForStageProgressBlock:(id /* block */)a0;
- (void)_successInterestInContent:(id)a0 completion:(id /* block */)a1;
- (id)lockContentSync:(id)a0 withTimeout:(long long)a1 lockedAssetSelector:(id *)a2 newerInProgress:(id *)a3 error:(id *)a4;
- (void)lockContent:(id)a0 withUsagePolicy:(id)a1 withTimeout:(long long)a2 completion:(id /* block */)a3;
- (id)_stageDetermineAllAvailableSync:(id)a0 forTargetBuildVersion:(id)a1 totalExpectedBytes:(unsigned long long *)a2 error:(id *)a3;
- (void)_successCurrentStatus:(id)a0 completion:(id /* block */)a1;
- (id)initForClientName:(id)a0 selectingAsset:(id)a1 error:(id *)a2;
- (void)_successDetermineIfAvailable:(id)a0 completion:(id /* block */)a1;
- (id)continueLockUsageSync:(id)a0;
- (void)_failedStagePurgeAll:(long long)a0 withResponseError:(id)a1 description:(id)a2 completion:(id /* block */)a3;
- (void)handleResponse:(id)a0 error:(id)a1;
- (id)lockContentSync:(id)a0 withTimeout:(long long)a1 lockedAssetSelector:(id *)a2 newerInProgress:(id *)a3 error:(id *)a4 reportingProgress:(id /* block */)a5;
- (id)determineIfAvailableSync:(id)a0 withTimeout:(long long)a1 discoveredAttributes:(id *)a2 error:(id *)a3;
- (id)_endPreviousLocksOfReasonSync:(id)a0 removingLockCount:(long long)a1;
- (void)endLockUsage:(id)a0 completion:(id /* block */)a1;
- (id)lockContentSync:(id)a0 withUsagePolicy:(id)a1 withTimeout:(long long)a2 lockedAssetSelector:(id *)a3 newerInProgress:(id *)a4 error:(id *)a5 reportingProgress:(id /* block */)a6;
- (void)_eliminatePromotedNeverLockedForSelector:(id /* block */)a0;
- (id)initForClientName:(id)a0 selectingAsset:(id)a1 usingDesiredPolicyCategory:(id)a2 completingFromQueue:(id)a3 error:(id *)a4;
- (void)_successCheckForNewer:(id)a0 completion:(id /* block */)a1;
- (void)currentStatus:(id /* block */)a0;
- (id)_newProxyObjectForLockProgressBlock:(id /* block */)a0;
- (id)continueLockUsageSync:(id)a0 withUsagePolicy:(id)a1;
- (id)assetAttribute:(id)a0;
- (void)_failedLockContent:(long long)a0 withResponseError:(id)a1 description:(id)a2 completion:(id /* block */)a3;
- (void)_eliminateAllForSelector:(id /* block */)a0;
- (id)interestInContentSync:(id)a0;
- (void)_failedInterestInContent:(long long)a0 withResponseError:(id)a1 description:(id)a2 completion:(id /* block */)a3;
- (void)lockContent:(id)a0 withUsagePolicy:(id)a1 withTimeout:(long long)a2 reportingProgress:(id /* block */)a3 completion:(id /* block */)a4;

@end
