@class NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface BYPreferencesController : NSObject

@property (retain, nonatomic) NSString *domain;
@property (retain, nonatomic) NSMutableDictionary *preferences;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

+ (id)buddyPreferences;
+ (void)flushEverything;
+ (void)persistEverything;
+ (id)genericPreferencesEphemeral;
+ (id)randomPreferences;
+ (id)buddyPreferencesExcludedFromBackup;
+ (id)buddyPreferencesEphemeral;
+ (id)buddyPreferencesInternal;

- (void)persist;
- (id)init;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)flush;
- (id)initWithDomain:(id)a0;
- (id)objectForKey:(id)a0;
- (void)removeObjectForKey:(id)a0 onlyFromMemory:(BOOL)a1;
- (void)setObject:(id)a0 forKey:(id)a1 persistImmediately:(BOOL)a2;
- (void)removeObjectForKey:(id)a0;
- (void).cxx_destruct;
- (BOOL)boolForKey:(id)a0;
- (id)objectForKey:(id)a0 includeCache:(BOOL)a1;
- (void)reset;

@end
