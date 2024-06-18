@class NSString, NSData;

@interface BMPBPhotosKnowledgeGraphEnrichmentLocation : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasStreet;
@property (retain, nonatomic) NSString *street;
@property (readonly, nonatomic) BOOL hasCity;
@property (retain, nonatomic) NSString *city;
@property (readonly, nonatomic) BOOL hasState;
@property (retain, nonatomic) NSString *state;
@property (readonly, nonatomic) BOOL hasCountry;
@property (retain, nonatomic) NSString *country;
@property (readonly, nonatomic) BOOL hasEncodedLocation;
@property (retain, nonatomic) NSData *encodedLocation;

- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
