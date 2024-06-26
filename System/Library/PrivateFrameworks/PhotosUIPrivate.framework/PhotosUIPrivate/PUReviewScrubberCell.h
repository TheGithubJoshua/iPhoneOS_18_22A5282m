@class UIImageView, UIImage;

@interface PUReviewScrubberCell : UICollectionViewCell

@property (readonly, nonatomic) UIImageView *_thumbnailImageView;
@property (readonly, nonatomic) UIImageView *_checkmarkImageView;
@property (readonly, nonatomic) UIImageView *_suggestedImageView;
@property (retain, nonatomic) UIImage *image;
@property (nonatomic, getter=isFavorite) BOOL favorite;
@property (nonatomic, getter=isSuggested) BOOL suggested;
@property (nonatomic) BOOL wantsSmallSuggestionIndicators;

- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_commonPUReviewScrubberCellInitialization;
- (void)_updateFavoriteView;
- (void)_updateSuggestedView;
- (void)_updateThumbnailImageView;
- (void)setFavorite:(BOOL)a0 animated:(BOOL)a1;
- (void)setSuggested:(BOOL)a0 animated:(BOOL)a1;

@end
