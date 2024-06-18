@class NSUUID, NSDate;

@interface ATXDuetEvent : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSDate *endDate;
@property (copy, nonatomic) NSUUID *locationIdentifier;

+ (long long)_secondsInDayFromDate:(id)a0 calendar:(id)a1;

- (id)initWithCoder:(id)a0;
- (id)init;
- (id)initWithDKEvent:(id)a0;
- (void)setEndDate:(id)a0;
- (long long)compare:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithStartDate:(id)a0 endDate:(id)a1;
- (id)identifier;
- (id)initWithCurrentContextStoreValues;
- (long long)endDateSecondsAfterMidnight;
- (BOOL)isEndDateOnWeekday;
- (BOOL)isStartDateOnWeekday;
- (id)locationIdentifierUUIDString;
- (long long)startDateSecondsAfterMidnight;
- (void)tagWithLocationOfInterestIdentifier:(id)a0;

@end
