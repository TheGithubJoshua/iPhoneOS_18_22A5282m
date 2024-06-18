@interface SBKPreferences : NSObject

+ (id)storeBookkeeperPreferences;

- (id)init;
- (void)setBool:(BOOL)a0 forKey:(id)a1;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)_preferencesDidChange;
- (BOOL)boolForKey:(id)a0;
- (void)dealloc;
- (id)objectForKey:(id)a0 withDefaultValue:(id)a1;
- (void)registerDefaultsIfKeyNotSet:(id)a0 registrationBlock:(id /* block */)a1;

@end
