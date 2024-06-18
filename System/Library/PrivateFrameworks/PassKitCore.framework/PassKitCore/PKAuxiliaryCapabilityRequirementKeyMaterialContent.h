@class NSData, NSArray;

@interface PKAuxiliaryCapabilityRequirementKeyMaterialContent : NSObject

@property (retain, nonatomic) NSData *publicKey;
@property (retain, nonatomic) NSArray *attestation;
@property (retain, nonatomic) NSArray *secondaryAttestation;
@property (retain, nonatomic) NSData *authorization;
@property (retain, nonatomic) NSData *signature;
@property (retain, nonatomic) NSArray *certificateChain;

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)isEqualToAuxiliaryCapabilityRequirementKey:(id)a0;

@end
