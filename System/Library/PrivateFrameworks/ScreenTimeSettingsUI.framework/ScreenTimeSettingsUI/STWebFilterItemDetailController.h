@class STWebFilterDetailController, STRestrictionItem, NSString;
@protocol STContentPrivacyViewModelCoordinator;

@interface STWebFilterItemDetailController : PSListController

@property (weak) STWebFilterDetailController *parentWebFilterController;
@property (retain, nonatomic) STRestrictionItem *restriction;
@property (nonatomic) BOOL isNamedSite;
@property (copy, nonatomic) NSString *pageURL;
@property (copy, nonatomic) NSString *pageTitle;
@property (retain, nonatomic) id<STContentPrivacyViewModelCoordinator> coordinator;

- (id)specifiers;
- (void)willResignActive;
- (id)init;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void).cxx_destruct;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (BOOL)shouldSelectResponderOnAppearance;
- (void)saveFilterItem;

@end
