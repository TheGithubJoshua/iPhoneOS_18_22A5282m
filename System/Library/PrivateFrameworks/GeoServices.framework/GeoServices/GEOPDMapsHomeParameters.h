@class GEOPDCollectionSuggestionParameters, PBUnknownFields;

@interface GEOPDMapsHomeParameters : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    GEOPDCollectionSuggestionParameters *_collectionSuggestionParameters;
    BOOL _shouldPopulateExploreGuidesEntry;
    struct { unsigned char has_shouldPopulateExploreGuidesEntry : 1; } _flags;
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
