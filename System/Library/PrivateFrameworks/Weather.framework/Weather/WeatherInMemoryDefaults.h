@class NSString, NSMutableDictionary;

@interface WeatherInMemoryDefaults : NSObject <WeatherPreferencesPersistence>

@property (retain) NSMutableDictionary *inMemoryStore;
@property (readonly) BOOL synchronizeWasCalled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)setBool:(BOOL)a0 forKey:(id)a1;
- (void)setObject:(id)a0 forKey:(id)a1;
- (id)stringForKey:(id)a0;
- (BOOL)synchronize;
- (id)objectForKey:(id)a0;
- (void)removeObjectForKey:(id)a0;
- (void).cxx_destruct;
- (BOOL)boolForKey:(id)a0;
- (void)synchronizeWithCompletionHandler:(id /* block */)a0;
- (id)dictionaryForKey:(id)a0;
- (id)arrayForKey:(id)a0;

@end
