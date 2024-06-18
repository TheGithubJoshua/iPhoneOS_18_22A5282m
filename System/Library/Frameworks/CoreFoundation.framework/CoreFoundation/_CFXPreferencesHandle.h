@class _CFXPreferences;

@interface _CFXPreferencesHandle : NSObject {
    _CFXPreferences *prefs;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
    unsigned int overrideEUID;
}

- (id)init;
- (id)copyPrefs;
- (void)dealloc;
- (void)setEUIDOverride:(unsigned int)a0;

@end
