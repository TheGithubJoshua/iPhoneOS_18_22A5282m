@class UIView;

@interface AVTStickerPagingCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) UIView *pageContentView;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } additionalContentInsets;

+ (id)cellIdentifier;

- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)layoutSubviews;

@end
