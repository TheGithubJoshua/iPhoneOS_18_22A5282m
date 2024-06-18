@interface PCTimerActivity : NSUserActivity <PCActivity>

- (id)displayTitle;
- (id)image;
- (id)fireDate;
- (BOOL)isValid;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)activityString;
- (id)bundleIdentifier;
- (id)initWithActivity:(id)a0;
- (unsigned long long)pcactivityType;
- (id)initFromTimer:(id)a0;
- (double)timeLeft;

@end
