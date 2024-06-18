@class NSString;

@interface ASCodableShareLocations : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasActivityShareURL;
@property (retain, nonatomic) NSString *activityShareURL;
@property (readonly, nonatomic) BOOL hasRelationshipShareURL;
@property (retain, nonatomic) NSString *relationshipShareURL;

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
