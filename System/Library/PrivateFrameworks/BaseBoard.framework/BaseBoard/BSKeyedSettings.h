@class NSMutableDictionary;

@interface BSKeyedSettings : BSSettings {
    NSMutableDictionary *_keyMap;
}

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)_init;
- (id)_valueDescriptionForFlag:(long long)a0 object:(id)a1 ofSetting:(unsigned long long)a2 multilinePrefix:(id)a3;
- (long long)flagForKey:(id)a0;
- (id)objectForKey:(id)a0;
- (void)enumerateKeyedObjectsWithBlock:(id /* block */)a0;
- (void)_removeAllSettings;
- (void).cxx_destruct;
- (id)_keyDescriptionForSetting:(unsigned long long)a0;
- (BOOL)isKeyedSettings;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)boolForKey:(id)a0;
- (id)initWithXPCDictionary:(id)a0;
- (void)enumerateKeyedFlagsWithBlock:(id /* block */)a0;

@end
