@class UIImage;

@interface GKFixedSizeImageView : UIImageView

@property (retain, nonatomic) UIImage *actualImage;

- (void)invalidateIntrinsicContentSize;
- (id)image;
- (void)setImage:(id)a0;
- (void).cxx_destruct;

@end
