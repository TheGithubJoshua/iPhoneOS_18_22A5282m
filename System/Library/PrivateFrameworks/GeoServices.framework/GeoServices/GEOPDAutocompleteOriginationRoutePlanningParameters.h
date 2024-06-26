@class GEOLatLng, PBUnknownFields;

@interface GEOPDAutocompleteOriginationRoutePlanningParameters : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    GEOLatLng *_previousLocation;
    BOOL _isEditServerRecommendedStop;
    BOOL _isRoutePlanningEditStopFillRequest;
    struct { unsigned char has_isEditServerRecommendedStop : 1; unsigned char has_isRoutePlanningEditStopFillRequest : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasPreviousLocation;
@property (retain, nonatomic) GEOLatLng *previousLocation;
@property (nonatomic) BOOL hasIsEditServerRecommendedStop;
@property (nonatomic) BOOL isEditServerRecommendedStop;
@property (nonatomic) BOOL hasIsRoutePlanningEditStopFillRequest;
@property (nonatomic) BOOL isRoutePlanningEditStopFillRequest;
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
- (id)jsonRepresentation;

@end
