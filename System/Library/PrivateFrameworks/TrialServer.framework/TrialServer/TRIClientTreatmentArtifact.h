@class NSData, NSString;

@interface TRIClientTreatmentArtifact : NSObject <NSCopying>

@property (readonly, nonatomic) NSData *encodedTreatmentDefinition;
@property (readonly, nonatomic) NSString *encodedTreatmentDefinitionSignature;
@property (readonly, nonatomic) NSData *publicCertificate;

+ (id)artifactWithEncodedTreatmentDefinition:(id)a0 encodedTreatmentDefinitionSignature:(id)a1 publicCertificate:(id)a2;

- (id)init;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)isEqualToArtifact:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithReplacementEncodedTreatmentDefinition:(id)a0;
- (id)copyWithReplacementEncodedTreatmentDefinitionSignature:(id)a0;
- (id)copyWithReplacementPublicCertificate:(id)a0;
- (id)initWithEncodedTreatmentDefinition:(id)a0 encodedTreatmentDefinitionSignature:(id)a1 publicCertificate:(id)a2;
- (BOOL)isValidWithTreatmentId:(id)a0;

@end
