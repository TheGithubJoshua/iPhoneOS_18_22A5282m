@interface BPSListController : PSListController

@property (nonatomic) BOOL deferringReloadSpecifiers;

- (void)viewDidLayoutSubviews;
- (void)reloadSpecifiers;
- (void)viewWillAppear:(BOOL)a0;
- (long long)tableViewStyle;
- (void)prepareSpecifiersMetadata;
- (BOOL)_readyToReloadSpecifiers;

@end
