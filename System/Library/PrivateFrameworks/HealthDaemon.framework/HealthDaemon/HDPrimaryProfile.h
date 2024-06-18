@class HDAWDSubmissionManager, HDNotificationManager, HDAgeGatingManager, HDWorkoutManager, HDSummarySharingEntryIDSManager, HDAttachmentManager, HDSummarySharingEntryManager, HDAssertionManager, HDCurrentActivitySummaryHelper, HDTinkerPrivacyAlertCoordinator, HDRestorableAlarmScheduler, HDServiceConnectionManager, HDDemoDataManager, HDDataCollectionManager, HDWorkoutCondenser, HDHealthServiceManager, HDAppSubscriptionManager, HDFitnessMachineManager, HDPeriodicCountryMonitor, HDNanoSyncManager;

@interface HDPrimaryProfile : HDProfile {
    HDAgeGatingManager *_ageGatingManager;
    HDAppSubscriptionManager *_appSubscriptionManager;
    HDAWDSubmissionManager *_awdSubmissionManager;
    HDCurrentActivitySummaryHelper *_currentActivitySummaryHelper;
    HDDataCollectionManager *_dataCollectionManager;
    HDFitnessMachineManager *_fitnessMachineManager;
    HDNanoSyncManager *_nanoSyncManager;
    HDNotificationManager *_notificationManager;
    HDPeriodicCountryMonitor *_periodicCountryMonitor;
    HDHealthServiceManager *_serviceManager;
    HDRestorableAlarmScheduler *_alarmScheduler;
    HDServiceConnectionManager *_serviceConnectionManager;
    HDAssertionManager *_sessionAssertionManager;
    HDWorkoutManager *_workoutManager;
    HDWorkoutCondenser *_workoutCondenser;
    HDDemoDataManager *_demoDataManager;
    HDTinkerPrivacyAlertCoordinator *_tinkerPrivacyAlertCoordinator;
    HDSummarySharingEntryManager *_summarySharingEntryManager;
    HDSummarySharingEntryIDSManager *_summarySharingEntryIDSManager;
    HDAttachmentManager *_attachmentManager;
}

- (id)summarySharingEntryIDSManager;
- (id)_newAWDSubmissionManager;
- (id)initWithDirectoryPath:(id)a0 medicalIDDirectoryPath:(id)a1 daemon:(id)a2;
- (id)notificationManager;
- (id)serviceManager;
- (id)workoutManager;
- (id)alarmScheduler;
- (id)awdSubmissionManager;
- (id)sharingEntryManager;
- (id)attachmentManager;
- (id)_newPeriodicCountryMonitorWithNanoSyncManager:(id)a0;
- (id)_newWorkoutManager;
- (id)serviceConnectionManager;
- (id)dataCollectionManager;
- (void)terminationCleanup;
- (id)sessionAssertionManager;
- (id)_newNanoSyncManager;
- (id)fitnessMachineManager;
- (void).cxx_destruct;
- (void)unitTest_setServiceManager:(id)a0;
- (id)currentActivitySummaryHelper;
- (id)workoutCondenser;
- (id)ageGatingManager;
- (void)unitTest_setNanoSyncManager:(id)a0;
- (id)periodicCountryMonitor;
- (id)appSubscriptionManager;
- (id)activityCacheManager;
- (id)_initWithDirectoryPath:(id)a0 medicalIDDirectoryPath:(id)a1 daemon:(id)a2 profileIdentifier:(id)a3;
- (id)tinkerPrivacyAlertCoordinator;
- (id)nanoSyncManager;

@end
