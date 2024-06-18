@interface ICInclusionFilterTypeSelection : ICFilterTypeSelection <NSCopying>

@property (readonly, nonatomic) unsigned long long inclusionType;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)filterType;
- (id)initWithInclusionType:(unsigned long long)a0;
- (BOOL)isEqualToInclusionFilterSelection:(id)a0;
- (id)rawFilterValue;

@end
