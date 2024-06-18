@class GEOPDVenueIdentifier, PBUnknownFields;

@interface GEOPDSSearchVenueFilter : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    GEOPDVenueIdentifier *_venueFilter;
    int _venueSearchType;
    struct { unsigned char has_venueSearchType : 1; } _flags;
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
