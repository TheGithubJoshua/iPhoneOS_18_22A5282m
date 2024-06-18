@class CNBadgingAvatarBadgeStyleSettings, CNAvatarAccessoryView, UIImage, CNVisualIdentityAvatarViewController, CNGroupIdentity;

@interface CNGroupAvatarViewController : UIViewController

@property (retain, nonatomic) CNGroupIdentity *group;
@property (retain, nonatomic) CNVisualIdentityAvatarViewController *avatarViewController;
@property (retain, nonatomic) UIImage *badgeImage;
@property (retain, nonatomic) CNBadgingAvatarBadgeStyleSettings *badgeStyleSettings;
@property (nonatomic) BOOL isMarkedForSyndication;
@property (nonatomic) BOOL isDoNotDisturb;
@property (retain, nonatomic) CNAvatarAccessoryView *mediaContextBadge;

+ (id)log;
+ (id)descriptorForRequiredKeys;
+ (unsigned long long)maxContactAvatars;

- (void)loadView;
- (void).cxx_destruct;
- (BOOL)_canShowWhileLocked;
- (BOOL)contactsEqualToContactsFromGroup:(id)a0;
- (void)groupIdentityDidUpdate:(id)a0;
- (id)initWithGroup:(id)a0;
- (id)initWithGroup:(id)a0 avatarViewControllerSettings:(id)a1;

@end
