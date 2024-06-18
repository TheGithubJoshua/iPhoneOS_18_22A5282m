@class NSMutableArray;

@interface CLPLocationConsumptionScoreInfoRequest : PBRequest <NSCopying>

@property (retain, nonatomic) NSMutableArray *locationConsumptionScoreInfos;

+ (Class)locationConsumptionScoreInfoType;

- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addLocationConsumptionScoreInfo:(id)a0;
- (void)clearLocationConsumptionScoreInfos;
- (id)locationConsumptionScoreInfoAtIndex:(unsigned long long)a0;
- (unsigned long long)locationConsumptionScoreInfosCount;

@end
