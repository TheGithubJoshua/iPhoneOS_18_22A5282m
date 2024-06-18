@interface ARInternalFaceTrackingConfiguration : ARConfiguration

@property (nonatomic) long long maximumNumberOfTrackedFaces;
@property (nonatomic) BOOL useAlternativeResources;

+ (id)new;
+ (BOOL)isSupported;
+ (id)supportedVideoFormats;

- (id)init;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setLightEstimationEnabled:(BOOL)a0;
- (void)setCameraPosition:(long long)a0;
- (void)createTechniques:(id)a0;
- (id)imageSensorSettings;
- (id)renderingTechnique;
- (void)setMirroredFrameOutput:(BOOL)a0;

@end
