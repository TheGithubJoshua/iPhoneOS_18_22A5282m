@class NSString, HKHealthStore, NSArray, HKRouteView, HKLocationReadings, HKWorkout;

@interface HKWorkoutRouteViewController : UIViewController <UIActivityItemSource> {
    HKLocationReadings *_locationReadings;
    HKWorkout *_workout;
    BOOL _showUnsmoothedRoute;
}

@property (retain, nonatomic) HKRouteView *routeView;
@property (retain, nonatomic) HKLocationReadings *unsmoothedLocationReadings;
@property (retain, nonatomic) HKHealthStore *healthStore;
@property (nonatomic) BOOL sharingEnabled;
@property (retain, nonatomic) NSString *shareText;
@property (retain, nonatomic) NSArray *excludedActivityTypes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewWillLayoutSubviews;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewWillAppear:(BOOL)a0;
- (id)activityViewController:(id)a0 itemForActivityType:(id)a1;
- (id)activityViewControllerPlaceholderItem:(id)a0;
- (id)activityViewControllerLinkPresentationMetadata:(id)a0;
- (void)_shareButtonPressed:(id)a0;
- (void)_internalDebuggingOnly_fetchUnsmoothedRoutesFromDatabase;
- (void)_internalDebuggingOnly_toggleUnsmoothedLocations:(id)a0;
- (void)_toggleRouteViewMapType:(id)a0;
- (id)initWithLocationReadings:(id)a0 title:(id)a1 sharingEnabled:(BOOL)a2 shareText:(id)a3 excludedActivityTypes:(id)a4;

@end
