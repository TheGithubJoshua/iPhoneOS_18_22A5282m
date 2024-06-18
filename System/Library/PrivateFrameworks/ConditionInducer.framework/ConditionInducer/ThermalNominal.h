@class NSString;

@interface ThermalNominal : COCondition {
    NSString *_thermalLevelKey;
}

@property (nonatomic) long long actualState;
@property (nonatomic) long long desiredState;

+ (id)description;
+ (id)profileFriendlyName;
+ (id)thermalStateEnumToCLTMStringKey:(long long)a0;

- (BOOL)active;
- (id)init;
- (void)tearDown;
- (BOOL)isDestructive;
- (void).cxx_destruct;
- (BOOL)setUp;
- (id)identifierName;
- (id)initWithThermalLevel:(long long)a0;
- (BOOL)isInternalOnly;
- (id)userFriendlyName;

@end
