@class UIImageView, UILabel;

@interface CCUISensorAttributionPrivacyHeaderView : SBFView <CCUISensorAttributionViewAnimating>

@property (retain, nonatomic) UIImageView *handImageView;
@property (retain, nonatomic) UILabel *staticPrivacyHeaderLabel;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } cachedExpandedRect;

- (void)setBlurRadius:(double)a0;
- (id)init;
- (void)sizeToFit;
- (id)_imageSymbolConfiguration;
- (void).cxx_destruct;
- (id)_filledPrivacyHandImage;

@end
