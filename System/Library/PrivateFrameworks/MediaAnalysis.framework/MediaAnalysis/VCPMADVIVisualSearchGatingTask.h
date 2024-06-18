@class NSObject, NSString, VCPMADServiceImageAsset, MADVIVisualSearchGatingRequest;
@protocol OS_dispatch_queue, MTLDevice, VICancellable;

@interface VCPMADVIVisualSearchGatingTask : NSObject <VCPMADServiceImageProcessingSubtaskProtocol, VCPMADTaskProtocol> {
    MADVIVisualSearchGatingRequest *_request;
    VCPMADServiceImageAsset *_imageAsset;
    NSString *_signpostPayload;
    id<MTLDevice> _preferredMetalDevice;
    NSObject<OS_dispatch_queue> *_cancelQueue;
    struct atomic<bool> { struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { _Atomic BOOL __a_value; } __a_; } _canceled;
    id<VICancellable> _cancellable;
}

+ (id)dependencies;
+ (id)taskWithRequest:(id)a0 imageAsset:(id)a1 andSignpostPayload:(id)a2;

- (void)cancel;
- (void).cxx_destruct;
- (int)run;
- (void)setPreferredMetalDevice:(id)a0;
- (BOOL)autoCancellable;
- (id)createQueryContextWithError:(id *)a0;
- (id)initWithRequest:(id)a0 imageAsset:(id)a1 andSignpostPayload:(id)a2;
- (float)resourceRequirement;
- (void)storeResults:(id)a0;

@end