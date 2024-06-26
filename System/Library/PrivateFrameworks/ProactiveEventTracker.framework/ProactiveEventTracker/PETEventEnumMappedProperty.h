@class NSDictionary;

@interface PETEventEnumMappedProperty : PETEventProperty {
    NSDictionary *_enumMap;
    BOOL _autoSanitizeValues;
}

- (unsigned long long)cardinality;
- (id)_loggingKeyStringRepresentationForValue:(id)a0;
- (BOOL)isValidValue:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)longestValueString;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })validRange;
- (id)possibleValues;
- (id)initWithName:(id)a0 enumMapping:(id)a1 autoSanitizeValues:(BOOL)a2;

@end
