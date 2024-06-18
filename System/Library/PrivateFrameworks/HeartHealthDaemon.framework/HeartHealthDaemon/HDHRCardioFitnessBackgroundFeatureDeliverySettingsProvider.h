@class NSUserDefaults;

@interface HDHRCardioFitnessBackgroundFeatureDeliverySettingsProvider : NSObject <HDBackgroundFeatureDeliverySettingsProviding> {
    NSUserDefaults *_heartRateSettingsDefaults;
}

- (id)initWithHeartRateSettingsDefaults:(id)a0;
- (void).cxx_destruct;
- (id)featureSettingsUponBackgroundDelivery;

@end
