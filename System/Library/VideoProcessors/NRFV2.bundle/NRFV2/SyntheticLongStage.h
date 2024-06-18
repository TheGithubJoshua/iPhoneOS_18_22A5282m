@class SyntheticLongShaders, FigMetalContext;
@protocol SidecarWriter;

@interface SyntheticLongStage : NSObject {
    FigMetalContext *_metal;
    SyntheticLongShaders *_shaders;
}

@property (weak, nonatomic) id<SidecarWriter> sidecarWriter;

+ (int)prewarmShaders:(id)a0;
+ (int)_fillConstants:(struct SyntheticLongFuseBandsConsts { struct ColorSpaceConversionParameters { struct { void /* unknown type, empty encoding */ x0[3]; } x0; struct { void /* unknown type, empty encoding */ x0[3]; } x1; struct { void /* unknown type, empty encoding */ x0[3]; } x2; struct TransferFunctionParameters { float x0; float x1; float x2; float x3; float x4; } x3; struct TransferFunctionParameters { float x0; float x1; float x2; float x3; float x4; } x4; float x5; float x6; BOOL x7; BOOL x8; BOOL x9; BOOL x10; } x0[4]; float x1; float x2[4]; struct { void /* unknown type, empty encoding */ x0[3]; } x3[4]; struct DeepFusionRawNoiseModelParameters { float x0; float x1; float x2; float x3; unsigned char x4; float x5; } x4; struct DeepFusionRawNoiseModelParameters { float x0; float x1; float x2; float x3; unsigned char x4; float x5; } x5; float x6; struct DeepFusionRawNoiseAdjustmentParameters { float x0; float x1; float x2; float x3; } x7; float x8; } *)a0 slPlist:(id)a1 ev0ExposureParams:(const struct exposureParameters { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; float x17; float x18; BOOL x19; BOOL x20; BOOL x21; float x22; BOOL x23; float x24; float x25; float x26; } *)a2;
+ (int)_fillConstantsForBand:(int)a0 consts:(struct SyntheticLongFuseBandsConsts { struct ColorSpaceConversionParameters { struct { void /* unknown type, empty encoding */ x0[3]; } x0; struct { void /* unknown type, empty encoding */ x0[3]; } x1; struct { void /* unknown type, empty encoding */ x0[3]; } x2; struct TransferFunctionParameters { float x0; float x1; float x2; float x3; float x4; } x3; struct TransferFunctionParameters { float x0; float x1; float x2; float x3; float x4; } x4; float x5; float x6; BOOL x7; BOOL x8; BOOL x9; BOOL x10; } x0[4]; float x1; float x2[4]; struct { void /* unknown type, empty encoding */ x0[3]; } x3[4]; struct DeepFusionRawNoiseModelParameters { float x0; float x1; float x2; float x3; unsigned char x4; float x5; } x4; struct DeepFusionRawNoiseModelParameters { float x0; float x1; float x2; float x3; unsigned char x4; float x5; } x5; float x6; struct DeepFusionRawNoiseAdjustmentParameters { float x0; float x1; float x2; float x3; } x7; float x8; } *)a1 slPlist:(id)a2 ev0ExposureParams:(const struct exposureParameters { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; float x17; float x18; BOOL x19; BOOL x20; BOOL x21; float x22; BOOL x23; float x24; float x25; float x26; } *)a3;

