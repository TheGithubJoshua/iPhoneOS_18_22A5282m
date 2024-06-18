@class NSString, GEOPDMapsIdentifier, PBDataReader;

@interface GEOPDPlaceQuestionnairePlaceInfo : PBCodable <NSCopying> {
    PBDataReader *_reader;
    NSString *_countryCode;
    NSString *_mapsCategoryId;
    GEOPDMapsIdentifier *_mapsId;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    BOOL _hasRichData;
    struct { unsigned char has_hasRichData : 1; unsigned char read_countryCode : 1; unsigned char read_mapsCategoryId : 1; unsigned char read_mapsId : 1; unsigned char wrote_anyField : 1; } _flags;
}

- (id)init;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithData:(id)a0;
- (id)jsonRepresentation;

@end
