@class CKNavbarCanvasViewController;

@interface CKBusinessChatController : CKChatController

@property (retain, nonatomic) CKNavbarCanvasViewController *navbarCanvasViewController;

- (void)loadView;
- (void)viewDidLayoutSubviews;
- (long long)preferredStatusBarStyle;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)_handleAddressBookChangedNotification:(id)a0;
- (void)_updateNavigationUI;
- (BOOL)canShowBusinessOnboarding;
- (void)cleanUpBizNavBarIfNecessary;
- (void)setupBizNavBarIfNecessary;
- (BOOL)shouldListParticipantsInTitle;

@end
