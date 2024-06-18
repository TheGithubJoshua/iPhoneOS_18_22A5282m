@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface NURenderPipelineRegistry : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_registry;
}

+ (id)sharedRegistry;

- (id)init;
- (id)_renderPipelineForIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (void)registerRenderPipeline:(id)a0 forIdentifier:(id)a1;
- (id)renderPipelineForIdentifier:(id)a0;
- (void)_registerRenderPipeline:(id)a0 forIdentifier:(id)a1;

@end
