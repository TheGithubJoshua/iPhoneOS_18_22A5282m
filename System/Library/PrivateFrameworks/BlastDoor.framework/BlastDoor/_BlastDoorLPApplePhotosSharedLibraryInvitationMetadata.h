@class NSString;

@interface _BlastDoorLPApplePhotosSharedLibraryInvitationMetadata : _BlastDoorLPSpecializationMetadata

@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic) NSString *originatorDisplayName;

+ (BOOL)supportsSecureCoding;
+ (id)keyPathsForValuesAffecting_dummyPropertyForObservation;

- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
