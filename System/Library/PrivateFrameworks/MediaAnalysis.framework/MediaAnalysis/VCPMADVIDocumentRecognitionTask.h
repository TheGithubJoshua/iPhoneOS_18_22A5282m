@class NSObject, NSString, VNImageBasedRequest, MADVIDocumentRecognitionRequest, VCPMADServiceImageAsset;
@protocol OS_dispatch_queue, MTLDevice;

@interface VCPMADVIDocumentRecognitionTask : NSObject <VCPMADServiceImageProcessingSubtaskProtocol, VCPMADTaskProtocol> {
    MADVIDocumentRecognitionRequest *_request;
    VCPMADServiceImageAsset *_imageAsset;
    id<MTLDevice> _preferredMetalDevice;
    NSString *_signpostPayload;
    NSObject<OS_dispatch_queue> *_cancelQueue;
    struct atomic<bool> { struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { _Atomic BOOL __a_value; } __a_; } _canceled;
    VNImageBasedRequest *_weakRequest;
}

+ (id)dependencies;
+ (id)taskWithRequest:(id)a0 imageAsset:(id)a1 andSignpostPayload:(id)a2;

- (void)cancel;
- (void).cxx_destruct;
- (int)run;
- (void)setPreferredMetalDevice:(id)a0;
- (BOOL)autoCancellable;
- (BOOL)canReuseResultsForRequest;
- (id)initWithRequest:(id)a0 imageAsset:(id)a1 andSignpostPayload:(id)a2;
- (float)resourceRequirement;

@end
