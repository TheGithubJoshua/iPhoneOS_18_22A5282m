@class NSMutableDictionary;

@interface PVInputBitmapCache : NSObject {
    NSMutableDictionary *_cache;
    unsigned long long _countLimit;
}

- (void)purge:(BOOL)a0;
- (id)init;
- (void)setObject:(id)a0 forKey:(id)a1;
- (id)objectForKey:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setCountLimit:(unsigned long long)a0;
- (void)didRecieveMemoryWarning:(id)a0;

@end
