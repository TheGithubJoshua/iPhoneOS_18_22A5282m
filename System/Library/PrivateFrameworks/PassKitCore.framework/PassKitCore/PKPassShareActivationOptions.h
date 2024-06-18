@class NSArray, NSString, PKPassShareActivationOption;

@interface PKPassShareActivationOptions : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *options;
@property (readonly, nonatomic) NSString *activationCode;
@property (readonly, nonatomic) PKPassShareActivationOption *primaryOption;
@property (readonly, nonatomic) NSArray *identifiers;
@property (readonly, nonatomic) NSString *localizationKeyPostfix;

+ (id)optionsFromRemoteOptions:(id)a0 localOptions:(id)a1;

- (id)initWithCoder:(id)a0;
- (id)init;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithOptions:(id)a0;
- (BOOL)containsPinCode;
- (id)optionsOfTypes:(id)a0;
- (BOOL)containsOptionOfType:(unsigned long long)a0;
- (BOOL)containsVehicalEnteredPin;
- (BOOL)containsVehicleEnteredPin;
- (id)initWithCarKeyIdentifiers:(id)a0;
- (id)initWithDefaultIdentifierForType:(unsigned long long)a0;
- (BOOL)isEqualToPassShareActivationOptions:(id)a0;
- (id)optionOfType:(unsigned long long)a0;
- (id)optionOfTypes:(id)a0;
- (id)optionsExcludingIdentifier:(id)a0 type:(unsigned long long)a1;
- (id)optionsOfType:(unsigned long long)a0;
- (id)optionsWithoutValues;

@end
