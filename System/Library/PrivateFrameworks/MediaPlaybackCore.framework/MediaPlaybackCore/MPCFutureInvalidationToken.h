@class MPCFuture;

@interface MPCFutureInvalidationToken : NSObject <NSCopying>

@property (retain, nonatomic) MPCFuture *future;

- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
