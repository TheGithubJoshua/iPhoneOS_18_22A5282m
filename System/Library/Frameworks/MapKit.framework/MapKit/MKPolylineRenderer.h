@class MKPolyline, VKVectorOverlayPolylineGroup;

@interface MKPolylineRenderer : MKOverlayPathRenderer {
    VKVectorOverlayPolylineGroup *_vectorGeometry;
    double _strokeStart;
    double _strokeEnd;
}

@property (readonly, nonatomic) MKPolyline *polyline;
@property (nonatomic) double strokeStart;
@property (nonatomic) double strokeEnd;

+ (Class)_mapkitLeafClass;

- (void)setLineWidth:(double)a0;
- (void)createPath;
- (void)setStrokeColor:(id)a0;
- (void)setAlpha:(double)a0;
- (void).cxx_destruct;
- (void)setLineCap:(int)a0;
- (void)setLineJoin:(int)a0;
- (void)setMiterLimit:(double)a0;
- (id)_vectorGeometry;
- (BOOL)_canProvideVectorGeometry;
- (void)_performInitialConfiguration;
- (void)_setNeedsVectorGeometryUpdate;
- (void)_updateRenderColors;
- (void)_updateVectorGeometry:(id)a0;
- (void)drawMapRect:(struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })a0 zoomScale:(double)a1 inContext:(struct CGContext { } *)a2;
- (id)initWithPolyline:(id)a0;
- (BOOL)overlayCanProvideVectorData:(id)a0;
- (id)vectorDataForOverlay:(id)a0;

@end
