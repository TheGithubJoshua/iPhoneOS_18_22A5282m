@class NSNumberFormatter, NSLocale;

@interface NSUnitFormatter : NSFormatter <NSSecureCoding> {
    NSNumberFormatter *_numberFormatter;
    unsigned long long _unitOptions;
    long long _unitStyle;
    struct UAMeasureFormat { } *_formatter;
    struct UPluralRules { } *_prules;
    BOOL _modified;
    NSLocale *_locale;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSNumberFormatter *numberFormatter;
@property (copy) NSLocale *locale;
@property unsigned long long unitOptions;
@property long long unitStyle;

- (id)initWithCoder:(id)a0;
- (id)stringForValue:(double)a0 unit:(unsigned long long)a1;
- (id)init;
- (id)stringFromUnit:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)stringForObjectValue:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)checkIfModified;
- (id)unitStringFromValue:(double)a0 unit:(unsigned long long)a1;
- (void)dealloc;
- (id)stringForValue1:(double)a0 unit1:(unsigned long long)a1 value2:(double)a2 unit2:(unsigned long long)a3;
- (int)_determineUnitsToFormat:(int *)a0 fromMeasurement:(id)a1;

@end
