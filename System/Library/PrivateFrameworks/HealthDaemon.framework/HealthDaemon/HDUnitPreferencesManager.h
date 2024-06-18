@class NSArray, HDProfile, HKObserverSet;

@interface HDUnitPreferencesManager : NSObject {
    HDProfile *_profile;
    NSArray *_versionedUnitPreferences;
    HKObserverSet *_observers;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

- (id)initWithProfile:(id)a0;
- (void)addUnitPreferenceObserver:(id)a0 queue:(id)a1;
- (void)removeUnitPreferenceObserver:(id)a0;
- (BOOL)removePreferredUnitForType:(id)a0 error:(id *)a1;
- (void)setPreferredUnitToDefaultIfNotSetForType:(id)a0;
- (void).cxx_destruct;
- (void)unitTesting_resetUnits;
- (BOOL)setPreferredUnit:(id)a0 forType:(id)a1 error:(id *)a2;
- (void)dealloc;
- (void)_localeDidChange:(id)a0;
- (id)preferredUnitForType:(id)a0 error:(id *)a1;
- (id)unitPreferencesDictionaryForTypes:(id)a0 version:(long long)a1 authorizationServer:(id)a2 error:(id *)a3;

@end
