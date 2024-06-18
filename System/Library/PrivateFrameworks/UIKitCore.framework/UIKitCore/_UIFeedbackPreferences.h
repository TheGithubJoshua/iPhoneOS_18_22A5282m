@class NSDictionary, NSUserDefaults, NSMutableDictionary;

@interface _UIFeedbackPreferences : NSObject {
    NSMutableDictionary *_enabledFeedbackTypes;
}

@property (readonly, nonatomic) NSDictionary *defaultFeedbackTypes;
@property (retain, nonatomic) NSUserDefaults *userDefaults;

+ (id)sharedPreferences;

- (id)init;
- (void)_updateEnabledFeedbackTypes:(unsigned long long *)a0 forKey:(id)a1 type:(unsigned long long)a2;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)_setEnabledFeedbackTypes:(unsigned long long)a0 forCategory:(id)a1 postNotification:(BOOL)a2;
- (void).cxx_destruct;
- (id)_defaultKeyForCategoryKey:(id)a0 type:(unsigned long long)a1;
- (unsigned long long)_enabledFeedbackTypesForCategory:(id)a0;
- (id)_categoryKeyForCategory:(id)a0 type:(unsigned long long)a1;
- (id)_categoryForNullableCategory:(id)a0;
- (unsigned long long)enabledFeedbackTypesForCategory:(id)a0;
- (void)_startObservingDefaults;
- (unsigned long long)_defaultFeedbackTypesForCategory:(id)a0;
- (void)_accessibilityForceTouchChanged:(id)a0;
- (void)_invalidate;
- (void)_setEnabledFeedbackTypes:(unsigned long long)a0 forCategory:(id)a1;

@end
