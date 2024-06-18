@interface NFStorageControllerApplet : NFStorageController

- (id)dbProtectionType;
- (id)fetchAppletEntitiesWithError:(id *)a0;
- (id)name;
- (id)_deleteAllAppletEntities;
- (id)updateAppletEntitiesWithConfig:(id)a0;
- (void)deleteAllAppletEntities;

@end
