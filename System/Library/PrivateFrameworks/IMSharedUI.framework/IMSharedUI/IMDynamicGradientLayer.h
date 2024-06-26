@class CALayer, NSArray, CATransformLayer;
@protocol IMDynamicGradientReferenceView;

@interface IMDynamicGradientLayer : CALayer

@property (retain, nonatomic) CALayer *gradientLayer;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } gradientFrame;
@property (retain, nonatomic) CATransformLayer *trackingLayer;
@property (nonatomic) double screenScale;
@property (nonatomic) struct CGColorSpace { } *colorSpace;
@property (weak, nonatomic) id<IMDynamicGradientReferenceView> referenceView;
@property (copy, nonatomic) NSArray *colors;
@property (readonly, nonatomic) struct CGImage { } *gradient;

- (id)init;
- (void)layerDidBecomeVisible:(BOOL)a0;
- (void).cxx_destruct;
- (id)description;
- (void)layoutSublayers;
- (void)dealloc;
- (void)_updateAnimation;
- (double)_floorToPixels:(double)a0;
- (void)_updateGradientImage;
- (void)didMoveToWindow:(id)a0;

@end
