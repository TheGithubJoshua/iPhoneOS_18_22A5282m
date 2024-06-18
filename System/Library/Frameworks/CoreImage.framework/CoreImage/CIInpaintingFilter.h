@class InpaintingExecutionContext, CIVector, NSArray, CIImage, NSNumber;

@interface CIInpaintingFilter : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) CIImage *inputMaskImage;
@property (retain, nonatomic) CIVector *inputMaskBoundingBox;
@property (retain, nonatomic) NSArray *inputFaceBoundingBoxes;
@property (retain, nonatomic) NSArray *inputInpaintingProcessingResolutions;
@property (retain, nonatomic) NSNumber *inputInpaintingBlendingRadius;
@property (retain, nonatomic) NSNumber *inputInpaintingMode;
@property (readonly, getter=getLastProcessingResolution) int lastProcessingResolution;
@property (readonly, getter=getLastExecutionTime) double lastExecutionTime;
@property (readonly) InpaintingExecutionContext *executionContext;

+ (id)getEspressoResources;
+ (id)customAttributes;

- (id)performMultiresolutionInpaintingWithParameters:(id)a0;
- (id)init;
- (id)outputImage;
- (BOOL)shouldFaceSpecificModelBeUsed;
- (id)performTilingPipelineInpaintingWithParameters:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })inputMaskBoundingBoxAsValidCGRect;
- (id)getSelectedFacesInpaintingModelDescriptor;
- (id)performFullPipelineInpaintingWithParameters:(id)a0;
- (id)performSinglePassInpaintingWithParameters:(id)a0;
- (void)dealloc;
- (id)getSelectedGeneralInpaintingModelDescriptor;

@end
