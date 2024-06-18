@protocol CHMutableKeyValueDataSource, CHKeyValueDataSource;

@interface CHUserConfiguration : CHConfiguration

@property (readonly, nonatomic) id<CHKeyValueDataSource, CHMutableKeyValueDataSource> dataSource;

+ (id)userDefaults;
+ (id)registeredDefaults;

- (id)init;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)synchronize;
- (void)dealloc;
- (BOOL)propertyNameForKeyPath:(id)a0;

@end
