@class PFParallaxLayerStack;

@interface PIParallaxClockMaterialRequest : NURenderRequest

@property (retain, nonatomic) PFParallaxLayerStack *layerStack;

- (void)submit:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithComposition:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithLayerStack:(id)a0;
- (long long)mediaComponentType;
- (id)newRenderJob;

@end
