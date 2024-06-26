@class NSDictionary, NSTimeZone;

@interface BCSOpenHours : NSObject <NSCopying, NSSecureCoding> {
    NSDictionary *_timeRanges;
    NSTimeZone *_localTimeZone;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithHoursMessages:(id)a0 timeZone:(id)a1;
- (id)dateWhenOpenNextAfterDate:(id)a0;
- (id)initWithHoursPeriodMessage:(id)a0 timeZone:(id)a1;
- (id)initWithJSONObj:(id)a0 timeZone:(id)a1;
- (id)initWithOpenHours:(id)a0 timeZone:(id)a1;
- (id)initWithTimeRanges:(id)a0 timeZone:(id)a1;
- (BOOL)isOpenAtDate:(id)a0;

@end
