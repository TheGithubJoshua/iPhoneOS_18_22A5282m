@class RSOfflineFloorPlanGenerator, RSGenerationConfiguration, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface RSGenerationSession : NSObject {
    NSObject<OS_dispatch_semaphore> *_generationSemaphore;
    NSObject<OS_dispatch_queue> *_queue;
    RSOfflineFloorPlanGenerator *_fpGenerator;
    RSGenerationConfiguration *_configuration;
}

- (id)init;
- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (id)getDebugInfo;
- (void)processWithKeyframes:(id)a0 initialAsset:(id)a1 completionHandlerWithError:(id /* block */)a2;
- (id)processWithKeyframes:(id)a0 initialAsset:(id)a1;
- (void)processWithKeyframes:(id)a0 initialAsset:(id)a1 completionHandler:(id /* block */)a2;
- (id)processWithKeyframes:(id)a0 initialAsset:(id)a1 error:(id *)a2;
- (void)setLiveDumpEnable:(BOOL)a0;
- (id)standardizeFloorPlan:(id)a0;
- (void)updateFloorPlanGeneratorWithConfiguration:(id)a0;

@end
