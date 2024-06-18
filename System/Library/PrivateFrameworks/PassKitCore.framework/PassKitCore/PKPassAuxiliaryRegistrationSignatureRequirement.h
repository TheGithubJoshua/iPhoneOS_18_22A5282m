@interface PKPassAuxiliaryRegistrationSignatureRequirement : PKPassAuxiliaryRegistrationRequirement

@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) unsigned long long signatureSchemeVersion;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)role;
- (id)_mutableDictionaryRepresentation;
- (BOOL)isEqualToPassAuxiliaryRegistrationSignatureRequirement:(id)a0;

@end
