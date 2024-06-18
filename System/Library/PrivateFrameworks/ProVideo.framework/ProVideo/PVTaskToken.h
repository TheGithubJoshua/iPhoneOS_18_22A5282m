@class PVTaskTokenPool;

@interface PVTaskToken : NSObject

@property (nonatomic) BOOL returned;
@property (readonly, weak, nonatomic) PVTaskTokenPool *pool;
@property (readonly, nonatomic) unsigned long long tokenId;

- (void).cxx_destruct;
- (void)returnToPool;
- (void)dealloc;
- (id)initWithPool:(id)a0 tokenId:(unsigned long long)a1;

@end
