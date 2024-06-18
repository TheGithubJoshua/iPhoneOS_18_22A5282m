@class NSSet;

@interface ARImageTrackingConfiguration : ARConfiguration

@property (nonatomic, getter=isAutoFocusEnabled) BOOL autoFocusEnabled;
@property (copy, nonatomic) NSSet *trackingImages;
@property (nonatomic) long long maximumNumberOfTrackedImages;

+ (id)new;
+ (id)recommendedVideoFormatFor4KResolution;
+ (BOOL)supportsFrameSemantics:(unsigned long long)a0;
+ (id)recommendedVideoFormatForHighResolutionFrameCapturing;
+ (BOOL)isSupported;
+ (id)supportedVideoFormats;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)createTechniques:(id)a0;

@end
