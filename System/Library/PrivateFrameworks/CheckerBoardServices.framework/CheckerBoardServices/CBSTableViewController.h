@class NSString, BFFPaneHeaderView, UIView, NSAttributedString, UITableView;

@interface CBSTableViewController : UIViewController <UITableViewDelegate, UITableViewDataSource> {
    BFFPaneHeaderView *_headerView;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } containerFooterViewFrame;
@property (retain, nonatomic) UIView *containerFooterView;
@property (readonly, nonatomic) UITableView *tableView;
@property (copy, nonatomic) NSString *titleText;
@property (copy, nonatomic) NSString *detailDescriptionText;
@property (copy, nonatomic) NSAttributedString *attributedDetailDescriptionText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (void)_updateHeaderView;
- (id)headerView;
- (id)footerView;
- (void)viewDidLoad;
- (id)iconName;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void).cxx_destruct;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (void)_setupFooterView;
- (void)_setupView;
- (void)_setupTableView;
- (id)iconTintColor;
- (double)headerToFooterViewSpacing;
- (BOOL)isTitleAlignedByLastBaseline;

@end
