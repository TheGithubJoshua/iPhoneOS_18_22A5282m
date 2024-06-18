@class NSMutableDictionary, NSMutableArray;

@interface _UIWebFormDelegateEditedFormsMap : NSObject {
    NSMutableDictionary *_map;
    NSMutableArray *_lifetimeHelper;
}

- (id)init;
- (void)setObject:(id)a0 forKey:(id)a1;
- (id)objectForKey:(id)a0;
- (id)allValues;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)a0;
- (void)dealloc;
- (id)_keyForWebFrame:(id)a0;

@end
