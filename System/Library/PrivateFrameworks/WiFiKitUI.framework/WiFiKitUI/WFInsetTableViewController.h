@interface WFInsetTableViewController : UITableViewController {
    BOOL _sectionContentInsetInitialized;
}

- (void)loadView;
- (void)viewDidLayoutSubviews;
- (BOOL)_isRegularWidth;
- (void)_updateSectionContentInsetWithAnimation:(BOOL)a0;

@end
