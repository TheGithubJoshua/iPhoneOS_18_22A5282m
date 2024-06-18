@class CPLRUDictionary;

@interface SUImageCache : NSObject {
    CPLRUDictionary *_dictionary;
}

- (id)init;
- (id)initWithMaximumCapacity:(long long)a0;
- (void)dealloc;
- (void)removeAllCachedImages;
- (void)addImage:(id)a0 forURL:(id)a1 dataProvider:(id)a2;
- (id)imageForURL:(id)a0 dataProvider:(id)a1;

@end
