@interface CAMZoomPinchGestureRecognizer : UIPinchGestureRecognizer

@property (nonatomic, setter=_setZoomPinchInitialDistance:) double _zoomPinchInitialDistance;
@property (readonly, nonatomic) double zoomScale;

- (void)setState:(long long)a0;
- (double)_zoomPinchDistance;
- (double)_hybridZoomScale;
- (double)_distanceBetweenInitialTwoTouches;
- (double)_exponentialZoomScale;

@end
