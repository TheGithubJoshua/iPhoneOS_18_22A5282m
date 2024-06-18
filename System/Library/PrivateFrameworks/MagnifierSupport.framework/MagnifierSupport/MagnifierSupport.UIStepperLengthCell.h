@interface MagnifierSupport.UIStepperLengthCell : UITableViewCell {
    void /* unknown type, empty encoding */ _distanceStepper;
    void /* unknown type, empty encoding */ _lengthMeasure;
    void /* unknown type, empty encoding */ _valueChangedHandler;
}

- (id)initWithCoder:(id)a0;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)accessibilityIncrement;
- (void).cxx_destruct;
- (void)accessibilityDecrement;
- (void)distanceStepperValueChanged:(id)a0;

@end
