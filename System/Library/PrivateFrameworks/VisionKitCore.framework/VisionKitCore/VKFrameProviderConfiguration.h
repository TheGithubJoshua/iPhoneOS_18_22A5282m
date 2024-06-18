@interface VKFrameProviderConfiguration : NSObject <NSCopying>

@property (nonatomic) unsigned long long cameraPreset;
@property (nonatomic) unsigned long long resolutionPreset;

- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqualToFrameProviderConfiguration:(id)a0;

@end
