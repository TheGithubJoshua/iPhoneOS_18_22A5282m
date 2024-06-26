@class NSArray;

@interface NSUserDefaults : NSObject {
    id _kvo_;
    struct __CFString { } *_identifier_;
    struct __CFString { } *_container_;
}

@property (class, readonly) NSUserDefaults *standardUserDefaults;

@property (readonly, copy) NSArray *volatileDomainNames;

+ (id)standardUserDefaults;
+ (id)_copyStandardUserDefaultsIfPresent;
+ (void)_web_addDefaultsChangeObserver;
+ (void)_web_defaultsDidChange;
+ (id)_web_preferredLanguageCode;
+ (void)resetStandardUserDefaults;
+ (void)setStandardUserDefaults:(id)a0;

- (void)setDouble:(double)a0 forKey:(id)a1;
- (id)init;
- (void)setBool:(BOOL)a0 forKey:(id)a1;
- (long long)longForKey:(id)a0;
- (void)setFloat:(float)a0 forKey:(id)a1;
- (void)registerDefaults:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (id)stringForKey:(id)a0;
- (float)floatForKey:(id)a0;
- (id)dictionaryRepresentation;
- (oneway void)release;
- (long long)integerForKey:(id)a0;
- (BOOL)synchronize;
- (void)setInteger:(long long)a0 forKey:(id)a1;
- (void)setValue:(id)a0 forKey:(id)a1;
- (id)objectForKey:(id)a0;
- (void)finalize;
- (id)valueForKey:(id)a0;
- (id)dataForKey:(id)a0;
- (void)removeObjectForKey:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1 inDomain:(id)a2;
- (id)initWithSuiteName:(id)a0;
- (id)objectForKey:(id)a0 inDomain:(id)a1;
- (BOOL)boolForKey:(id)a0;
- (id)initWithUser:(id)a0;
- (void)dealloc;
- (id)dictionaryForKey:(id)a0;
- (void)setLong:(long long)a0 forKey:(id)a1;
- (id)arrayForKey:(id)a0;
- (double)doubleForKey:(id)a0;
- (id)URLForKey:(id)a0;
- (void)_didEndKeyValueObserving;
- (id)_initWithSuiteName:(id)a0 container:(id)a1;
- (void)_willBeginKeyValueObserving;
- (void)addSuiteNamed:(id)a0;
- (BOOL)objectIsForcedForKey:(id)a0;
- (BOOL)objectIsForcedForKey:(id)a0 inDomain:(id)a1;
- (id)persistentDomainForName:(id)a0;
- (id)persistentDomainNames;
- (void)removeObjectForKey:(id)a0 inDomain:(id)a1;
- (void)removePersistentDomainForName:(id)a0;
- (void)removeSuiteNamed:(id)a0;
- (void)removeVolatileDomainForName:(id)a0;
- (id)searchList;
- (void)setPersistentDomain:(id)a0 forName:(id)a1;
- (void)setSearchList:(id)a0;
- (void)setURL:(id)a0 forKey:(id)a1;
- (void)setVolatileDomain:(id)a0 forName:(id)a1;
- (id)stringArrayForKey:(id)a0;
- (id)volatileDomainForName:(id)a0;
- (struct __CFString { } *)_identifier;
- (void)_setContainer:(struct __CFURL { } *)a0;
- (void)_setIdentifier:(struct __CFString { } *)a0;
- (struct __CFString { } *)_container;
- (id)_kvo;
- (void)_setKVO:(id)a0;
- (id)volatileDomainNames;
- (BOOL)_observingCFPreferences;

@end
