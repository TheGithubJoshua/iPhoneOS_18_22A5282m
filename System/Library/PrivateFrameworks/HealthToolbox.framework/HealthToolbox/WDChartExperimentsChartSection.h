@class HKHeartbeatSequenceChartViewController, WDActivityQueryTestController, HKHealthChartFactory, NSMutableArray, HKInteractiveChartOverlayViewController;

@interface WDChartExperimentsChartSection : WDTableViewSection

@property (retain, nonatomic) NSMutableArray *viewControllers;
@property (retain, nonatomic) HKHeartbeatSequenceChartViewController *heartbeatSequenceForUpdate;
@property (retain, nonatomic) HKInteractiveChartOverlayViewController *heartRateController;
@property (retain, nonatomic) WDActivityQueryTestController *activityQueryTestController;
@property (retain, nonatomic) HKHealthChartFactory *healthChartFactory;

- (void).cxx_destruct;
- (unsigned long long)numberOfRows;
- (id)_dateFormatter;
- (id)titleForHeader;
- (id)cellForRow:(unsigned long long)a0 table:(id)a1;
- (void)setUpWithTableViewController:(id)a0;
- (id)_audiogramSampleForDate:(id)a0 sensitivityData:(id)a1;
- (id)_buildHeartSequenceDataFromString:(id)a0;
- (id)_localDateFromString:(id)a0;
- (void)activityQueryTest:(id)a0;
- (void)updateTachogram:(id)a0;

@end
