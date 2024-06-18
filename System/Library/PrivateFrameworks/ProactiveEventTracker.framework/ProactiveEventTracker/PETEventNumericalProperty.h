@interface PETEventNumericalProperty : PETEventProperty {
    struct _NSRange { unsigned long long location; unsigned long long length; } _validRange;
    BOOL _clampValues;
}

- (unsigned long long)cardinality;
- (id)_loggingKeyStringRepresentationForValue:(id)a0;
- (BOOL)isValidValue:(id)a0;
- (id)initWithName:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 clampValues:(BOOL)a2;
- (id)description;
- (id)longestValueString;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })validRange;
- (unsigned long long)_unsignedIntegerValueForNumericValue:(id)a0;

@end
