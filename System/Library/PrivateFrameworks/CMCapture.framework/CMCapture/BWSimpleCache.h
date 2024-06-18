@class NSMutableDictionary;

@interface BWSimpleCache : NSObject {
    NSMutableDictionary *_cache;
    struct OpaqueFigSimpleMutex { } *_propertyMutex;
}

+ (void)initialize;

- (id)init;
- (void)cacheObject:(id)a0 forKey:(id)a1;
- (void)dealloc;
- (id)copyAndClearObjectForKey:(id)a0;

@end
