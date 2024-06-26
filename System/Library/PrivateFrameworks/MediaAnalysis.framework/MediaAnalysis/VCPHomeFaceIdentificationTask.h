@class NSData;

@interface VCPHomeFaceIdentificationTask : NSObject <VCPMADTaskProtocol> {
    id /* block */ _completionHandler;
    NSData *_faceCropData;
    struct atomic<bool> { struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { _Atomic BOOL __a_value; } __a_; } _started;
    struct atomic<bool> { struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { _Atomic BOOL __a_value; } __a_; } _cancel;
}

+ (id)taskWithFaceCrop:(id)a0 andCompletionHandler:(id /* block */)a1;

- (BOOL)run:(id *)a0;
- (void)cancel;
- (void).cxx_destruct;
- (void)dealloc;
- (int)run;
- (BOOL)autoCancellable;
- (void)configureRequest:(id)a0 withRevision:(unsigned long long)a1;
- (id)initWithFaceCrop:(id)a0 andCompletionHandler:(id /* block */)a1;
- (float)resourceRequirement;

@end
