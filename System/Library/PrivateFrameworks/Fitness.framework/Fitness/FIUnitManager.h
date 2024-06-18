@class HKHealthStore, NSMutableDictionary;

@interface FIUnitManager : NSObject {
    HKHealthStore *_healthStore;
    NSMutableDictionary *_preferredUnits;
}

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

@end
