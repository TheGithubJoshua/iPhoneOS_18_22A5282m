@class UIView;
@protocol SBCrossfadingIconImageSource;

@interface SBIconImageCrossfadeView : SBFTouchPassThroughView {
    double _containerScaleX;
    double _containerScaleY;
}

@property (readonly, nonatomic) UIView *containerView;
@property (readonly, nonatomic) id<SBCrossfadingIconImageSource> iconImageSource;
@property (readonly, nonatomic) UIView *iconImageView;
@property (readonly, nonatomic) UIView *crossfadeView;
@property (readonly, nonatomic) UIView *backgroundView;
@property (readonly, nonatomic) UIView *crossfadeContainerView;
@property (readonly, nonatomic) double morphFraction;
@property (nonatomic) BOOL masksCorners;
@property (nonatomic) BOOL performsTrueCrossfade;
@property (nonatomic) struct CGPoint { double x; double y; } stretchAnchorPoint;
@property (nonatomic) unsigned long long crossfadeStyle;

+ (Class)_containerViewClass;

- (void)cleanup;
- (void)_updateCornerMask;
- (void)_setCornerRadiusEnabled:(BOOL)a0;
- (void)_applyCornerRadius:(double)a0;
- (id)initWithSource:(id)a0 crossfadeView:(id)a1;
- (void)setSourceFadeFraction:(double)a0;
- (void).cxx_destruct;
- (void)setCrossfadeViewFadeFraction:(double)a0;
- (void)prepareGeometry;
- (void)setAppSnapshotCornerRadius:(double)a0;
- (void)setCrossfadeFraction:(double)a0;
- (void)setMorphFraction:(double)a0;
- (void)layoutSubviews;
- (void)_applyCrossfadeScaleX:(double)a0 scaleY:(double)a1;

@end
