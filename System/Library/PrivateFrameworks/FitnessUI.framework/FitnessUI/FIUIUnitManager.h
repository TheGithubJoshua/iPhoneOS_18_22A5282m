@class NSMutableDictionary, HKHealthStore;

@interface FIUIUnitManager : NSObject {
    NSMutableDictionary *_preferredUnits;
    HKHealthStore *_healthStore;
}

+ (id)sharedManager;

- (id)initWithHealthStore:(id)a0;
- (void)_storePreferredUnitsInDefaults:(id)a0;
- (id)_loadPreferredUnitsFromDefaults;
- (void)_notifyUnitPreferencesChanged;
- (id)userLapLengthHKUnit;
- (void)_updatePreferredUnits;
- (id)_preferredHKUnitForQuantityType:(id)a0;
- (id)userBasalEnergyBurnedUnit;
- (void).cxx_destruct;
- (void)_setPreferredHKUnit:(id)a0 forQuantityType:(id)a1;
- (void)setUserActiveEnergyBurnedUnit:(id)a0;
- (id)userActiveEnergyBurnedUnit;
- (id)userDistanceWalkingRunningHKUnit;
- (void)_userPreferencesDidChange:(id)a0;
- (void)setUserBasalEnergyBurnedUnit:(id)a0;
- (void)_localeDidChange:(id)a0;
- (double)distanceInDistanceUnit:(unsigned long long)a0 forDistanceInMeters:(double)a1;
- (double)distanceInMetersForDistanceInUserUnit:(double)a0 distanceType:(unsigned long long)a1;
- (double)distanceInUserDistanceUnitForDistanceInMeters:(double)a0 distanceType:(unsigned long long)a1;
- (double)paceWithDistance:(id)a0 overDuration:(double)a1 paceFormat:(long long)a2;
- (void)setPreferredUnitsForTesting:(id)a0;
- (void)setUserDistanceCyclingUnit:(unsigned long long)a0;
- (void)setUserDistanceUnit:(unsigned long long)a0 forDistanceType:(unsigned long long)a1;
- (void)setUserDistanceWalkingRunningUnit:(unsigned long long)a0;
- (id)userDistanceCyclingHKUnit;
- (unsigned long long)userDistanceCyclingUnit;
- (id)userDistanceElevationHKUnit;
- (unsigned long long)userDistanceElevationUnit;
- (id)userDistanceHKUnitForActivityType:(id)a0;
- (id)userDistanceHKUnitForDistanceType:(unsigned long long)a0;
- (unsigned long long)userDistanceUnitForDistanceType:(unsigned long long)a0;
- (unsigned long long)userDistanceWalkingRunningUnit;

@end
