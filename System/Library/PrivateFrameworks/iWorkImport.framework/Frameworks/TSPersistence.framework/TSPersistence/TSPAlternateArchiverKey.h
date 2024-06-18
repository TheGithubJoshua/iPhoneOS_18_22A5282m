@interface TSPAlternateArchiverKey : NSObject <NSCopying>

@property (readonly, nonatomic) unsigned long long version;
@property (readonly, nonatomic) const void *fieldPath;

- (id)init;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)initWithVersion:(unsigned long long)a0 fieldPath:(const void *)a1;

@end
