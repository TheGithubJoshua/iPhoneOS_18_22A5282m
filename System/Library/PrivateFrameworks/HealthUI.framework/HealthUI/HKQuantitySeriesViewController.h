@class HKQuantitySeriesDataProvider, UITableView;

@interface HKQuantitySeriesViewController : UIViewController

@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) HKQuantitySeriesDataProvider *dataProvider;

- (void)loadView;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)setEditing:(BOOL)a0 animated:(BOOL)a1;
- (void)willMoveToParentViewController:(id)a0;

@end
