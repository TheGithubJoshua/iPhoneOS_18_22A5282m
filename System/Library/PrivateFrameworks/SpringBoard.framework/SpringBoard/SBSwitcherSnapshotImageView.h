@class NSString, UIImageView, UIImage, UIView;

@interface SBSwitcherSnapshotImageView : UIView <SBReusableView> {
    UIImageView *_imageView;
    UIView *_scalingView;
    double _cornerRadius;
    unsigned long long _maskedCorners;
}

@property (retain, nonatomic) UIImage *image;
@property (nonatomic) double cornerRadius;
@property (nonatomic) unsigned long long maskedCorners;
@property (nonatomic) BOOL usesNonuniformScaling;
@property (nonatomic) BOOL hasOpaqueContents;
@property (nonatomic) BOOL stretchToFillBounds;
@property (nonatomic) BOOL allowsEdgeAntialiasing;
@property (nonatomic) BOOL allowStatusBarToOverlap;
@property (nonatomic) long long orientationForClassicLayout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_updateCornerRadius;
- (id)initWithImage:(id)a0;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })scalingTransform;
- (double)_transformHorizontalScale;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (double)_transformScale;
- (BOOL)_isUsingExternalClassicLayout;
- (double)_transformVerticalScale;
- (void)layoutSubviews;

@end
