@class NSHashTable, MTMaterialLayer, NSString, UIView, NSMutableDictionary, NSDictionary, NSBundle, UIViewFloatAnimatableProperty;

@interface MTMaterialView : UIView <NSCopying, MTVisualStylingProviding> {
    BOOL _useBuiltInAlphaTransformerAndBackdropScaleAdjustment;
    BOOL _recipeDynamic;
    BOOL _shadowed;
    NSMutableDictionary *_cmVisualStyleCategoriesToProviders;
    NSDictionary *_recipeNamesByTraitCollection;
    NSBundle *_recipeBundle;
    NSHashTable *_observers;
    UIView *_highlightView;
    BOOL _needsLayoutOnMoveToWindow;
}

@property (copy, nonatomic) NSString *recipeName;
@property (nonatomic, getter=isInPlaceFilteringEnabled) BOOL inPlaceFilteringEnabled;
@property (copy, nonatomic) id /* block */ backdropScaleAdjustment;
@property (nonatomic) BOOL shouldCrossfade;
@property (nonatomic) BOOL useBuiltInAlphaTransformerAndBackdropScaleAdjustment;
@property (nonatomic) BOOL useBuiltInAlphaTransformerAndBackdropScaleAdjustmentIfNecessary;
@property (nonatomic, getter=isRecipeDynamic) BOOL recipeDynamic;
@property (nonatomic) BOOL ignoresScreenClip;
@property (nonatomic, getter=isContentReplacedWithSnapshot) BOOL contentReplacedWithSnapshot;
@property (readonly, nonatomic, getter=_materialLayer) MTMaterialLayer *materialLayer;
@property (nonatomic) BOOL shouldCrossfadeIfNecessary;
@property (nonatomic) BOOL forceCrossfadeIfNecessary;
@property (retain, nonatomic, getter=_backdropFloatAnimatableProperty) UIViewFloatAnimatableProperty *backdropFloatAnimatableProperty;
@property (copy, nonatomic) NSString *groupName;
@property (copy, nonatomic) NSString *groupNameBase;
@property (nonatomic) double weighting;
@property (nonatomic) long long recipe;
@property (nonatomic, getter=isBlurEnabled) BOOL blurEnabled;
@property (nonatomic, getter=isZoomEnabled) BOOL zoomEnabled;
@property (nonatomic, getter=isCaptureOnly) BOOL captureOnly;
@property (nonatomic, getter=isShadowed) BOOL shadowed;
@property (nonatomic, getter=isHighlighted) BOOL highlighted;
@property (copy, nonatomic) NSString *debugIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)layerClass;
+ (void)initialize;
+ (id)materialViewWithRecipeNamed:(id)a0 inBundle:(id)a1 options:(unsigned long long)a2 initialWeighting:(double)a3 scaleAdjustment:(id /* block */)a4;
+ (id)materialViewWithRecipe:(long long)a0;
+ (id)materialViewWithRecipeNamesByTraitCollection:(id)a0 inBundle:(id)a1 options:(unsigned long long)a2 initialWeighting:(double)a3 scaleAdjustment:(id /* block */)a4 compatibleWithTraitCollection:(id)a5;
+ (id)materialViewWithRecipe:(long long)a0 configuration:(long long)a1;
+ (id)materialViewWithRecipe:(long long)a0 configuration:(long long)a1 initialWeighting:(double)a2;
+ (id)materialViewWithRecipe:(long long)a0 options:(unsigned long long)a1 initialWeighting:(double)a2;
+ (id)materialViewWithRecipe:(long long)a0 options:(unsigned long long)a1;
+ (id)newDefaultHighlightAnimator;
+ (id)materialViewWithVisualStyleFromRecipe:(long long)a0 category:(long long)a1 style:(long long)a2 options:(unsigned long long)a3 initialWeighting:(double)a4 compatibleWithTraitCollection:(id)a5;
+ (id)materialViewWithRecipe:(long long)a0 options:(unsigned long long)a1 initialWeighting:(double)a2 scaleAdjustment:(id /* block */)a3;
+ (id)materialViewWithRecipeNamed:(id)a0;
+ (id)materialViewWithRecipe:(long long)a0 options:(unsigned long long)a1 compatibleWithTraitCollection:(id)a2;
+ (id)staticMaterialViewWithRecipe:(long long)a0;
+ (id)staticMaterialViewWithRecipe:(long long)a0 configuration:(long long)a1;
+ (BOOL)_isWorkaroundRequiredForRecipe:(long long)a0;
+ (id)_recipeNameForTraitCollection:(id)a0 withRecipeNamesByTraitCollection:(id)a1;
+ (id)_deprecatedControlCenterMaterialWithRecipe:(long long)a0 configuration:(long long)a1 initialWeighting:(double)a2 scaleAdjustment:(id /* block */)a3;
+ (id)materialViewWithRecipe:(long long)a0 compatibleWithTraitCollection:(id)a1;
+ (id)materialViewWithRecipe:(long long)a0 configuration:(long long)a1 initialWeighting:(double)a2 compatibleWithTraitCollection:(id)a3;
+ (id)materialViewWithRecipe:(long long)a0 configuration:(long long)a1 initialWeighting:(double)a2 scaleAdjustment:(id /* block */)a3;
+ (id)materialViewWithRecipe:(long long)a0 options:(unsigned long long)a1 initialWeighting:(double)a2 compatibleWithTraitCollection:(id)a3;
+ (id)materialViewWithRecipe:(long long)a0 options:(unsigned long long)a1 initialWeighting:(double)a2 scaleAdjustment:(id /* block */)a3 compatibleWithTraitCollection:(id)a4;
+ (id)materialViewWithRecipeNamed:(id)a0 inBundle:(id)a1 configuration:(long long)a2 initialWeighting:(double)a3 scaleAdjustment:(id /* block */)a4;
+ (id)materialViewWithRecipeNamesByTraitCollection:(id)a0 compatibleWithTraitCollection:(id)a1 bundle:(id)a2 configuration:(long long)a3 initialWeighting:(double)a4 scaleAdjustment:(id /* block */)a5;
+ (id)materialViewWithRecipeNamesByTraitCollection:(id)a0 inBundle:(id)a1 configuration:(long long)a2 initialWeighting:(double)a3 scaleAdjustment:(id /* block */)a4;

