@interface ATXIdleTimeBeginAnchor : ATXAnchor

+ (id)sampleEvent;
+ (id)fetchAnchorOccurrencesBetweenStartDate:(id)a0 endDate:(id)a1;
+ (id)keyPathForContextStore;
+ (BOOL)shouldProcessContextStoreNotification;
+ (id)invalidationPredicateForContextStoreRegistration;
+ (id)anchorOccurenceDateFromDuetEvent:(id)a0;
+ (void)registerForNotificationsWithoutUsingContextStoreForObserver:(id)a0 enterSelector:(SEL)a1 exitSelector:(SEL)a2;
+ (double)weightedAverageOfHoursFromDates:(id)a0;
+ (id)predictNextAnchorOccurrenceDate;
+ (double)minimumSecondsForBeingIdle;
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
