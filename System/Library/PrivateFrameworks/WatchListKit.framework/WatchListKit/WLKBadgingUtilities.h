@interface WLKBadgingUtilities : NSObject

+ (BOOL)addBadgeIdentifier:(id)a0;
+ (id)sharedUtilities;
+ (void)clearSavedBadgeIdentifiers;
+ (id)badgeIdentifiers;
+ (BOOL)hasMigrated;
+ (BOOL)removeBadgeIdentifier:(id)a0;
+ (id)currentBadgeNumber;

- (void)migrateToNewBadgingSystemIfNeeded;
- (id)_notificationCenter;

@end
