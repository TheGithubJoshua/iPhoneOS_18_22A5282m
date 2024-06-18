@class NSError;

@interface VNAsyncStatus : NSObject <NSCopying>

@property (readonly, nonatomic) BOOL completed;
@property (readonly, nonatomic) NSError *error;

- (id)init;
- (id)initWithStatus:(BOOL)a0 error:(id)a1;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
