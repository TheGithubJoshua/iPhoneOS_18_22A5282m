@class GEOPDViewportInfo, NSString, NSData, GEOLatLng, PBDataReader;

@interface GEORPMapLocation : PBCodable <NSCopying> {
    PBDataReader *_reader;
    GEOLatLng *_coordinate;
    NSData *_image;
    NSString *_mapScreenshotId;
    GEOPDViewportInfo *_viewportInfo;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    float _zoomLevel;
    struct { unsigned char has_zoomLevel : 1; unsigned char read_coordinate : 1; unsigned char read_image : 1; unsigned char read_mapScreenshotId : 1; unsigned char read_viewportInfo : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasImage;
@property (retain, nonatomic) NSData *image;
@property (readonly, nonatomic) BOOL hasCoordinate;
@property (retain, nonatomic) GEOLatLng *coordinate;
@property (nonatomic) BOOL hasZoomLevel;
@property (nonatomic) float zoomLevel;
@property (readonly, nonatomic) BOOL hasViewportInfo;
@property (retain, nonatomic) GEOPDViewportInfo *viewportInfo;
@property (readonly, nonatomic) BOOL hasMapScreenshotId;
@property (retain, nonatomic) NSString *mapScreenshotId;

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
- (BOOL)hasGreenTeaWithValue:(BOOL)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithData:(id)a0;
- (id)jsonRepresentation;
- (void)_setMapMode:(int)a0 region:(id)a1;

@end
