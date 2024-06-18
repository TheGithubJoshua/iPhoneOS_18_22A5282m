@interface _TVListDescriptionViewCell : UICollectionViewCell

@property (nonatomic, getter=isDisabled) BOOL disabled;

- (BOOL)canBecomeFocused;
- (void)prepareForReuse;
- (id)preferredFocusEnvironments;
- (void)layoutSubviews;
- (void)didUpdateFocusFromView:(id)a0;

@end
