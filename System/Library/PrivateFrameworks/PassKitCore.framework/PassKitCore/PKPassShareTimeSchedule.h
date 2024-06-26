@class NSArray;

@interface PKPassShareTimeSchedule : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSArray *hoursOfDay;
@property (retain, nonatomic) NSArray *daysOfWeek;
@property (retain, nonatomic) NSArray *daysOfMonth;
@property (nonatomic) unsigned long long interval;
@property (nonatomic) unsigned long long frequency;

+ (id)emptySchedule;

- (id)intersect:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqualToPassShareTimeSchedule:(id)a0;

@end
