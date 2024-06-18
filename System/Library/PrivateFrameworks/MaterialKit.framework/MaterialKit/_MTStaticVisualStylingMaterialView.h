@class NSString, NSArray, NSMutableDictionary, MTCoreMaterialVisualStylingProvider;

@interface _MTStaticVisualStylingMaterialView : MTMaterialView <MTCoreMaterialVisualStylingProviderObserving, MTVisualStylingRequiring> {
    NSString *_recipeName;
    NSMutableDictionary *_visualStyleCategoriesToCoreMaterialProviders;
    MTCoreMaterialVisualStylingProvider *_contentVisualStylingProvider;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSArray *requiredVisualStyleCategories;

+ (Class)layerClass;

- (void)setZoomEnabled:(BOOL)a0;
- (BOOL)isZoomEnabled;
- (void)setShouldCrossfade:(BOOL)a0;
- (BOOL)shouldCrossfade;
- (void)setBlurEnabled:(BOOL)a0;
- (BOOL)isBlurEnabled;
- (BOOL)isCaptureOnly;
- (void)setRecipe:(long long)a0;
- (void)setCaptureOnly:(BOOL)a0;
- (id)_initWithCoreMaterialRecipe:(id)a0 fromBundle:(id)a1 options:(unsigned long long)a2 initialWeighting:(double)a3 scaleAdjustment:(id /* block */)a4;
- (void)didMoveToSuperview;
- (void)providedStylesDidChangeForProvider:(id)a0;
- (void)_updateContentVisualStylingIfNecessary;
- (BOOL)useBuiltInAlphaTransformerAndBackdropScaleAdjustment;
- (void)setRecipeName:(id)a0;
- (void)_invalidateContentVisualStyling;
- (void)_updateContentVisualStylingWithProvider:(id)a0;
- (id)_coreMaterialVisualStylingProviderForCategory:(id)a0;
- (BOOL)useBuiltInAlphaTransformerAndBackdropScaleAdjustmentIfNecessary;
- (id)recipeName;
- (BOOL)isContentReplacedWithSnapshot;
- (void).cxx_destruct;
- (void)_updateCoreMaterialVisualStylingProviders;
- (void)setVisualStylingProvider:(id)a0 forCategory:(long long)a1;
- (void)_setCoreMaterialVisualStylingProvider:(id)a0 ForCategory:(id)a1;
- (BOOL)ignoresScreenClip;
- (void)_dynamicUserInterfaceTraitDidChange;
- (id /* block */)backdropScaleAdjustment;
- (void)setBackdropScaleAdjustment:(id /* block */)a0;
- (void)setContentReplacedWithSnapshot:(BOOL)a0;
- (void)setIgnoresScreenClip:(BOOL)a0;
- (void)layoutSubviews;
- (void)setUseBuiltInAlphaTransformerAndBackdropScaleAdjustmentIfNecessary:(BOOL)a0;
- (void)setUseBuiltInAlphaTransformerAndBackdropScaleAdjustment:(BOOL)a0;
- (id)_materialLayer;

@end
