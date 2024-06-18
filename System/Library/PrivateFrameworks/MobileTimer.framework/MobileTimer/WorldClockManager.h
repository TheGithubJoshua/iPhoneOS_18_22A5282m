@class WorldClockPreferences, NSMutableArray, NSDate;

@interface WorldClockManager : NSObject {
    BOOL _dirty;
    WorldClockPreferences *_defaults;
}

@property (retain, nonatomic) NSDate *lastModified;
@property (readonly, nonatomic) NSMutableArray *cities;

+ (id)sharedManager;
+ (id)sharedManagerWithPreferences:(id)a0;

- (void)removeCity:(id)a0;
- (unsigned long long)addCity:(id)a0;
- (void)addDefaultCitiesIfNeeded;
- (id)updateALDataWithCity:(id)a0;
- (id)cityWithIdUrl:(id)a0;
- (id)allCities;
- (id)worldClockCityFromPersistenceRepresentation:(id)a0;
- (void)removeAllCities;
- (void)pushCityPropertiesToPreferences;
- (void)saveCities;
- (id)updatedTimezoneForCityWithID:(id)a0;
- (void).cxx_destruct;
- (id)updatedDataForCityWithID:(id)a0;
- (void)loadCities;
- (void)moveCityFromIndex:(unsigned long long)a0 toIndex:(unsigned long long)a1;
- (void)removeCityAtIndex:(unsigned long long)a0;
- (id)citiesMatchingIdentifiers:(id)a0;
- (id)initWithPreferences:(id)a0;
- (id)worldClockCityFromPersistenceArray:(id)a0;
- (BOOL)checkIfCitiesModified;
- (BOOL)canAddCity;
- (id)worldClockCityFromPersistenceDictionary:(id)a0;
- (id)fixUpCityProperties:(id)a0;
- (id)citiesMatchingName:(id)a0;
- (void)_notifyNano;

@end
