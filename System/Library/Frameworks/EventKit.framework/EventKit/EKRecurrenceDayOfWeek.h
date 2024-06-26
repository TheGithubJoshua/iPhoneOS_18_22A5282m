@interface EKRecurrenceDayOfWeek : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long dayOfTheWeek;
@property (readonly, nonatomic) long long weekNumber;

+ (id)dayOfWeek:(long long)a0;
+ (id)dayOfWeek:(long long)a0 weekNumber:(long long)a1;
+ (long long)icsWeekDayFromDayOfTheWeek:(long long)a0;

- (id)initWithCoder:(id)a0;
- (id)iCalendarValueFromDayOfTheWeek:(long long)a0;
- (unsigned long long)hash;
- (id)iCalendarDescription;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDayOfTheWeek:(long long)a0 weekNumber:(long long)a1;

@end
