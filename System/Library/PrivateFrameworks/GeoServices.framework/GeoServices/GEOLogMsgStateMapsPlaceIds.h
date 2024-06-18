@class NSMutableArray;

@interface GEOLogMsgStateMapsPlaceIds : PBCodable <NSCopying> {
    NSMutableArray *_placeIdDetails;
}

@property (retain, nonatomic) NSMutableArray *placeIdDetails;

+ (BOOL)isValid:(id)a0;
+ (Class)placeIdDetailsType;

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
- (void)addPlaceIdDetails:(id)a0;
- (void)clearPlaceIdDetails;
- (id)placeIdDetailsAtIndex:(unsigned long long)a0;
- (unsigned long long)placeIdDetailsCount;

@end
