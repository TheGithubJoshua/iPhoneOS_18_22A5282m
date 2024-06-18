@interface ATXGymArrivalAnchor : ATXAnchor

+ (id)sampleEvent;
+ (id)fetchAnchorOccurrencesBetweenStartDate:(id)a0 endDate:(id)a1;
+ (BOOL)shouldProcessContextStoreNotification;
+ (id)invalidationPredicateForContextStoreRegistration;
+ (void)unregisterForNotificationsWithoutUsingContextStoreForObserver:(id)a0;
+ (void)registerForNotificationsWithoutUsingContextStoreForObserver:(id)a0 enterSelector:(SEL)a1 exitSelector:(SEL)a2;
+ (id)longDescription;
+ (Class)supportedDuetDataProviderClass;
+ (BOOL)usesContextStoreForRealTimeNotifications;
+ (long long)anchorType;
+ (BOOL)shouldPredicateOnStartDate;
+ (id)duetEventsPredicates;
+ (double)secondsOfInfluence;
+ (BOOL)isActive;

@end
