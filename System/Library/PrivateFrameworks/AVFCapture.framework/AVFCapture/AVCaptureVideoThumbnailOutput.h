@class NSArray, AVCaptureVideoThumbnailOutputInternal;
@protocol AVCaptureVideoThumbnailContentsDelegate;

@interface AVCaptureVideoThumbnailOutput : AVCaptureOutput {
    AVCaptureVideoThumbnailOutputInternal *_internal;
}

@property (nonatomic) id<AVCaptureVideoThumbnailContentsDelegate> thumbnailContentsDelegate;
@property (copy, nonatomic) NSArray *filters;
@property (nonatomic) struct CGSize { double x0; double x1; } thumbnailSize;

+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })contentsRectForFilterAtIndex:(unsigned long long)a0 thumbnailSize:(struct CGSize { double x0; double x1; })a1 filterCount:(unsigned long long)a2;
+ (void)initialize;

- (id)init;
- (void)detachSafelyFromFigCaptureSession:(struct OpaqueFigCaptureSession { } *)a0;
- (void)_handleNotification:(id)a0 payload:(id)a1;
- (void)safelyHandleServerConnectionDeathForFigCaptureSession:(struct OpaqueFigCaptureSession { } *)a0;
- (BOOL)canAddConnection:(id)a0 failureReason:(id *)a1;
- (void)attachSafelyToFigCaptureSession:(struct OpaqueFigCaptureSession { } *)a0;
- (id)connectionMediaTypes;
- (void)_signalInvalidationOfPropagatedContentsIfNecessary;
- (void)dealloc;

@end
