@class ARFrame, PVFrameSet;

@interface CFXFrame : NSObject

@property (retain, nonatomic) PVFrameSet *pvFrameSet;
@property (retain, nonatomic) ARFrame *arFrame;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } latency;
@property (nonatomic) struct __CVBuffer { } *pixelBuffer;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } timestamp;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } requestTime;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)dealloc;
- (id)initWithARFrame:(id)a0;
- (id)initWithPixelBuffer:(struct __CVBuffer { } *)a0 timestamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (BOOL)isEqualToFrame:(id)a0;
- (id)initWithFrameSet:(id)a0;

@end
