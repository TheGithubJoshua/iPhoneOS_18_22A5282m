@class NSMutableArray;

@interface IMExtensionNotificationManager : NSObject

@property (retain, nonatomic) NSMutableArray *notificationsContext;

+ (id)sharedInstance;

- (id)notificationCategories;
- (id)init;
- (BOOL)canPopulateUserInfoForMessageBalloonBundleID:(id)a0;
- (BOOL)shouldRetractedMessageForBalloonBundleID:(id)a0;
- (void)populateUserInfoForNotificationContent:(id)a0 messageBalloonBundleID:(id)a1 payloadData:(id)a2;
- (void).cxx_destruct;

@end
