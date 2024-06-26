@interface ICWeakObject : NSObject <NSCopying>

@property (nonatomic) unsigned long long cachedHash;
@property (readonly, weak, nonatomic) id object;

- (id)initWithObject:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
