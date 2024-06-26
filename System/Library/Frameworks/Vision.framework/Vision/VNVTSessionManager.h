@interface VNVTSessionManager : NSObject {
    struct unique_ptr<SessionsHandler<VNVTPixelTransferSession>, std::default_delete<SessionsHandler<VNVTPixelTransferSession>>> { struct __compressed_pair<SessionsHandler<VNVTPixelTransferSession> *, std::default_delete<SessionsHandler<VNVTPixelTransferSession>>> { void *__value_; } __ptr_; } _pixelTransferSessionsHandler;
    struct unique_ptr<SessionsHandler<VNVTImageRotationSession>, std::default_delete<SessionsHandler<VNVTImageRotationSession>>> { struct __compressed_pair<SessionsHandler<VNVTImageRotationSession> *, std::default_delete<SessionsHandler<VNVTImageRotationSession>>> { void *__value_; } __ptr_; } _imageRotationSessionsHandler;
    unsigned long long _maxSessionsCount;
}

- (id).cxx_construct;
- (void).cxx_destruct;

@end