- (id)initWithMetalContext:(id)a0;
- (void).cxx_destruct;
- (void)purgeResources;
- (void)dealloc;
- (int)_doEv0sPlusRealLongWithBands:(id)a0 slFuseEv0Plist:(id)a1 slFuseLongPlist:(id)a2 slParameters:(const struct SyntheticLongParameters { int x0; int x1; int x2; float x3; struct SyntheticLongFrameParameters { struct ColorSpaceConversionParameters { struct { void /* unknown type, empty encoding */ x0[3]; } x0; struct { void /* unknown type, empty encoding */ x0[3]; } x1; struct { void /* unknown type, empty encoding */ x0[3]; } x2; struct TransferFunctionParameters { float x0; float x1; float x2; float x3; float x4; } x3; struct TransferFunctionParameters { float x0; float x1; float x2; float x3; float x4; } x4; float x5; float x6; BOOL x7; BOOL x8; BOOL x9; BOOL x10; } x0; float x1; struct { void /* unknown type, empty encoding */ x0[3]; } x2; struct frameMetadata { int x0; BOOL x1; BOOL x2; BOOL x3; long long x4; struct exposureParameters { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; float x17; float x18; BOOL x19; BOOL x20; BOOL x21; float x22; BOOL x23; float x24; float x25; float x26; } x5; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x6; int x7; BOOL x8; struct ltmCurves { union { unsigned short x0; char x1[18242]; char x2[110616]; struct { unsigned short x0; unsigned short x1; unsigned short x2; unsigned short x3; unsigned short x4; unsigned short x5; unsigned short x6; unsigned short x7; unsigned short x8; unsigned short x9; unsigned short x10; unsigned short x11[0]; } x3; struct { unsigned short x0; unsigned short x1; unsigned short x2; unsigned short x3; unsigned short x4; unsigned short x5; unsigned short x6; unsigned short x7; unsigned short x8; unsigned short x9; unsigned short x10; unsigned short x11[0]; } x4; struct { unsigned short x0; unsigned short x1; unsigned short x2; unsigned short x3; unsigned short x4; unsigned short x5; unsigned short x6; unsigned short x7; unsigned short x8; unsigned short x9; unsigned short x10; unsigned short x11; unsigned short x12; unsigned short x13[0]; } x5; struct { unsigned short x0; unsigned short x1; unsigned short x2; unsigned short x3; unsigned short x4; unsigned short x5; unsigned short x6; unsigned short x7; unsigned short x8; unsigned short x9; unsigned short x10; unsigned short x11; unsigned short x12[0]; } x6; struct { unsigned short x0; unsigned short x1; unsigned short x2; unsigned short x3; unsigned short x4; unsigned short x5; unsigned short x6; unsigned short x7; unsigned short x8; unsigned short x9; unsigned short x10; short x11; struct { struct { short x0; short x1; short x2; } x0; struct { short x0; short x1; short x2; } x1; struct { short x0; short x1; short x2; } x2; struct { short x0; short x1; short x2; } x3; struct { short x0; short x1; short x2; } x4; struct { short x0; short x1; short x2; } x5; struct { short x0; short x1; short x2; } x6; struct { short x0; short x1; short x2; } x7; struct { short x0; short x1; short x2; } x8; } x12[0]; } x7; } x0; union { unsigned short x0; char x1[18242]; char x2[110616]; struct { unsigned short x0; unsigned short x1; unsigned short x2; unsigned short x3; unsigned short x4; unsigned short x5; unsigned short x6; unsigned short x7; unsigned short x8; unsigned short x9; unsigned short x10; unsigned short x11[0]; } x3; struct { unsigned short x0; unsigned short x1; unsigned short x2; unsigned short x3; unsigned short x4; unsigned short x5; unsigned short x6; unsigned short x7; unsigned short x8; unsigned short x9; unsigned short x10; unsigned short x11[0]; } x4; struct { unsigned short x0; unsigned short x1; unsigned short x2; unsigned short x3; unsigned short x4; unsigned short x5; unsigned short x6; unsigned short x7; unsigned short x8; unsigned short x9; unsigned short x10; unsigned short x11; unsigned short x12; unsigned short x13[0]; } x5; struct { unsigned short x0; unsigned short x1; unsigned short x2; unsigned short x3; unsigned short x4; unsigned short x5; unsigned short x6; unsigned short x7; unsigned short x8; unsigned short x9; unsigned short x10; unsigned short x11; unsigned short x12[0]; } x6; struct { unsigned short x0; unsigned short x1; unsigned short x2; unsigned short x3; unsigned short x4; unsigned short x5; unsigned short x6; unsigned short x7; unsigned short x8; unsigned short x9; unsigned short x10; short x11; struct { struct { short x0; short x1; short x2; } x0; struct { short x0; short x1; short x2; } x1; struct { short x0; short x1; short x2; } x2; struct { short x0; short x1; short x2; } x3; struct { short x0; short x1; short x2; } x4; struct { short x0; short x1; short x2; } x5; struct { short x0; short x1; short x2; } x6; struct { short x0; short x1; short x2; } x7; struct { short x0; short x1; short x2; } x8; } x12[0]; } x7; } x1; struct { unsigned short x0; unsigned short x1[0]; } x2; unsigned short x3[257]; struct { unsigned short x0; unsigned short x1[0]; } x4; unsigned short x5[257]; float x6; } x9; struct { void /* unknown type, empty encoding */ x0[3]; } x10; BOOL x11; BOOL x12; int x13; struct FaceDetectionBuffer { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; unsigned short x1; unsigned short x2; unsigned short x3; } x14[10]; int x15; struct BodyDetectionBuffer { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; unsigned short x1; } x16[10]; BOOL x17; struct LocalHistogramClippingDataGeneric { unsigned short x0; unsigned int x1; struct *x2; } x18; } x3; } x4[4]; } *)a3 slOutput:(id)a4 noiseDivisorTex:(id)a5 realLongNoiseDivisorTex:(id)a6 lscGainsTex:(id)a7 intermediateMetadata:(id)a8;
- (int)_fuseEv0s:(id)a0 slParameters:(const struct SyntheticLongParameters { int x0; int x1; int x2; float x3; struct SyntheticLongFrameParameters { struct ColorSpaceConversionParameters { struct { void /* unknown type, empty encoding */ x0[3]; } x0; struct { void /* unknown type, empty encoding */ x0[3]; } x1; struct { void /* unknown type, empty encoding */ x0[3]; } x2; struct TransferFunctionParameters { float x0; float x1; float x2; float x3; float x4; } x3; struct TransferFunctionParameters { float x0; float x1; float x2; float x3; float x4; } x4; float x5; float x6; BOOL x7; BOOL x8; BOOL x9; BOOL x10; } x0; float x1; struct { void /* unknown type, empty encoding */ x0[3]; } x2; struct frameMetadata { int x0; BOOL x1; BOOL x2; BOOL x3; long long x4; struct exposureParameters { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; float x17; float x18; BOOL x19; BOOL x20; BOOL x21; float x22; BOOL x23; float x24; float x25; float x26; } x5; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x6; int x7; BOOL x8; struct ltmCurves { union { unsigned short x0; char x1[18242]; char x2[110616]; struct { unsigned short x0; unsigned short x1; unsigned short x2; unsigned short x3; unsigned short x4; unsigned short x5; unsigned short x6; unsigned short x7; unsigned short x8; unsigned short x9; unsigned short x10; unsigned short x11[0]; } x3; struct { unsigned short x0; unsigned short x1; unsigned short x2; unsigned short x3; unsigned short x4; unsigned short x5; unsigned short x6; unsigned short x7; unsigned short x8; unsigned short x9; unsigned short x10; unsigned short x11[0]; } x4; struct { unsigned short x0; unsigned short x1; unsigned short x2; unsigned short x3; unsigned short x4; unsigned short x5; unsigned short x6; unsigned short x7; unsigned short x8; unsigned short x9; unsigned short x10; unsigned short x11; unsigned short x12; unsigned short x13[0]; } x5; struct { unsigned short x0; unsigned short x1; unsigned short x2; unsigned short x3; unsigned short x4; unsigned short x5; unsigned short x6; unsigned short x7; unsigned short x8; unsigned short x9; unsigned short x10; unsigned short x11; unsigned short x12[0]; } x6; struct { unsigned short x0; unsigned short x1; unsigned short x2; unsigned short x3; unsigned short x4; unsigned short x5; unsigned short x6; unsigned short x7; unsigned short x8; unsigned short x9; unsigned short x10; short x11; struct { struct { short x0; short x1; short x2; } x0; struct { short x0; short x1; short x2; } x1; struct { short x0; short x1; short x2; } x2; struct { short x0; short x1; short x2; } x3; struct { short x0; short x1; short x2; } x4; struct { short x0; short x1; short x2; } x5; struct { short x0; short x1; short x2; } x6; struct { short x0; short x1; short x2; } x7; struct { short x0; short x1; short x2; } x8; } x12[0]; } x7; } x0; union { unsigned short x0; char x1[18242]; char x2[110616]; struct { unsigned short x0; unsigned short x1; unsigned short x2; unsigned short x3; unsigned short x4; unsigned short x5; unsigned short x6; unsigned short x7; unsigned short x8; unsigned short x9; unsigned short x10; unsigned short x11[0]; } x3; struct { unsigned short x0; unsigned short x1; unsigned short x2; unsigned short x3; unsigned short x4; unsigned short x5; unsigned short x6; unsigned short x7; unsigned short x8; unsigned short x9; unsigned short x10; unsigned short x11[0]; } x4; struct { unsigned short x0; unsigned short x1; unsigned short x2; unsigned short x3; unsigned short x4; unsigned short x5; unsigned short x6; unsigned short x7; unsigned short x8; unsigned short x9; unsigned short x10; unsigned short x11; unsigned short x12; unsigned short x13[0]; } x5; struct { unsigned short x0; unsigned short x1; unsigned short x2; unsigned short x3; unsigned short x4; unsigned short x5; unsigned short x6; unsigned short x7; unsigned short x8; unsigned short x9; unsigned short x10; unsigned short x11; unsigned short x12[0]; } x6; struct { unsigned short x0; unsigned short x1; unsigned short x2; unsigned short x3; unsigned short x4; unsigned short x5; unsigned short x6; unsigned short x7; unsigned short x8; unsigned short x9; unsigned short x10; short x11; struct { struct { short x0; short x1; short x2; } x0; struct { short x0; short x1; short x2; } x1; struct { short x0; short x1; short x2; } x2; struct { short x0; short x1; short x2; } x3; struct { short x0; short x1; short x2; } x4; struct { short x0; short x1; short x2; } x5; struct { short x0; short x1; short x2; } x6; struct { short x0; short x1; short x2; } x7; struct { short x0; short x1; short x2; } x8; } x12[0]; } x7; } x1; struct { unsigned short x0; unsigned short x1[0]; } x2; unsigned short x3[257]; struct { unsigned short x0; unsigned short x1[0]; } x4; unsigned short x5[257]; float x6; } x9; struct { void /* unknown type, empty encoding */ x0[3]; } x10; BOOL x11; BOOL x12; int x13; struct FaceDetectionBuffer { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; unsigned short x1; unsigned short x2; unsigned short x3; } x14[10]; int x15; struct BodyDetectionBuffer { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; unsigned short x1; } x16[10]; BOOL x17; struct LocalHistogramClippingDataGeneric { unsigned short x0; unsigned int x1; struct *x2; } x18; } x3; } x4[4]; } *)a1 slPlist:(id)a2 lscGainsTex:(id)a3 outputLuma:(id)a4 outputChroma:(id)a5 outputWeightsPyramid:(id)a6 noiseDivisorTex:(id)a7 intermediateMetadata:(id)a8;
- (int)_fuseInLong:(id)a0 slParameters:(const struct SyntheticLongParameters { int x0; int x1; int x2; float x3; struct SyntheticLongFrameParameters { struct ColorSpaceConversionParameters { struct { void /* unknown type, empty encoding */ x0[3]; } x0; struct { void /* unknown type, empty encoding */ x0[3]; } x1; struct { void /* unknown type, empty encoding */ x0[3]; } x2; struct TransferFunctionParameters { float x0; float x1; float x2; float x3; float x4; } x3; struct TransferFunctionParameters { float x0; float x1; float x2; float x3; float x4; } x4; float x5; float x6; BOOL x7; BOOL x8; BOOL x9; BOOL x10; } x0; float x1; struct { void /* unknown type, empty encoding */ x0[3]; } x2; struct frameMetadata { int x0; BOOL x1; BOOL x2; BOOL x3; long long x4; struct exposureParameters { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; float x17; float x18; BOOL x19; BOOL x20; BOOL x21; float x22; BOOL x23; float x24; float x25; float x26; } x5; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x6; int x7; BOOL x8; struct ltmCurves { union { unsigned short x0; char x1[18242]; char x2[110616]; struct { unsigned short x0; unsigned short x1; unsigned short x2; unsigned short x3; unsigned short x4; unsigned short x5; unsigned short x6; unsigned short x7; unsigned short x8; unsigned short x9; unsigned short x10; unsigned short x11[0]; } x3; struct { unsigned short x0; unsigned short x1; unsigned short x2; unsigned short x3; unsigned short x4; unsigned short x5; unsigned short x6; unsigned short x7; unsigned short x8; unsigned short x9; unsigned short x10; unsigned short x11[0]; } x4; struct { unsigned short x0; unsigned short x1; unsigned short x2; unsigned short x3; unsigned short x4; unsigned short x5; unsigned short x6; unsigned short x7; unsigned short x8; unsigned short x9; unsigned short x10; unsigned short x11; unsigned short x12; unsigned short x13[0]; } x5; struct { unsigned short x0; unsigned short x1; unsigned short x2; unsigned short x3; unsigned short x4; unsigned short x5; unsigned short x6; unsigned short x7; unsigned short x8; unsigned short x9; unsigned short x10; unsigned short x11; unsigned short x12[0]; } x6; struct { unsigned short x0; unsigned short x1; unsigned short x2; unsigned short x3; unsigned short x4; unsigned short x5; unsigned short x6; unsigned short x7; unsigned short x8; unsigned short x9; unsigned short x10; short x11; struct { struct { short x0; short x1; short x2; } x0; struct { short x0; short x1; short x2; } x1; struct { short x0; short x1; short x2; } x2; struct { short x0; short x1; short x2; } x3; struct { short x0; short x1; short x2; } x4; struct { short x0; short x1; short x2; } x5; struct { short x0; short x1; short x2; } x6; struct { short x0; short x1; short x2; } x7; struct { short x0; short x1; short x2; } x8; } x12[0]; } x7; } x0; union { unsigned short x0; char x1[18242]; char x2[110616]; struct { unsigned short x0; unsigned short x1; unsigned short x2; unsigned short x3; unsigned short x4; unsigned short x5; unsigned short x6; unsigned short x7; unsigned short x8; unsigned short x9; unsigned short x10; unsigned short x11[0]; } x3; struct { unsigned short x0; unsigned short x1; unsigned short x2; unsigned short x3; unsigned short x4; unsigned short x5; unsigned short x6; unsigned short x7; unsigned short x8; unsigned short x9; unsigned short x10; unsigned short x11[0]; } x4; struct { unsigned short x0; unsigned short x1; unsigned short x2; unsigned short x3; unsigned short x4; unsigned short x5; unsigned short x6; unsigned short x7; unsigned short x8; unsigned short x9; unsigned short x10; unsigned short x11; unsigned short x12; unsigned short x13[0]; } x5; struct { unsigned short x0; unsigned short x1; unsigned short x2; unsigned short x3; unsigned short x4; unsigned short x5; unsigned short x6; unsigned short x7; unsigned short x8; unsigned short x9; unsigned short x10; unsigned short x11; unsigned short x12[0]; } x6; struct { unsigned short x0; unsigned short x1; unsigned short x2; unsigned short x3; unsigned short x4; unsigned short x5; unsigned short x6; unsigned short x7; unsigned short x8; unsigned short x9; unsigned short x10; short x11; struct { struct { short x0; short x1; short x2; } x0; struct { short x0; short x1; short x2; } x1; struct { short x0; short x1; short x2; } x2; struct { short x0; short x1; short x2; } x3; struct { short x0; short x1; short x2; } x4; struct { short x0; short x1; short x2; } x5; struct { short x0; short x1; short x2; } x6; struct { short x0; short x1; short x2; } x7; struct { short x0; short x1; short x2; } x8; } x12[0]; } x7; } x1; struct { unsigned short x0; unsigned short x1[0]; } x2; unsigned short x3[257]; struct { unsigned short x0; unsigned short x1[0]; } x4; unsigned short x5[257]; float x6; } x9; struct { void /* unknown type, empty encoding */ x0[3]; } x10; BOOL x11; BOOL x12; int x13; struct FaceDetectionBuffer { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; unsigned short x1; unsigned short x2; unsigned short x3; } x14[10]; int x15; struct BodyDetectionBuffer { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; unsigned short x1; } x16[10]; BOOL x17; struct LocalHistogramClippingDataGeneric { unsigned short x0; unsigned int x1; struct *x2; } x18; } x3; } x4[4]; } *)a1 slPlist:(id)a2 lscGainsTex:(id)a3 fusedEv0sPyramid:(id)a4 weightsPyramid:(id)a5 slOutput:(id)a6 noiseDivisorTex:(id)a7 realLongNoiseDivisorTex:(id)a8;
- (int)doSyntheticLongWithBands:(id)a0 slFuseEv0Plist:(id)a1 slFuseLongPlist:(id)a2 slParameters:(const struct SyntheticLongParameters { int x0; int x1; int x2; float x3; struct SyntheticLongFrameParameters { struct ColorSpaceConversionParameters { struct { void /* unknown type, empty encoding */ x0[3]; } x0; struct { void /* unknown type, empty encoding */ x0[3]; } x1; struct { void /* unknown type, empty encoding */ x0[3]; } x2; struct TransferFunctionParameters { float x0; float x1; float x2; float x3; float x4; } x3; struct TransferFunctionParameters { float x0; float x1; float x2; float x3; float x4; } x4; float x5; float x6; BOOL x7; BOOL x8; BOOL x9; BOOL x10; } x0; float x1; struct { void /* unknown type, empty encoding */ x0[3]; } x2; struct frameMetadata { int x0; BOOL x1; BOOL x2; BOOL x3; long long x4; struct exposureParameters { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; float x17; float x18; BOOL x19; BOOL x20; BOOL x21; float x22; BOOL x23; float x24; float x25; float x26; } x5; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x6; int x7; BOOL x8; struct ltmCurves { union { unsigned short x0; char x1[18242]; char x2[110616]; struct { unsigned short x0; unsigned short x1; unsigned short x2; unsigned short x3; unsigned short x4; unsigned short x5; unsigned short x6; unsigned short x7; unsigned short x8; unsigned short x9; unsigned short x10; unsigned short x11[0]; } x3; struct { unsigned short x0; unsigned short x1; unsigned short x2; unsigned short x3; unsigned short x4; unsigned short x5; unsigned short x6; unsigned short x7; unsigned short x8; unsigned short x9; unsigned short x10; unsigned short x11[0]; } x4; struct { unsigned short x0; unsigned short x1; unsigned short x2; unsigned short x3; unsigned short x4; unsigned short x5; unsigned short x6; unsigned short x7; unsigned short x8; unsigned short x9; unsigned short x10; unsigned short x11; unsigned short x12; unsigned short x13[0]; } x5; struct { unsigned short x0; unsigned short x1; unsigned short x2; unsigned short x3; unsigned short x4; unsigned short x5; unsigned short x6; unsigned short x7; unsigned short x8; unsigned short x9; unsigned short x10; unsigned short x11; unsigned short x12[0]; } x6; struct { unsigned short x0; unsigned short x1; unsigned short x2; unsigned short x3; unsigned short x4; unsigned short x5; unsigned short x6; unsigned short x7; unsigned short x8; unsigned short x9; unsigned short x10; short x11; struct { struct { short x0; short x1; short x2; } x0; struct { short x0; short x1; short x2; } x1; struct { short x0; short x1; short x2; } x2; struct { short x0; short x1; short x2; } x3; struct { short x0; short x1; short x2; } x4; struct { short x0; short x1; short x2; } x5; struct { short x0; short x1; short x2; } x6; struct { short x0; short x1; short x2; } x7; struct { short x0; short x1; short x2; } x8; } x12[0]; } x7; } x0; union { unsigned short x0; char x1[18242]; char x2[110616]; struct { unsigned short x0; unsigned short x1; unsigned short x2; unsigned short x3; unsigned short x4; unsigned short x5; unsigned short x6; unsigned short x7; unsigned short x8; unsigned short x9; unsigned short x10; unsigned short x11[0]; } x3; struct { unsigned short x0; unsigned short x1; unsigned short x2; unsigned short x3; unsigned short x4; unsigned short x5; unsigned short x6; unsigned short x7; unsigned short x8; unsigned short x9; unsigned short x10; unsigned short x11[0]; } x4; struct { unsigned short x0; unsigned short x1; unsigned short x2; unsigned short x3; unsigned short x4; unsigned short x5; unsigned short x6; unsigned short x7; unsigned short x8; unsigned short x9; unsigned short x10; unsigned short x11; unsigned short x12; unsigned short x13[0]; } x5; struct { unsigned short x0; unsigned short x1; unsigned short x2; unsigned short x3; unsigned short x4; unsigned short x5; unsigned short x6; unsigned short x7; unsigned short x8; unsigned short x9; unsigned short x10; unsigned short x11; unsigned short x12[0]; } x6; struct { unsigned short x0; unsigned short x1; unsigned short x2; unsigned short x3; unsigned short x4; unsigned short x5; unsigned short x6; unsigned short x7; unsigned short x8; unsigned short x9; unsigned short x10; short x11; struct { struct { short x0; short x1; short x2; } x0; struct { short x0; short x1; short x2; } x1; struct { short x0; short x1; short x2; } x2; struct { short x0; short x1; short x2; } x3; struct { short x0; short x1; short x2; } x4; struct { short x0; short x1; short x2; } x5; struct { short x0; short x1; short x2; } x6; struct { short x0; short x1; short x2; } x7; struct { short x0; short x1; short x2; } x8; } x12[0]; } x7; } x1; struct { unsigned short x0; unsigned short x1[0]; } x2; unsigned short x3[257]; struct { unsigned short x0; unsigned short x1[0]; } x4; unsigned short x5[257]; float x6; } x9; struct { void /* unknown type, empty encoding */ x0[3]; } x10; BOOL x11; BOOL x12; int x13; struct FaceDetectionBuffer { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; unsigned short x1; unsigned short x2; unsigned short x3; } x14[10]; int x15; struct BodyDetectionBuffer { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; unsigned short x1; } x16[10]; BOOL x17; struct LocalHistogramClippingDataGeneric { unsigned short x0; unsigned int x1; struct *x2; } x18; } x3; } x4[4]; } *)a3 slOutput:(id)a4 noiseDivisorTex:(id)a5 realLongNoiseDivisorTex:(id)a6 lscGainsTex:(id)a7 intermediateMetadata:(id)a8;
- (int)pyramidDownscale:(id)a0;
- (int)pyramidDownscale:(id)a0 cscParams:(const struct ColorSpaceConversionParameters { struct { void /* unknown type, empty encoding */ x0[3]; } x0; struct { void /* unknown type, empty encoding */ x0[3]; } x1; struct { void /* unknown type, empty encoding */ x0[3]; } x2; struct TransferFunctionParameters { float x0; float x1; float x2; float x3; float x4; } x3; struct TransferFunctionParameters { float x0; float x1; float x2; float x3; float x4; } x4; float x5; float x6; BOOL x7; BOOL x8; BOOL x9; BOOL x10; } *)a1 band0IsLinearYCbCr:(BOOL)a2;

@end