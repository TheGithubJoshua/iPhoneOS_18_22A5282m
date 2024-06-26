@class UIGestureRecognizerTransformAnalyzerInfo;

@interface UIGestureRecognizerTransformAnalyzer : NSObject

@property (readonly, nonatomic) int dominantComponent;
@property (nonatomic) double translationWeight;
@property (nonatomic) double pinchingWeight;
@property (nonatomic) double rotationWeight;
@property (readonly, nonatomic) UIGestureRecognizerTransformAnalyzerInfo *smoothedInfo;

- (id)init;
- (void).cxx_destruct;
- (id)analyzeTouches:(id)a0;
- (void)reset;

@end
