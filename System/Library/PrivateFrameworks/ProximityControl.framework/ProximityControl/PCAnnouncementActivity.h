@interface PCAnnouncementActivity : NSUserActivity <PCActivity>

- (id)init;
- (id)image;
- (BOOL)isValid;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)activityString;
- (id)bundleIdentifier;
- (id)initWithActivity:(id)a0;
- (unsigned long long)pcactivityType;

@end
