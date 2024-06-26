@class NSISVariable;

@interface NSErrorVariableConstraint : NSLayoutConstraint {
    NSISVariable *_errorVariable;
    double _errorValue;
}

- (int)nsis_orientationHintForVariable:(id)a0;
- (void)dealloc;
- (BOOL)_lowerIntoExpression:(id)a0 reportingConstantIsRounded:(BOOL *)a1;
- (id)constrainedConstraint;
- (id)initWithVariable:(id)a0 value:(double)a1;

@end
