@class NSString;

@interface ATXHomeScreenConfigCache : NSObject {
    NSString *_rootPath;
}

+ (BOOL)appPredictionPanelExistsInPage:(id)a0;
+ (BOOL)hasWidgetsOnTheHomeScreenWithHomeScreenPages:(id)a0;
+ (BOOL)suggestionsWidgetExistsInPage:(id)a0;

- (id)loadHomeScreenAndTodayPageConfigurationsWithError:(id *)a0;
- (id)init;
- (id)loadHomeScreenPageConfigurationsWithError:(id *)a0;
- (id)_filePathForTodayPage;
- (id)initWithPath:(id)a0;
- (BOOL)writeTodayPageStacks:(id)a0 appPredictionPanels:(id)a1 error:(id *)a2;
- (long long)numOnboardingStacksOnTheHomeScreen;
- (long long)pageIndexOfAppPredictionPanelWithIdentifier:(id)a0;
- (id)loadHomeScreenAndTodayPageConfigurationsFromJSONAtPath:(id)a0 error:(id *)a1;
- (id)prettyPrintedJSON;
- (id)loadDockAppListWithError:(id *)a0;
- (id)loadHomeScreenPageConfigurationsIncludingHidden:(BOOL)a0 error:(id *)a1;
- (void).cxx_destruct;
- (BOOL)writeHomeScreenPageConfigurations:(id)a0 error:(id *)a1;
- (id)_filePathForHomeScreenPageConfig;
- (BOOL)hasWidgetsOnTheHomeScreen;
- (id)loadTodayStacksAndPanelsAsHomeScreenPageWithError:(id *)a0;
- (BOOL)writeDockAppList:(id)a0 error:(id *)a1;
- (id)loadHomeScreenAndTodayPageConfigurationsIncludingHidden:(BOOL)a0 error:(id *)a1;
- (id)homeScreenWidgetPersonalities;
- (id)_filePathForDockConfig;

@end
