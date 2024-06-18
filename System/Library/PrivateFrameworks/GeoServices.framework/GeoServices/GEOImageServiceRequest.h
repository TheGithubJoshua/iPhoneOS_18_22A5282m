@class NSMutableArray;

@interface GEOImageServiceRequest : PBRequest <NSCopying> {
    NSMutableArray *_imageIds;
    unsigned int _height;
    unsigned int _width;
    struct { unsigned char has_height : 1; unsigned char has_width : 1; } _flags;
}

@property (retain, nonatomic) NSMutableArray *imageIds;
@property (nonatomic) BOOL hasWidth;
@property (nonatomic) unsigned int width;
@property (nonatomic) BOOL hasHeight;
@property (nonatomic) unsigned int height;

+ (BOOL)isValid:(id)a0;
+ (Class)imageIdType;

- (id)initWithDictionary:(id)a0;
- (void)readAll:(BOOL)a0;
- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (Class)responseClass;
- (unsigned int)requestTypeCode;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)jsonRepresentation;
- (id)imageIdAtIndex:(unsigned long long)a0;
- (void)addImageId:(id)a0;
- (void)clearImageIds;
- (unsigned long long)imageIdsCount;

@end
