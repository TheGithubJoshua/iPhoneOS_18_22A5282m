@class NSMutableArray;

@interface GEOWalletCategoryStylingMap : PBCodable <NSCopying> {
    NSMutableArray *_mappings;
}

@property (retain, nonatomic) NSMutableArray *mappings;

+ (BOOL)isValid:(id)a0;
+ (Class)mappingsType;

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
- (void)addMappings:(id)a0;
- (void)clearMappings;
- (id)mappingsAtIndex:(unsigned long long)a0;
- (unsigned long long)mappingsCount;

@end
