@class NSArray, NSString, MTColor;
@protocol MTRecipeMaterialSettingsProviding;

@interface MTMaterialSettingsInterpolator : NSObject {
    double _previousWeighting;
}

@property (nonatomic) double weighting;
@property (readonly, nonatomic, getter=isWeightingChanging) BOOL weightingChanging;
@property (retain, nonatomic) id<MTRecipeMaterialSettingsProviding> finalSettings;
@property (retain, nonatomic) id<MTRecipeMaterialSettingsProviding> initialSettings;
@property (readonly, nonatomic, getter=isBackdropRequiredEver) BOOL backdropRequiredEver;
@property (readonly, nonatomic, getter=isBackdropRequiredInitially) BOOL backdropRequiredInitially;
@property (readonly, nonatomic, getter=isBackdropRequiredFinally) BOOL backdropRequiredFinally;
@property (readonly, nonatomic, getter=isOverlay) BOOL overlay;
@property (readonly, nonatomic, getter=isBlurEnabled) BOOL blurEnabled;
@property (readonly, nonatomic, getter=isLuminanceEnabled) BOOL luminanceEnabled;
@property (readonly, nonatomic, getter=isSaturationEnabled) BOOL saturationEnabled;
@property (readonly, nonatomic, getter=isBrightnessEnabled) BOOL brightnessEnabled;
@property (readonly, nonatomic, getter=isColorMatrixEnabled) BOOL colorMatrixEnabled;
@property (readonly, nonatomic, getter=isTintEnabled) BOOL tintEnabled;
@property (readonly, nonatomic, getter=isZoomEnabled) BOOL zoomEnabled;
@property (readonly, nonatomic) double blurRadius;
@property (readonly, nonatomic) double luminanceAmount;
@property (readonly, copy, nonatomic) NSArray *luminanceValues;
@property (readonly, nonatomic) double saturation;
@property (readonly, nonatomic) double brightness;
@property (readonly, nonatomic) struct CAColorMatrix { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; float x17; float x18; float x19; } colorMatrix;
@property (readonly, nonatomic) double tintAlpha;
@property (readonly, nonatomic) double zoom;
@property (readonly, nonatomic) double backdropScale;
@property (readonly, copy, nonatomic) NSString *blurInputQuality;
@property (readonly, nonatomic, getter=isBlurAtEnd) BOOL blurAtEnd;
@property (readonly, copy, nonatomic) MTColor *tintColor;
@property (copy, nonatomic) id /* block */ blurRadiusTransformer;

+ (id)_filteringProtocolGetterNames;

- (id)initWithSettings:(id)a0;
- (id)_blurRadiusWithSettings:(id)a0;
- (id)_zoomWithSettings:(id)a0;
- (id)_saturationWithSettings:(id)a0;
- (BOOL)_isTintEnabledWithSettings:(id)a0;
- (BOOL)_isBackdropRequiredWithSubSettings:(id)a0;
- (void)finalizeWeighting;
- (id)initialSettingsInterpolator;
- (id)_backdropScaleWithSettings:(id)a0;
- (double)_floatPropertyValueForProperty:(id)a0;
- (id)_propertyValueForProperty:(id)a0 withTransformer:(id /* block */)a1;
- (id)_brightnessWithSettings:(id)a0;
- (struct CGImage { } *)variableBlurInputMask;
- (void).cxx_destruct;
- (id)description;
- (BOOL)_isBackdropRequiredWithSettings:(id)a0;
- (id)_colorMatrixColorWithSettings:(id)a0 alpha:(double)a1;
- (double)_floatPropertyValueForProperty:(id)a0 withTransformer:(id /* block */)a1;
- (BOOL)_isPropertyEnabled:(id)a0 consideringWeighting:(BOOL)a1;
- (id)_colorWithGetterBlock:(id /* block */)a0;
- (id)_luminanceAmountWithSettings:(id)a0;
- (id)_tintAlphaWithSettings:(id)a0;
- (id)_filteringProperty:(id)a0 withSettings:(id)a1;
- (id)_luminanceInputValues;
- (id)_colorMatrixWithSettings:(id)a0;

@end
