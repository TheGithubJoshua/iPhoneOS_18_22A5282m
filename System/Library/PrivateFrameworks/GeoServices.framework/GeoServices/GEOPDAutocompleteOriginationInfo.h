@class GEOPDAutocompleteOriginationRoutePlanningParameters, PBUnknownFields;

@interface GEOPDAutocompleteOriginationInfo : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    GEOPDAutocompleteOriginationRoutePlanningParameters *_routePlanningParameters;
    int _autocompleteOriginationType;
    struct { unsigned char has_autocompleteOriginationType : 1; } _flags;
}

@property (nonatomic) BOOL hasAutocompleteOriginationType;
@property (nonatomic) int autocompleteOriginationType;
@property (readonly, nonatomic) BOOL hasRoutePlanningParameters;
@property (retain, nonatomic) GEOPDAutocompleteOriginationRoutePlanningParameters *routePlanningParameters;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (id)initWithDictionary:(id)a0;
- (void)readAll:(BOOL)a0;
- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (void)clearUnknownFields:(BOOL)a0;
- (BOOL)hasGreenTeaWithValue:(BOOL)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)autocompleteOriginationTypeAsString:(int)a0;
- (id)jsonRepresentation;
- (int)StringAsAutocompleteOriginationType:(id)a0;

@end
