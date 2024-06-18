@interface VCPPreAnalysisImageEntry : NSObject {
    struct CF<__CVBuffer *> { struct __CVBuffer *value_; } _pixelBuffer;
}

@property (readonly, nonatomic) struct __CVBuffer { } *pixelBuffer;
@property (nonatomic) unsigned long long count;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithPixelBuffer:(struct __CVBuffer { } *)a0;
- (void)dealloc;

@end
