@class GEOImpressionObjectId;

@interface GEOLogMsgStateImpressionObject : PBCodable <NSCopying> {
    GEOImpressionObjectId *_impressionObjectId;
}

@property (readonly, nonatomic) BOOL hasImpressionObjectId;
@property (retain, nonatomic) GEOImpressionObjectId *impressionObjectId;

+ (BOOL)isValid:(id)a0;

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
- (id)jsonRepresentation;

@end
