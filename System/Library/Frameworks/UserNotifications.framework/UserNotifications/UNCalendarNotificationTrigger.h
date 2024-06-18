@class NSDateComponents;

@interface UNCalendarNotificationTrigger : UNNotificationTrigger

@property (readonly, copy, nonatomic) NSDateComponents *dateComponents;

+ (BOOL)supportsSecureCoding;
+ (id)triggerWithDateMatchingComponents:(id)a0 repeats:(BOOL)a1;

- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)nextTriggerDate;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)_initWithDateComponents:(id)a0 repeats:(BOOL)a1;
- (id)nextTriggerDateAfterDate:(id)a0 withRequestedDate:(id)a1;

@end
