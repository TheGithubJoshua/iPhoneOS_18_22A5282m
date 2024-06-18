@class ADMutableJasperPointCloud, JDCameraCalibrationData;

@interface JDPointCloud : NSObject {
    ADMutableJasperPointCloud *_pc;
}

@property (readonly) int length;
@property (readonly) int size;
@property (readonly) float *euclideanDistances;
@property (readonly) struct CGPoint { double x0; double x1; } *cameraPixels;
@property (readonly) struct CGPoint { double x0; double x1; } *undistortedCameraPixels;
@property (readonly) void *points;
@property (readonly) JDCameraCalibrationData *cameraCalibrationData;
@property (readonly) float *intensities;
@property (readonly) float *confidences;
@property (readonly) float *signalToNoiseRatios;
@property (readonly) char *bankIds;
@property (readonly) char *spotIds;
@property (readonly) char *echoIds;
@property (readonly) unsigned int *flags;

+ (unsigned int)pixelFormat;
+ (id)makeWithDataBuffer:(struct __CVBuffer { } *)a0;
+ (id)pointCloudByMergingPointClouds:(id)a0;
+ (unsigned long long)requiredStorageBytesForLength:(int)a0;
+ (id)makeWithDictionaryRepresentation:(id)a0;

- (id)dictionaryRepresentation;
- (BOOL)writeToFile:(id)a0 atomically:(BOOL)a1;
- (void).cxx_destruct;
- (void)dealloc;
- (void)reset;
- (struct __CVBuffer { } *)dataBuffer;
- (void)replacePointsInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 withPointsFrom:(id)a1 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (id)pointCloudByChangingPointOfViewByTransform:(struct { void /* unknown type, empty encoding */ x0[4]; })a0 to:(id)a1;
- (void)applyPerformanceOverrides;
- (id)initWithLength:(int)a0 storage:(struct __CVBuffer { } *)a1;
- (id)initWithPointCloud:(id)a0;
- (id)pointCloudByChangingPointOfViewFrom:(id)a0 to:(id)a1;
- (void)calculatePixelsFromUndistortedPixels;
- (void)calculateUndistortedPixelsFromCameraPixels;
- (void)calculateUndistortedPixelsFromWorldPoints;
- (void)calculateWorldPointsFromUndistortedPixels;
- (id)initWithLength:(int)a0 cameraCalibration:(id)a1 storage:(struct __CVBuffer { } *)a2;
- (id)initWithSize:(int)a0 calibrationData:(id)a1;
- (id)pointCloudByChangingPointOfView:(id)a0;

@end