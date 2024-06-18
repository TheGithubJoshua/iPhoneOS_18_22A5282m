@interface ICAttachmentsFilterTypeSelection : ICFilterTypeSelection

@property (nonatomic) unsigned long long selectionType;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)filterType;
- (id)filterName;
- (id)initWithAttachmentSection:(short)a0;
- (id)initWithSelectionType:(unsigned long long)a0;
- (BOOL)isEqualToICAttachmentsFilterTypeSelection:(id)a0;
- (id)rawFilterValue;

@end
