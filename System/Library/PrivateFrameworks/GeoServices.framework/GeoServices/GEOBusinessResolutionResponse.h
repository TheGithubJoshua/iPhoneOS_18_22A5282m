@class NSString;

@interface GEOBusinessResolutionResponse : PBCodable <NSCopying> {
    NSString *_businessName;
    unsigned long long _businessUID;
    int _status;
    struct { unsigned char has_businessUID : 1; unsigned char has_status : 1; } _flags;
}

@property (nonatomic) BOOL hasStatus;
@property (nonatomic) int status;
@property (readonly, nonatomic) BOOL hasBusinessName;
@property (retain, nonatomic) NSString *businessName;
@property (nonatomic) BOOL hasBusinessUID;
@property (nonatomic) unsigned long long businessUID;

+ (BOOL)isValid:(id)a0;

- (id)initWithDictionary:(id)a0;
- (void)readAll:(BOOL)a0;
- (int)StringAsStatus:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)statusAsString:(int)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)jsonRepresentation;

@end
