@protocol MTLTexture, MTLBuffer;

@interface H13FastRawScalePDCArgs : NSObject {
    struct { union { void /* unknown type, empty encoding */ vec; struct { int x; int y; } ; } origin; union { void /* unknown type, empty encoding */ vec; struct { unsigned int width; unsigned int height; } ; } size; } processingRegionRect;
    struct { BOOL enabled; unsigned char firstPix; void /* unknown type, empty encoding */ offsetIn; void /* unknown type, empty encoding */ offsetOut; void /* unknown type, empty encoding */ gain; void /* unknown type, empty encoding */ gainShift; void /* unknown type, empty encoding */ minValue; void /* unknown type, empty encoding */ maxValue; } gocConfig;
    struct { BOOL enabled; unsigned char firstPix; BOOL fpCrosstalkEnable; BOOL fpCorrectionEnable; void /* unknown type, empty encoding */ xtalkGridOffset; void /* unknown type, empty encoding */ xtalkGridIntervalReciprocal; unsigned char xtalkShift; BOOL rbRepCoeffEnabled; char rbRepCoeff[5]; BOOL fpCorrFlatDetectEn; char fpCorrFlatMode; char fpDiagMode; char fpRedMode; char fpBlueMode; BOOL fpUseRed; BOOL fpUseBlue; char diagGradMode; char grDiagonal1Mode; char grDiagonal2Mode; short fpCWeightFactorGrad; short fpCWeightFactorGrad2; BOOL dirIntEnDP0; BOOL dirIntEnDP1; BOOL dirIntEnFP; BOOL phfDirEn; BOOL corrBoundEnDP0; BOOL corrBoundEnDP1; BOOL corrBoundEnFP; short corrBoundFactor; unsigned short zeroBias; void /* unknown type, empty encoding */ dpcGraMaxCenter; void /* unknown type, empty encoding */ dpcGraMaxEdge; void /* unknown type, empty encoding */ dpcGraMaxCorner; unsigned short popThdThd; unsigned short popThdSpe; char popMode; char pavMode; char phfMode; unsigned short highlightMaxDefCenter; unsigned short highlightMaxDefEdge; unsigned short highlightMaxDefCorner; unsigned short highlightMaxSpeCenter; unsigned short highlightMaxSpeEdge; unsigned short highlightMaxSpeCorner; BOOL dynamicDetect; BOOL dynamicCorrect; BOOL despeckleDynamicCorrect; struct { float coordinateScale; float coordinateOffset; float valueScale; } flatThd; float floatWeightFactorGrad; float floatWeightFactorGrad2; void /* unknown type, empty encoding */ cropOrigin; void /* unknown type, empty encoding */ W1Limit; void /* unknown type, empty encoding */ W2Limit; void /* unknown type, empty encoding */ WLimit; float WeightKnee; unsigned short popMaxInner; unsigned short dPMaxInner; unsigned short popMaxOuterCenter; unsigned short popMaxOuterCorner; unsigned short popMaxOuterEdge; unsigned short dpMaxOuterCenter; unsigned short dpMaxOuterCorner; unsigned short dpMaxOuterEdge; } config;
    struct { short correctionCoefficents[200]; } coefs;
    struct { void /* unknown type, empty encoding */ dpcDynamicThd[33]; void /* unknown type, empty encoding */ dpcDespThd[33]; unsigned short highlightThd[33]; } detectionLuts;
    struct { unsigned short firstPixel; struct { void /* unknown type, empty encoding */ blockOrigin; void /* unknown type, empty encoding */ sizeInBlocks; void /* unknown type, empty encoding */ blockEnd; } focusPixelLayout; struct { void /* unknown type, empty encoding */ size; unsigned int activeLineBits; unsigned short activeLineCount; unsigned short count; unsigned short horizontalCount; void /* unknown type, empty encoding */ pos[16]; unsigned char defectTypeIndex[16]; unsigned char bayerComponent[16]; int neighborFocusPixelLocation[16]; struct { float prePDPGainScale; float prePDPGainOffset; float postPDPGainScale; float postPDPGainOffset; } pdpGainAdjustment[16]; } focusPixelBlockLayout; struct { struct { float prePDPGainScale; float prePDPGainOffset; float postPDPGainScale; float postPDPGainOffset; } commonPdpGainAdjustment; struct { void /* unknown type, empty encoding */ coordinateScale; void /* unknown type, empty encoding */ coordinateOffset; float gainScale; } pdpGainConfig; } pdpCorrectionConfig; struct { void /* unknown type, empty encoding */ coordinateScale; void /* unknown type, empty encoding */ coordinateOffset; float xtalkScale; unsigned char xtalkShift; } pdcXtalk; struct { BOOL fpCorrFlatDetectEn; BOOL fpCorrFlatMode; struct { float coordinateScale; float coordinateOffset; float valueScale; } flatThd; } flatCorrectionConfig; struct { BOOL fpDiagMode; BOOL diagGradMode; BOOL fpUseRed; BOOL fpUseBlue; BOOL fpRedMode; BOOL fpBlueMode; char grDiagonal1Mode; char grDiagonal2Mode; float floatWeightFactorGrad; float floatWeightFactorGrad2; BOOL dirIntEnFP; BOOL corrBoundEnFP; short corrBoundFactor; } correctionConfig; } processFocusPixelsConfig;
    struct { void /* unknown type, blank encoding */ correctionCoefficents[100]; } processFocusPixelsCoefficients;
    struct { BOOL hasRedBlueFocusPixels; BOOL hasDefectNeighbors; BOOL hasCommonBayer; int commonBayer; BOOL hasCommonPdpGainAdjustment; BOOL isCenterPairIndexConstant; int horizontalCenterPairIndex; int verticalCenterPairIndex; } processFocusPixelsFeatureConfig;
    struct { unsigned short firstPix; struct { float coordinateScale; float coordinateOffset; float valueScale; void /* unknown type, empty encoding */ commonDynDesp0; } detectionThd; BOOL pavMode; BOOL popMode; void /* unknown type, empty encoding */ dpcGraMaxCenter; void /* unknown type, empty encoding */ dpcGraMaxEdge; void /* unknown type, empty encoding */ dpcGraMaxCorner; unsigned short highlightMaxDefCenter; unsigned short highlightMaxDefEdge; unsigned short highlightMaxDefCorner; unsigned short highlightMaxSpeCenter; unsigned short highlightMaxSpeEdge; unsigned short highlightMaxSpeCorner; float popThdThd; float popThdSpe; BOOL popDetectEnabled; BOOL speDetectEnabled; } defectDetectionConfig;
    struct { BOOL hasCommonDynDesp0; BOOL hasCommonDynDesp0Zero; BOOL highlightDetectionEnabled; BOOL allPopSpeDetectCorrectEnabled; } defectDetectionFeatureConfig;
    struct { void /* unknown type, blank encoding */ correctionCoefficents[100]; } dynamicCorrectionCoefficients;
    struct { void /* unknown type, empty encoding */ startX; void /* unknown type, empty encoding */ startY; void /* unknown type, empty encoding */ intervalX; void /* unknown type, empty encoding */ intervalY; void /* unknown type, empty encoding */ numPixX; void /* unknown type, empty encoding */ numPixY; void /* unknown type, empty encoding */ type; } quadraFPGrid;
    int quadraMode;
    int staticDefectCount;
    int staticDefectPasses;
    int staticDefectPassCounts[8];
}

@property (retain, nonatomic) id<MTLTexture> pdpGainTex;
@property (retain, nonatomic) id<MTLTexture> xtalkLutTex;
@property (retain, nonatomic) id<MTLTexture> flatThdLutTex;
@property (retain, nonatomic) id<MTLTexture> detectionDynDesp0LutTex;
@property (retain, nonatomic) id<MTLTexture> detectionDynDesp12LutTex;
@property (retain, nonatomic) id<MTLTexture> detectionHighlightLutTex;
@property (retain, nonatomic) id<MTLBuffer> staticDefectTable;

- (void).cxx_destruct;

@end