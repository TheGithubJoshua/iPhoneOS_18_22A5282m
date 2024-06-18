@interface PCMediaActivity : NSUserActivity <PCActivity>

+ (id)titleForContentItem:(id)a0;
+ (id)userActivityInfoFor:(id)a0 inContext:(id)a1;

- (id)image;
- (long long)mediaType;
- (id)shortDescription;
- (BOOL)isValid;
- (unsigned int)playbackState;
- (long long)behavior;
- (long long)direction;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)activityString;
- (id)bundleIdentifier;
- (id)initWithActivity:(id)a0;
- (unsigned long long)pcactivityType;
- (id)artWork;
- (id)initWithDisplayContext:(id)a0 response:(id)a1;

@end
