@class NSUserDefaults, NSMutableDictionary;

@interface ADDeviceConfiguration : NSObject {
    NSUserDefaults *_globalUserDefaults;
    NSUserDefaults *_appleDepthUserDefaults;
    NSMutableDictionary *_currentDefaults;
}

+ (id)listForKey:(id)a0;
+ (id)sharedConfiguration;
+ (id)stringForKey:(id)a0;
+ (float)floatForKey:(id)a0;
+ (id)numberForKey:(id)a0;
+ (long long)integerForKey:(id)a0;
+ (BOOL)boolForKey:(id)a0;
+ (double)doubleForKey:(id)a0;
+ (id)getDefaultConfiguration;

- (id)init;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)createPropertyForKey:(id)a0;
- (void)updateValue:(id)a0 forKey:(id)a1;

@end
