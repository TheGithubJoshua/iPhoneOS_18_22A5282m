@class NSDate, NSString, IAMMessageEntryManager, IAMModalTarget, IAMStorageCoordinator, NSMutableDictionary, NSDictionary, IAMImpressionManager, NSObject, NSMutableArray;
@protocol OS_dispatch_queue, IAMMessageMetricsDelegate, IAMApplicationContextProvider;

@interface IAMMessageCoordinator : NSObject <IAMImpressionManagerDelegate, IAMStorageCoordinatorDelegate, IAMEventReceiver> {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSMutableDictionary *_messageTargetsByTargetIdentifier;
    NSMutableDictionary *_messageTargetsRequiringNilPriorityMessageNotificationAfterRegistrationByTargetIdentifier;
    NSMutableDictionary *_priorityMessageEntryByTargetIdentifier;
    IAMImpressionManager *_impressionManager;
    NSMutableArray *_pendingTriggerContexts;
    IAMStorageCoordinator *_storageCoordinator;
    NSDictionary *_metadataEntryByMessageIdentifier;
    NSDate *_lastDisplayTimeGlobalPresentationPolicyGroupNormal;
    NSDate *_lastDisplayTimeGlobalPresentationPolicyGroupRestricted;
    IAMMessageEntryManager *_messageEntryManager;
    BOOL _isReadyToEvaluateMessages;
    NSString *_modalTargetIdentifier;
    IAMModalTarget *_modalTarget;
    NSDictionary *_messageGroupsByGroupIdentifier;
    NSMutableDictionary *_completionHandlersForObservedEvents;
}

@property (weak, nonatomic) id<IAMMessageMetricsDelegate> metricsDelegate;
@property (weak, nonatomic) id<IAMApplicationContextProvider> applicationContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (id)_createMessageFromMessageEntry:(id)a0 replacingResourcePathsWithCachedResourceLocations:(BOOL)a1;

- (void)_updateLastDisplayTime:(id)a0 forMessageEntry:(id)a1;
- (id)init;
- (void)_handleMessageReachedMaximumDisplayCount:(id)a0;
- (id)_dequeuePendingTriggerContexts;
- (void)reportMessageDidDisappearWithIdentifier:(id)a0;
- (void)reportMessageWithIdentifier:(id)a0 actionWasPerformedWithIdentifier:(id)a1 fromTargetWithIdentifier:(id)a2;
- (void)_startStorageCoordinatorWithMessageEntryProvider:(id)a0 messageMetadataStorage:(id)a1 propertyStorage:(id)a2;
- (id)_filterActiveTargetIdentifiers:(id)a0;
- (void)reportMessageWithIdentifier:(id)a0 actionWasPerformedWithIdentifier:(id)a1;
- (void)triggerPresentationForMessageWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)_reevaluateMessageEntries:(id)a0 forTargetIdentifier:(id)a1 shouldNotifyTargetsIfPriorityMessageNonNil:(BOOL)a2 withObservedEventName:(id)a3;
- (void)_reportHoldoutMessageWouldAppear:(id)a0;
- (id)beginObservingTriggerEvent:(id)a0 withHandler:(id /* block */)a1;
- (void)_calculateMessagesProximityAndDownloadResourcesIfNeeded:(id)a0;
- (void)receiveTriggerEventContext:(id)a0;
- (void)_enqueuePendingTriggerContext:(id)a0;
- (void)_setMessageGroups:(id)a0;
- (void)_reportMessageAction:(id)a0 wasPerformedInMessageEntry:(id)a1 fromTargetWithIdentifier:(id)a2;
- (void)_incrementNumberOfDisplaysForMessageEntry:(id)a0;
- (void)start;
- (void)_fetchMessagesAndMetadataFromStorageCoordinator:(id /* block */)a0;
- (void)_updateMetadata:(id)a0 forMessageEntry:(id)a1 completion:(id /* block */)a2;
- (void)reportMessageDidAppearWithIdentifier:(id)a0;
- (void)impressionManager:(id)a0 shouldReportImpressionEventWithDictionary:(id)a1;
- (void)reportMessageDidAppearWithIdentifier:(id)a0 fromTargetWithIdentifier:(id)a1;
- (void)_notifyMessageTargets:(id)a0 withTargetIdentifier:(id)a1 didUpdatePriorityMessageFromEntry:(id)a2 observedEventName:(id)a3;
- (void)unregisterMessageTarget:(id)a0;
- (void).cxx_destruct;
- (void)registerMessageTarget:(id)a0;
- (void)_handleUpdatedMessageEntries:(id)a0 andMetadata:(id)a1;
- (void)_updatePriorityMessageEntry:(id)a0 forTargetIdentifier:(id)a1 shouldNotifyTargetsIfNonNil:(BOOL)a2 observedEventName:(id)a3;
- (void)reportMessageDidDisappearWithIdentifier:(id)a0 fromTargetWithIdentifier:(id)a1;
- (void)_processObservedEventCallbacksforEventName:(id)a0 willTriggerPresentation:(BOOL)a1 messageIdentifier:(id)a2;
- (id)_messageBundleIdentifiers;
- (void)_evaluateMessagesForAllActiveTargets;
- (id)_metadataEntryForMessageIdentifier:(id)a0;
- (void)endObservingTriggerEvent:(id)a0 forToken:(id)a1;
- (void)dealloc;
- (void)reportApplicationContextPropertiesDidChange:(id)a0;
- (void)startWithApplicationContext:(id)a0;
- (void)impressionManager:(id)a0 impressionDidEndForMessageEntry:(id)a1;
- (void)reportChangedContextPropertiesContext:(id)a0;
- (void)startWithApplicationContext:(id)a0 messageGroups:(id)a1 messageEntryProvider:(id)a2 messageMetadataStorage:(id)a3 propertyStorage:(id)a4;
- (void)_removeUserNotificationRemovalForMessageWithIdentifier:(id)a0;
- (void)storageCoordinatorMessageEntriesChanged:(id)a0;
- (void)_reevaluateTargetsWithIdentifiers:(id)a0 forTriggerContext:(id)a1 shouldNotifyTargetsIfPriorityMessageNonNil:(BOOL)a2;
- (void)receiveEvent:(id)a0;
- (void)startWithApplicationContext:(id)a0 messageGroups:(id)a1;
- (void)_updateMetadataOfMessageEntriesByTrigger:(id)a0 forReceivedEvent:(id)a1;
- (void)reportMetricsEvent:(id)a0;

@end
