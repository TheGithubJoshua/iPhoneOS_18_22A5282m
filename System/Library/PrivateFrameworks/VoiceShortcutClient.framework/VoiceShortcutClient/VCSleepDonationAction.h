@interface VCSleepDonationAction : VCSleepAction

+ (id)identifierForShortcut:(id)a0;
+ (id)sleepActionsForShortcuts:(id)a0 bundleIdentifier:(id)a1;
+ (id)sleepActionsDictionaryForShortcutsByApp:(id)a0;
+ (id)sleepActionsDictionaryForShortcuts:(id)a0;

- (id)initWithShortcut:(id)a0;
- (id)initWithShortcut:(id)a0 bundleIdentifier:(id)a1;

@end
