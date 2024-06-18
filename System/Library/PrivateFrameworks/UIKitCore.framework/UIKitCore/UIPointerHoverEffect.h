@interface UIPointerHoverEffect : UIPointerEffect

@property (nonatomic) BOOL _tintViewTakesOnPointerShape;
@property (nonatomic) BOOL _tintViewUsesPointerMaterial;
@property (nonatomic) long long preferredTintMode;
@property (nonatomic) BOOL prefersShadow;
@property (nonatomic) BOOL prefersScaledContent;

- (id)init;
- (id)settings;
- (unsigned long long)options;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)constrainedAxes;

@end
