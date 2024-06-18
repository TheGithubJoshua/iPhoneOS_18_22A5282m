@interface MOSettingMetadata : NSObject

@property (readonly, nonatomic) BOOL isPublic;
@property (readonly, nonatomic) id defaultValue;

- (id)persistableValueFromValue:(id)a0;
- (id)sanitizePersistableValue:(id)a0;
- (id)valueFromPersistableValue:(id)a0;
- (void).cxx_destruct;
- (id)combinePersistableValue:(id)a0 with:(id)a1;
- (id)initWithDefaultValue:(id)a0 isPublic:(BOOL)a1;

@end
