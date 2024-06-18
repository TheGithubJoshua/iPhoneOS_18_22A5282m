@class NSMutableArray, PBUnknownFields;

@interface GEORPFeedbackImageUploadParameters : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    NSMutableArray *_images;
    BOOL _isEnrichment;
    struct { unsigned char has_isEnrichment : 1; } _flags;
}

@property (retain, nonatomic) NSMutableArray *images;
@property (nonatomic) BOOL hasIsEnrichment;
@property (nonatomic) BOOL isEnrichment;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;
+ (Class)imageType;

- (id)initWithDictionary:(id)a0;
- (void)readAll:(BOOL)a0;
- (void)mergeFrom:(id)a0;
- (void)clearSensitiveFields:(unsigned long long)a0;
- (void)clearImages;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (void)clearUnknownFields:(BOOL)a0;
- (BOOL)hasGreenTeaWithValue:(BOOL)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)imagesCount;
- (id)jsonRepresentation;
- (void)addImage:(id)a0;
- (id)imageAtIndex:(unsigned long long)a0;

@end
