@class NSDateComponents, NSTimeZone;

@interface DocumentUnderstanding.DUCalendarEvent : NSObject <NSCoding, NSCopying> {
    void /* unknown type, empty encoding */ startDateComponents;
    void /* unknown type, empty encoding */ startTimezone;
    void /* unknown type, empty encoding */ endDateComponents;
    void /* unknown type, empty encoding */ endTimezone;
}

@property (nonatomic) void /* unknown type, empty encoding */ isAllDay;
@property (nonatomic, copy) NSDateComponents *startDateComponents;
@property (nonatomic, copy) NSTimeZone *startTimezone;
@property (nonatomic, copy) NSDateComponents *endDateComponents;
@property (nonatomic, copy) NSTimeZone *endTimezone;

- (id)initWithCoder:(id)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(void *)a0;

@end
