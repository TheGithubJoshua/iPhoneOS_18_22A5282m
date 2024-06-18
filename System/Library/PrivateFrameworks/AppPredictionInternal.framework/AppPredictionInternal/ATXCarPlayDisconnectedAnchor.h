@interface ATXCarPlayDisconnectedAnchor : ATXAnchor

+ (id)sampleEvent;
+ (id)keyPathForContextStore;
+ (BOOL)shouldProcessContextStoreNotification;
+ (id)invalidationPredicateForContextStoreRegistration;
+ (void)registerForNotificationsWithoutUsingContextStoreForObserver:(id)a0 enterSelector:(SEL)a1 exitSelector:(SEL)a2;
+ (id)longDescription;
+ (Class)supportedDuetDataProviderClass;
+ (BOOL)usesContextStoreForRealTimeNotifications;
+ (id)predicateForContextStoreRegistration;
+ (long long)anchorType;
+ (BOOL)shouldPredicateOnStartDate;
+ (id)duetEventsPredicates;
+ (double)secondsOfInfluence;
+ (BOOL)isActive;

@end
