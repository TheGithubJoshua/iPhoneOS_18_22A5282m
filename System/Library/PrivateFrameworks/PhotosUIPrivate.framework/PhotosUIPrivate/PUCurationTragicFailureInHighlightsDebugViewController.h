@class PHFetchResult, NSConditionLock, PUCurationTragicFailureInHighlightsGridDebugViewController, NSMutableArray;

@interface PUCurationTragicFailureInHighlightsDebugViewController : UITableViewController {
    PHFetchResult *_highlights;
    PUCurationTragicFailureInHighlightsGridDebugViewController *_assetCollectionViewController;
    unsigned long long _currentHighlightIndex;
    NSConditionLock *_backgroundActivityLock;
    NSMutableArray *_highlightDatas;
}

- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidLoad;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)viewDidAppear:(BOOL)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void).cxx_destruct;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)dealloc;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 accessoryButtonTappedForRowWithIndexPath:(id)a1;
- (BOOL)tableView:(id)a0 canPerformAction:(SEL)a1 forRowAtIndexPath:(id)a2 withSender:(id)a3;
- (void)tableView:(id)a0 performAction:(SEL)a1 forRowAtIndexPath:(id)a2 withSender:(id)a3;
- (BOOL)tableView:(id)a0 shouldShowMenuForRowAtIndexPath:(id)a1;
- (void)_fetchUtilityAssetInformation;
- (void)goToNextHighlight:(id)a0;
- (void)goToPreviousHighlight:(id)a0;

@end
