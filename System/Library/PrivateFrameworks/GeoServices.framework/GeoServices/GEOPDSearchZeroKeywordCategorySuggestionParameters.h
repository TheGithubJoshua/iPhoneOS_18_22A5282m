@class GEOLatLng, PBUnknownFields;

@interface GEOPDSearchZeroKeywordCategorySuggestionParameters : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    double _requestLocalTimestamp;
    GEOLatLng *_significantLocation;
    unsigned int _maxNumCategoriesPerEntry;
    int _userPreferredTransportType;
    BOOL _shouldMatchNoQueryStateSuggestions;
    struct { unsigned char has_requestLocalTimestamp : 1; unsigned char has_maxNumCategoriesPerEntry : 1; unsigned char has_userPreferredTransportType : 1; unsigned char has_shouldMatchNoQueryStateSuggestions : 1; } _flags;
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
