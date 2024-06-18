@interface ICChecklistsFilterTypeSelection : ICFilterTypeSelection <NSCopying>

@property (readonly, nonatomic) unsigned long long selectionType;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)filterType;
- (id)filterName;
- (id)initWithSelectionType:(unsigned long long)a0;
- (BOOL)isEqualToICChecklistsFilterTypeSelection:(id)a0;
- (id)rawFilterValue;

@end
