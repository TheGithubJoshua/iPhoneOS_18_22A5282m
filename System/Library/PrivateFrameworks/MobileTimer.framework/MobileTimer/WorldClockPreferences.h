@interface WorldClockPreferences : NSObject

- (id)lastModified;
- (void)setLastModified:(id)a0;
- (void)setCities:(id)a0;
- (BOOL)synchronize;
- (void)cityDataUpdated;
- (id)defaultsKeys;
- (BOOL)defaultCitiesAdded;
- (void)clearOutCityUpdatePref;
- (id)cities;
- (BOOL)cityDataNeedsUpdate;
- (void)setDefaultCitiesAdded:(BOOL)a0;

@end
