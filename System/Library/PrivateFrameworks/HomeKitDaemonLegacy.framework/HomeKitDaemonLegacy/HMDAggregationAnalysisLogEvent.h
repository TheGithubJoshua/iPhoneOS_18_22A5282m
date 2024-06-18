@class NSString, NSDictionary, HMDEventCountersManager;

@interface HMDAggregationAnalysisLogEvent : HMMLogEvent <HMDAWDLogEvent, HMMCoreAnalyticsLogging>

@property (class, readonly) BOOL submitEventWithHistogrammedAggregateHomeDataCommonDimensions;
@property (class, readonly) BOOL submitEventWithDurationInMilliseconds;

@property (readonly, nonatomic) HMDEventCountersManager *eventCountersManager;
@property (copy, nonatomic) NSString *dataSyncState;
@property unsigned long long processLaunchCount;
@property unsigned long long processJetsamCount;
@property unsigned long long processCrashCount;
@property unsigned long long jetsamReasonHighwaterCount;
@property unsigned long long jetsamReasonProcessLimitCount;
@property unsigned long long jetsamReasonOtherCount;
@property unsigned long long processMemoryPressureStateWarningCount;
@property unsigned long long processMemoryPressureStateCriticalCount;
@property unsigned long long sampledAverageProcessMemoryUsageMB;
@property unsigned long long sampledPeakProcessMemoryUsageMB;
@property unsigned long long remoteMessagesSentCount;
@property unsigned long long remoteMessagesReceivedCount;
@property unsigned long long txIDSMessagesCount;
@property unsigned long long rxIDSMessagesCount;
@property unsigned long long txIDSProxyMessagesCount;
@property unsigned long long rxIDSProxyMessagesCount;
@property unsigned long long txLoxyMessagesCount;
@property unsigned long long rxLoxyMessagesCount;
@property unsigned long long txRapportMessagesCount;
@property unsigned long long rxRapportMessagesCount;
@property unsigned long long txSecureMessagesCount;
@property unsigned long long rxSecureMessagesCount;
@property unsigned long long cloudSyncPushCount;
@property unsigned long long legacyCloudSyncPushCount;
@property unsigned long long cloudSyncFetchCount;
@property unsigned long long cloudSyncUploadCount;
@property unsigned long long cloudSyncUploadErrorCount;
@property unsigned long long homeDataBytesFetched;
@property unsigned long long homeDataBytesPushed;
@property unsigned long long legacyHomeDataBytesFetched;
@property unsigned long long legacyHomeDataBytesPushed;
@property unsigned long long cloudSyncDecryptionFailedCount;
@property BOOL cloudSyncLastDecryptionFailed;
@property BOOL cloudSyncMaximumDelayReached;
@property unsigned long long cloudStoreCoreDataTransactionCount;
@property unsigned long long workingStoreCoreDataTransactionCount;
@property unsigned long long coreDataCloudKitImportCount;
@property unsigned long long coreDataCloudKitExportCount;
@property unsigned long long residentSyncFetchHomeDataRequestCount;
@property unsigned long long residentSyncHomeDataChangedNotificationCount;
@property unsigned long long generationCounterIncrementCount;
@property unsigned long long notifyXPCClientsHomeDataChangedCount;
@property unsigned long long numReadSiri;
@property unsigned long long numWriteSiri;
@property unsigned long long numReadFirstPartyApp;
@property unsigned long long numWriteFirstPartyApp;
@property unsigned long long numReadThirdPartyApp;
@property unsigned long long numWriteThirdPartyApp;
@property unsigned long long numReadInternalRequested;
@property unsigned long long numWriteInternalRequested;
@property unsigned long long numReadUnknownSource;
@property unsigned long long numWriteUnknownSource;
@property unsigned long long numReadWriteSuccessIP;
@property unsigned long long numReadWriteFailureIP;
@property unsigned long long numReadWriteSuccessBT;
@property unsigned long long numReadWriteFailureBT;
@property unsigned long long numReadWriteSuccessIDS;
@property unsigned long long numReadWriteFailureIDS;
@property unsigned long long averageLatencyIP;
@property unsigned long long averageLatencyBT;
@property unsigned long long averageLatencyIDS;
@property unsigned long long numAccessoriesAdded;
@property unsigned long long numScenesAdded;
@property unsigned long long numTriggersAdded;
@property unsigned long long numShortcutsAdded;
@property unsigned long long numScenesUserRun;
@property unsigned long long numShortcutsRun;
@property unsigned long long numTriggersFired;
@property unsigned long long hapIPInvalidationCount;
@property unsigned long long hapIPSentHTTPRequestsCount;
@property unsigned long long hapIPReceivedHTTPResponsesCount;
@property unsigned long long hapIPReceivedHTTPEventCount;
@property unsigned long long hapBTLEConnectionsCount;
@property unsigned long long hapBTLEConnectionPerReasonsCount;
@property unsigned long long hapBTLEDiscoveriesCount;
@property unsigned long long cameraStreamStartSuccessCount;
@property unsigned long long cameraStreamStartFailureCount;
@property unsigned long long fetchCameraClipVideoSegmentAssetCount;
@property unsigned long long acceptedXPCRequestsCount;
@property unsigned long long erroredXPCRequestsCount;
@property unsigned long long sentXPCNotificationsCount;
@property unsigned long long filteredXPCNotificationsCount;
@property unsigned long long cameraRecordingReachabilityChangedCount;
@property unsigned long long cameraRecordingReachabilityOfflineDuration;
@property unsigned long long homeHubReachabilityChangedCount;
@property unsigned long long ipAccessoryReachabilityChangedCount;
@property unsigned long long currentDeviceStartedLegacyElectionCount;
@property unsigned long long v2ElectionCoordinationMeshUpdateCount;
@property unsigned long long v2ElectionCoordinationMeshLeaderElectedCount;
@property unsigned long long v2ElectionCoordinationMeshLeaderChangedCount;
@property unsigned long long v2ElectionPrimaryResidentElectionRunCount;
@property unsigned long long v2ElectionPrimaryResidentChangedCount;
@property BOOL v2ElectionCurrentDeviceInSecondaryCoordinationMesh;
@property unsigned long long bulletinNotificationsPostedCount;
@property (getter=isActiveDay) BOOL activeDay;
@property unsigned long long activeDaysPerMonthCount;
@property long long countOfDaysSinceLastActive;
@property unsigned long long peakConcurrentIPAccessoryUpdateStaging;
@property unsigned long long peakConcurrentIPAccessoryUpdateApply;
@property unsigned long long peakConcurrentBLEAccessoryUpdateStaging;
@property unsigned long long peakConcurrentBLEAccessoryUpdateApply;
@property unsigned long long peakConcurrentThreadAccessoryUpdateStaging;
@property unsigned long long peakConcurrentThreadAccessoryUpdateApply;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *coreAnalyticsEventName;
@property (readonly, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly, nonatomic) BOOL logEventWithAppendedCommonDimensions;


- (void).cxx_destruct;
- (unsigned int)AWDMessageType;
- (id)metricForAWD;

@end