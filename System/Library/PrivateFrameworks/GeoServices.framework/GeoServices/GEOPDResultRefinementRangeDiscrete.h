@class NSMutableArray, PBUnknownFields;

@interface GEOPDResultRefinementRangeDiscrete : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    NSMutableArray *_elements;
    unsigned int _selectedMaxElementIndex;
    unsigned int _selectedMinElementIndex;
    struct { unsigned char has_selectedMaxElementIndex : 1; unsigned char has_selectedMinElementIndex : 1; } _flags;
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
