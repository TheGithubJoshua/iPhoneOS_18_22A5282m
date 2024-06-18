@class BFFPaneHeaderView, NSString, UIImage, UIView, UITableView;

@interface CDPTableViewController : UIViewController <UITableViewDataSource, UITableViewDelegate>

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) BFFPaneHeaderView *headerView;
@property (copy, nonatomic) NSString *headerTitle;
@property (copy, nonatomic) NSString *headerSubTitle;
@property (nonatomic) long long tableViewStyle;
@property (retain, nonatomic) UIImage *icon;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (readonly, copy, nonatomic) NSString *deviceClass;
@property (readonly, nonatomic) BOOL isIPad;
@property (readonly, nonatomic) BOOL isiPhone5OrSmaller;
@property (readonly, nonatomic) BOOL uiTestMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)loadView;
- (void)viewDidLayoutSubviews;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void).cxx_destruct;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (double)heightForHeaderInTableView:(id)a0;
- (id)viewForHeaderInTableView:(id)a0;
- (id)initWithTitle:(id)a0 subTitle:(id)a1;

@end