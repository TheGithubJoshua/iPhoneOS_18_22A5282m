@class NSString;

@interface EKPersistentAlarm : EKPersistentObject

@property (readonly, nonatomic) NSString *oldSemanticIdentifier;

+ (id)relations;
+ (Class)meltedClass;
+ (Class)alternateUniverseClass;
+ (id)defaultPropertiesToLoad;
+ (id)propertyKeyForUniqueIdentifier;

- (int)entityType;
- (void)setEmailAddress:(id)a0;
- (id)emailAddress;
- (void)setType:(long long)a0;
- (void)setUrlWrapper:(id)a0;
- (void)setUUID:(id)a0;
- (BOOL)isDefaultAlarm;
- (void)setIsDefaultAlarm:(BOOL)a0;
- (void)setCalendarOwner:(id)a0;
- (void)setStructuredLocation:(id)a0;
- (void)setAbsoluteDate:(id)a0;
- (id)UUID;
- (void)setOriginalAlarm:(id)a0;
- (void)setExternalData:(id)a0;
- (void)setCalendarItemOwner:(id)a0;
- (id)originalAlarm;
- (id)relativeOffset;
- (long long)proximity;
- (id)calendarItemOwner;
- (id)urlWrapper;
- (id)snoozedAlarmsSet;
- (id)description;
- (void)setAcknowledgedDate:(id)a0;
- (id)acknowledgedDate;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)externalData;
- (id)structuredLocation;
- (void)setProximity:(long long)a0;
- (long long)type;
- (void)setSnoozedAlarmsSet:(id)a0;
- (id)absoluteDate;
- (id)calendarOwner;
- (void)setRelativeOffset:(id)a0;

@end
