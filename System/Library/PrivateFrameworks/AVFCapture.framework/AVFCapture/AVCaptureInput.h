@class NSArray, AVCaptureInputInternal;

@interface AVCaptureInput : NSObject {
    AVCaptureInputInternal *_inputInternal;
}

@property (readonly, nonatomic) NSArray *ports;

+ (void)initialize;

- (void)setSession:(id)a0;
- (void)detachSafelyFromFigCaptureSession:(struct OpaqueFigCaptureSession { } *)a0;
- (void)attachToFigCaptureSession:(struct OpaqueFigCaptureSession { } *)a0;
- (void)handleChangedActiveFormat:(id)a0 forDevice:(id)a1;
- (id)videoDevice;
- (void)performFigCaptureSessionOperationSafelyUsingBlock:(id /* block */)a0;
- (void)attachSafelyToFigCaptureSession:(struct OpaqueFigCaptureSession { } *)a0;
- (struct OpaqueCMClock { } *)clock;
- (void)dealloc;
- (void)detachFromFigCaptureSession:(struct OpaqueFigCaptureSession { } *)a0;
- (id)session;
- (id)initSubclass;

@end
