@class UIImageView;

@interface SUUserRatingView : UIView {
    float _value;
    UIImageView *_foregroundImageView;
    UIImageView *_backgroundImageView;
}

+ (id)copyImageForRating:(float)a0 backgroundColor:(id)a1 style:(long long)a2;
+ (double)reflectionHeight;

- (id)init;
- (id)initWithStyle:(long long)a0;
- (void)setValue:(float)a0;
- (void)layoutSubviews;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_foregroundImageClipBounds;
- (float)heightWithoutReflection;
- (id)initWithForeground:(id)a0 background:(id)a1;

@end
