@interface NIPlatformInfo : NSObject

+ (BOOL)isInternalBuild;
+ (BOOL)supportsUWB;
+ (BOOL)supportsSyntheticAperture;
+ (BOOL)supportsAoA;

@end
