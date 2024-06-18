@interface MADPersonIdentificationRequest : MADRequest

@property (nonatomic) unsigned long long faceDetectorVisionRevision;
@property (nonatomic) BOOL allowOnDemand;
@property (nonatomic) unsigned long long maximumFaceCount;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)description;

@end
