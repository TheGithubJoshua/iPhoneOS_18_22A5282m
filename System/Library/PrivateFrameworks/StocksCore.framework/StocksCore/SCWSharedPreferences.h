@class NSUserDefaults;

@interface SCWSharedPreferences : NSObject {
    NSUserDefaults *_sharedDefaults;
}

+ (id)sharedPreferences;
+ (void)clearSharedPreferences;

- (id)init;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)synchronize;
- (id)objectForKey:(id)a0;
- (void)removeObjectForKey:(id)a0;
- (void).cxx_destruct;

@end
