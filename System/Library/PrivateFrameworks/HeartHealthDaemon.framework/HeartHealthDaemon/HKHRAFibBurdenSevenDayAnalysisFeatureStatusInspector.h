@class HDFeatureAvailabilityOnboardingEligibilityDeterminer;

@interface HKHRAFibBurdenSevenDayAnalysisFeatureStatusInspector : NSObject <HKHRAFibBurdenSevenDayAnalysisFeatureStatusInspecting> {
    HDFeatureAvailabilityOnboardingEligibilityDeterminer *_onboardingEligibilityDeterminer;
}

- (id)pairedDevices;
- (id)initWithOnboardingEligibilityDeterminer:(id)a0;
- (BOOL)shouldAllowAnalysisWithFeatureStatus:(id)a0;
- (void).cxx_destruct;

@end
