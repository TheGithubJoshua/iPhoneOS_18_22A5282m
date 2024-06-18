@class PUIReportSensorManager;

@interface PUIReportSensorListController : PSListController

@property (retain, nonatomic) PUIReportSensorManager *manager;
@property (nonatomic) BOOL alphabeticalSort;

+ (id)valueForSpecifier:(id)a0;
+ (id)appSpecifiersFromManager:(id)a0;

- (id)specifiers;
- (id)init;
- (BOOL)shouldReloadSpecifiersOnResume;
- (void).cxx_destruct;
- (void)dealloc;
- (void)sortByWasTapped;
- (void)dataDidChange;

@end
