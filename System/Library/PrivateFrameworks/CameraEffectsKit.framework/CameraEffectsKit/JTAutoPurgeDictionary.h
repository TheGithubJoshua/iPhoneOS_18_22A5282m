@class NSMutableDictionary;
@protocol JTAutoPurgeDictionaryDelegate;

@interface JTAutoPurgeDictionary : NSObject {
    NSMutableDictionary *_dictionary;
}

@property (readonly) unsigned long long count;
@property BOOL suspendPurging;
@property (weak, nonatomic) id<JTAutoPurgeDictionaryDelegate> delegate;

- (id)init;
- (void)setObject:(id)a0 forKey:(id)a1;
- (id)objectForKey:(id)a0;
- (void)addEntriesFromDictionary:(id)a0;
- (void)removeAllObjects;
- (void).cxx_destruct;
- (id)description;
- (void)dealloc;
- (id)copyOfDictionary;
- (void)highMemoryWarning;

@end
