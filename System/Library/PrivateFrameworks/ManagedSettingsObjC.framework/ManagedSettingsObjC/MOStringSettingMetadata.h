@class NSDictionary, NSString;

@interface MOStringSettingMetadata : MOSettingMetadata

@property (readonly, nonatomic) long long combineOperator;
@property (readonly, nonatomic) NSDictionary *rankedAllowedValues;
@property (readonly, nonatomic) NSString *defaultValue;

- (id)persistableValueFromValue:(id)a0;
- (id)sanitizePersistableValue:(id)a0;
- (id)valueFromPersistableValue:(id)a0;
- (void).cxx_destruct;
- (id)_combine:(id)a0 with:(id)a1;
- (id)combinePersistableValue:(id)a0 with:(id)a1;
- (id)initWithDefaultString:(id)a0 combineOperator:(long long)a1 rankedAllowedValues:(id)a2 isPublic:(BOOL)a3;

@end
