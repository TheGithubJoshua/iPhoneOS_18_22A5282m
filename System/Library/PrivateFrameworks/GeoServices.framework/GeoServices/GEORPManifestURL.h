@class NSString, PBDataReader;

@interface GEORPManifestURL : PBCodable <NSCopying> {
    PBDataReader *_reader;
    NSString *_urlName;
    NSString *_urlValue;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_urlName : 1; unsigned char read_urlValue : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasUrlName;
@property (retain, nonatomic) NSString *urlName;
@property (readonly, nonatomic) BOOL hasUrlValue;
@property (retain, nonatomic) NSString *urlValue;

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
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithData:(id)a0;
- (id)jsonRepresentation;

@end
