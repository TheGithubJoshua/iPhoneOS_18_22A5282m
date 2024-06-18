@interface CIRenderInfo : NSObject {
    void *_priv;
}

@property (readonly) double kernelExecutionTime;
@property (readonly) long long passCount;
@property (readonly) long long pixelsProcessed;

+ (id)renderInfoWithCompletedTask:(id)a0;

- (id)init;
- (id)description;
- (id)_pdfDataRepresentation;
- (void)dealloc;
- (long long)pixelsOverdrawn;
- (id)initWithCompletedTask:(id)a0;
- (long long)kernelExecutionCycles;

@end
