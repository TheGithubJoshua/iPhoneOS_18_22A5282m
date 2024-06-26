@interface CIMetalProcessor : CIImageProcessorKernel

+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })roiForInput:(int)a0 arguments:(id)a1 outputRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
+ (BOOL)allowSRGBTranferFuntionOnInputAtIndex:(int)a0;
+ (BOOL)processWithInputs:(id)a0 arguments:(id)a1 output:(id)a2 error:(id *)a3;
+ (int)formatForInputAtIndex:(int)a0;
+ (BOOL)synchronizeInputs;
+ (BOOL)allowSRGBTranferFuntionOnOutput;
+ (int)outputFormat;
+ (BOOL)allowPartialOutputRegion;
+ (void)setFilterParams:(id)a0 arguments:(id)a1 filter:(id)a2;
+ (void)setFilterParamsAndImages:(id)a0 arguments:(id)a1 filter:(id)a2;

@end
