@class AVPortraitEffectsMatte, AVCaptureResolvedPhotoSettings, NSDictionary, AVCameraCalibrationData, NSString, AVDepthData, AVCapturePhotoInternal;

@interface AVCapturePhoto : NSObject

@property (readonly, nonatomic) AVCapturePhotoInternal *internal;
@property (readonly, nonatomic) struct { int x0; int x1; } dimensions;
@property (readonly) struct { long long x0; int x1; unsigned int x2; long long x3; } timestamp;
@property (readonly, getter=isRawPhoto) BOOL rawPhoto;
@property (readonly) struct __CVBuffer { } *pixelBuffer;
@property (readonly) struct __CVBuffer { } *previewPixelBuffer;
@property (readonly) NSDictionary *embeddedThumbnailPhotoFormat;
@property (readonly) AVDepthData *depthData;
@property (readonly) AVPortraitEffectsMatte *portraitEffectsMatte;
@property (readonly) NSDictionary *metadata;
@property (readonly) AVCameraCalibrationData *cameraCalibrationData;
@property (readonly) AVCaptureResolvedPhotoSettings *resolvedSettings;
@property (readonly) long long photoCount;
@property (readonly) NSString *sourceDeviceType;

+ (void)initialize;
+ (id)AVFileTypeFromFigCaptureStillImageSettingsFileType:(int)a0 codec:(unsigned int)a1 unresolvedSettings:(id)a2;

- (id)livePhotoMovieFileURL;
- (id)semanticSegmentationMatteForType:(id)a0;
- (unsigned int)_orientation;
- (id)initWithTimestamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 photoSurface:(struct __IOSurface { } *)a1 photoSurfaceSize:(unsigned long long)a2 processedFileType:(id)a3 previewPhotoSurface:(struct __IOSurface { } *)a4 embeddedThumbnailSourceSurface:(struct __IOSurface { } *)a5 metadata:(id)a6 depthDataSurface:(struct __IOSurface { } *)a7 depthMetadataDictionary:(id)a8 portraitEffectsMatteSurface:(struct __IOSurface { } *)a9 portraitEffectsMatteMetadataDictionary:(id)a10 hairSegmentationMatteSurface:(struct __IOSurface { } *)a11 hairSegmentationMatteMetadataDictionary:(id)a12 skinSegmentationMatteSurface:(struct __IOSurface { } *)a13 skinSegmentationMatteMetadataDictionary:(id)a14 teethSegmentationMatteSurface:(struct __IOSurface { } *)a15 teethSegmentationMatteMetadataDictionary:(id)a16 glassesSegmentationMatteSurface:(struct __IOSurface { } *)a17 glassesSegmentationMatteMetadataDictionary:(id)a18 captureRequest:(id)a19 bracketSettings:(id)a20 sequenceCount:(unsigned long long)a21 photoCount:(unsigned long long)a22 expectedPhotoProcessingFlags:(unsigned int)a23 sourceDeviceType:(id)a24;
- (long long)lensStabilizationStatus;
- (id)portraitMetadata;
- (int)_maximumAppleProRAWBitDepth;
- (BOOL)_isProRAWPhoto;
- (id)fileDataRepresentation;
- (id)processedFileType;
- (id)privateClientMetadata;
- (id)description;
- (id)bracketSettings;
- (unsigned int)photoProcessingFlags;
- (id)debugDescription;
- (long long)sequenceCount;
- (BOOL)_isSushiRAWPhoto;
- (unsigned int)expectedPhotoProcessingFlags;
- (struct CGImage { } *)previewCGImageRepresentation;
- (id)fileDataRepresentationWithReplacementMetadata:(id)a0 replacementEmbeddedThumbnailPhotoFormat:(id)a1 replacementEmbeddedThumbnailPixelBuffer:(struct __CVBuffer { } *)a2 replacementDepthData:(id)a3;
- (BOOL)_isUncompressedYUVOrRGBPhoto;
- (struct __CVBuffer { } *)_embeddedThumbnailSourcePixelBuffer;
- (struct CGImage { } *)CGImageRepresentation;
- (unsigned int)actualPhotoProcessingFlags;
- (id)fileDataRepresentationWithCustomizer:(id)a0;
- (void)dealloc;
- (id)_fileDataRepresentationWithReplacementMetadata:(id)a0 replacementEmbeddedThumbnailPhotoFormat:(id)a1 replacementEmbeddedThumbnailPixelBuffer:(struct __CVBuffer { } *)a2 replacementDepthData:(id)a3 replacementPortraitEffectsMatte:(id)a4 replacementHairSegmentationMatte:(id)a5 replacementSkinSegmentationMatte:(id)a6 replacementTeethSegmentationMatte:(id)a7 replacementGlassesSegmentationMatte:(id)a8 replacementRawCompressionSettings:(id)a9 exceptionReason:(id *)a10;
- (id)_defaultRawCompressionSettings;
- (BOOL)_isCompressedPhoto;

@end
