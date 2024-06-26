@class PBUnknownFields;

@interface GEOPreferenceEntity : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    unsigned long long _chargingStationMuid;
    unsigned int _chargeOnLegAfterUserWaypointId;
    struct { unsigned char has_chargingStationMuid : 1; unsigned char has_chargeOnLegAfterUserWaypointId : 1; } _flags;
}

@property (nonatomic) BOOL hasChargingStationMuid;
@property (nonatomic) unsigned long long chargingStationMuid;
@property (nonatomic) BOOL hasChargeOnLegAfterUserWaypointId;
@property (nonatomic) unsigned int chargeOnLegAfterUserWaypointId;
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
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)jsonRepresentation;

@end
