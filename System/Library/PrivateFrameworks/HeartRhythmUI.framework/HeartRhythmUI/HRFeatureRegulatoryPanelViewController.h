@class UINavigationController, NSArray, HKHealthStore, NSString, UIViewController;
@protocol HRFeatureRegulatoryReenableFeatureActionDelegate;

@interface HRFeatureRegulatoryPanelViewController : HKTableViewController <HKHeartRhythmAvailabilityObserver, HRFeatureRegulatoryReenableFeatureActionDelegate>

@property (weak, nonatomic) UIViewController<HRFeatureRegulatoryReenableFeatureActionDelegate> *delegate;
@property (retain, nonatomic) UINavigationController *onboardingNavigationController;
@property (readonly, nonatomic) HKHealthStore *healthStore;
@property (readonly, nonatomic) NSArray *displayableItems;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)viewDidLoad;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void).cxx_destruct;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (BOOL)tableView:(id)a0 shouldHighlightRowAtIndexPath:(id)a1;
- (id)initWithHealthStore:(id)a0 delegate:(id)a1;
- (void)didSelectReenableFeatureForProductName:(id)a0;

@end
