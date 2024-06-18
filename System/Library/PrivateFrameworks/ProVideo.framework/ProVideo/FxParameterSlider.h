@interface FxParameterSlider : FxPinParameter {
    struct FxParameterSliderPriv { double x0; double x1; double x2; double x3; double x4; BOOL x5; } *_sliderPriv;
}

- (id)init;
- (void)setStepValue:(double)a0;
- (void)setMinValue:(double)a0;
- (double)stepValue;
- (double)minValue;
- (void)dealloc;
- (void)setMaxValue:(double)a0;
- (double)maxValue;
- (BOOL)isLogarithmic;
- (double)maxSliderValue;
- (double)minSliderValue;
- (void)setIsLogarithmic:(BOOL)a0;
- (void)setMaxSliderValue:(double)a0;
- (void)setMinSliderValue:(double)a0;

@end
