@class NSArray, TRIClientRollout, TRIRolloutDeployment, NSDate;

@interface TRIClientRolloutArtifact : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) TRIRolloutDeployment *deployment;
@property (readonly, nonatomic) NSArray *namespaceNames;
@property (readonly, nonatomic) TRIClientRollout *rollout;
@property (readonly, nonatomic) NSArray *populations;
@property (readonly, nonatomic) NSDate *deploymentDate;
@property (readonly, nonatomic) unsigned long long downloadSize;

+ (void)load;
+ (id)artifactWithRollout:(id)a0 populations:(id)a1 deploymentDate:(id)a2 downloadSize:(unsigned long long)a3;
+ (id)allReferencedCKRecordKeys;
+ (BOOL)_signature:(id)a0 onData:(id)a1 isValidUsingPublicCertificate:(id)a2;
+ (id)artifactWithTransientData:(id)a0;
+ (BOOL)_isStructurallyValidWithRollout:(id)a0 deployment:(id)a1 namespaceNames:(id)a2 populations:(id)a3 deploymentDate:(id)a4;
+ (id)artifactFromCKRecord:(id)a0 namespaceDescriptorProvider:(id)a1 error:(id *)a2;

- (id)initWithCoder:(id)a0;
- (id)data;
- (id)init;
- (void)_swizzledEncodeWithCoder:(id)a0;
- (id)copyWithReplacementDownloadSize:(unsigned long long)a0;
- (unsigned long long)hash;
- (id)copyWithReplacementRollout:(id)a0;
- (id)copyWithReplacementPopulations:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)isEqualToArtifact:(id)a0;
- (id)initWithRollout:(id)a0 populations:(id)a1 deploymentDate:(id)a2 downloadSize:(unsigned long long)a3;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithReplacementDeploymentDate:(id)a0;

@end
