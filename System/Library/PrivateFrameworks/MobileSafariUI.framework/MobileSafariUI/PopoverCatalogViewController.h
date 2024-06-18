@class CatalogViewController;

@interface PopoverCatalogViewController : AbstractCatalogViewController {
    double _startPagePreferredHeight;
}

@property (weak, nonatomic) CatalogViewController *primaryCatalogViewController;

- (id)universalSearchFirstTimeExperienceViewController;
- (void)didGainOwnershipOfCompletionsViewController;
- (void)viewWillLayoutSubviews;
- (double)requiredContentWidth;
- (id)completionsViewController;
- (id)startPageViewController;
- (void).cxx_destruct;
- (void)didGainOwnershipOfStartPageViewController;
- (void)resetStartPagePreferredHeight;
- (double)_preferredHeightForStartPage;
- (void)didGainOwnershipOfUniversalSearchFirstTimeExperienceViewController;
- (void)updateStartPagePreferredContentSize;
- (id)completionsViewControllerIfLoaded;

@end
