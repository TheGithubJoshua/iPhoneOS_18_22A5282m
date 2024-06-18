@class NSMutableArray;

@interface GEODirectionsCollectionRequest : PBRequest <NSCopying> {
    NSMutableArray *_requestElements;
}

@property (retain, nonatomic) NSMutableArray *requestElements;

+ (BOOL)isValid:(id)a0;
+ (Class)requestElementsType;

- (id)initWithDictionary:(id)a0;
- (void)readAll:(BOOL)a0;
- (void)mergeFrom:(id)a0;
- (void)clearSensitiveFields:(unsigned long long)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (Class)responseClass;
- (unsigned int)requestTypeCode;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)hasGreenTeaWithValue:(BOOL)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)jsonRepresentation;
- (void)addRequestElements:(id)a0;
- (void)clearRequestElements;
- (id)requestElementsAtIndex:(unsigned long long)a0;
- (unsigned long long)requestElementsCount;

@end
