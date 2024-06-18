@class UIColor, NSDictionary;

@interface AVTMaterial : NSObject

@property (retain, nonatomic) UIColor *baseColor;
@property (retain, nonatomic) NSDictionary *additionalPropertyColors;

- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)applyToSceneKitMaterial:(id)a0;

@end
