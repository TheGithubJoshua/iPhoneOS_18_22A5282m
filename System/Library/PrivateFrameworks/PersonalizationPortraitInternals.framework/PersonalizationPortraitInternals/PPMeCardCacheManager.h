@class _PASLock;

@interface PPMeCardCacheManager : NSObject {
    _PASLock *_lock;
}

- (id)init;
- (id)initWithPath:(id)a0;
- (void)accessCacheWithBlock:(id /* block */)a0;
- (void).cxx_destruct;

@end
