@class FigMetalContext, NSString, SoftISPGraph, NSArray, SoftISPStaticParameters;

@interface SoftISPPipeline : NSObject <SoftISPStage> {
    NSArray *_executionOrder;
}

@property (readonly, nonatomic) SoftISPGraph *graph;
@property (readonly, nonatomic) FigMetalContext *metal;
@property (readonly, nonatomic) SoftISPStaticParameters *staticParameters;
@property (readonly, nonatomic) unsigned int outputDownscaleFactor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (union { struct { unsigned int x0; unsigned int x1; } x0; })auxiliaryPixelBufferSizeForAuxiliaryType:(int)a0 inputPixelFormat:(unsigned int)a1 width:(unsigned int)a2 height:(unsigned int)a3;
- (unsigned int)auxiliaryPixelFormatForAuxiliaryType:(int)a0 inputPixelFormat:(unsigned int)a1 outputCompressionLevel:(int)a2;
- (unsigned long long)bytesRequiredForConfig:(id)a0;
- (id)configForPrepareDescriptor:(id)a0 outputCompressionLevel:(int)a1;
- (id)createArgsWithConfig:(id)a0 bounds:(id)a1 inputFrame:(id)a2 outputFrame:(id)a3;
- (id)initWithGraph:(id)a0 metal:(id)a1 staticParameters:(id)a2;
- (unsigned int)outputPixelFormatForInputPixelFormat:(unsigned int)a0 outputCompressionLevel:(int)a1;
- (int)runWithArgs:(id)a0;
- (int)setReferenceFrameByUniqueID:(unsigned long long)a0;
- (int)validateInputFrame:(id)a0 config:(id)a1;

@end