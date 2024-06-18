@class NSMutableDictionary;

@interface PLMultiKeyEntry : PLEntry

@property (retain) NSMutableDictionary *multiKeys;

+ (void)load;

- (id)init;
- (void)setObject:(id)a0 forKey:(id)a1;
- (id)serializedForJSON;
- (id)keysForSubKey:(id)a0 ofSubKeyType:(id)a1;
- (void).cxx_destruct;
- (id)objectsForSubKey:(id)a0 ofSubKeyType:(id)a1;

@end
