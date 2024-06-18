@class NSString, NSDictionary, NSOrderedSet, NSDate;

@interface AFClockAlarmSnapshot : NSObject <AFContextSnapshot, NSCopying, NSSecureCoding, AFDictionaryConvertible>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) unsigned long long generation;
@property (readonly, copy, nonatomic) NSDate *date;
@property (readonly, copy, nonatomic) NSDictionary *alarmsByID;
@property (readonly, copy, nonatomic) NSOrderedSet *notifiedFiringAlarmIDs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)newWithBuilder:(id /* block */)a0;

- (id)buildDictionaryRepresentation;
- (id)initWithCoder:(id)a0;
- (id)mutatedCopyWithMutator:(id /* block */)a0;
- (id)mostRecentFiringAlarm;
- (id)_descriptionWithIndent:(unsigned long long)a0;
- (id)init;
- (id)initWithBuilder:(id /* block */)a0;
- (id)initWithGeneration:(unsigned long long)a0 date:(id)a1 alarmsByID:(id)a2 notifiedFiringAlarmIDs:(id)a3;
- (id)ad_shortDescription;
- (id)serializedBackingStore;
- (id)initWithDictionaryRepresentation:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)hasFiringAlarms;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithSerializedBackingStore:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)firingAlarms;

@end
