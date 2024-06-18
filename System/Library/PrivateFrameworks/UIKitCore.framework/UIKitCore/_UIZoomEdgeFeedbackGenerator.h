@interface _UIZoomEdgeFeedbackGenerator : _UIEdgeFeedbackGenerator

@property (nonatomic) double minimumZoomScale;
@property (nonatomic) double maximumZoomScale;
@property (nonatomic) double minimumTemporaryZoomScale;
@property (nonatomic) double maximumTemporaryZoomScale;

- (id)init;
- (void)_updateMaximumValue;
- (void)zoomScaleUpdated:(double)a0;
- (void)_zoomScaleUpdated:(double)a0 withVelocity:(double)a1;
- (id)initWithCoordinateSpace:(id)a0;

@end
