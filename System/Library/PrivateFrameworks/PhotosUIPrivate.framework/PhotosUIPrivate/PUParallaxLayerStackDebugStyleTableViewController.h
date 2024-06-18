@class PUParallaxLayerStackViewModelUpdater, NSArray, PUParallaxLayerStackViewModel;

@interface PUParallaxLayerStackDebugStyleTableViewController : UITableViewController <PUParallaxLayerStackDebugStyleTableViewCellDelegate> {
    NSArray *_cachedAvailableStyles;
}

@property (retain, nonatomic) PUParallaxLayerStackViewModel *viewModel;
@property (retain, nonatomic) PUParallaxLayerStackViewModelUpdater *viewModelUpdater;

- (void)viewDidLoad;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void).cxx_destruct;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)availableStyles;
- (void)cellValueUpdated:(id)a0;
- (id)indexPathForStyle:(id)a0;

@end
