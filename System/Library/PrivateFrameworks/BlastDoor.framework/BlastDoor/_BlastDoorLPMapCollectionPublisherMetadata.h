@class NSString, _BlastDoorLPImage;

@interface _BlastDoorLPMapCollectionPublisherMetadata : _BlastDoorLPSpecializationMetadata

@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) _BlastDoorLPImage *icon;
@property (nonatomic) unsigned int numberOfPublishedCollections;

+ (BOOL)supportsSecureCoding;
+ (id)keyPathsForValuesAffecting_dummyPropertyForObservation;

- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_enumerateAsynchronousFields:(id /* block */)a0;

@end