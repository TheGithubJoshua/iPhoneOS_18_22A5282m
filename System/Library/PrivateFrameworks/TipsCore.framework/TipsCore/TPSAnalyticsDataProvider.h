@protocol TPSAnalyticsDataProviderDataSource;

@interface TPSAnalyticsDataProvider : NSObject

@property (weak, nonatomic) id<TPSAnalyticsDataProviderDataSource> dataSource;

- (id)trialExperimentID;
- (id)deliveryInfoVersion;
- (id)experimentID;
- (id)initWithDataSource:(id)a0;
- (id)correlationIDForIdentifier:(id)a0;
- (id)bundleIDForIdentifier:(id)a0;
- (id)displayTypeForIdentifier:(id)a0;
- (id)contextForIdentifier:(id)a0;
- (unsigned long long)hintDisplayedCountForIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)trialRampID;
- (id)trialTreatmentID;
- (id)trialDeploymentID;
- (id)experimentCampID;
- (BOOL)isNotificationModelControl;

@end
