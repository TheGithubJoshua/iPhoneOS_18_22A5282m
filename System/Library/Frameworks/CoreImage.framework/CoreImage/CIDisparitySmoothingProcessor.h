@interface CIDisparitySmoothingProcessor : CIImageProcessorKernel

+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })roiForInput:(int)a0 arguments:(id)a1 outputRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
+ (BOOL)processWithInputs:(id)a0 arguments:(id)a1 output:(id)a2 error:(id *)a3;
+ (int)formatForInputAtIndex:(int)a0;
+ (BOOL)synchronizeInputs;
+ (int)outputFormat;
+ (void)compilePipelines:(id)a0;
+ (void)compilePipelinesIfNeeded:(id)a0;
+ (BOOL)hasValidPipelines;
+ (BOOL)outputIsOpaque;
+ (void)releasePipelines;

@end
