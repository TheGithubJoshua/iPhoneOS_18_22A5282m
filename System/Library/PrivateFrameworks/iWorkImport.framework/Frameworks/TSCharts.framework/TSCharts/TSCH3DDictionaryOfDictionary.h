@class NSMutableDictionary;

@interface TSCH3DDictionaryOfDictionary : NSObject {
    NSMutableDictionary *_dictionary;
}

- (id)init;
- (void).cxx_destruct;
- (id)description;
- (void)addEntriesFromDictionaryOfDictionary:(id)a0;
- (id)objectForFirstLevelKey:(id)a0 secondLevelKey:(id)a1;
- (void)removeObjectForFirstLevelKey:(id)a0 secondLevelKey:(id)a1;
- (void)setObject:(id)a0 forFirstLevelKey:(id)a1 secondLevelKey:(id)a2;

@end
