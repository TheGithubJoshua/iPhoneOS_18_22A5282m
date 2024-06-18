@protocol OKCollectionProxyDataSource;

@interface OKCollectionProxy : NSDictionary

@property (nonatomic) id<OKCollectionProxyDataSource> dataSource;
@property (nonatomic) unsigned long long tag;

- (id)init;
- (id)objectForKey:(id)a0;
- (id)objectAtIndexPath:(id)a0;
- (id)keyEnumerator;
- (void)dealloc;
- (unsigned long long)count;
- (id)initWithObjects:(id)a0 forKeys:(id)a1;

@end
