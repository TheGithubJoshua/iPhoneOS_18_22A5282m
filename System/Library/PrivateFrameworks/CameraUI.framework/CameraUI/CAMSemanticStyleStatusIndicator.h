@class CAMSemanticStyle, UIImageView, CAShapeLayer, CALayer, UIView, CAReplicatorLayer;

@interface CAMSemanticStyleStatusIndicator : CAMControlStatusIndicator

@property (readonly, nonatomic) UIImageView *_stackSymbolView;
@property (readonly, nonatomic) UIView *_platterView;
@property (readonly, nonatomic) CALayer *_warmPlatterLayer;
@property (readonly, nonatomic) CALayer *_neutralPlatterLayer;
@property (readonly, nonatomic) CALayer *_coolPlatterLayer;
@property (readonly, nonatomic) CALayer *_platterMaskLayer;
@property (readonly, nonatomic) CAShapeLayer *_maskStrokeLayer;
@property (readonly, nonatomic) CALayer *_maskBackgroundLayer;
@property (readonly, nonatomic) CALayer *_maskSmallTickLayer;
@property (readonly, nonatomic) CALayer *_maskLargeTickLayer;
@property (readonly, nonatomic) CAReplicatorLayer *_maskTickReplicatorLayer;
@property (retain, nonatomic) CAMSemanticStyle *semanticStyle;

- (id)init;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (BOOL)shouldUseOutline;
- (void).cxx_destruct;
- (id)imageNameForCurrentState;
- (void)setSemanticStyle:(id)a0 animated:(BOOL)a1;
- (void)layoutSubviews;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_platterFrame;
- (id)_generatePlatterImageWithRenderer:(id)a0 colors:(id)a1 size:(struct CGSize { double x0; double x1; })a2;
- (void)_updateGradientAlphasAnimated:(BOOL)a0;
- (void)_updateGradientImages;
- (void)_updateImageOrientationAnimated:(BOOL)a0;
- (void)_updatePlatterStrokeProgressAnimated:(BOOL)a0;
- (void)_updateStrokePath;
- (void)_updateTicksAnimated:(BOOL)a0;
- (long long)_visibleTickCount;
- (BOOL)supportsOrientations;

@end
