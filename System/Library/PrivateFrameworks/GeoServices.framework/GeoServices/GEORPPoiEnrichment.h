@class PBDataReader, GEORPScorecard, NSMutableArray;

@interface GEORPPoiEnrichment : PBCodable <NSCopying> {
    PBDataReader *_reader;
    NSMutableArray *_images;
    GEORPScorecard *_scorecard;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_images : 1; unsigned char read_scorecard : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasScorecard;
@property (retain, nonatomic) GEORPScorecard *scorecard;
@property (retain, nonatomic) NSMutableArray *images;

+ (BOOL)isValid:(id)a0;
+ (Class)imageType;

- (id)init;
- (id)initWithDictionary:(id)a0;
- (void)readAll:(BOOL)a0;
- (void)mergeFrom:(id)a0;
- (void)clearImages;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithData:(id)a0;
- (unsigned long long)imagesCount;
- (id)jsonRepresentation;
- (void)addImage:(id)a0;
- (id)imageAtIndex:(unsigned long long)a0;

@end
