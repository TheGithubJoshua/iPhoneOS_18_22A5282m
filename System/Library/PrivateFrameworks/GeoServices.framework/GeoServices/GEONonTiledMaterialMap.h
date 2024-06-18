@class GEONonTiledInfo;

@interface GEONonTiledMaterialMap : PBCodable <NSCopying> {
    GEONonTiledInfo *_info;
}

@property (readonly, nonatomic) BOOL hasInfo;
@property (retain, nonatomic) GEONonTiledInfo *info;

+ (BOOL)isValid:(id)a0;

- (id)initWithDictionary:(id)a0;
- (void)readAll:(BOOL)a0;
- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)jsonRepresentation;

@end
