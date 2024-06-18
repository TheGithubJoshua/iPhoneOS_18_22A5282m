@class VNPersonsModelAlgorithm, NSNumber;

@interface VNPersonsModelConfiguration : NSObject <NSCopying, NSSecureCoding> {
    NSNumber *_explicitlySetMaximumIdentities;
    NSNumber *_explicitlySetMaximumTrainingFaceprintsPerIdentity;
}

@property (class, readonly, nonatomic) unsigned long long maximumAllowableIdentities;
@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) VNPersonsModelAlgorithm *algorithm;
@property (nonatomic) unsigned long long maximumIdentities;
@property (nonatomic) unsigned long long maximumTrainingFaceprintsPerIdentity;
@property (nonatomic) unsigned long long faceprintRequestRevision;

+ (unsigned long long)maximumAllowableFaceprintsPerIdentity;

- (id)initWithCoder:(id)a0;
- (id)init;
- (int)faceID3ModelMaximumIDs;
- (id)algorithmOfClass:(Class)a0 error:(id *)a1;
- (id)resolvedAlgorithmAndReturnError:(id *)a0;
- (int)faceID3ModelMaximumElementsPerID;
- (int)faceID2ModelMaximumElementsPerID;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)faceID3IndexMode;
- (int)faceID3ModelSeed;

@end
