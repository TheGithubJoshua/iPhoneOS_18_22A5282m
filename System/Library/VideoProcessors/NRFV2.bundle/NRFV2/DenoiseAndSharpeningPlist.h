@class DenoiseAndSharpeningTuning;

@interface DenoiseAndSharpeningPlist : NSObject {
    DenoiseAndSharpeningTuning *tuningParameters;
    BOOL enableLumaDenoiseSharpening;
    BOOL enableChromaDenoiseSharpening;
    BOOL enableBilateralRegression;
    BOOL enableLowVarSharpening;
    BOOL enableGdFlatness;
    float skinMaskDefaultValue;
    int gdNumDir;
    float gdFlatnessThreshold;
    int gdFilterSigma;
    BOOL enableLoGOffset;
    BOOL enableOPC;
    float OPCThresholdGain;
    struct { float start; float end; float margin; } bluenessCb;
    struct { float start; float end; float margin; } bluenessCr;
}

+ (void)initialize;

- (id)init;
- (void).cxx_destruct;
- (void)applyOverrides;
- (int)readPlist:(id)a0;
- (int)readBandData:(id)a0;

@end
