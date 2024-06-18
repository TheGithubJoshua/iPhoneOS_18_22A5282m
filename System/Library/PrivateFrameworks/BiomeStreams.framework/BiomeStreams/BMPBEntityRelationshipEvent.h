@class NSString, BMPBEntity, NSMutableArray;

@interface BMPBEntityRelationshipEvent : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasClientId;
@property (retain, nonatomic) NSString *clientId;
@property (readonly, nonatomic) BOOL hasRelationship;
@property (retain, nonatomic) NSString *relationship;
@property (readonly, nonatomic) BOOL hasSourceId;
@property (retain, nonatomic) NSString *sourceId;
@property (readonly, nonatomic) BOOL hasSourceEntity;
@property (retain, nonatomic) BMPBEntity *sourceEntity;
@property (readonly, nonatomic) BOOL hasTargetEntity;
@property (retain, nonatomic) BMPBEntity *targetEntity;
@property (retain, nonatomic) NSMutableArray *attributes;

+ (Class)attributesType;

- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)attributesCount;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)clearAttributes;
- (void)addAttributes:(id)a0;
- (id)attributesAtIndex:(unsigned long long)a0;

@end
