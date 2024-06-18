@class NSArray, NSString;

@interface ATXAnchor : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly, nonatomic) Class supportedDuetDataProviderClass;
@property (class, readonly, nonatomic) NSArray *duetEventsPredicates;
@property (class, readonly, nonatomic) long long anchorType;
@property (class, readonly, nonatomic) NSString *longDescription;
@property (class, readonly, nonatomic) double secondsOfInfluence;
@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *anchorEventIdentifier;

+ (id)sampleEvent;
+ (id)fetchAnchorOccurrencesBetweenStartDate:(id)a0 endDate:(id)a1;
+ (id)keyPathForContextStore;
+ (BOOL)shouldProcessContextStoreNotification;
+ (id)invalidationPredicateForContextStoreRegistration;
+ (void)unregisterForNotificationsWithoutUsingContextStoreForObserver:(id)a0;
+ (id)anchorOccurenceDateFromDuetEvent:(id)a0;
+ (void)registerForNotificationsWithoutUsingContextStoreForObserver:(id)a0 enterSelector:(SEL)a1 exitSelector:(SEL)a2;
+ (id)candidateQueryStartDateFromDuetEvent:(id)a0;
+ (BOOL)usesContextStoreForRealTimeNotifications;
+ (id)predicateForContextStoreRegistration;
+ (BOOL)shouldPredicateOnStartDate;
+ (BOOL)isActive;
+ (int)pbAnchorEventTypeFromDuetEvent:(id)a0;
+ (id)allAnchorClasses;
+ (Class)anchorClassFromAnchorTypeString:(id)a0;
+ (id)anchorTypeStringToClassName:(id)a0;
+ (id)anchorTypeToAnchorClassName:(long long)a0;
+ (id)anchorTypeToString:(long long)a0;
+ (double)durationOfAnchorEvent:(id)a0;
+ (void)registerWithContextStoreForAnchorEntranceWithCallback:(id /* block */)a0 notificationId:(id)a1 registrationPersistenceContext:(id)a2;
+ (void)registerWithContextStoreForAnchorExitWithCallback:(id /* block */)a0 notificationId:(id)a1 registrationPersistenceContext:(id)a2;
+ (BOOL)shouldProcessContextStoreNotificationForDict;
+ (BOOL)shouldProcessContextStoreNotificationForNumber;
+ (long long)stringToAnchorType:(id)a0;

- (id)initWithCoder:(id)a0;
- (BOOL)checkAndReportDecodingFailureIfNeededForid:(id)a0 key:(id)a1 coder:(id)a2 errorDomain:(id)a3 errorCode:(long long)a4;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)anchorTypeString;

@end
