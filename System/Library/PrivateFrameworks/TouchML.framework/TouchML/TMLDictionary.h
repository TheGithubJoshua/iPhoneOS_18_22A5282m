@class NSArray, NSMutableDictionary;

@interface TMLDictionary : NSObject

@property (retain, nonatomic) NSMutableDictionary *dictionary;
@property (readonly, nonatomic) unsigned long long count;
@property (readonly, nonatomic) NSArray *keys;

+ (id)keyPathsForValuesAffectingValueForKey:(id)a0;

- (id)init;
- (id)initWithDictionary:(id)a0;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)a0;
- (void).cxx_destruct;
- (id)get:(id)a0;
- (void)set:(id)a0 value:(id)a1;
- (id)union:(id)a0;

@end
