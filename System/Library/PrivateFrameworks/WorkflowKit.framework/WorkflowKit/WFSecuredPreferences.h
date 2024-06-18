@class NSUserDefaults;

@interface WFSecuredPreferences : NSObject

@property (class, readonly, nonatomic) WFSecuredPreferences *standardPreferences;

@property (copy, nonatomic) NSUserDefaults *userDefaults;

- (id)init;
- (void)setBool:(BOOL)a0 forKey:(id)a1;
- (void)userDefaultsDidChange:(id)a0;
- (void)registerDefaults:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (id)objectForKey:(id)a0;
- (void)removeObjectForKey:(id)a0;
- (void).cxx_destruct;
- (BOOL)boolForKey:(id)a0;
- (void)savePreferences;

@end
