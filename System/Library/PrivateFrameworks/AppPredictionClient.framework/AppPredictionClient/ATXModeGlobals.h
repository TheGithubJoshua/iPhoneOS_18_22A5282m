@class NSDictionary;

@interface ATXModeGlobals : NSObject <ATXLocationParameters> {
    NSDictionary *_parameters;
}

+ (id)sharedInstance;

- (id)init;
- (id)initWithAssetClass:(Class)a0;
- (int)predictedExitTimesUpdateInterval;
- (int)frequentLOIMinimumVisits;
- (void).cxx_destruct;
- (int)previousLOIExpirationTime;
- (BOOL)isAutomationTriggerSuggestionsForFocusEnabled;
- (BOOL)isSetupSuggestionsForFocusEnabled;
- (int)currentLocationUpdateInterval;
- (int)homeLOISearchRadius;
- (int)workLOISearchRadius;
- (int)locationOfInterestSearchRadius;
- (int)locationOfInterestUpdateInterval;
- (int)predictedLocationsOfInterestUpdateInterval;

@end
