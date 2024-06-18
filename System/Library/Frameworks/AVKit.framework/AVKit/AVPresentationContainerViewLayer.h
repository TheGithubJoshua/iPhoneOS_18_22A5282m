@class AVPresentationContainerViewAppearanceProxy;

@interface AVPresentationContainerViewLayer : CALayer

@property (readonly, nonatomic) AVPresentationContainerViewAppearanceProxy *appearanceProxy;
@property (nonatomic) BOOL wantsAppearanceConfigValues;

- (id)cornerCurve;
- (void)setCornerCurve:(id)a0;
- (BOOL)masksToBounds;
- (unsigned long long)maskedCorners;
- (void)setContinuousCorners:(BOOL)a0;
- (void).cxx_destruct;
- (double)cornerRadius;
- (void)setMaskedCorners:(unsigned long long)a0;
- (void)setCornerRadius:(double)a0;
- (BOOL)continuousCorners;
- (void)setMasksToBounds:(BOOL)a0;

@end
