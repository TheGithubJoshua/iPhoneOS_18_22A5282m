@class NSTimeZone, NSCalendar, NSString, CLRegion, NSDate, NSData;

@interface UIConcreteLocalNotification : UILocalNotification <NSSecureCoding> {
    NSDate *fireDate;
    NSTimeZone *timeZone;
    unsigned long long repeatInterval;
    NSCalendar *repeatCalendar;
    CLRegion *region;
    BOOL regionTriggersOnce;
    NSString *alertBody;
    BOOL hasAction;
    NSString *alertAction;
    NSString *alertLaunchImage;
    NSString *alertTitle;
    NSString *soundName;
    long long applicationIconBadgeNumber;
    NSData *userInfoData;
    NSString *category;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (void)setFireDate:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)setSoundName:(id)a0;
- (id)init;
- (void)setCategory:(id)a0;
- (id)region;
- (void)setRegion:(id)a0;
- (void)setUserInfo:(id)a0;
- (id)fireDate;
- (id)alertLaunchImage;
- (void)setAlertTitle:(id)a0;
- (id)alertTitle;
- (void)setRepeatInterval:(unsigned long long)a0;
- (unsigned long long)hash;
- (BOOL)isValid;
- (void)validate;
- (void)encodeWithCoder:(id)a0;
- (id)soundName;
- (void).cxx_destruct;
- (void)setTimeZone:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (void)setAlertBody:(id)a0;
- (id)timeZone;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)category;
- (id)alertBody;
- (void)setAlertLaunchImage:(id)a0;
- (id)userInfo;
- (unsigned long long)repeatInterval;
- (void)setAlertAction:(id)a0;
- (void)_setUserInfoData:(id)a0;
- (id)alertAction;
- (long long)applicationIconBadgeNumber;
- (long long)compareFireDates:(id)a0;
- (BOOL)hasAction;
- (BOOL)isTriggeredByDate;
- (BOOL)isTriggeredByRegion;
- (id)nextFireDateAfterDate:(id)a0 localTimeZone:(id)a1;
- (id)nextFireDateForLastFireDate:(id)a0;
- (BOOL)regionTriggersOnce;
- (id)repeatCalendar;
- (void)setApplicationIconBadgeNumber:(long long)a0;
- (void)setHasAction:(BOOL)a0;
- (void)setRegionTriggersOnce:(BOOL)a0;
- (void)setRepeatCalendar:(id)a0;

@end
