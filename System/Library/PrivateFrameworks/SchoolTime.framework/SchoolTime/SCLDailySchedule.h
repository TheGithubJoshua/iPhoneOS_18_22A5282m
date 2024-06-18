@class NSMutableDictionary;

@interface SCLDailySchedule : SCLSchedule

@property (retain, nonatomic) NSMutableDictionary *dayMap;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)recurrences;
- (id)scheduleForDay:(long long)a0;
- (id)endTimeForDay:(long long)a0;
- (id)initWithSchedule:(id)a0;
- (id)startTimeForDay:(long long)a0;

@end
