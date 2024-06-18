@class GEOTileCoordinate, PBDataReader;

@interface GEOVLDataTile : PBCodable <NSCopying> {
    PBDataReader *_reader;
    struct { unsigned int *list; unsigned long long count; unsigned long long size; } _buildIndexs;
    struct { unsigned int *list; unsigned long long count; unsigned long long size; } _precisionIndexs;
    struct { int *list; unsigned long long count; unsigned long long size; } _purposeDenylists;
    GEOTileCoordinate *_coord;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_buildIndexs : 1; unsigned char read_precisionIndexs : 1; unsigned char read_purposeDenylists : 1; unsigned char read_coord : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasCoord;
@property (retain, nonatomic) GEOTileCoordinate *coord;
@property (readonly, nonatomic) unsigned long long buildIndexsCount;
@property (readonly, nonatomic) unsigned int *buildIndexs;
@property (readonly, nonatomic) unsigned long long precisionIndexsCount;
@property (readonly, nonatomic) unsigned int *precisionIndexs;
@property (readonly, nonatomic) unsigned long long purposeDenylistsCount;
@property (readonly, nonatomic) int *purposeDenylists;

+ (BOOL)isValid:(id)a0;

- (id)init;
- (id)initWithDictionary:(id)a0;
- (void)addBuildIndex:(unsigned int)a0;
- (void)readAll:(BOOL)a0;
- (int)StringAsPurposeDenylists:(id)a0;
- (void)mergeFrom:(id)a0;
- (void)setBuildIndexs:(unsigned int *)a0 count:(unsigned long long)a1;
- (unsigned int)buildIndexAtIndex:(unsigned long long)a0;
- (void)clearBuildIndexs;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)addPurposeDenylist:(int)a0;
- (void)clearPrecisionIndexs;
- (id)initWithJSON:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)purposeDenylistsAsString:(int)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (unsigned int)precisionIndexAtIndex:(unsigned long long)a0;
- (BOOL)readFrom:(id)a0;
- (int)purposeDenylistAtIndex:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)clearPurposeDenylists;
- (id)initWithData:(id)a0;
- (void)dealloc;
- (void)setPrecisionIndexs:(unsigned int *)a0 count:(unsigned long long)a1;
- (id)jsonRepresentation;
- (void)setPurposeDenylists:(int *)a0 count:(unsigned long long)a1;
- (void)addPrecisionIndex:(unsigned int)a0;

@end
