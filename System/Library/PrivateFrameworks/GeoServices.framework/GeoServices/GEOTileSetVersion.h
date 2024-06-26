@class PBUnknownFields, PBDataReader;

@interface GEOTileSetVersion : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    struct GEOTileSetRegion { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; } *_availableTiles;
    unsigned long long _availableTilesCount;
    unsigned long long _availableTilesSpace;
    struct GEOGenericTile { unsigned int x0; unsigned int x1; int x2; struct { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; } x3; } *_genericTiles;
    unsigned long long _genericTilesCount;
    unsigned long long _genericTilesSpace;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    unsigned int _identifier;
    unsigned int _supportedLanguagesVersion;
    unsigned int _timeToLiveSeconds;
    struct { unsigned char has_supportedLanguagesVersion : 1; unsigned char has_timeToLiveSeconds : 1; unsigned char read_unknownFields : 1; unsigned char read_availableTiles : 1; unsigned char read_genericTiles : 1; unsigned char wrote_anyField : 1; } _flags;
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
- (void)dealloc;
- (id)jsonRepresentation;

@end
