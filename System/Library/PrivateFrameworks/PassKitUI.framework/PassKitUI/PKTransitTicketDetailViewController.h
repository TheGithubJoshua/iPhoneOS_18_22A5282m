@class UIColor;
@protocol PKTransitTicketDetailDataSource;

@interface PKTransitTicketDetailViewController : UITableViewController

@property (retain, nonatomic) UIColor *primaryTextColor;
@property (retain, nonatomic) UIColor *secondaryTextColor;
@property (weak, nonatomic) id<PKTransitTicketDetailDataSource> dataSource;

- (void)viewDidLoad;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void).cxx_destruct;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)_applyDefaultStaticStylingToCell:(id)a0;
- (id)initWithTransitTicketDetailDataSource:(id)a0;

@end
