@class UISwipeGestureRecognizer, UIImageView, NSTimer, UIImage, NSString, UITapGestureRecognizer;
@protocol CAMTransientImageWellDelegate;

@interface CAMTransientImageWell : UIView <UIGestureRecognizerDelegate>

@property (retain, nonatomic, setter=_setImageView:) UIImageView *_imageView;
@property (retain, nonatomic) NSTimer *_autoStashTimer;
@property (nonatomic, getter=_isStashed, setter=_setStashed:) BOOL _stashed;
@property (readonly, nonatomic) UITapGestureRecognizer *_tapGestureRecognizer;
@property (readonly, nonatomic) UISwipeGestureRecognizer *_unstashGestureRecognizer;
@property (readonly, nonatomic) UISwipeGestureRecognizer *_stashGestureRecognizer;
@property (weak, nonatomic) id<CAMTransientImageWellDelegate> delegate;
@property (nonatomic) long long orientation;
@property (nonatomic) BOOL autoStashesImages;
@property (retain, nonatomic) UIImage *image;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } imageFrame;
@property (nonatomic) BOOL currentImageHidden;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setOrientation:(long long)a0 animated:(BOOL)a1;
- (void).cxx_destruct;
- (void)_handleTap:(id)a0;
- (void)layoutSubviews;
- (void)setImage:(id)a0 animated:(BOOL)a1;
- (void)_cancelAutoStashTimer;
- (void)_dismissImageAnimated:(BOOL)a0;
- (void)_dismissImageView:(id)a0 animated:(BOOL)a1;
- (void)_handleAutoStashTimerFired:(id)a0;
- (void)_handleStashSwipe:(id)a0;
- (void)_handleUnstashSwipe:(id)a0;
- (struct CGSize { double x0; double x1; })_imageViewMaxSize;
- (struct CGSize { double x0; double x1; })_imageViewSizeForContentSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGPoint { double x0; double x1; })_imageViewSpawnPoint;
- (struct CGPoint { double x0; double x1; })_imageViewStashPoint;
- (void)_restartAutoStashTimer;
- (void)_restartAutoStashTimerWithDuration:(double)a0;
- (void)_setStashed:(BOOL)a0 animated:(BOOL)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_unorientedFrameForImageView:(id)a0;
- (void)clearImageAnimated:(BOOL)a0;

@end
