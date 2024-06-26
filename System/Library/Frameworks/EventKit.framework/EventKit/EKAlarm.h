@class NSDate, NSString, NSArray, NSURL, EKObject, EKStructuredLocation, EKCalendarItem, EKCalendar;

@interface EKAlarm : EKObject <NSCopying>

@property (nonatomic) long long type;
@property (readonly, nonatomic) BOOL isAbsolute;
@property (nonatomic) BOOL isSnoozed;
@property (nonatomic, getter=isDefaultAlarm) BOOL defaultAlarm;
@property (readonly, nonatomic) NSString *UUID;
@property (retain, nonatomic) NSString *externalID;
@property (readonly, nonatomic) EKObject *owner;
@property (readonly, nonatomic) EKCalendar *calendarOwner;
@property (readonly, nonatomic) EKCalendarItem *calendarItemOwner;
@property (retain, nonatomic) EKAlarm *originalAlarm;
@property (copy, nonatomic) NSArray *snoozedAlarms;
@property (nonatomic) double relativeOffset;
@property (copy, nonatomic) NSDate *absoluteDate;
@property (copy, nonatomic) EKStructuredLocation *structuredLocation;
@property (nonatomic) long long proximity;
@property (copy, nonatomic) NSString *emailAddress;
@property (copy, nonatomic) NSString *soundName;
@property (copy, nonatomic) NSURL *url;

+ (Class)frozenClass;
+ (id)knownSingleValueKeysForComparison;
+ (id)knownIdentityKeysForComparison;
+ (id)knownRelationshipSingleValueKeys;
+ (id)knownRelationshipMultiValueKeys;
+ (int)_currentAuthorizationStatus;
+ (id)alarmWithAbsoluteDate:(id)a0;
+ (id)alarmWithRelativeOffset:(double)a0;
+ (BOOL)areLocationsAllowed;
+ (BOOL)areLocationsAllowedWithAuthorizationStatus:(int)a0;
+ (BOOL)areLocationsAvailable;
+ (BOOL)areLocationsCurrentlyEnabled;
+ (double)defaultGeofencedReminderRadius;
+ (id)knownRelationshipWeakKeys;
+ (long long)maxPublicProximity;

- (BOOL)_reset;
- (id)init;
- (id)ownerUUID;
- (void)setUrlWrapper:(id)a0;
- (void)setUUID:(id)a0;
- (long long)compare:(id)a0;
- (void)_setType:(long long)a0;
- (id)urlWrapper;
- (void).cxx_destruct;
- (id)snoozedAlarmsSet;
- (id)description;
- (void)setAcknowledgedDate:(id)a0;
- (id)acknowledgedDate;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setSnoozedAlarmsSet:(id)a0;
- (void)_setUrlWrapper:(id)a0;
- (void)setBookmarkURL:(id)a0;
- (void)_setEmailAddress:(id)a0;
- (void)addSnoozedAlarm:(id)a0;
- (id)bookmarkURL;
- (BOOL)defaultAlarm;
- (id)initWithAbsoluteDate:(id)a0;
- (id)initWithRelativeOffset:(double)a0;
- (BOOL)isTopographicallyEqualToAlarm:(id)a0;
- (void)rebaseForDetachment;
- (id)relativeOffsetRaw;
- (void)removeSnoozedAlarm:(id)a0;
- (void)setRelativeOffsetRaw:(id)a0;
- (BOOL)validateWithOwner:(id)a0 error:(id *)a1;

@end
