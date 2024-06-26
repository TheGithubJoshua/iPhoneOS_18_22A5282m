@interface PRRenderingBackdropView : PRRenderingView

@property (nonatomic) double targetBacklightProgress;
@property (readonly, nonatomic) double backlightProgress;
@property (nonatomic) double targetLinearBacklightProgress;
@property (readonly, nonatomic) double linearBacklightProgress;

+ (Class)layerClass;

- (BOOL)_shouldAnimatePropertyWithKey:(id)a0;
- (id)initWithOwner:(id)a0 scene:(id)a1;
- (void)traitCollectionDidChange:(id)a0;
- (id)_renderingLayer;
- (void)layoutSublayersOfLayer:(id)a0;

@end
