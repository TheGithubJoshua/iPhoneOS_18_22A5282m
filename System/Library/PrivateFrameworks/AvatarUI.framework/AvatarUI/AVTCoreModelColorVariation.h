@class AVTCoreModelColor, AVTColorPreset;

@interface AVTCoreModelColorVariation : NSObject

@property (readonly, nonatomic) AVTColorPreset *colorPreset;
@property (readonly, nonatomic) AVTCoreModelColor *color;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)initWithColor:(id)a0 colorPreset:(id)a1;

@end
