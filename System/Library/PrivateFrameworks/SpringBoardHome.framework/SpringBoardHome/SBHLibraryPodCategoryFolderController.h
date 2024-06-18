@interface SBHLibraryPodCategoryFolderController : SBHLibraryPodFolderController

+ (id)iconLocation;
+ (Class)_contentViewClass;

- (void)iconListView:(id)a0 didRemoveIconView:(id)a1;
- (id)currentIconListView;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (id)contentScrollView;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)handleTapGesture:(id)a0;
- (void)_logCategoryVisibilityChangedTo:(BOOL)a0;

@end
