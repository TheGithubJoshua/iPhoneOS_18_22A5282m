@class NSFormatter;

@interface HFNumberRangeFormatter : NSFormatter

@property (retain, nonatomic) NSFormatter *numberFormatter;
@property (nonatomic) BOOL consolidatesUnit;
@property (nonatomic) BOOL simplifiesEqualValues;

+ (id)_nonNumericCharacterSet;

- (id)stringForObjectValue:(id)a0;
- (void).cxx_destruct;
- (BOOL)_isRTL;
- (id)initWithNumberFormatter:(id)a0;
- (BOOL)_shouldRemoveUnitFromMaximumFormattedValue:(id)a0;
- (BOOL)_shouldRemoveUnitFromMinimumFormattedValue:(id)a0;
- (id)stringForNumberRange:(id)a0;

@end
