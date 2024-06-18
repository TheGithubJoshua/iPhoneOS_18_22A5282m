@class RawDFNetworkPreprocessShaders, FigMetalContext;

@interface RawDFNetworkPreprocess : NSObject {
    FigMetalContext *_metal;
    RawDFNetworkPreprocessShaders *_shaders;
}

- (id)initWithContext:(id)a0;
- (void).cxx_destruct;
- (int)estimateNoiseAndTileQuadraSyntheticReference:(id)a0 quadraSyntheticReferenceFusionMap:(id)a1 syntheticReferenceNoiseMap:(id)a2 lscGains:(id)a3 tile:(struct TileBounds { int x0; int x1; int x2; int x3; int x4; int x5; int x6; int x7; int x8; int x9; } *)a4 uniforms:(struct RawDFNetworkUniforms { BOOL x0; struct RawDFNoiseUniforms { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; struct RawDFLumaMaskTuningParam { float x0; float x1; float x2; } x14; struct RawDFRawNoiseModelParameters { float x0; float x1; float x2; float x3; float x4; } x15; struct RawDFRawNoiseModelParameters { float x0; float x1; float x2; float x3; float x4; } x16; struct RawDFRawNoiseModelParameters { float x0; float x1; float x2; float x3; float x4; } x17; struct RawDFRawNoiseModelParameters { float x0; float x1; float x2; float x3; float x4; } x18; struct RawDFFusionMapQuantizationBoundaries { float x0; float x1; } x19; } x1; struct RawDFDeghostUniforms { float x0; float x1; float x2; float x3; float x4; float x5; float x6; } x2[4]; struct RawDFDenoiseUniforms { float x0; float x1; float x2; float x3; float x4; struct TileBounds { int x0; int x1; int x2; int x3; int x4; int x5; int x6; int x7; int x8; int x9; } x5; int x6; } x3[4]; } *)a5 outQuadraSyntheticReferenceTile:(id)a6 outQuadraSyntheticReferenceNoiseTile:(id)a7 outSyntheticLongNoiseTile:(id)a8 outQuadraSyntheticReferenceFusionMapTile:(id)a9 outQuadraSyntheticReferencePlanarTile:(id)a10 outQuadraSyntheticReferenceNoisePlanarTile:(id)a11 outSyntheticLongNoisePlanarTile:(id)a12;
- (int)estimateNoiseAndTileSyntheticLong:(id)a0 syntheticEV0FusionMap:(id)a1 syntheticLongFusionMap:(id)a2 lscGains:(id)a3 tile:(struct TileBounds { int x0; int x1; int x2; int x3; int x4; int x5; int x6; int x7; int x8; int x9; } *)a4 uniforms:(struct RawDFNoiseUniforms { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; struct RawDFLumaMaskTuningParam { float x0; float x1; float x2; } x14; struct RawDFRawNoiseModelParameters { float x0; float x1; float x2; float x3; float x4; } x15; struct RawDFRawNoiseModelParameters { float x0; float x1; float x2; float x3; float x4; } x16; struct RawDFRawNoiseModelParameters { float x0; float x1; float x2; float x3; float x4; } x17; struct RawDFRawNoiseModelParameters { float x0; float x1; float x2; float x3; float x4; } x18; struct RawDFFusionMapQuantizationBoundaries { float x0; float x1; } x19; } *)a5 outSyntheticLongTile:(id)a6 outSyntheticLongNoiseTile:(id)a7 outSyntheticLongPlanarTile:(id)a8 outSyntheticLongNoisePlanarTile:(id)a9;
- (int)estimateNoiseAndTileSyntheticReference:(id)a0 syntheticReferenceFusionMap:(id)a1 syntheticEV0FusionMap:(id)a2 syntheticLongFusionMap:(id)a3 lscGains:(id)a4 tile:(struct TileBounds { int x0; int x1; int x2; int x3; int x4; int x5; int x6; int x7; int x8; int x9; } *)a5 uniforms:(struct RawDFNoiseUniforms { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; struct RawDFLumaMaskTuningParam { float x0; float x1; float x2; } x14; struct RawDFRawNoiseModelParameters { float x0; float x1; float x2; float x3; float x4; } x15; struct RawDFRawNoiseModelParameters { float x0; float x1; float x2; float x3; float x4; } x16; struct RawDFRawNoiseModelParameters { float x0; float x1; float x2; float x3; float x4; } x17; struct RawDFRawNoiseModelParameters { float x0; float x1; float x2; float x3; float x4; } x18; struct RawDFFusionMapQuantizationBoundaries { float x0; float x1; } x19; } *)a6 outSyntheticReferenceRGBTile:(id)a7 outSyntheticReferenceTile:(id)a8 outSyntheticReferenceNoiseTile:(id)a9 outSyntheticReferencePlanarTile:(id)a10 outSyntheticReferenceNoisePlanarTile:(id)a11;

@end