@class NSMutableDictionary;

@interface _LocalizedImageCache : NSObject {
    NSMutableDictionary *_cache;
}

- (id)init;
- (id)imageForKey:(id)a0;
- (void)_localeChanged;
- (void)removeAllObjects;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setImage:(id)a0 forKey:(id)a1;

@end
