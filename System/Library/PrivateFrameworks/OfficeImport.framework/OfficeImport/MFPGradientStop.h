@class OITSUColor;

@interface MFPGradientStop : NSObject {
    OITSUColor *mColor;
    float mPosition;
}

- (void).cxx_destruct;
- (id)color;
- (float)position;
- (id)initWithColor:(id)a0 position:(float)a1;

@end
