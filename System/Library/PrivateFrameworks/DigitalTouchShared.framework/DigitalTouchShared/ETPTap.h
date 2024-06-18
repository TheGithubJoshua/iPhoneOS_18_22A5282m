@class NSData;

@interface ETPTap : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasTimeDeltas;
@property (retain, nonatomic) NSData *timeDeltas;
@property (readonly, nonatomic) BOOL hasPoints;
@property (retain, nonatomic) NSData *points;
@property (readonly, nonatomic) BOOL hasColors;
@property (retain, nonatomic) NSData *colors;

- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
