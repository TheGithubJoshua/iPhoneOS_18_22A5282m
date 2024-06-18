@class PETScalarEventTracker, ATXNotificationsLoggingClient;

@interface NCNotificationEventTracker : NSObject {
    PETScalarEventTracker *_shortLookDefaultActionTracker;
    PETScalarEventTracker *_shortLookDismissTracker;
    PETScalarEventTracker *_shortLookClearTracker;
    PETScalarEventTracker *_notificationCenterClearDayTracker;
    PETScalarEventTracker *_notificationCenterClearAllTracker;
    PETScalarEventTracker *_longLookPresentationTracker;
    PETScalarEventTracker *_longLookDefaultActionTracker;
    PETScalarEventTracker *_longLookCustomActionTracker;
    PETScalarEventTracker *_longLookDismissTracker;
    PETScalarEventTracker *_longLookReparkTracker;
    ATXNotificationsLoggingClient *_logger;
}

+ (id)createATXNotificationInterfaceFromRequest:(id)a0;
+ (id)sharedInstance;

- (void)longLookReparkInvokedWithTrigger:(long long)a0 forNotificationRequest:(id)a1 withState:(id)a2;
- (void)digestAppeared:(id)a0;
- (id)init;
- (void)_displayedNotificationRequests:(id)a0 inUILocation:(long long)a1;
- (id)_primaryAttachmentTypeProperty;
- (void)executedActionWithIdentifier:(id)a0 forNotificationRequest:(id)a1;
- (void)digestExpired:(id)a0;
- (void)digestDismissed:(id)a0;
- (void)notificationCenterDisappeared;
- (id)_firstPartyAppProperty;
- (void)notificationCenterAppeared;
- (unsigned long long)primaryAttachmentTypeForRequest:(id)a0;
- (id)_shortLookDefaultActionTracker;
- (id)_shortLookClearTracker;
- (void)missedBundleExpired:(id)a0;
- (void)removedNotificationRequest:(id)a0;
- (void)longLookCustomAction:(id)a0 forNotificationRequest:(id)a1 withState:(id)a2;
- (id)_longLookPresentationTracker;
- (id)_notificationCenterClearAllTracker;
- (void)dismissedSectionType:(unsigned long long)a0 withUUID:(id)a1;
- (void)modifiedNotificationRequest:(id)a0;
- (void)realTimeTuningOutcome:(long long)a0 withBundleId:(id)a1;
- (id)notificationDestinationForState:(id)a0;
- (void)missedBundleDismissed:(id)a0;
- (void)shortLookClearedForNotificationRequest:(id)a0 withState:(id)a1;
- (id)_longLookDismissTracker;
- (void)notificationCenterClearAll;
- (id)_longLookReparkTracker;
- (void).cxx_destruct;
- (void)expandedSectionType:(unsigned long long)a0 withUUID:(id)a1;
- (id)_textInputProperty;
- (void)longLookDismissInvokedWithTrigger:(long long)a0 forNotificationRequest:(id)a1 withState:(id)a2;
- (void)insertedNotificationRequest:(id)a0 toSectionType:(unsigned long long)a1;
- (id)_longLookCustomActionTracker;
- (void)missedBundleAppeared:(id)a0;
- (id)_notificationCenterClearDayTracker;
- (void)hideNotificationRequest:(id)a0;
- (id)_shortLookDismissTracker;
- (id)_customExtensionProperty;
- (void)presentedNotificationRequestAsBanner:(id)a0;
- (void)shortLookDefaultActionInvokedWithTrigger:(long long)a0 forNotificationRequest:(id)a1 withState:(id)a2;
- (id)_attachmentCountProperty;
- (id)_triggerPropertyForEvent:(id)a0;
- (id)_longLookDefaultActionTracker;
- (void)toggledGroupState:(BOOL)a0 withLeadingNotificationRequest:(id)a1;
- (void)longLookDefaultActionInvokedWithTrigger:(long long)a0 forNotificationRequest:(id)a1 withState:(id)a2;
- (id)_destinationProperty;
- (void)missedBundleExpanded:(id)a0;
- (void)shortLookDismissInvokedForNotificationRequest:(id)a0 withState:(id)a1;
- (id)_customActionsCountProperty;
- (void)receivedNotification:(id)a0 withProminence:(BOOL)a1 sectionSettings:(id)a2;
- (void)digestExpanded:(id)a0;
- (void)longLookPresentedForNotificationRequest:(id)a0;
- (void)realTimeTuningTrigger:(long long)a0;

@end
