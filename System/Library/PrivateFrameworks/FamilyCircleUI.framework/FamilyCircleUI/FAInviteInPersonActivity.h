@class NSDictionary, UIViewController;

@interface FAInviteInPersonActivity : UIActivity

@property (weak, nonatomic) UIViewController *presentingViewController;
@property (retain, nonatomic) NSDictionary *response;

- (id)init;
- (id)activityType;
- (id)activityTitle;
- (void).cxx_destruct;
- (void)dealloc;
- (id)activityImage;
- (void)performActivity;
- (long long)activityCategory;
- (BOOL)canPerformWithActivityItems:(id)a0;
- (void)_handleRUIDismiss:(id)a0;
- (void)_notifyCompletionWithSuccess:(BOOL)a0 userInfo:(id)a1;

@end
