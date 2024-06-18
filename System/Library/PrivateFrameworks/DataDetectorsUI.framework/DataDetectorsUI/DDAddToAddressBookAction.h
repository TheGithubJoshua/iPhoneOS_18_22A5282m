@class DDRemoteActionViewController;

@interface DDAddToAddressBookAction : DDAddressAction

@property (retain, nonatomic) DDRemoteActionViewController *viewController;

+ (BOOL)isAvailable;
+ (BOOL)actionAvailableForContact:(id)a0;

- (id)contact;
- (id)localizedName;
- (void)invalidate;
- (id)notificationURL;
- (int)interactionType;
- (id)notificationTitle;
- (void)adaptForPresentationInPopover:(BOOL)a0;
- (id)compactTitle;
- (id)notificationIconBundleIdentifier;
- (void)prepareViewControllerForActionController:(id)a0;

@end
