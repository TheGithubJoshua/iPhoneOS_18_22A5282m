@class NSMutableArray, PBUnknownFields;

@interface GEOPDButtonModuleConfiguration : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    NSMutableArray *_buttonItems;
}

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)jsonRepresentation;

@end