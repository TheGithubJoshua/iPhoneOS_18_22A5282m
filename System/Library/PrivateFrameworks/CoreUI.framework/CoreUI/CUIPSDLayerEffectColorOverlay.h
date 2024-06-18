@class CUIColor;

@interface CUIPSDLayerEffectColorOverlay : CUIPSDLayerEffectComponent

@property int blendMode;
@property (retain) CUIColor *color;
@property double opacity;

- (id)init;
- (id)description;
- (void)dealloc;
- (unsigned int)effectType;
- (id)initWithEffectFromPreset:(id)a0 atIndex:(unsigned int)a1;
- (BOOL)updateLayerEffectPreset:(id)a0 error:(id *)a1;

@end
