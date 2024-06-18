@interface ATXUpcomingCommuteFromWorkAnchor : ATXAnchor

+ (id)sampleEvent;
+ (id)fetchAnchorOccurrencesBetweenStartDate:(id)a0 endDate:(id)a1;
+ (id)keyPathForContextStore;
+ (BOOL)shouldProcessContextStoreNotification;
+ (id)invalidationPredicateForContextStoreRegistration;
+ (id)anchorOccurenceDateFromDuetEvent:(id)a0;
+ (id)candidateQueryStartDateFromDuetEvent:(id)a0;
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
