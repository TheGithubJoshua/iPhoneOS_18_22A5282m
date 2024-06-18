@class NSString, NSMutableDictionary;

@interface ENPreferencesStore : NSObject

@property (retain, nonatomic) NSString *pathname;
@property (retain, nonatomic) NSMutableDictionary *store;

+ (id)defaultPreferenceStore;
+ (id)pathnameForStoreFilename:(id)a0;
+ (id)preferenceStoreWithSecurityApplicationGroupIdentifier:(id)a0;

- (void)load;
- (void)encodeObject:(id)a0 forKey:(id)a1;
- (id)init;
- (void)setObject:(id)a0 forKey:(id)a1;
- (id)initWithURL:(id)a0;
- (void)removeAllItems;
- (id)objectForKey:(id)a0;
- (void).cxx_destruct;
- (void)save;
- (id)decodedObjectForKey:(id)a0;
- (id)initWithStoreFilename:(id)a0;

@end
