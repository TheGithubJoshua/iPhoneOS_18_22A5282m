@class NSArray, NSString, UITableView;

@interface UIDebuggingInformationVCHierarchyViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, UIDebuggingInformationViewController>

@property (retain, nonatomic) NSArray *data;
@property (retain, nonatomic) UITableView *tableView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void).cxx_destruct;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)getViewControllersRecursiveWithLevel:(int)a0 forView:(id)a1;
- (long long)tableView:(id)a0 indentationLevelForRowAtIndexPath:(id)a1;

@end
