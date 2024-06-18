@class NSUUID, HMDHome, HMDAppleAccountManager, HMFTimer, NSString, HMFMessageDispatcher, NSObject, HMDBulletinNotificationRegistrationSource, NSNotificationCenter, HMDNotificationConditionEvaluator;
@protocol OS_dispatch_queue;

@interface HMDAudioAnalysisBulletinNotificationManager : HMFObject <HMFLogging, HMFMessageReceiver, HMFTimerDelegate>

@property (readonly, weak) HMDHome *home;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly) HMFMessageDispatcher *messageDispatcher;
@property (readonly) HMDAppleAccountManager *accountManager;
@property (readonly) NSNotificationCenter *notificationCenter;
@property (readonly) HMDNotificationConditionEvaluator *evaluator;
@property (readonly, copy) NSUUID *uuid;
@property (readonly) HMDBulletinNotificationRegistrationSource *source;
@property (retain) HMFTimer *synchronizeWithPrimaryDebounceTimer;
@property (copy) id /* block */ synchronizeWithPrimaryDebounceTimerFactory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;

+ (id)logCategory;
+ (id)registrationsForSource:(id)a0 context:(id)a1;

- (id)registrations;
- (void)configure;
- (id)logIdentifier;
- (void)timerDidFire:(id)a0;
- (void).cxx_destruct;
- (void)handlePrimaryResidentUpdateNotification:(id)a0;
- (void)_handleAudioAnalysisEventResidentToPrimaryMessage:(id)a0;
- (id)_mkfLocalAnalysisSignificantEventRegistrationsWithManagedObjectContext:(id)a0;
- (void)_notifyDevice:(id)a0 event:(id)a1 user:(id)a2;
- (id)_remoteAudioAnalysisRegistrationsForUUID:(id)a0;
- (void)_requestSynchronizeRegistrations;
- (void)_synchronizeLocalRegistrationsWithPrimaryResident;
- (void)_updateRegistrationsOnPrimaryWithEnabledRegistrations:(id)a0 disabledRegistrations:(id)a1;
- (void)handleAudioAnalysisEvent:(id)a0;
- (void)handleCurrentDeviceOrAccountUpdatedNotification:(id)a0;
- (id)initWithHome:(id)a0 workQueue:(id)a1 messageDispatcher:(id)a2 accountManager:(id)a3 evaluator:(id)a4 notificationCenter:(id)a5;
- (void)synchronizeLocalRegistrationsWithPrimaryResident;
- (id)userDevicesToNotify:(id)a0 withEvent:(id)a1;

@end