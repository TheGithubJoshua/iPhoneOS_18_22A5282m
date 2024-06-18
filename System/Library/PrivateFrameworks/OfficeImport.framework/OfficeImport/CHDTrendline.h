@class EDString, CHDTrendlineLabel, OADGraphicProperties;

@interface CHDTrendline : NSObject {
    BOOL mDisplayEquation;
    BOOL mDisplayRSquaredValue;
    double mBackward;
    double mForward;
    double mInterceptYAxis;
    int mPolynomialOrder;
    long long mMovingAveragePeriod;
    int mType;
    OADGraphicProperties *mGraphicProperties;
    CHDTrendlineLabel *mLabel;
    EDString *mName;
}

+ (id)trendline;

- (id)init;
- (void)setType:(int)a0;
- (void)setLabel:(id)a0;
- (id)name;
- (double)backward;
- (void).cxx_destruct;
- (id)description;
- (double)forward;
- (id)label;
- (void)setName:(id)a0;
- (int)type;
- (void)setForward:(double)a0;
- (int)polynomialOrder;
- (id)defaultNameWithSeriesName:(id)a0;
- (id)graphicProperties;
- (double)interceptYAxis;
- (BOOL)isDisplayEquation;
- (BOOL)isDisplayRSquaredValue;
- (long long)movingAveragePeriod;
- (void)setBackward:(double)a0;
- (void)setDisplayEquation:(BOOL)a0;
- (void)setDisplayRSquaredValue:(BOOL)a0;
- (void)setGraphicProperties:(id)a0;
- (void)setInterceptYAxis:(double)a0;
- (void)setMovingAveragePeriod:(long long)a0;
- (void)setPolynomialOrder:(int)a0;

@end
