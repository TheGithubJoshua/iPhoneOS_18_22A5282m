@class CPSGridButton;

@interface CPSGridTemplateCollectionCell : UICollectionViewCell

@property (retain, nonatomic) CPSGridButton *button;

+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (BOOL)canBecomeFocused;
- (void)prepareForReuse;

@end
