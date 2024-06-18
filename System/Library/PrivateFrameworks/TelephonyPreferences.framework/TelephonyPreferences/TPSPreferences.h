@class NSString;

@interface TPSPreferences : NSObject

@property (class, readonly, nonatomic) TPSPreferences *sharedInstance;

@property (readonly, copy, nonatomic) NSString *domain;
@property (readonly, nonatomic) BOOL showSubscriptionList;

- (BOOL)boolForKey:(id)a0 defaultValue:(BOOL)a1;
- (id)stringForKey:(id)a0 defaultValue:(id)a1;
- (id)init;
- (void)setBool:(BOOL)a0 forKey:(id)a1;
- (id)numberForKey:(id)a0 defaultValue:(id)a1;
- (void)setPreferencesValue:(id)a0 forKey:(id)a1;
- (void)setString:(id)a0 forKey:(id)a1;
- (void)setInteger:(long long)a0 forKey:(id)a1;
- (void)setNumber:(id)a0 forKey:(id)a1;
- (unsigned long long)unsignedIntegerForKey:(id)a0 defaultValue:(unsigned long long)a1;
- (id)preferencesValueForKey:(id)a0;
- (void).cxx_destruct;
- (id)preferencesValueForKey:(id)a0 domain:(id)a1;
- (long long)integerForKey:(id)a0 defaultValue:(long long)a1;
- (void)setPreferencesValue:(id)a0 forKey:(id)a1 domain:(id)a2;
- (void)setUnsignedInteger:(unsigned long long)a0 forKey:(id)a1;

@end