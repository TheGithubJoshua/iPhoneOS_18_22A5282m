@class ACHEarnedInstanceAwardingEngine, ACHTemplateAssetRegistry, NSMutableSet, NSString, ACHWorkoutAwardingSource, ACHMobileAssetProvider, ACHBuiltinTemplateSource, ACHTemplateSourceScheduler, ACHAWDSubmissionManager, ACHPerfectMonthTemplateSource, ACHRemoteTemplateSource, ACHEarnedInstanceEntityWrapper, ACHBackCompatMonthlyChallengeListener, NSSet, ACHDataStore, ACHTemplateEntityWrapper, ACHRemoteTemplateAvailabilityListener, ACHAchievementProgressEngine, ACHMonthlyChallengeAwardingSource, NSObject, HDXPCListener, ACHActivityAwardingSource, ACHWorkoutUtility, ACHActivitySummaryUtility, ACHMonthlyChallengeTemplateSource, HDProfile, ACHEarnedInstanceStore, ACHTemplateStore, ACHRemoteTemplateAvailabilityKeyProvider;
@protocol ACHAwardingScheduler, OS_dispatch_queue, ACHAchievementStoring;

@interface ACHAchievementsProfileExtension : NSObject <HDXPCListenerDelegate, HDHealthDaemonReadyObserver, HDDatabaseProtectedDataObserver, HDDataObserver, HDProfileExtension, ACHAchievementsProfileExtending> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _accessLock;
    NSObject<OS_dispatch_queue> *_clientQueue;
}

@property (weak, nonatomic) HDProfile *profile;
@property (retain, nonatomic) HDXPCListener *listener;
@property (nonatomic) BOOL initialMoveGoalFetchCompleted;
@property (nonatomic) BOOL initialMoveGoalHasBeenSet;
@property (nonatomic) BOOL storesHaveBeenSet;
@property (nonatomic) BOOL isWatch;
@property (nonatomic) BOOL krakenUnleashed;
@property (nonatomic) BOOL fitnessAppIsInstalled;
@property (nonatomic) BOOL unitTesting;
@property (retain, nonatomic) NSMutableSet *templatesSourcesToRegister;
@property (retain, nonatomic) NSMutableSet *awardingSourcesToRegister;
@property (retain, nonatomic) NSSet *blocksWaitingOnInitialization;
@property (retain, nonatomic) id<ACHAchievementStoring> achievementStore;
@property (retain, nonatomic) ACHTemplateAssetRegistry *templateAssetRegistry;
@property (retain, nonatomic) ACHAchievementProgressEngine *progressProvider;
@property (retain, nonatomic) ACHEarnedInstanceStore *earnedInstanceStore;
@property (retain, nonatomic) ACHEarnedInstanceEntityWrapper *earnedInstanceEntityWrapper;
@property (retain, nonatomic) ACHEarnedInstanceAwardingEngine *awardingEngine;
@property (retain, nonatomic) ACHTemplateStore *templateStore;
@property (retain, nonatomic) ACHTemplateEntityWrapper *templateEntityWrapper;
@property (retain, nonatomic) ACHAWDSubmissionManager *submissionManager;
@property (retain, nonatomic) ACHMobileAssetProvider *mobileAssetProvider;
@property (retain, nonatomic) ACHDataStore *dataStore;
@property (retain, nonatomic) ACHActivityAwardingSource *activityAwardingSource;
@property (retain, nonatomic) ACHWorkoutUtility *workoutUtility;
@property (retain, nonatomic) ACHWorkoutAwardingSource *workoutAwardingSource;
@property (retain, nonatomic) ACHMonthlyChallengeAwardingSource *monthlyChallengeAwardingSource;
@property (retain, nonatomic) ACHActivitySummaryUtility *activitySummaryUtility;
@property (retain, nonatomic) id<ACHAwardingScheduler> awardingScheduler;
@property (retain, nonatomic) ACHBuiltinTemplateSource *builtInTemplateSource;
@property (retain, nonatomic) ACHPerfectMonthTemplateSource *perfectMonthTemplateSource;
@property (retain, nonatomic) ACHMonthlyChallengeTemplateSource *monthlyChallengeTemplateSource;
@property (retain, nonatomic) ACHRemoteTemplateSource *remoteTemplateSource;
@property (retain, nonatomic) ACHTemplateSourceScheduler *templateSourceScheduler;
@property (retain, nonatomic) ACHBackCompatMonthlyChallengeListener *backCompatMonthlyChallengeListener;
@property (retain, nonatomic) ACHRemoteTemplateAvailabilityKeyProvider *remoteTemplateAvailabilityKeyProvider;
@property (retain, nonatomic) ACHRemoteTemplateAvailabilityListener *remoteTemplateAvailabilityListener;
@property (retain, nonatomic) NSString *currentBuildVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)database:(id)a0 protectedDataDidBecomeAvailable:(BOOL)a1;
- (void)samplesAdded:(id)a0 anchor:(id)a1;
- (void)daemonReady:(id)a0;
- (void)_applicationsInstalled:(id)a0;
- (id)exportObjectForListener:(id)a0 client:(id)a1 error:(id *)a2;
- (void).cxx_destruct;
- (void)_applicationsUninstalled:(id)a0;
- (BOOL)performMigration;
- (id)_currentBuildVersion;
- (id)listenerEndpointForClient:(id)a0 error:(id *)a1;
- (void)_registerApplicationNotifications;
- (void)deregisterTemplateSource:(id)a0 awardingSource:(id)a1;
- (void)performBlockAfterInitialization:(id /* block */)a0;
- (void)registerTemplateSource:(id)a0 awardingSource:(id)a1;
- (void)requestImmediateUpdateForTemplateSource:(id)a0;
- (void)requestIncrementalEvaluationForAwardingSource:(id)a0 evaluationBlock:(id /* block */)a1;
- (void)_deactivateActivityAchievements;
- (void)_activateActivityAchievements;
- (void)_checkForMoveGoal;
- (void)_deregisterAwardingSource:(id)a0;
- (void)_deregisterTemplateSource:(id)a0;
- (void)_finishingUnleashingTheKrakenForDevice:(unsigned char)a0;
- (void)_handleFitnessAppsAllowed:(id)a0;
- (void)_handleFitnessAppsRestricted:(id)a0;
- (void)_loadInitialMoveGoal;
- (void)_registerAwardingSource:(id)a0;
- (void)_registerFitnessAppsNotifications;
- (void)_registerTemplateSource:(id)a0;
- (void)_removeAllAchievementsIfNeeded;
- (void)_restrainTheKraken;
- (void)_saveFitnessMigrationBuildVersion;
- (void)_setupStoresForDeviceIfNecesseary:(unsigned char)a0;
- (BOOL)_shouldPerformFitnessMigration;
- (void)_unleashTheKraken;
- (void)_unleashTheKrakenUnderProperConditions;
- (BOOL)_updateActivityChallengeAssetsURL;
- (void)endPhaseRegistration;
- (id)initWithProfile:(id)a0 mobileAssetProvider:(id)a1;
- (id)initWithProfile:(id)a0 mobileAssetProvider:(id)a1 unitTesting:(BOOL)a2;
- (void)tryInitialAchievementLoadWithCompletionHandler:(id /* block */)a0;

@end