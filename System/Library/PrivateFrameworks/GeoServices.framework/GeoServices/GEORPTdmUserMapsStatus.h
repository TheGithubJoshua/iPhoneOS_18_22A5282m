@class PBUnknownFields;

@interface GEORPTdmUserMapsStatus : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    unsigned long long _version;
    BOOL _isBlocked;
    struct { unsigned char has_version : 1; unsigned char has_isBlocked : 1; } _flags;
}

@property (nonatomic) BOOL hasIsBlocked;
@property (nonatomic) BOOL isBlocked;
@property (nonatomic) BOOL hasVersion;
@property (nonatomic) unsigned long long version;
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