@class SFStartPageViewController, CompletionListTableViewController, UniversalSearchFirstTimeExperienceViewController, UIViewController;

@interface AbstractCatalogViewController : UIViewController

@property (readonly, nonatomic) double requiredContentWidth;
@property (readonly, nonatomic) UIViewController *foregroundChildViewController;
@property (readonly, nonatomic) CompletionListTableViewController *completionsViewController;
@property (readonly, nonatomic) CompletionListTableViewController *completionsViewControllerIfLoaded;
@property (readonly, nonatomic) SFStartPageViewController *startPageViewController;
@property (readonly, nonatomic) UniversalSearchFirstTimeExperienceViewController *universalSearchFirstTimeExperienceViewController;

- (void)didGainOwnershipOfCompletionsViewController;
- (void)viewWillLayoutSubviews;
- (void)relinquishOwnershipOfUniversalSearchFirstTimeExperienceViewControllerFromCurrentParent;
- (void)didGainOwnershipOfStartPageViewController;
- (void)relinquishOwnershipOfCompletionsViewControllerFromCurrentParent;
- (void)didGainOwnershipOfUniversalSearchFirstTimeExperienceViewController;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)updatePreferredContentSize;
- (void)takeOwnershipOfUniversalSearchFirstTimeExperienceViewController;
- (BOOL)_takeOwnershipOfViewController:(id)a0;
- (void)_relinquishOwnershipOfViewControllerFromCurrentParent:(id)a0;
- (BOOL)isResponsibleForLayoutOfViewController:(id)a0;
- (void)relinquishOwnershipOfStartPageViewControllerFromCurrentParent;
- (void)setForegroundChildViewControllerNeedsUpdate;
- (void)takeOwnershipOfCompletionsViewController;
- (void)takeOwnershipOfStartPageViewController;

@end
