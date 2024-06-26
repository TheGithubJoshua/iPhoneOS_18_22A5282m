@class MKMultiPolygon, VKVectorOverlayPolygonGroup;

@interface MKMultiPolygonRenderer : MKOverlayPathRenderer {
    const struct CGPath **_paths;
    unsigned long long _pathsCount;
    VKVectorOverlayPolygonGroup *_vectorData;
    double _strokeStart;
    double _strokeEnd;
}

@property (nonatomic, getter=_strokeStart, setter=_setStrokeStart:) double strokeStart;
@property (nonatomic, getter=_strokeEnd, setter=_setStrokeEnd:) double strokeEnd;
@property (readonly, nonatomic) MKMultiPolygon *multiPolygon;

+ (Class)_mapkitLeafClass;

- (void)setLineWidth:(double)a0;
- (void)createPath;
- (void)setStrokeColor:(id)a0;
- (void)setFillColor:(id)a0;
- (void)setAlpha:(double)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setLineJoin:(int)a0;
- (void)setMiterLimit:(double)a0;
- (id)_vectorGeometry;
- (BOOL)_canProvideVectorGeometry;
- (void)_performInitialConfiguration;
- (void)_updateRenderColors;
- (void)fillPath:(struct CGPath { } *)a0 inContext:(struct CGContext { } *)a1;
- (id)initWithMultiPolygon:(id)a0;
- (BOOL)overlayCanProvideVectorData:(id)a0;
- (void)strokePath:(struct CGPath { } *)a0 inContext:(struct CGContext { } *)a1;
- (id)vectorDataForOverlay:(id)a0;

@end
