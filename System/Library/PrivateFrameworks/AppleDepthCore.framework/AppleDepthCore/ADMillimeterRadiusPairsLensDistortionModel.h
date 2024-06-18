@class NSData, NSString;

@interface ADMillimeterRadiusPairsLensDistortionModel : NSObject <ADLensDistortionModel>

@property (nonatomic) struct CGPoint { double x; double y; } distortionCenter;
@property (retain, nonatomic) NSData *distortedRadii;
@property (retain, nonatomic) NSData *undistortedRadii;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)scale:(float)a0;
- (id)dictionaryRepresentation:(BOOL)a0;
- (void)adjustForImageRotation:(long long)a0 forDimensions:(struct CGSize { double x0; double x1; })a1;
- (void)applyDistortionModelToPixels:(unsigned long long)a0 inPixels:(const struct CGPoint { double x0; double x1; } *)a1 intrinsicsMatrix:(struct { void /* unknown type, empty encoding */ x0[3]; })a2 pixelSize:(double)a3 distort:(BOOL)a4 outPixels:(struct CGPoint { double x0; double x1; } *)a5;
- (void)crop:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 fromDimensions:(struct CGSize { double x0; double x1; })a1;
- (void)distortPixels:(unsigned long long)a0 undistortedPixels:(const struct CGPoint { double x0; double x1; } *)a1 withCameraCalibration:(id)a2 outDistortedPixels:(struct CGPoint { double x0; double x1; } *)a3;
- (id)initWithDistortionCenter:(struct CGPoint { double x0; double x1; })a0 distortedRadii:(id)a1 undistortedRadii:(id)a2;
- (void)undistortPixels:(unsigned long long)a0 distortedPixels:(const struct CGPoint { double x0; double x1; } *)a1 withCameraCalibration:(id)a2 outUndistortedPixels:(struct CGPoint { double x0; double x1; } *)a3;

@end