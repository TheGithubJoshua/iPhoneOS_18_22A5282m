@class CAMLivePhotoBloomView;

@interface CAMLivePhotoStatusIndicator : CAMControlStatusIndicator

@property (readonly, nonatomic) CAMLivePhotoBloomView *_bloomView;
@property (nonatomic) long long livePhotoMode;

- (void)startAnimating;
- (void)stopAnimating;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (BOOL)shouldUseOutline;
- (void)_updateTintColor;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)imageNameForCurrentState;
- (void)layoutSubviews;
- (id)imageNameForAXHUD;
- (void)setLivePhotoMode:(long long)a0 animated:(BOOL)a1;
- (BOOL)shouldShowSlashForCurrentState;
- (BOOL)shouldUseActiveTintForCurrentState;
- (BOOL)shouldUseSlash;

@end
