@class NSNotificationCenter, NSDate, HMBLocalZone, HMFMessageDispatcher, NSObject, HMBCloudZone, HMDCameraRecordingReachabilityEventModel, HMDAppleAccountSettings, NSString, HMDHAPAccessory, NSHashTable, _HMCameraUserSettings, HMDBulletinBoard, HMFTimer, NSUUID;
@protocol OS_dispatch_queue, HMMLogEventSubmitting;

@interface HMDCameraRecordingReachabilityEventManager : HMFObject <HMBLocalZoneModelObserver, HMFTimerDelegate, HMFMessageReceiver, HMFLogging, HMDCameraClipManagerDelegate, HMFNetMonitorDelegate>

@property (readonly, weak) HMDHAPAccessory *hapAccessory;
@property (readonly) NSUUID *uniqueIdentifier;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly) HMDBulletinBoard *bulletinBoard;
@property (readonly) HMDAppleAccountSettings *accountSettings;
@property (readonly) NSNotificationCenter *notificationCenter;
@property (readonly) double initialReachabilityTimeout;
@property (readonly) double reachabilityChangeReachableDebounceTimeout;
@property (readonly) double reachabilityChangeUnreachableDebounceTimeout;
@property (retain) HMFMessageDispatcher *messageDispatcher;
@property (retain) NSHashTable *clientConnections;
@property (retain) id<HMMLogEventSubmitting> logEventSubmitter;
@property BOOL lastKnownCameraReachability;
@property BOOL currentCameraReachability;
@property BOOL currentBridgedCameraReachability;
@property (nonatomic, getter=isCurrentDeviceConfirmedPrimaryResident) BOOL currentDeviceConfirmedPrimaryResident;
@property (nonatomic, getter=isCurrentDeviceConnectedToNetwork) BOOL currentDeviceConnectedToNetwork;
@property unsigned long long reachabilityChangeDebounceCount;
@property (copy) _HMCameraUserSettings *currentSettings;
@property (copy) HMDCameraRecordingReachabilityEventModel *mostRecentReachabilityEventModel;
@property (retain) HMBLocalZone *localZone;
@property (retain) HMBCloudZone *cloudZone;
@property (retain) HMFTimer *initialReachabilityTimer;
@property (retain) HMFTimer *reachabilityChangeDebounceTimer;
@property (copy) NSDate *reachabilityChangeDebounceStartDate;
@property (copy) NSDate *suppressNotificationsBeforeDate;
@property (copy) id /* block */ initialReachabilityTimerFactory;
@property (copy) id /* block */ reachabilityChangeDebounceTimerFactory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;

+ (id)logCategory;

- (id)logIdentifier;
- (id)localZone:(id)a0 didProcessModelCreation:(id)a1;
- (id)localZone:(id)a0 didProcessModelDeletion:(id)a1;
- (void)timerDidFire:(id)a0;
- (void).cxx_destruct;
- (id)localZone:(id)a0 didProcessModelUpdate:(id)a1;
- (void)networkMonitorIsReachable:(id)a0;
- (void)networkMonitorIsUnreachable:(id)a0;
- (void)handleInitialCameraReachability;
- (id)initWithHAPAccessory:(id)a0 workQueue:(id)a1;
- (void)submitLogEventWithCurrentModel:(id)a0;
- (void)addCameraReachabilityEventForCurrentCameraReachability:(BOOL)a0 dateOfOccurrence:(id)a1;
- (void)cleanUpEvents;
- (void)clipManagerDidStart:(id)a0;
- (void)clipManagerDidStop:(id)a0;
- (void)configureWithMessageDispatcher:(id)a0 currentSettings:(id)a1 isCurrentDeviceConfirmedPrimaryResident:(BOOL)a2 isCurrentDeviceConnectedToNetwork:(BOOL)a3;
- (id)fetchReachabilityEventsWithDateInterval:(id)a0;
- (void)handleAccessoryConfigured:(id)a0;
- (void)handleAccessoryUnconfigured:(id)a0;
- (void)handleAppleAccountSettingsHomeStateUpdated:(id)a0;
- (void)handleCameraProfileSettingsDidChange:(id)a0;
- (void)handleDeleteAllEventsMessage:(id)a0;
- (void)handleFetchCountOfEventsMessage:(id)a0;
- (void)handleFetchEventsMessage:(id)a0;
- (void)handleHMDBridgedAccessoryReachableNotification:(id)a0;
- (void)handleHMDBridgedAccessoryUnreachableNotification:(id)a0;
- (void)handlePerformCloudPullMessage:(id)a0;
- (void)handleRemoteCameraReachabilityChange:(id)a0;
- (void)handleResidentDeviceConfirmedStateChangedNotification:(id)a0;
- (void)handleSubscribeMessage:(id)a0;
- (void)handleUnsubscribeMessage:(id)a0;
- (void)handleUpdatedCameraReachability:(BOOL)a0;
- (id)initWithAccessory:(id)a0 workQueue:(id)a1 identifier:(id)a2 bulletinBoard:(id)a3 logEventSubmitter:(id)a4 accountSettings:(id)a5 notificationCenter:(id)a6;
- (BOOL)isAccessoryReachable;
- (id)mostRecentReachabilityEventModelInModels:(id)a0;
- (void)notifySubscribersOfRemoteCameraReachabilityEvent;
- (void)notifyTransportOfUpdatedEvents:(id)a0 removedEventUUIDs:(id)a1;
- (id)performCloudPullWithLabel:(id)a0;
- (id)reachabilityEventModelForCurrentCameraReachability:(BOOL)a0 dateOfOccurrence:(id)a1;
- (BOOL)shouldAddInitialReachabilityEventForCurrentCameraReachability:(BOOL)a0;
- (void)startReachabilityChangeDebounceTimerWithReachability:(BOOL)a0;
- (void)updateInitialReachabilityTimer;

@end