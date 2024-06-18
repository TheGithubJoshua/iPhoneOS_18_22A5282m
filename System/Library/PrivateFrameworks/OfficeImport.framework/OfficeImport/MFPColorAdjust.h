@class NSDictionary, OITSUColor;

@interface MFPColorAdjust : NSObject {
    struct MFPColorMatrix { float x0[5][5]; } *mColorMatrix;
    struct MFPColorMatrix { float x0[5][5]; } *mGrayMatrix;
    int mColorMatrixFlags;
    OITSUColor *mTransparentRangeLow;
    OITSUColor *mTransparentRangeHigh;
    float mGamma;
    NSDictionary *mRecolorMap;
    float mThreshold;
    BOOL mEnabled;
}

- (float)gamma;
- (float)threshold;
- (id)init;
- (struct MFPColorMatrix { float x0[5][5]; } *)colorMatrix;
- (BOOL)isEnabled;
- (void).cxx_destruct;
- (void)setThreshold:(float)a0;
- (void)setEnabled:(BOOL)a0;
- (void)dealloc;
- (void)setColorMatrix:(struct MFPColorMatrix { float x0[5][5]; } *)a0;
- (void)setGamma:(float)a0;
- (id)transparentHigh;
- (int)colorMatrixFlags;
- (struct MFPColorMatrix { float x0[5][5]; } *)grayMatrix;
- (id)recolorMap;
- (void)setColorMatrixFlags:(int)a0;
- (void)setGrayMatrix:(struct MFPColorMatrix { float x0[5][5]; } *)a0;
- (void)setRecolorMap:(id)a0;
- (void)setTransparentLow:(id)a0 high:(id)a1;
- (id)transparentLow;

@end
