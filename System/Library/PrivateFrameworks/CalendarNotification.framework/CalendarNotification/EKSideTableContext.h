@class NSString;

@interface EKSideTableContext : NSManagedObjectContext {
    NSString *_path;
}

+ (id)sideTableContext;

- (id)rootDirectory;
- (id)_persistentStoreCoordinator;
- (id)alarmsBetweenStartDate:(id)a0 endDate:(id)a1;
- (id)_alarmsMatchingPredicate:(id)a0;
- (id)_urlForPersistentStore;
- (void)deleteAllAlarms;
- (id)settingForKey:(id)a0;
- (id)initWithConcurrencyType:(unsigned long long)a0;
- (id)insertNewAlarm;
- (void).cxx_destruct;
- (id)_managedObjectModel;
- (id)_settingForKey:(id)a0;
- (void)setSetting:(id)a0 forKey:(id)a1;
- (BOOL)_removeSqliteFiles;
- (id)nextAlarmFireTime;
- (id)_pathForPersistentStore;

@end
