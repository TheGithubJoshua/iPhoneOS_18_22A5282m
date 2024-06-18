@class ATXHomeScreenWidgetDescriptor;
@protocol ATXCategoricalHistogramProtocol;

@interface ATXDefaultHomeScreenItemAppLaunchScorer : NSObject {
    ATXHomeScreenWidgetDescriptor *_widget;
    id<ATXCategoricalHistogramProtocol> _spotlightLaunchesHistogram;
}

- (BOOL)_isAppPredictionsWidget;
- (id)_dateOfSleepOnboardingCompletion;
- (BOOL)_isContactsWidget;
- (id)_appLaunchScoreForSleepWidget;
- (id)_rawLaunchCountAndNumberOfUniqueDaysParentAppWasLaunchedWithCachedAppLaunchData:(id)a0;
- (id)initWithWidget:(id)a0 appLaunchHistogram:(id)a1;
- (id)scoreWithCachedAppLaunchData:(id)a0;
- (void).cxx_destruct;
- (double)_contactsWidgetiCloudFamilyScore;
- (BOOL)isWidgetSpecialCase;
- (id)_appLaunchScoreForContactsWidget;
- (BOOL)_isSleepWidget;

@end
