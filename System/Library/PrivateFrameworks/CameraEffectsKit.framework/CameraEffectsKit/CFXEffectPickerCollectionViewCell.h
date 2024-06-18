@class NSString, JFXImageView, CFXEffect, JTImage;

@interface CFXEffectPickerCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) JFXImageView *imageView;
@property (retain, nonatomic) JTImage *image;
@property (retain, nonatomic) CFXEffect *effect;
@property (retain, nonatomic) NSString *effectIdentifier;

- (void)awakeFromNib;
- (BOOL)isAccessibilityElement;
- (id)accessibilityLabel;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (unsigned long long)accessibilityTraits;
- (void)configureCellAppearence;

@end
