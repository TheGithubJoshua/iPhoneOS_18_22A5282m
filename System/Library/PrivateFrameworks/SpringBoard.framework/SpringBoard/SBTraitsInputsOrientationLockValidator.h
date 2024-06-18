@class SBFTraitsArbitrationDeviceOrientationInputs;

@interface SBTraitsInputsOrientationLockValidator : SBTraitsInputsValidator {
    long long _lockOrientation;
    BOOL _prefersDeferringOrientationUpdates;
    SBFTraitsArbitrationDeviceOrientationInputs *_lastForwardedOrientationInputs;
}

- (id)validateInputs:(id)a0;
- (id)initWithValidatorOrder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (void)setPrefersDeferringOrientationUpdates:(BOOL)a0;
- (void)setLockOrientation:(long long)a0;

@end
