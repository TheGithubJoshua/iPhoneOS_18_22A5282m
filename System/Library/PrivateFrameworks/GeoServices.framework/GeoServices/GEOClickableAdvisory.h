@class PBDataReader, GEOFormattedString, PBUnknownFields;

@interface GEOClickableAdvisory : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    struct { unsigned int *list; unsigned long long count; unsigned long long size; } _incidentIndexs;
    GEOFormattedString *_advisoryMessage;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_unknownFields : 1; unsigned char read_incidentIndexs : 1; unsigned char read_advisoryMessage : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasAdvisoryMessage;
@property (retain, nonatomic) GEOFormattedString *advisoryMessage;
@property (readonly, nonatomic) unsigned long long incidentIndexsCount;
@property (readonly, nonatomic) unsigned int *incidentIndexs;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (id)init;
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
- (id)initWithData:(id)a0;
- (void)dealloc;
- (id)jsonRepresentation;
- (void)addIncidentIndex:(unsigned int)a0;
- (void)clearIncidentIndexs;
- (unsigned int)incidentIndexAtIndex:(unsigned long long)a0;
- (void)setIncidentIndexs:(unsigned int *)a0 count:(unsigned long long)a1;

@end
