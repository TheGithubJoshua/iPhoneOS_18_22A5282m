@interface JFXVideoEncoderInterface : NSObject {
    struct HEVCLosslessEncoder { int x0; int x1; double x2; struct OpaqueVTCompressionSession *x3; struct EncoderConfig { int x0; int x1; int x2; int x3; double x4; BOOL x5; BOOL x6; BOOL x7; BOOL x8; } x4; struct { long long x0; int x1; unsigned int x2; long long x3; } x5; unsigned int x6; unsigned int x7; unsigned int x8; } *m_encoder;
    struct __CVBuffer { } *m_preparedPixelBuffer;
    BOOL m_encoderInitialized;
    struct promise<opaqueCMSampleBuffer *> { void *__state_; } m_sampleBufferPromise;
    double m_expectedFrameRate;
}

@property struct opaqueCMSampleBuffer { } *currentBuffer;

- (id)init;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (void)closeEncoder;
- (struct opaqueCMSampleBuffer { } *)encodeFrame:(struct __CVBuffer { } *)a0 presentationTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 frameProperties:(struct __CFDictionary { } *)a2;
- (id)initWithExpectedFrameRate:(double)a0;
- (void)setupEncoderWithWidth:(int)a0 andHeight:(int)a1 imageFormat:(int)a2 andFramerate:(double)a3;
- (void)skipFrame;
- (void)writeSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;

@end
