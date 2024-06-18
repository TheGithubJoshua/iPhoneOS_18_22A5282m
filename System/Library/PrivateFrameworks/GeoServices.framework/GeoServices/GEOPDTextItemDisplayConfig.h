@class PBUnknownFields;

@interface GEOPDTextItemDisplayConfig : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    unsigned int _maxItemsPerRow;
    unsigned int _maxRowCount;
    struct { unsigned char has_maxItemsPerRow : 1; unsigned char has_maxRowCount : 1; } _flags;
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
