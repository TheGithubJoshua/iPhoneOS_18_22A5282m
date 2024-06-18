@interface FxParameterAngle : FxPinParameter {
    struct FxParameterAnglePriv { BOOL x0; double x1; double x2; } *_anglePriv;
}

- (id)init;
- (void)setStepValue:(double)a0;
- (double)stepValue;
- (void)dealloc;
- (void)setStartValue:(double)a0;
- (double)startValue;
- (void)setIsClockwise:(BOOL)a0;
- (BOOL)isClockwise;

@end
