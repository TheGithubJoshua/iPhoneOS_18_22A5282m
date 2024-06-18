@class SBSHomeScreenService, NSString, PSCloudSyncButton;

@interface DBSHomeScreenBaseListController : PSListController <PSCloudSyncDelegate>

@property (retain, nonatomic) PSCloudSyncButton *cloudSyncButton;
@property (readonly, nonatomic) SBSHomeScreenService *_homeScreenService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)specifiers;
- (id)init;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)setCloudSyncEnabled:(BOOL)a0;
- (void)dealloc;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (BOOL)hasMergeConflict;
- (void)isCloudSyncEnabled:(id /* block */)a0;
- (void)resolveMergeConflict:(unsigned long long)a0;
- (id)showsSpotlight:(id)a0;
- (void)setShowsBadgesInAppLibrary:(id)a0 specifier:(id)a1;
- (void)setShowsSpotlight:(id)a0 specifier:(id)a1;
- (id)showsBadgesInAppLibrary:(id)a0;

@end
