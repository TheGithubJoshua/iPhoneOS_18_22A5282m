@interface EKPersistentRecurrenceRule : EKPersistentObject

+ (id)relations;
+ (Class)meltedClass;
+ (Class)alternateUniverseClass;
+ (id)defaultPropertiesToLoad;
+ (id)propertyKeyForUniqueIdentifier;

- (int)entityType;
- (void)setCount:(unsigned long long)a0;
- (id)specifier;
- (void)setOwner:(id)a0;
- (id)owner;
- (void)setEndDate:(id)a0;
- (void)setUUID:(id)a0;
- (id)UUID;
- (id)description;
- (long long)interval;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)endDate;
- (void)setSpecifier:(id)a0;
- (void)setInterval:(long long)a0;
- (unsigned long long)count;
- (id)cachedEndDate;
- (id)cachedEndDateTimeZone;
- (long long)firstDayOfTheWeekRaw;
- (int)frequencyRaw;
- (void)setCachedEndDate:(id)a0;
- (void)setCachedEndDateTimeZone:(id)a0;
- (void)setFirstDayOfTheWeekRaw:(long long)a0;
- (void)setFrequencyRaw:(int)a0;

@end
