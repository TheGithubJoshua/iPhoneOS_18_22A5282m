@class NSArray;

@interface PKAuxiliaryCapabilityRequirementKeyMaterial : NSObject

@property (retain, nonatomic) NSArray *contents;
@property (retain, nonatomic) NSArray *rootAttestation;

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)initWithKeyMaterialContents:(id)a0;
- (BOOL)isEqualToAuxiliaryCapabilityRequirementKey:(id)a0;

@end
