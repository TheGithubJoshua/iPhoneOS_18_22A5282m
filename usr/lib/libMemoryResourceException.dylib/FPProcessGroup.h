@class NSDictionary, NSMutableSet;

@interface FPProcessGroup : FPProcessGroupMinimal <NSCopying>

@property (retain, nonatomic) NSDictionary *categories;
@property (nonatomic) unsigned int categoriesRefcount;
@property (retain, nonatomic) NSMutableSet *objects;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)addProcess:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
