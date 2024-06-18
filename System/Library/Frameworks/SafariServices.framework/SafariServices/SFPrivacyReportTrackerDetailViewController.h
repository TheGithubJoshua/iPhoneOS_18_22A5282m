@class UIView, NSNumberFormatter, WBSKnownTrackingThirdParty;

@interface SFPrivacyReportTrackerDetailViewController : UITableViewController {
    NSNumberFormatter *_numberFormatter;
    WBSKnownTrackingThirdParty *_tracker;
    UIView *_header;
}

- (id)initWithTracker:(id)a0;
- (void)viewDidLoad;
- (void)traitCollectionDidChange:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void).cxx_destruct;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (void)viewLayoutMarginsDidChange;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (BOOL)tableView:(id)a0 shouldHighlightRowAtIndexPath:(id)a1;
- (void)_updateHeaderSize;

@end
