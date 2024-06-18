@class NSDecimalNumber, NSString;

@interface PKNumericSuggestion : NSObject

@property (readonly, copy, nonatomic) NSDecimalNumber *value;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *displayValue;
@property (nonatomic) BOOL usedMaximumSuggestion;

+ (id)suggestionWithTitle:(id)a0 value:(id)a1 currencyCode:(id)a2;
+ (id)suggestionWithValue:(id)a0 currencyCode:(id)a1;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)initWithTitle:(id)a0 value:(id)a1 currencyCode:(id)a2;
- (id)initWithValue:(id)a0 currencyCode:(id)a1;

@end
