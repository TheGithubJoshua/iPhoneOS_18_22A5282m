@interface LPSpecializationMetadata : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL _dummyPropertyForObservation;
@property (readonly, nonatomic) BOOL _canDeferAsynchronousFieldsMetadataUpdateUntilCompletion;

+ (id)keyPathsForValuesAffecting_dummyPropertyForObservation;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_enumerateAsynchronousFields:(id /* block */)a0;

@end
