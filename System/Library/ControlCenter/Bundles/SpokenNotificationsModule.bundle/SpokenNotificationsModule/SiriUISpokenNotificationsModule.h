@class BBSettingsGateway, NSString, CCUIContentModuleContext, CCUIMenuModuleItem, NSObject, NSMutableArray, UIViewController;
@protocol CCUIContentModuleBackgroundViewController, OS_dispatch_queue, CCUIContentModuleContentViewController;

@interface SiriUISpokenNotificationsModule : CCUIMenuModuleViewController <CCUIContentModule> {
    CCUIContentModuleContext *_contentModuleContext;
    BOOL _selectedOnExpansion;
    NSMutableArray *_menuItems;
    CCUIMenuModuleItem *_menuItemOn;
    CCUIMenuModuleItem *_menuItemMute;
    CCUIMenuModuleItem *_menuItemOffForTheDay;
    BOOL _headphonesAnnounceEnabled;
    BOOL _hearingAidsAnnounceEnabled;
    BOOL _builtInSpeakerAnnounceEnabled;
    BBSettingsGateway *_settingsGateway;
    NSObject<OS_dispatch_queue> *_spokenNotificationsModuleQueue;
}

@property (readonly, nonatomic) UIViewController<CCUIContentModuleContentViewController> *contentViewController;
@property (readonly, nonatomic) UIViewController<CCUIContentModuleBackgroundViewController> *backgroundViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)shouldBeginTransitionToExpandedContentModule;
- (void)buttonTapped:(id)a0 forEvent:(id)a1;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)_refreshState;
- (id)contentViewControllerForContext:(id)a0;
- (void)setContentModuleContext:(id)a0;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (BOOL)_canShowWhileLocked;
- (void)willTransitionToExpandedContentMode:(BOOL)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)didTransitionToExpandedContentMode:(BOOL)a0;
- (void)_turnOffSpokenMessagesForTheDay;
- (void)_createMenuItems;
- (void)_fetchAnnounceSettingsAndRefreshState;
- (void)_muteSpokenMessages;
- (void)_refreshStateWithSelected:(BOOL)a0 expanded:(BOOL)a1;
- (void)_turnOnSpokenMessages;
- (void)_updateMenuItems;
- (void)_updateMenuItemsWithDate:(id)a0;
- (BOOL)isDeviceInEligibleAnnounceNotificationsConfiguration;

@end
