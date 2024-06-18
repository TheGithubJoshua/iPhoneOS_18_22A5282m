@class NSString, VCPMADServiceImageAsset, MADEmbeddingGenerationRequest;

@interface VCPMADEmbeddingGenerationTask : NSObject <VCPMADServiceImageProcessingSubtaskProtocol, VCPMADTaskProtocol> {
    MADEmbeddingGenerationRequest *_request;
    VCPMADServiceImageAsset *_imageAsset;
    NSString *_signpostPayload;
    struct atomic<bool> { struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { _Atomic BOOL __a_value; } __a_; } _canceled;
}

+ (id)dependencies;
+ (id)taskWithRequest:(id)a0 imageAsset:(id)a1 andSignpostPayload:(id)a2;

- (void)cancel;
- (void).cxx_destruct;
- (int)run;
- (BOOL)autoCancellable;
- (id)initWithRequest:(id)a0 imageAsset:(id)a1 andSignpostPayload:(id)a2;
- (float)resourceRequirement;

@end