@class NSString;
@protocol MTLRenderPipelineState;

@interface ARUISpriteRenderState : NSObject <ARUIRendering, ARUIPrecompiledRendering> {
    id<MTLRenderPipelineState> _renderPipelineState;
}

@property (retain, nonatomic) id<MTLRenderPipelineState> renderPipelineState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)name;
- (void).cxx_destruct;
- (id)initWithDevice:(id)a0 library:(id)a1;
- (id)initWithPipelineLibrary:(id)a0;
- (id)renderPipelineDescriptorFromLibrary:(id)a0;

@end