- (void)_addObserver:(id)a0;
- (void)_removeObserver:(id)a0;
- (void)prune;
- (id)init;
- (void)_notifyObserversWithBlock:(id /* block */)a0;
- (BOOL)_shouldAnimatePropertyWithKey:(id)a0;
- (void)_setCornerRadius:(double)a0;
- (id)_initWithCoreMaterialRecipe:(id)a0 fromBundle:(id)a1 options:(unsigned long long)a2 initialWeighting:(double)a3 scaleAdjustment:(id /* block */)a4;
- (id)_coreMaterialVisualStylingProviderForCategory:(id)a0;
- (void).cxx_destruct;
- (void)didMoveToWindow;
- (unsigned long long)_options;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)visualStylingProviderForCategory:(long long)a0;
- (void)layoutSubviews;
- (void)_setContinuousCornerRadius:(double)a0;
- (BOOL)addCompletionForCurrentAnimation:(id /* block */)a0 forMaterialLayer:(id)a1 reason:(out id *)a2;
- (BOOL)isManagingInterpolationForMaterialLayer:(id)a0;
- (BOOL)isManagingOpacityForMaterialLayer:(id)a0;
- (BOOL)managesWeightingForMaterialLayer:(id)a0;
- (void)_reduceMotionStatusDidChange;
- (id)_groupNameWithBase:(id)a0;
- (id)_initWithRecipe:(long long)a0 options:(unsigned long long)a1 initialWeighting:(double)a2 scaleAdjustment:(id /* block */)a3 compatibleWithTraitCollection:(id)a4;
- (id)_initWithRecipeNamesByTraitCollection:(id)a0 bundle:(id)a1 options:(unsigned long long)a2 initialWeighting:(double)a3 scaleAdjustment:(id /* block */)a4 compatibleWithTraitCollection:(id)a5;
- (void)_invalidateAlphaTransformer;
- (id)_recipeNameForCurrentTraitCollection;
- (void)_reduceTransparencyStatusDidChange;
- (void)_setRecipeName:(id)a0 withWeighting:(double)a1;
- (void)_setupAlphaTransformer;
- (void)_setupOrInvalidateAlphaTransformer;
- (void)_updateGroupNameIfNecessary;
- (void)_updateRecipeNameIfNeeded;
- (id)newShadowView;
- (id)newShadowViewWithCaptureOnlyMaterialView:(BOOL)a0;

@end
