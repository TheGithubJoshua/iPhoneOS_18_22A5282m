@class NSString, _BlastDoorLPArtworkMetadata, _BlastDoorLPImage;

@interface _BlastDoorLPiTunesMediaMovieMetadata : _BlastDoorLPSpecializationMetadata

@property (copy, nonatomic) NSString *storeFrontIdentifier;
@property (copy, nonatomic) NSString *storeIdentifier;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *genre;
@property (retain, nonatomic) _BlastDoorLPImage *artwork;
@property (copy, nonatomic) _BlastDoorLPArtworkMetadata *artworkMetadata;
@property (retain, nonatomic) _BlastDoorLPImage *branding;
@property (retain, nonatomic) NSString *brandingText;

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