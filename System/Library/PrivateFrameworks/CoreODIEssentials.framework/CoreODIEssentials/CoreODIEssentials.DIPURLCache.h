@interface CoreODIEssentials.DIPURLCache : NSURLCache

- (id)init;
- (id)initWithMemoryCapacity:(long long)a0 diskCapacity:(long long)a1 directoryURL:(id)a2;
- (id)initWithMemoryCapacity:(long long)a0 diskCapacity:(long long)a1 diskPath:(id)a2;
- (void)storeCachedResponse:(id)a0 forRequest:(id)a1;
- (void)storeCachedResponse:(id)a0 forDataTask:(id)a1;
- (void).cxx_destruct;

@end
