@interface PCAlarmActivity : NSUserActivity <PCActivity>

- (id)image;
- (id)fireDate;
- (BOOL)isValid;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)activityString;
- (id)title;
- (id)bundleIdentifier;
- (id)initWithActivity:(id)a0;
- (unsigned long long)pcactivityType;
- (id)initFromAlarm:(id)a0;

@end
