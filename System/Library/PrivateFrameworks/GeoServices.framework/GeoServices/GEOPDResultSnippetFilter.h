@class PBUnknownFields;

@interface GEOPDResultSnippetFilter : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    struct { int *list; unsigned long long count; unsigned long long size; } _supportedChildActions;
    int _maxChildItems;
    int _maxChildPlaces;
    BOOL _supportChildItems;
    struct { unsigned char has_maxChildItems : 1; unsigned char has_maxChildPlaces : 1; unsigned char has_supportChildItems : 1; } _flags;
}

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)jsonRepresentation;

@end
