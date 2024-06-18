@class NSString, NSArray, NSSet, FLPreferencesFollowUpItemListViewController, PSListController, AIDAServiceOwnersManager;
@protocol FLViewModel;

@interface FLPreferencesController : NSObject <FLSpecifierTapHandlerDelegate> {
    id<FLViewModel> _topViewModel;
    FLPreferencesFollowUpItemListViewController *_spyglassController;
    NSArray *_groups;
    NSSet *_spyglassAllowList;
    BOOL _activityIndicatorActive;
    AIDAServiceOwnersManager *_serviceOwnersManager;
    NSString *_primaryAccountID;
    NSArray *_secondaryAccountIDs;
}

@property (weak, nonatomic) PSListController *listViewController;
@property (copy, nonatomic) id /* block */ itemChangeObserver;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_updateSpecifier:(id)a0 withCommonPropertiesForGroup:(id)a1;
- (id)init;
- (id)initWithViewModel:(id)a0;
- (void)preflightNetworkConnectivityForHandler:(id)a0 withCompletionHandler:(id /* block */)a1;
- (id)_specifiersForItem:(id)a0 group:(id)a1;
- (void)startSpinnerForSpecifier:(id)a0;
- (id)_specifierForGroup:(id)a0;
- (void)_handleActionForSpecifier:(id)a0;
- (void)_handleEmptyRefreshResult:(id)a0;
- (void)startPresentingForHandler:(id)a0 withRemoteController:(id)a1;
- (void).cxx_destruct;
- (id)_deferredLoadSpecifierWithName:(id)a0;
- (void)loadSpecifier:(id)a0;
- (id)_urlBasedSpecifierWithName:(id)a0;
- (id)topLevelSpecifiers;
- (id)_topLevelSpecifiersForGroup:(unsigned long long)a0;
- (void)_refreshItemsAndPresentDetailForSpecifier:(id)a0;
- (id)spyglassSpecifiers;
- (id)_specifierGroupString:(unsigned long long)a0;
- (id)topLevelSpecifiersForGroup:(unsigned long long)a0;
- (void)_presentSpecifier:(id)a0 fromEventSource:(unsigned long long)a1;
- (void)stopSpinnerForSpecifier:(id)a0;
- (void)_zeroActionFailure:(id)a0;

@end
