@interface BSMutableSettings : BSSettings

- (void)applySettings:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)removeAllSettings;
- (void)setFlag:(long long)a0 forSetting:(unsigned long long)a1;
- (void)setObject:(id)a0 forSetting:(unsigned long long)a1;

@end
