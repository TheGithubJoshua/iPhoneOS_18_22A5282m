@class NSData;

@interface IDSQRProtoMaterialInfo : PBCodable <NSCopying>

@property (retain, nonatomic) NSData *materialId;
@property (nonatomic) int materialType;
@property (retain, nonatomic) NSData *materialContent;

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
- (int)StringAsMaterialType:(id)a0;
- (id)materialTypeAsString:(int)a0;

@end
